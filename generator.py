import sys
import re
import CppHeaderParser

sys.path.extend(['.', '..'])

re_struct = re.compile('Vk(.*)', re.I)
re_method = re.compile('vk(.*)', re.I)
re_type = re.compile('[const]*\s*(Vk[A-Za-z0-9]*)[\s|\*|const]*', re.I)
re_m_ret = re.compile('VKAPI_ATTR\s+([A-Za-z0-9_]*)\s+VKAPI_CALL', re.I)

license_head = '''/**
MIT License
Copyright (c) 2017 Tsin Studio

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
**/
'''

try:
    header = open('VkCommandWrapper.hpp', 'w')
    header.write(license_head)
    header.write('#include <vulkan/vulkan.h>\n')
    header.write('namespace Vulkan\n{\n')
    cppHeader = CppHeaderParser.CppHeader("C:/VulkanSDK/1.0.42.0/Include/vulkan/vulkan.h")

    cls_bodies = []
    cls_fordecls = []
    for (cls_name, cls_val) in cppHeader.classes.items():
        new_cls_name = re_struct.findall(cls_name)[0]
        cls_head = 'class ' + new_cls_name
        cls_methods = []
        cls_props = []
        # get properties
        for member in cls_val['properties']['public']:
            mem_name = member['name']
            mem_type = member['type']
            real_type = mem_type
            sub_type = real_type
            if re_type.match(mem_type):
                real_type = re_type.findall(mem_type)[0]
                sub_type = re_struct.findall(real_type)[0]
                #print real_type, sub_type
            if real_type in cppHeader.classes:
                mem_type = re.sub('(Vk[A-Za-z0-9]*)', sub_type, mem_type)
            method_name = mem_name[0:1].upper() + mem_name[1:]
            method = '  {2}& set{0}({1} _{0})\n  {{\n    {3} = _{0};\n    return *this;\n  }}'.format(method_name, mem_type, new_cls_name, mem_name)
            cls_methods.append(method)

            prop = '  {0} {1};'.format(mem_type, mem_name)
            cls_props.append(prop)

        cls_methods_body = '\n'.join(cls_methods)
        cls_props_body = '\n'.join(cls_props)
        cls_body = '{0}\n{{\npublic:\n{1}\npublic:\n{2}\n}};\n'.format(cls_head, cls_methods_body, cls_props_body)
        
        cls_fordecls.append(cls_head + ';')      
        cls_bodies.append(cls_body)
    
    inline_funcs = []

    for func in cppHeader.functions:
        f_name = func['name']
        o_name = f_name
        r_type = func['rtnType']
        r_type = re_m_ret.findall(r_type)[0]
        p_list = []
        p_list_d = []
        p_name_list = []
        for param in func['parameters']:
            p_type = param['type']
            o_type = p_type
            p_real_type = p_type
            p_sub_type = p_type
            if re_type.match(p_type):
                p_real_type = re_type.findall(p_type)[0]
                p_sub_type = re_struct.findall(p_real_type)[0]
            if p_real_type in cppHeader.classes:
                p_type = re.sub('(Vk[A-Za-z0-9]*)', p_sub_type, p_type)
            p_name = param['name']
            p_name_list.append(p_name)
            p_list.append(' '.join([p_type, p_name]))
            p_list_d.append({'p':o_type, 'r':p_type, 'n':p_name})
            
        if re_method.match(f_name):
            f_name = re_method.findall(f_name)[0]
        #print p_list_d
        inline_func_head = 'inline {0} {1}({2})\n{{'.format(r_type, f_name, ', '.join(p_list))
        inline_func_call = ''
        call_params = []
        for d in p_list_d:
            call_param = ''
            if d['p'] != d['r']:
                call_param = 'reinterpret_cast<{0}>({1})'.format(d['p'], d['n'])
            else:
                call_param = d['n']
            call_params.append(call_param)

        if r_type == 'void':
            inline_func_call = '  {0}({1});'.format(o_name, ', '.join(call_params))
        else:
            inline_func_call = '  return {0}({1});'.format(o_name, ', '.join(call_params))
        inline_func_tail = '}\n'
        inline_funcs.append('\n'.join([inline_func_head, inline_func_call, inline_func_tail]))
    # write classes

    header.write('\n'.join(cls_fordecls))
    header.write('\n\n')
    header.write('\n'.join(cls_bodies))
    header.write('\n'.join(inline_funcs))
    header.write('\n}\n')
    header.close()
    
except CppHeaderParser.CppParseError as e:
    print(e)
    sys.exit(1)