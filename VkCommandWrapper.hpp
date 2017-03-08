/**
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
#include <vulkan/vulkan.h>
namespace Vulkan
{
class PhysicalDeviceMultiviewFeaturesKHX;
class DeviceCreateInfo;
class SwapchainCounterCreateInfoEXT;
class MemoryType;
class CommandPoolCreateInfo;
class DedicatedAllocationBufferCreateInfoNV;
class DrawIndirectCommand;
class DescriptorBufferInfo;
class DisplayPropertiesKHR;
class DebugMarkerObjectTagInfoEXT;
class DisplayPowerInfoEXT;
class RenderPassMultiviewCreateInfoKHX;
class QueryPoolCreateInfo;
class ObjectTableIndexBufferEntryNVX;
class DeviceGroupPresentInfoKHX;
class ViewportWScalingNV;
class DisplaySurfaceCreateInfoKHR;
class ExportMemoryAllocateInfoNV;
class BufferCreateInfo;
class PipelineMultisampleStateCreateInfo;
class Win32KeyedMutexAcquireReleaseInfoKHX;
class SamplerCreateInfo;
class SurfaceCapabilitiesKHR;
class ExportMemoryWin32HandleInfoNV;
class IndirectCommandsLayoutTokenNVX;
class BufferImageCopy;
class ObjectTablePushConstantEntryNVX;
class DeviceGroupPresentCapabilitiesKHX;
class AllocationCallbacks;
class DisplayPlaneCapabilitiesKHR;
class ExportSemaphoreWin32HandleInfoKHX;
class PipelineColorBlendStateCreateInfo;
class SurfaceFormatKHR;
class D3D12FenceSubmitInfoKHX;
class BindImageMemoryInfoKHX;
class IOSSurfaceCreateInfoMVK;
class DescriptorSetLayoutCreateInfo;
class LayerProperties;
class AttachmentDescription;
class PipelineDepthStencilStateCreateInfo;
class ClearDepthStencilValue;
class SubpassDependency;
class PipelineRasterizationStateCreateInfo;
class BufferViewCreateInfo;
class PresentInfoKHR;
class SpecializationInfo;
class ApplicationInfo;
class DebugMarkerMarkerInfoEXT;
class ImageResolve;
class DebugMarkerObjectNameInfoEXT;
class AcquireNextImageInfoKHX;
class PushConstantRange;
class ExternalMemoryImageCreateInfoNV;
class StencilOpState;
class MemoryRequirements;
class IndirectCommandsTokenNVX;
class GraphicsPipelineCreateInfo;
class FramebufferCreateInfo;
class InstanceCreateInfo;
class PhysicalDeviceFeatures;
class Win32KeyedMutexAcquireReleaseInfoNV;
class MirSurfaceCreateInfoKHR;
class DeviceGeneratedCommandsLimitsNVX;
class CmdReserveSpaceForCommandsInfoNVX;
class DescriptorImageInfo;
class Extent2D;
class Win32SurfaceCreateInfoKHR;
class CommandBufferInheritanceInfo;
class ExternalMemoryBufferCreateInfoKHX;
class ExternalImageFormatPropertiesNV;
class PhysicalDevicePushDescriptorPropertiesKHR;
class ImportMemoryWin32HandleInfoNV;
class DescriptorSetAllocateInfo;
class FenceCreateInfo;
class ClearValue;
class MemoryWin32HandlePropertiesKHX;
class SubpassDescription;
class DedicatedAllocationImageCreateInfoNV;
class ExportSemaphoreCreateInfoKHX;
class ComponentMapping;
class MacOSSurfaceCreateInfoMVK;
class Offset3D;
class Rect2D;
class DeviceEventInfoEXT;
class XlibSurfaceCreateInfoKHR;
class AndroidSurfaceCreateInfoKHR;
class SparseImageMemoryBindInfo;
class DisplayPlanePropertiesKHR;
class ImageCreateInfo;
class DeviceQueueCreateInfo;
class DisplayEventInfoEXT;
class Extent3D;
class PipelineShaderStageCreateInfo;
class ObjectTableCreateInfoNVX;
class ImageCopy;
class PipelineViewportStateCreateInfo;
class PipelineInputAssemblyStateCreateInfo;
class ClearAttachment;
class ImageSwapchainCreateInfoKHX;
class Offset2D;
class PhysicalDeviceFeatures2KHR;
class DescriptorSetLayoutBinding;
class RenderPassCreateInfo;
class ObjectTableEntryNVX;
class ClearColorValue;
class BindImageMemorySwapchainInfoKHX;
class PhysicalDeviceIDPropertiesKHX;
class MemoryAllocateFlagsInfoKHX;
class FormatProperties;
class ImageMemoryBarrier;
class RenderPassBeginInfo;
class SparseImageFormatProperties2KHR;
class PipelineViewportSwizzleStateCreateInfoNV;
class ObjectTablePipelineEntryNVX;
class ImageSubresource;
class VertexInputBindingDescription;
class CmdProcessCommandsInfoNVX;
class SpecializationMapEntry;
class ValidationFlagsEXT;
class BindBufferMemoryInfoKHX;
class ExternalSemaphorePropertiesKHX;
class ExternalImageFormatPropertiesKHX;
class PipelineCacheCreateInfo;
class ImportSemaphoreFdInfoKHX;
class SubresourceLayout;
class ComputePipelineCreateInfo;
class DeviceGroupBindSparseInfoKHX;
class ExtensionProperties;
class ImageFormatProperties2KHX;
class ViewportSwizzleNV;
class ExternalMemoryPropertiesKHX;
class PhysicalDeviceExternalSemaphoreInfoKHX;
class ImportMemoryWin32HandleInfoKHX;
class ImageFormatProperties2KHR;
class PipelineTessellationStateCreateInfo;
class SemaphoreCreateInfo;
class DeviceGroupSwapchainCreateInfoKHX;
class ExternalBufferPropertiesKHX;
class XcbSurfaceCreateInfoKHR;
class ExportMemoryAllocateInfoKHX;
class SparseImageOpaqueMemoryBindInfo;
class ImageViewCreateInfo;
class DescriptorPoolSize;
class Viewport;
class ObjectTableDescriptorSetEntryNVX;
class DeviceGeneratedCommandsFeaturesNVX;
class CopyDescriptorSet;
class PhysicalDeviceProperties;
class WaylandSurfaceCreateInfoKHR;
class MemoryAllocateInfo;
class MemoryBarrier;
class MappedMemoryRange;
class DescriptorUpdateTemplateEntryKHR;
class DescriptorPoolCreateInfo;
class PipelineLayoutCreateInfo;
class DisplayModeCreateInfoKHR;
class ExportMemoryWin32HandleInfoKHX;
class CommandBufferBeginInfo;
class ShaderModuleCreateInfo;
class DescriptorUpdateTemplateCreateInfoKHR;
class ImageSubresourceLayers;
class QueueFamilyProperties;
class WriteDescriptorSet;
class PhysicalDeviceLimits;
class ImageFormatProperties;
class PhysicalDeviceExternalImageFormatInfoKHX;
class ImportSemaphoreWin32HandleInfoKHX;
class DeviceGroupRenderPassBeginInfoKHX;
class PhysicalDeviceMultiviewPropertiesKHX;
class DispatchIndirectCommand;
class MemoryHeap;
class PipelineViewportWScalingStateCreateInfoNV;
class QueueFamilyProperties2KHR;
class DisplayModePropertiesKHR;
class SparseBufferMemoryBindInfo;
class PhysicalDeviceDiscardRectanglePropertiesEXT;
class DrawIndexedIndirectCommand;
class PhysicalDeviceExternalBufferInfoKHX;
class SwapchainCreateInfoKHR;
class DeviceGroupDeviceCreateInfoKHX;
class PhysicalDeviceSparseProperties;
class EventCreateInfo;
class PhysicalDeviceGroupPropertiesKHX;
class ImageBlit;
class PhysicalDeviceMemoryProperties;
class DedicatedAllocationMemoryAllocateInfoNV;
class BindSparseInfo;
class PhysicalDeviceImageFormatInfo2KHX;
class ImportMemoryFdInfoKHX;
class PipelineDynamicStateCreateInfo;
class BufferMemoryBarrier;
class ViSurfaceCreateInfoNN;
class PipelineColorBlendAttachmentState;
class BufferCopy;
class PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX;
class SubmitInfo;
class ExternalMemoryImageCreateInfoKHX;
class DebugReportCallbackCreateInfoEXT;
class PhysicalDeviceSparseImageFormatInfo2KHR;
class AttachmentReference;
class ObjectTableVertexBufferEntryNVX;
class PipelineVertexInputStateCreateInfo;
class PhysicalDeviceImageFormatInfo2KHR;
class ClearRect;
class IndirectCommandsLayoutCreateInfoNVX;
class SparseMemoryBind;
class CommandBufferAllocateInfo;
class DeviceGroupCommandBufferBeginInfoKHX;
class FormatProperties2KHR;
class PipelineRasterizationStateRasterizationOrderAMD;
class MemoryFdPropertiesKHX;
class PhysicalDeviceProperties2KHR;
class PipelineDiscardRectangleStateCreateInfoEXT;
class SparseImageFormatProperties;
class PhysicalDeviceMemoryProperties2KHR;
class SurfaceCapabilities2EXT;
class DisplayPresentInfoKHR;
class VertexInputAttributeDescription;
class PhysicalDeviceProperties2KHX;
class DeviceGroupSubmitInfoKHX;
class SparseImageMemoryRequirements;
class ImageSubresourceRange;
class DisplayModeParametersKHR;
class SparseImageMemoryBind;

class PhysicalDeviceMultiviewFeaturesKHX
{
public:
  PhysicalDeviceMultiviewFeaturesKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PhysicalDeviceMultiviewFeaturesKHX& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PhysicalDeviceMultiviewFeaturesKHX& setMultiview(VkBool32 _Multiview)
  {
    multiview = _Multiview;
    return *this;
  }
  PhysicalDeviceMultiviewFeaturesKHX& setMultiviewGeometryShader(VkBool32 _MultiviewGeometryShader)
  {
    multiviewGeometryShader = _MultiviewGeometryShader;
    return *this;
  }
  PhysicalDeviceMultiviewFeaturesKHX& setMultiviewTessellationShader(VkBool32 _MultiviewTessellationShader)
  {
    multiviewTessellationShader = _MultiviewTessellationShader;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  VkBool32 multiview;
  VkBool32 multiviewGeometryShader;
  VkBool32 multiviewTessellationShader;
};

class DeviceCreateInfo
{
public:
  DeviceCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DeviceCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DeviceCreateInfo& setFlags(VkDeviceCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  DeviceCreateInfo& setQueueCreateInfoCount(uint32_t _QueueCreateInfoCount)
  {
    queueCreateInfoCount = _QueueCreateInfoCount;
    return *this;
  }
  DeviceCreateInfo& setPQueueCreateInfos(const DeviceQueueCreateInfo * _PQueueCreateInfos)
  {
    pQueueCreateInfos = _PQueueCreateInfos;
    return *this;
  }
  DeviceCreateInfo& setEnabledLayerCount(uint32_t _EnabledLayerCount)
  {
    enabledLayerCount = _EnabledLayerCount;
    return *this;
  }
  DeviceCreateInfo& setPpEnabledLayerNames(const char * const * _PpEnabledLayerNames)
  {
    ppEnabledLayerNames = _PpEnabledLayerNames;
    return *this;
  }
  DeviceCreateInfo& setEnabledExtensionCount(uint32_t _EnabledExtensionCount)
  {
    enabledExtensionCount = _EnabledExtensionCount;
    return *this;
  }
  DeviceCreateInfo& setPpEnabledExtensionNames(const char * const * _PpEnabledExtensionNames)
  {
    ppEnabledExtensionNames = _PpEnabledExtensionNames;
    return *this;
  }
  DeviceCreateInfo& setPEnabledFeatures(const PhysicalDeviceFeatures * _PEnabledFeatures)
  {
    pEnabledFeatures = _PEnabledFeatures;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDeviceCreateFlags flags;
  uint32_t queueCreateInfoCount;
  const DeviceQueueCreateInfo * pQueueCreateInfos;
  uint32_t enabledLayerCount;
  const char * const * ppEnabledLayerNames;
  uint32_t enabledExtensionCount;
  const char * const * ppEnabledExtensionNames;
  const PhysicalDeviceFeatures * pEnabledFeatures;
};

class SwapchainCounterCreateInfoEXT
{
public:
  SwapchainCounterCreateInfoEXT& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  SwapchainCounterCreateInfoEXT& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  SwapchainCounterCreateInfoEXT& setSurfaceCounters(VkSurfaceCounterFlagsEXT _SurfaceCounters)
  {
    surfaceCounters = _SurfaceCounters;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkSurfaceCounterFlagsEXT surfaceCounters;
};

class MemoryType
{
public:
  MemoryType& setPropertyFlags(VkMemoryPropertyFlags _PropertyFlags)
  {
    propertyFlags = _PropertyFlags;
    return *this;
  }
  MemoryType& setHeapIndex(uint32_t _HeapIndex)
  {
    heapIndex = _HeapIndex;
    return *this;
  }
public:
  VkMemoryPropertyFlags propertyFlags;
  uint32_t heapIndex;
};

class CommandPoolCreateInfo
{
public:
  CommandPoolCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  CommandPoolCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  CommandPoolCreateInfo& setFlags(VkCommandPoolCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  CommandPoolCreateInfo& setQueueFamilyIndex(uint32_t _QueueFamilyIndex)
  {
    queueFamilyIndex = _QueueFamilyIndex;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkCommandPoolCreateFlags flags;
  uint32_t queueFamilyIndex;
};

class DedicatedAllocationBufferCreateInfoNV
{
public:
  DedicatedAllocationBufferCreateInfoNV& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DedicatedAllocationBufferCreateInfoNV& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DedicatedAllocationBufferCreateInfoNV& setDedicatedAllocation(VkBool32 _DedicatedAllocation)
  {
    dedicatedAllocation = _DedicatedAllocation;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkBool32 dedicatedAllocation;
};

class DrawIndirectCommand
{
public:
  DrawIndirectCommand& setVertexCount(uint32_t _VertexCount)
  {
    vertexCount = _VertexCount;
    return *this;
  }
  DrawIndirectCommand& setInstanceCount(uint32_t _InstanceCount)
  {
    instanceCount = _InstanceCount;
    return *this;
  }
  DrawIndirectCommand& setFirstVertex(uint32_t _FirstVertex)
  {
    firstVertex = _FirstVertex;
    return *this;
  }
  DrawIndirectCommand& setFirstInstance(uint32_t _FirstInstance)
  {
    firstInstance = _FirstInstance;
    return *this;
  }
public:
  uint32_t vertexCount;
  uint32_t instanceCount;
  uint32_t firstVertex;
  uint32_t firstInstance;
};

class DescriptorBufferInfo
{
public:
  DescriptorBufferInfo& setBuffer(VkBuffer _Buffer)
  {
    buffer = _Buffer;
    return *this;
  }
  DescriptorBufferInfo& setOffset(VkDeviceSize _Offset)
  {
    offset = _Offset;
    return *this;
  }
  DescriptorBufferInfo& setRange(VkDeviceSize _Range)
  {
    range = _Range;
    return *this;
  }
public:
  VkBuffer buffer;
  VkDeviceSize offset;
  VkDeviceSize range;
};

class DisplayPropertiesKHR
{
public:
  DisplayPropertiesKHR& setDisplay(VkDisplayKHR _Display)
  {
    display = _Display;
    return *this;
  }
  DisplayPropertiesKHR& setDisplayName(const char * _DisplayName)
  {
    displayName = _DisplayName;
    return *this;
  }
  DisplayPropertiesKHR& setPhysicalDimensions(Extent2D _PhysicalDimensions)
  {
    physicalDimensions = _PhysicalDimensions;
    return *this;
  }
  DisplayPropertiesKHR& setPhysicalResolution(Extent2D _PhysicalResolution)
  {
    physicalResolution = _PhysicalResolution;
    return *this;
  }
  DisplayPropertiesKHR& setSupportedTransforms(VkSurfaceTransformFlagsKHR _SupportedTransforms)
  {
    supportedTransforms = _SupportedTransforms;
    return *this;
  }
  DisplayPropertiesKHR& setPlaneReorderPossible(VkBool32 _PlaneReorderPossible)
  {
    planeReorderPossible = _PlaneReorderPossible;
    return *this;
  }
  DisplayPropertiesKHR& setPersistentContent(VkBool32 _PersistentContent)
  {
    persistentContent = _PersistentContent;
    return *this;
  }
public:
  VkDisplayKHR display;
  const char * displayName;
  Extent2D physicalDimensions;
  Extent2D physicalResolution;
  VkSurfaceTransformFlagsKHR supportedTransforms;
  VkBool32 planeReorderPossible;
  VkBool32 persistentContent;
};

class DebugMarkerObjectTagInfoEXT
{
public:
  DebugMarkerObjectTagInfoEXT& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DebugMarkerObjectTagInfoEXT& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DebugMarkerObjectTagInfoEXT& setObjectType(VkDebugReportObjectTypeEXT _ObjectType)
  {
    objectType = _ObjectType;
    return *this;
  }
  DebugMarkerObjectTagInfoEXT& setObject(uint64_t _Object)
  {
    object = _Object;
    return *this;
  }
  DebugMarkerObjectTagInfoEXT& setTagName(uint64_t _TagName)
  {
    tagName = _TagName;
    return *this;
  }
  DebugMarkerObjectTagInfoEXT& setTagSize(size_t _TagSize)
  {
    tagSize = _TagSize;
    return *this;
  }
  DebugMarkerObjectTagInfoEXT& setPTag(const void * _PTag)
  {
    pTag = _PTag;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDebugReportObjectTypeEXT objectType;
  uint64_t object;
  uint64_t tagName;
  size_t tagSize;
  const void * pTag;
};

class DisplayPowerInfoEXT
{
public:
  DisplayPowerInfoEXT& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DisplayPowerInfoEXT& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DisplayPowerInfoEXT& setPowerState(VkDisplayPowerStateEXT _PowerState)
  {
    powerState = _PowerState;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDisplayPowerStateEXT powerState;
};

class RenderPassMultiviewCreateInfoKHX
{
public:
  RenderPassMultiviewCreateInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  RenderPassMultiviewCreateInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  RenderPassMultiviewCreateInfoKHX& setSubpassCount(uint32_t _SubpassCount)
  {
    subpassCount = _SubpassCount;
    return *this;
  }
  RenderPassMultiviewCreateInfoKHX& setPViewMasks(const uint32_t * _PViewMasks)
  {
    pViewMasks = _PViewMasks;
    return *this;
  }
  RenderPassMultiviewCreateInfoKHX& setDependencyCount(uint32_t _DependencyCount)
  {
    dependencyCount = _DependencyCount;
    return *this;
  }
  RenderPassMultiviewCreateInfoKHX& setPViewOffsets(const int32_t * _PViewOffsets)
  {
    pViewOffsets = _PViewOffsets;
    return *this;
  }
  RenderPassMultiviewCreateInfoKHX& setCorrelationMaskCount(uint32_t _CorrelationMaskCount)
  {
    correlationMaskCount = _CorrelationMaskCount;
    return *this;
  }
  RenderPassMultiviewCreateInfoKHX& setPCorrelationMasks(const uint32_t * _PCorrelationMasks)
  {
    pCorrelationMasks = _PCorrelationMasks;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t subpassCount;
  const uint32_t * pViewMasks;
  uint32_t dependencyCount;
  const int32_t * pViewOffsets;
  uint32_t correlationMaskCount;
  const uint32_t * pCorrelationMasks;
};

class QueryPoolCreateInfo
{
public:
  QueryPoolCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  QueryPoolCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  QueryPoolCreateInfo& setFlags(VkQueryPoolCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  QueryPoolCreateInfo& setQueryType(VkQueryType _QueryType)
  {
    queryType = _QueryType;
    return *this;
  }
  QueryPoolCreateInfo& setQueryCount(uint32_t _QueryCount)
  {
    queryCount = _QueryCount;
    return *this;
  }
  QueryPoolCreateInfo& setPipelineStatistics(VkQueryPipelineStatisticFlags _PipelineStatistics)
  {
    pipelineStatistics = _PipelineStatistics;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkQueryPoolCreateFlags flags;
  VkQueryType queryType;
  uint32_t queryCount;
  VkQueryPipelineStatisticFlags pipelineStatistics;
};

class ObjectTableIndexBufferEntryNVX
{
public:
  ObjectTableIndexBufferEntryNVX& setType(VkObjectEntryTypeNVX _Type)
  {
    type = _Type;
    return *this;
  }
  ObjectTableIndexBufferEntryNVX& setFlags(VkObjectEntryUsageFlagsNVX _Flags)
  {
    flags = _Flags;
    return *this;
  }
  ObjectTableIndexBufferEntryNVX& setBuffer(VkBuffer _Buffer)
  {
    buffer = _Buffer;
    return *this;
  }
  ObjectTableIndexBufferEntryNVX& setIndexType(VkIndexType _IndexType)
  {
    indexType = _IndexType;
    return *this;
  }
public:
  VkObjectEntryTypeNVX type;
  VkObjectEntryUsageFlagsNVX flags;
  VkBuffer buffer;
  VkIndexType indexType;
};

class DeviceGroupPresentInfoKHX
{
public:
  DeviceGroupPresentInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DeviceGroupPresentInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DeviceGroupPresentInfoKHX& setSwapchainCount(uint32_t _SwapchainCount)
  {
    swapchainCount = _SwapchainCount;
    return *this;
  }
  DeviceGroupPresentInfoKHX& setPDeviceMasks(const uint32_t * _PDeviceMasks)
  {
    pDeviceMasks = _PDeviceMasks;
    return *this;
  }
  DeviceGroupPresentInfoKHX& setMode(VkDeviceGroupPresentModeFlagBitsKHX _Mode)
  {
    mode = _Mode;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t swapchainCount;
  const uint32_t * pDeviceMasks;
  VkDeviceGroupPresentModeFlagBitsKHX mode;
};

class ViewportWScalingNV
{
public:
  ViewportWScalingNV& setXcoeff(float _Xcoeff)
  {
    xcoeff = _Xcoeff;
    return *this;
  }
  ViewportWScalingNV& setYcoeff(float _Ycoeff)
  {
    ycoeff = _Ycoeff;
    return *this;
  }
public:
  float xcoeff;
  float ycoeff;
};

class DisplaySurfaceCreateInfoKHR
{
public:
  DisplaySurfaceCreateInfoKHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DisplaySurfaceCreateInfoKHR& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DisplaySurfaceCreateInfoKHR& setFlags(VkDisplaySurfaceCreateFlagsKHR _Flags)
  {
    flags = _Flags;
    return *this;
  }
  DisplaySurfaceCreateInfoKHR& setDisplayMode(VkDisplayModeKHR _DisplayMode)
  {
    displayMode = _DisplayMode;
    return *this;
  }
  DisplaySurfaceCreateInfoKHR& setPlaneIndex(uint32_t _PlaneIndex)
  {
    planeIndex = _PlaneIndex;
    return *this;
  }
  DisplaySurfaceCreateInfoKHR& setPlaneStackIndex(uint32_t _PlaneStackIndex)
  {
    planeStackIndex = _PlaneStackIndex;
    return *this;
  }
  DisplaySurfaceCreateInfoKHR& setTransform(VkSurfaceTransformFlagBitsKHR _Transform)
  {
    transform = _Transform;
    return *this;
  }
  DisplaySurfaceCreateInfoKHR& setGlobalAlpha(float _GlobalAlpha)
  {
    globalAlpha = _GlobalAlpha;
    return *this;
  }
  DisplaySurfaceCreateInfoKHR& setAlphaMode(VkDisplayPlaneAlphaFlagBitsKHR _AlphaMode)
  {
    alphaMode = _AlphaMode;
    return *this;
  }
  DisplaySurfaceCreateInfoKHR& setImageExtent(Extent2D _ImageExtent)
  {
    imageExtent = _ImageExtent;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDisplaySurfaceCreateFlagsKHR flags;
  VkDisplayModeKHR displayMode;
  uint32_t planeIndex;
  uint32_t planeStackIndex;
  VkSurfaceTransformFlagBitsKHR transform;
  float globalAlpha;
  VkDisplayPlaneAlphaFlagBitsKHR alphaMode;
  Extent2D imageExtent;
};

class ExportMemoryAllocateInfoNV
{
public:
  ExportMemoryAllocateInfoNV& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ExportMemoryAllocateInfoNV& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ExportMemoryAllocateInfoNV& setHandleTypes(VkExternalMemoryHandleTypeFlagsNV _HandleTypes)
  {
    handleTypes = _HandleTypes;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkExternalMemoryHandleTypeFlagsNV handleTypes;
};

class BufferCreateInfo
{
public:
  BufferCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  BufferCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  BufferCreateInfo& setFlags(VkBufferCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  BufferCreateInfo& setSize(VkDeviceSize _Size)
  {
    size = _Size;
    return *this;
  }
  BufferCreateInfo& setUsage(VkBufferUsageFlags _Usage)
  {
    usage = _Usage;
    return *this;
  }
  BufferCreateInfo& setSharingMode(VkSharingMode _SharingMode)
  {
    sharingMode = _SharingMode;
    return *this;
  }
  BufferCreateInfo& setQueueFamilyIndexCount(uint32_t _QueueFamilyIndexCount)
  {
    queueFamilyIndexCount = _QueueFamilyIndexCount;
    return *this;
  }
  BufferCreateInfo& setPQueueFamilyIndices(const uint32_t * _PQueueFamilyIndices)
  {
    pQueueFamilyIndices = _PQueueFamilyIndices;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkBufferCreateFlags flags;
  VkDeviceSize size;
  VkBufferUsageFlags usage;
  VkSharingMode sharingMode;
  uint32_t queueFamilyIndexCount;
  const uint32_t * pQueueFamilyIndices;
};

class PipelineMultisampleStateCreateInfo
{
public:
  PipelineMultisampleStateCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PipelineMultisampleStateCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PipelineMultisampleStateCreateInfo& setFlags(VkPipelineMultisampleStateCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  PipelineMultisampleStateCreateInfo& setRasterizationSamples(VkSampleCountFlagBits _RasterizationSamples)
  {
    rasterizationSamples = _RasterizationSamples;
    return *this;
  }
  PipelineMultisampleStateCreateInfo& setSampleShadingEnable(VkBool32 _SampleShadingEnable)
  {
    sampleShadingEnable = _SampleShadingEnable;
    return *this;
  }
  PipelineMultisampleStateCreateInfo& setMinSampleShading(float _MinSampleShading)
  {
    minSampleShading = _MinSampleShading;
    return *this;
  }
  PipelineMultisampleStateCreateInfo& setPSampleMask(const VkSampleMask * _PSampleMask)
  {
    pSampleMask = _PSampleMask;
    return *this;
  }
  PipelineMultisampleStateCreateInfo& setAlphaToCoverageEnable(VkBool32 _AlphaToCoverageEnable)
  {
    alphaToCoverageEnable = _AlphaToCoverageEnable;
    return *this;
  }
  PipelineMultisampleStateCreateInfo& setAlphaToOneEnable(VkBool32 _AlphaToOneEnable)
  {
    alphaToOneEnable = _AlphaToOneEnable;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkPipelineMultisampleStateCreateFlags flags;
  VkSampleCountFlagBits rasterizationSamples;
  VkBool32 sampleShadingEnable;
  float minSampleShading;
  const VkSampleMask * pSampleMask;
  VkBool32 alphaToCoverageEnable;
  VkBool32 alphaToOneEnable;
};

class Win32KeyedMutexAcquireReleaseInfoKHX
{
public:
  Win32KeyedMutexAcquireReleaseInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  Win32KeyedMutexAcquireReleaseInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  Win32KeyedMutexAcquireReleaseInfoKHX& setAcquireCount(uint32_t _AcquireCount)
  {
    acquireCount = _AcquireCount;
    return *this;
  }
  Win32KeyedMutexAcquireReleaseInfoKHX& setPAcquireSyncs(const VkDeviceMemory * _PAcquireSyncs)
  {
    pAcquireSyncs = _PAcquireSyncs;
    return *this;
  }
  Win32KeyedMutexAcquireReleaseInfoKHX& setPAcquireKeys(const uint64_t * _PAcquireKeys)
  {
    pAcquireKeys = _PAcquireKeys;
    return *this;
  }
  Win32KeyedMutexAcquireReleaseInfoKHX& setPAcquireTimeouts(const uint32_t * _PAcquireTimeouts)
  {
    pAcquireTimeouts = _PAcquireTimeouts;
    return *this;
  }
  Win32KeyedMutexAcquireReleaseInfoKHX& setReleaseCount(uint32_t _ReleaseCount)
  {
    releaseCount = _ReleaseCount;
    return *this;
  }
  Win32KeyedMutexAcquireReleaseInfoKHX& setPReleaseSyncs(const VkDeviceMemory * _PReleaseSyncs)
  {
    pReleaseSyncs = _PReleaseSyncs;
    return *this;
  }
  Win32KeyedMutexAcquireReleaseInfoKHX& setPReleaseKeys(const uint64_t * _PReleaseKeys)
  {
    pReleaseKeys = _PReleaseKeys;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t acquireCount;
  const VkDeviceMemory * pAcquireSyncs;
  const uint64_t * pAcquireKeys;
  const uint32_t * pAcquireTimeouts;
  uint32_t releaseCount;
  const VkDeviceMemory * pReleaseSyncs;
  const uint64_t * pReleaseKeys;
};

class SamplerCreateInfo
{
public:
  SamplerCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  SamplerCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  SamplerCreateInfo& setFlags(VkSamplerCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  SamplerCreateInfo& setMagFilter(VkFilter _MagFilter)
  {
    magFilter = _MagFilter;
    return *this;
  }
  SamplerCreateInfo& setMinFilter(VkFilter _MinFilter)
  {
    minFilter = _MinFilter;
    return *this;
  }
  SamplerCreateInfo& setMipmapMode(VkSamplerMipmapMode _MipmapMode)
  {
    mipmapMode = _MipmapMode;
    return *this;
  }
  SamplerCreateInfo& setAddressModeU(VkSamplerAddressMode _AddressModeU)
  {
    addressModeU = _AddressModeU;
    return *this;
  }
  SamplerCreateInfo& setAddressModeV(VkSamplerAddressMode _AddressModeV)
  {
    addressModeV = _AddressModeV;
    return *this;
  }
  SamplerCreateInfo& setAddressModeW(VkSamplerAddressMode _AddressModeW)
  {
    addressModeW = _AddressModeW;
    return *this;
  }
  SamplerCreateInfo& setMipLodBias(float _MipLodBias)
  {
    mipLodBias = _MipLodBias;
    return *this;
  }
  SamplerCreateInfo& setAnisotropyEnable(VkBool32 _AnisotropyEnable)
  {
    anisotropyEnable = _AnisotropyEnable;
    return *this;
  }
  SamplerCreateInfo& setMaxAnisotropy(float _MaxAnisotropy)
  {
    maxAnisotropy = _MaxAnisotropy;
    return *this;
  }
  SamplerCreateInfo& setCompareEnable(VkBool32 _CompareEnable)
  {
    compareEnable = _CompareEnable;
    return *this;
  }
  SamplerCreateInfo& setCompareOp(VkCompareOp _CompareOp)
  {
    compareOp = _CompareOp;
    return *this;
  }
  SamplerCreateInfo& setMinLod(float _MinLod)
  {
    minLod = _MinLod;
    return *this;
  }
  SamplerCreateInfo& setMaxLod(float _MaxLod)
  {
    maxLod = _MaxLod;
    return *this;
  }
  SamplerCreateInfo& setBorderColor(VkBorderColor _BorderColor)
  {
    borderColor = _BorderColor;
    return *this;
  }
  SamplerCreateInfo& setUnnormalizedCoordinates(VkBool32 _UnnormalizedCoordinates)
  {
    unnormalizedCoordinates = _UnnormalizedCoordinates;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkSamplerCreateFlags flags;
  VkFilter magFilter;
  VkFilter minFilter;
  VkSamplerMipmapMode mipmapMode;
  VkSamplerAddressMode addressModeU;
  VkSamplerAddressMode addressModeV;
  VkSamplerAddressMode addressModeW;
  float mipLodBias;
  VkBool32 anisotropyEnable;
  float maxAnisotropy;
  VkBool32 compareEnable;
  VkCompareOp compareOp;
  float minLod;
  float maxLod;
  VkBorderColor borderColor;
  VkBool32 unnormalizedCoordinates;
};

class SurfaceCapabilitiesKHR
{
public:
  SurfaceCapabilitiesKHR& setMinImageCount(uint32_t _MinImageCount)
  {
    minImageCount = _MinImageCount;
    return *this;
  }
  SurfaceCapabilitiesKHR& setMaxImageCount(uint32_t _MaxImageCount)
  {
    maxImageCount = _MaxImageCount;
    return *this;
  }
  SurfaceCapabilitiesKHR& setCurrentExtent(Extent2D _CurrentExtent)
  {
    currentExtent = _CurrentExtent;
    return *this;
  }
  SurfaceCapabilitiesKHR& setMinImageExtent(Extent2D _MinImageExtent)
  {
    minImageExtent = _MinImageExtent;
    return *this;
  }
  SurfaceCapabilitiesKHR& setMaxImageExtent(Extent2D _MaxImageExtent)
  {
    maxImageExtent = _MaxImageExtent;
    return *this;
  }
  SurfaceCapabilitiesKHR& setMaxImageArrayLayers(uint32_t _MaxImageArrayLayers)
  {
    maxImageArrayLayers = _MaxImageArrayLayers;
    return *this;
  }
  SurfaceCapabilitiesKHR& setSupportedTransforms(VkSurfaceTransformFlagsKHR _SupportedTransforms)
  {
    supportedTransforms = _SupportedTransforms;
    return *this;
  }
  SurfaceCapabilitiesKHR& setCurrentTransform(VkSurfaceTransformFlagBitsKHR _CurrentTransform)
  {
    currentTransform = _CurrentTransform;
    return *this;
  }
  SurfaceCapabilitiesKHR& setSupportedCompositeAlpha(VkCompositeAlphaFlagsKHR _SupportedCompositeAlpha)
  {
    supportedCompositeAlpha = _SupportedCompositeAlpha;
    return *this;
  }
  SurfaceCapabilitiesKHR& setSupportedUsageFlags(VkImageUsageFlags _SupportedUsageFlags)
  {
    supportedUsageFlags = _SupportedUsageFlags;
    return *this;
  }
public:
  uint32_t minImageCount;
  uint32_t maxImageCount;
  Extent2D currentExtent;
  Extent2D minImageExtent;
  Extent2D maxImageExtent;
  uint32_t maxImageArrayLayers;
  VkSurfaceTransformFlagsKHR supportedTransforms;
  VkSurfaceTransformFlagBitsKHR currentTransform;
  VkCompositeAlphaFlagsKHR supportedCompositeAlpha;
  VkImageUsageFlags supportedUsageFlags;
};

class ExportMemoryWin32HandleInfoNV
{
public:
  ExportMemoryWin32HandleInfoNV& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ExportMemoryWin32HandleInfoNV& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ExportMemoryWin32HandleInfoNV& setPAttributes(const SECURITY_ATTRIBUTES * _PAttributes)
  {
    pAttributes = _PAttributes;
    return *this;
  }
  ExportMemoryWin32HandleInfoNV& setDwAccess(DWORD _DwAccess)
  {
    dwAccess = _DwAccess;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  const SECURITY_ATTRIBUTES * pAttributes;
  DWORD dwAccess;
};

class IndirectCommandsLayoutTokenNVX
{
public:
  IndirectCommandsLayoutTokenNVX& setTokenType(VkIndirectCommandsTokenTypeNVX _TokenType)
  {
    tokenType = _TokenType;
    return *this;
  }
  IndirectCommandsLayoutTokenNVX& setBindingUnit(uint32_t _BindingUnit)
  {
    bindingUnit = _BindingUnit;
    return *this;
  }
  IndirectCommandsLayoutTokenNVX& setDynamicCount(uint32_t _DynamicCount)
  {
    dynamicCount = _DynamicCount;
    return *this;
  }
  IndirectCommandsLayoutTokenNVX& setDivisor(uint32_t _Divisor)
  {
    divisor = _Divisor;
    return *this;
  }
public:
  VkIndirectCommandsTokenTypeNVX tokenType;
  uint32_t bindingUnit;
  uint32_t dynamicCount;
  uint32_t divisor;
};

class BufferImageCopy
{
public:
  BufferImageCopy& setBufferOffset(VkDeviceSize _BufferOffset)
  {
    bufferOffset = _BufferOffset;
    return *this;
  }
  BufferImageCopy& setBufferRowLength(uint32_t _BufferRowLength)
  {
    bufferRowLength = _BufferRowLength;
    return *this;
  }
  BufferImageCopy& setBufferImageHeight(uint32_t _BufferImageHeight)
  {
    bufferImageHeight = _BufferImageHeight;
    return *this;
  }
  BufferImageCopy& setImageSubresource(ImageSubresourceLayers _ImageSubresource)
  {
    imageSubresource = _ImageSubresource;
    return *this;
  }
  BufferImageCopy& setImageOffset(Offset3D _ImageOffset)
  {
    imageOffset = _ImageOffset;
    return *this;
  }
  BufferImageCopy& setImageExtent(Extent3D _ImageExtent)
  {
    imageExtent = _ImageExtent;
    return *this;
  }
public:
  VkDeviceSize bufferOffset;
  uint32_t bufferRowLength;
  uint32_t bufferImageHeight;
  ImageSubresourceLayers imageSubresource;
  Offset3D imageOffset;
  Extent3D imageExtent;
};

class ObjectTablePushConstantEntryNVX
{
public:
  ObjectTablePushConstantEntryNVX& setType(VkObjectEntryTypeNVX _Type)
  {
    type = _Type;
    return *this;
  }
  ObjectTablePushConstantEntryNVX& setFlags(VkObjectEntryUsageFlagsNVX _Flags)
  {
    flags = _Flags;
    return *this;
  }
  ObjectTablePushConstantEntryNVX& setPipelineLayout(VkPipelineLayout _PipelineLayout)
  {
    pipelineLayout = _PipelineLayout;
    return *this;
  }
  ObjectTablePushConstantEntryNVX& setStageFlags(VkShaderStageFlags _StageFlags)
  {
    stageFlags = _StageFlags;
    return *this;
  }
public:
  VkObjectEntryTypeNVX type;
  VkObjectEntryUsageFlagsNVX flags;
  VkPipelineLayout pipelineLayout;
  VkShaderStageFlags stageFlags;
};

class DeviceGroupPresentCapabilitiesKHX
{
public:
  DeviceGroupPresentCapabilitiesKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DeviceGroupPresentCapabilitiesKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DeviceGroupPresentCapabilitiesKHX& setPresentMask(uint32_t _PresentMask)
  {
    presentMask = _PresentMask;
    return *this;
  }
  DeviceGroupPresentCapabilitiesKHX& setModes(VkDeviceGroupPresentModeFlagsKHX _Modes)
  {
    modes = _Modes;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t presentMask;
  VkDeviceGroupPresentModeFlagsKHX modes;
};

class AllocationCallbacks
{
public:
  AllocationCallbacks& setPUserData(void * _PUserData)
  {
    pUserData = _PUserData;
    return *this;
  }
  AllocationCallbacks& setPfnAllocation(PFN_vkAllocationFunction _PfnAllocation)
  {
    pfnAllocation = _PfnAllocation;
    return *this;
  }
  AllocationCallbacks& setPfnReallocation(PFN_vkReallocationFunction _PfnReallocation)
  {
    pfnReallocation = _PfnReallocation;
    return *this;
  }
  AllocationCallbacks& setPfnFree(PFN_vkFreeFunction _PfnFree)
  {
    pfnFree = _PfnFree;
    return *this;
  }
  AllocationCallbacks& setPfnInternalAllocation(PFN_vkInternalAllocationNotification _PfnInternalAllocation)
  {
    pfnInternalAllocation = _PfnInternalAllocation;
    return *this;
  }
  AllocationCallbacks& setPfnInternalFree(PFN_vkInternalFreeNotification _PfnInternalFree)
  {
    pfnInternalFree = _PfnInternalFree;
    return *this;
  }
public:
  void * pUserData;
  PFN_vkAllocationFunction pfnAllocation;
  PFN_vkReallocationFunction pfnReallocation;
  PFN_vkFreeFunction pfnFree;
  PFN_vkInternalAllocationNotification pfnInternalAllocation;
  PFN_vkInternalFreeNotification pfnInternalFree;
};

class DisplayPlaneCapabilitiesKHR
{
public:
  DisplayPlaneCapabilitiesKHR& setSupportedAlpha(VkDisplayPlaneAlphaFlagsKHR _SupportedAlpha)
  {
    supportedAlpha = _SupportedAlpha;
    return *this;
  }
  DisplayPlaneCapabilitiesKHR& setMinSrcPosition(Offset2D _MinSrcPosition)
  {
    minSrcPosition = _MinSrcPosition;
    return *this;
  }
  DisplayPlaneCapabilitiesKHR& setMaxSrcPosition(Offset2D _MaxSrcPosition)
  {
    maxSrcPosition = _MaxSrcPosition;
    return *this;
  }
  DisplayPlaneCapabilitiesKHR& setMinSrcExtent(Extent2D _MinSrcExtent)
  {
    minSrcExtent = _MinSrcExtent;
    return *this;
  }
  DisplayPlaneCapabilitiesKHR& setMaxSrcExtent(Extent2D _MaxSrcExtent)
  {
    maxSrcExtent = _MaxSrcExtent;
    return *this;
  }
  DisplayPlaneCapabilitiesKHR& setMinDstPosition(Offset2D _MinDstPosition)
  {
    minDstPosition = _MinDstPosition;
    return *this;
  }
  DisplayPlaneCapabilitiesKHR& setMaxDstPosition(Offset2D _MaxDstPosition)
  {
    maxDstPosition = _MaxDstPosition;
    return *this;
  }
  DisplayPlaneCapabilitiesKHR& setMinDstExtent(Extent2D _MinDstExtent)
  {
    minDstExtent = _MinDstExtent;
    return *this;
  }
  DisplayPlaneCapabilitiesKHR& setMaxDstExtent(Extent2D _MaxDstExtent)
  {
    maxDstExtent = _MaxDstExtent;
    return *this;
  }
public:
  VkDisplayPlaneAlphaFlagsKHR supportedAlpha;
  Offset2D minSrcPosition;
  Offset2D maxSrcPosition;
  Extent2D minSrcExtent;
  Extent2D maxSrcExtent;
  Offset2D minDstPosition;
  Offset2D maxDstPosition;
  Extent2D minDstExtent;
  Extent2D maxDstExtent;
};

class ExportSemaphoreWin32HandleInfoKHX
{
public:
  ExportSemaphoreWin32HandleInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ExportSemaphoreWin32HandleInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ExportSemaphoreWin32HandleInfoKHX& setPAttributes(const SECURITY_ATTRIBUTES * _PAttributes)
  {
    pAttributes = _PAttributes;
    return *this;
  }
  ExportSemaphoreWin32HandleInfoKHX& setDwAccess(DWORD _DwAccess)
  {
    dwAccess = _DwAccess;
    return *this;
  }
  ExportSemaphoreWin32HandleInfoKHX& setName(LPCWSTR _Name)
  {
    name = _Name;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  const SECURITY_ATTRIBUTES * pAttributes;
  DWORD dwAccess;
  LPCWSTR name;
};

class PipelineColorBlendStateCreateInfo
{
public:
  PipelineColorBlendStateCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PipelineColorBlendStateCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PipelineColorBlendStateCreateInfo& setFlags(VkPipelineColorBlendStateCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  PipelineColorBlendStateCreateInfo& setLogicOpEnable(VkBool32 _LogicOpEnable)
  {
    logicOpEnable = _LogicOpEnable;
    return *this;
  }
  PipelineColorBlendStateCreateInfo& setLogicOp(VkLogicOp _LogicOp)
  {
    logicOp = _LogicOp;
    return *this;
  }
  PipelineColorBlendStateCreateInfo& setAttachmentCount(uint32_t _AttachmentCount)
  {
    attachmentCount = _AttachmentCount;
    return *this;
  }
  PipelineColorBlendStateCreateInfo& setPAttachments(const PipelineColorBlendAttachmentState * _PAttachments)
  {
    pAttachments = _PAttachments;
    return *this;
  }
  PipelineColorBlendStateCreateInfo& setBlendConstants(float _BlendConstants)
  {
    blendConstants = _BlendConstants;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkPipelineColorBlendStateCreateFlags flags;
  VkBool32 logicOpEnable;
  VkLogicOp logicOp;
  uint32_t attachmentCount;
  const PipelineColorBlendAttachmentState * pAttachments;
  float blendConstants;
};

class SurfaceFormatKHR
{
public:
  SurfaceFormatKHR& setFormat(VkFormat _Format)
  {
    format = _Format;
    return *this;
  }
  SurfaceFormatKHR& setColorSpace(VkColorSpaceKHR _ColorSpace)
  {
    colorSpace = _ColorSpace;
    return *this;
  }
public:
  VkFormat format;
  VkColorSpaceKHR colorSpace;
};

class D3D12FenceSubmitInfoKHX
{
public:
  D3D12FenceSubmitInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  D3D12FenceSubmitInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  D3D12FenceSubmitInfoKHX& setWaitSemaphoreValuesCount(uint32_t _WaitSemaphoreValuesCount)
  {
    waitSemaphoreValuesCount = _WaitSemaphoreValuesCount;
    return *this;
  }
  D3D12FenceSubmitInfoKHX& setPWaitSemaphoreValues(const uint64_t * _PWaitSemaphoreValues)
  {
    pWaitSemaphoreValues = _PWaitSemaphoreValues;
    return *this;
  }
  D3D12FenceSubmitInfoKHX& setSignalSemaphoreValuesCount(uint32_t _SignalSemaphoreValuesCount)
  {
    signalSemaphoreValuesCount = _SignalSemaphoreValuesCount;
    return *this;
  }
  D3D12FenceSubmitInfoKHX& setPSignalSemaphoreValues(const uint64_t * _PSignalSemaphoreValues)
  {
    pSignalSemaphoreValues = _PSignalSemaphoreValues;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t waitSemaphoreValuesCount;
  const uint64_t * pWaitSemaphoreValues;
  uint32_t signalSemaphoreValuesCount;
  const uint64_t * pSignalSemaphoreValues;
};

class BindImageMemoryInfoKHX
{
public:
  BindImageMemoryInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  BindImageMemoryInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  BindImageMemoryInfoKHX& setImage(VkImage _Image)
  {
    image = _Image;
    return *this;
  }
  BindImageMemoryInfoKHX& setMemory(VkDeviceMemory _Memory)
  {
    memory = _Memory;
    return *this;
  }
  BindImageMemoryInfoKHX& setMemoryOffset(VkDeviceSize _MemoryOffset)
  {
    memoryOffset = _MemoryOffset;
    return *this;
  }
  BindImageMemoryInfoKHX& setDeviceIndexCount(uint32_t _DeviceIndexCount)
  {
    deviceIndexCount = _DeviceIndexCount;
    return *this;
  }
  BindImageMemoryInfoKHX& setPDeviceIndices(const uint32_t * _PDeviceIndices)
  {
    pDeviceIndices = _PDeviceIndices;
    return *this;
  }
  BindImageMemoryInfoKHX& setSFRRectCount(uint32_t _SFRRectCount)
  {
    SFRRectCount = _SFRRectCount;
    return *this;
  }
  BindImageMemoryInfoKHX& setPSFRRects(const Rect2D * _PSFRRects)
  {
    pSFRRects = _PSFRRects;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkImage image;
  VkDeviceMemory memory;
  VkDeviceSize memoryOffset;
  uint32_t deviceIndexCount;
  const uint32_t * pDeviceIndices;
  uint32_t SFRRectCount;
  const Rect2D * pSFRRects;
};

class IOSSurfaceCreateInfoMVK
{
public:
  IOSSurfaceCreateInfoMVK& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  IOSSurfaceCreateInfoMVK& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  IOSSurfaceCreateInfoMVK& setFlags(VkIOSSurfaceCreateFlagsMVK _Flags)
  {
    flags = _Flags;
    return *this;
  }
  IOSSurfaceCreateInfoMVK& setPView(const void * _PView)
  {
    pView = _PView;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkIOSSurfaceCreateFlagsMVK flags;
  const void * pView;
};

class DescriptorSetLayoutCreateInfo
{
public:
  DescriptorSetLayoutCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DescriptorSetLayoutCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DescriptorSetLayoutCreateInfo& setFlags(VkDescriptorSetLayoutCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  DescriptorSetLayoutCreateInfo& setBindingCount(uint32_t _BindingCount)
  {
    bindingCount = _BindingCount;
    return *this;
  }
  DescriptorSetLayoutCreateInfo& setPBindings(const DescriptorSetLayoutBinding * _PBindings)
  {
    pBindings = _PBindings;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDescriptorSetLayoutCreateFlags flags;
  uint32_t bindingCount;
  const DescriptorSetLayoutBinding * pBindings;
};

class LayerProperties
{
public:
  LayerProperties& setLayerName(char _LayerName)
  {
    layerName = _LayerName;
    return *this;
  }
  LayerProperties& setSpecVersion(uint32_t _SpecVersion)
  {
    specVersion = _SpecVersion;
    return *this;
  }
  LayerProperties& setImplementationVersion(uint32_t _ImplementationVersion)
  {
    implementationVersion = _ImplementationVersion;
    return *this;
  }
  LayerProperties& setDescription(char _Description)
  {
    description = _Description;
    return *this;
  }
public:
  char layerName;
  uint32_t specVersion;
  uint32_t implementationVersion;
  char description;
};

class AttachmentDescription
{
public:
  AttachmentDescription& setFlags(VkAttachmentDescriptionFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  AttachmentDescription& setFormat(VkFormat _Format)
  {
    format = _Format;
    return *this;
  }
  AttachmentDescription& setSamples(VkSampleCountFlagBits _Samples)
  {
    samples = _Samples;
    return *this;
  }
  AttachmentDescription& setLoadOp(VkAttachmentLoadOp _LoadOp)
  {
    loadOp = _LoadOp;
    return *this;
  }
  AttachmentDescription& setStoreOp(VkAttachmentStoreOp _StoreOp)
  {
    storeOp = _StoreOp;
    return *this;
  }
  AttachmentDescription& setStencilLoadOp(VkAttachmentLoadOp _StencilLoadOp)
  {
    stencilLoadOp = _StencilLoadOp;
    return *this;
  }
  AttachmentDescription& setStencilStoreOp(VkAttachmentStoreOp _StencilStoreOp)
  {
    stencilStoreOp = _StencilStoreOp;
    return *this;
  }
  AttachmentDescription& setInitialLayout(VkImageLayout _InitialLayout)
  {
    initialLayout = _InitialLayout;
    return *this;
  }
  AttachmentDescription& setFinalLayout(VkImageLayout _FinalLayout)
  {
    finalLayout = _FinalLayout;
    return *this;
  }
public:
  VkAttachmentDescriptionFlags flags;
  VkFormat format;
  VkSampleCountFlagBits samples;
  VkAttachmentLoadOp loadOp;
  VkAttachmentStoreOp storeOp;
  VkAttachmentLoadOp stencilLoadOp;
  VkAttachmentStoreOp stencilStoreOp;
  VkImageLayout initialLayout;
  VkImageLayout finalLayout;
};

class PipelineDepthStencilStateCreateInfo
{
public:
  PipelineDepthStencilStateCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PipelineDepthStencilStateCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PipelineDepthStencilStateCreateInfo& setFlags(VkPipelineDepthStencilStateCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  PipelineDepthStencilStateCreateInfo& setDepthTestEnable(VkBool32 _DepthTestEnable)
  {
    depthTestEnable = _DepthTestEnable;
    return *this;
  }
  PipelineDepthStencilStateCreateInfo& setDepthWriteEnable(VkBool32 _DepthWriteEnable)
  {
    depthWriteEnable = _DepthWriteEnable;
    return *this;
  }
  PipelineDepthStencilStateCreateInfo& setDepthCompareOp(VkCompareOp _DepthCompareOp)
  {
    depthCompareOp = _DepthCompareOp;
    return *this;
  }
  PipelineDepthStencilStateCreateInfo& setDepthBoundsTestEnable(VkBool32 _DepthBoundsTestEnable)
  {
    depthBoundsTestEnable = _DepthBoundsTestEnable;
    return *this;
  }
  PipelineDepthStencilStateCreateInfo& setStencilTestEnable(VkBool32 _StencilTestEnable)
  {
    stencilTestEnable = _StencilTestEnable;
    return *this;
  }
  PipelineDepthStencilStateCreateInfo& setFront(StencilOpState _Front)
  {
    front = _Front;
    return *this;
  }
  PipelineDepthStencilStateCreateInfo& setBack(StencilOpState _Back)
  {
    back = _Back;
    return *this;
  }
  PipelineDepthStencilStateCreateInfo& setMinDepthBounds(float _MinDepthBounds)
  {
    minDepthBounds = _MinDepthBounds;
    return *this;
  }
  PipelineDepthStencilStateCreateInfo& setMaxDepthBounds(float _MaxDepthBounds)
  {
    maxDepthBounds = _MaxDepthBounds;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkPipelineDepthStencilStateCreateFlags flags;
  VkBool32 depthTestEnable;
  VkBool32 depthWriteEnable;
  VkCompareOp depthCompareOp;
  VkBool32 depthBoundsTestEnable;
  VkBool32 stencilTestEnable;
  StencilOpState front;
  StencilOpState back;
  float minDepthBounds;
  float maxDepthBounds;
};

class ClearDepthStencilValue
{
public:
  ClearDepthStencilValue& setDepth(float _Depth)
  {
    depth = _Depth;
    return *this;
  }
  ClearDepthStencilValue& setStencil(uint32_t _Stencil)
  {
    stencil = _Stencil;
    return *this;
  }
public:
  float depth;
  uint32_t stencil;
};

class SubpassDependency
{
public:
  SubpassDependency& setSrcSubpass(uint32_t _SrcSubpass)
  {
    srcSubpass = _SrcSubpass;
    return *this;
  }
  SubpassDependency& setDstSubpass(uint32_t _DstSubpass)
  {
    dstSubpass = _DstSubpass;
    return *this;
  }
  SubpassDependency& setSrcStageMask(VkPipelineStageFlags _SrcStageMask)
  {
    srcStageMask = _SrcStageMask;
    return *this;
  }
  SubpassDependency& setDstStageMask(VkPipelineStageFlags _DstStageMask)
  {
    dstStageMask = _DstStageMask;
    return *this;
  }
  SubpassDependency& setSrcAccessMask(VkAccessFlags _SrcAccessMask)
  {
    srcAccessMask = _SrcAccessMask;
    return *this;
  }
  SubpassDependency& setDstAccessMask(VkAccessFlags _DstAccessMask)
  {
    dstAccessMask = _DstAccessMask;
    return *this;
  }
  SubpassDependency& setDependencyFlags(VkDependencyFlags _DependencyFlags)
  {
    dependencyFlags = _DependencyFlags;
    return *this;
  }
public:
  uint32_t srcSubpass;
  uint32_t dstSubpass;
  VkPipelineStageFlags srcStageMask;
  VkPipelineStageFlags dstStageMask;
  VkAccessFlags srcAccessMask;
  VkAccessFlags dstAccessMask;
  VkDependencyFlags dependencyFlags;
};

class PipelineRasterizationStateCreateInfo
{
public:
  PipelineRasterizationStateCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PipelineRasterizationStateCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PipelineRasterizationStateCreateInfo& setFlags(VkPipelineRasterizationStateCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  PipelineRasterizationStateCreateInfo& setDepthClampEnable(VkBool32 _DepthClampEnable)
  {
    depthClampEnable = _DepthClampEnable;
    return *this;
  }
  PipelineRasterizationStateCreateInfo& setRasterizerDiscardEnable(VkBool32 _RasterizerDiscardEnable)
  {
    rasterizerDiscardEnable = _RasterizerDiscardEnable;
    return *this;
  }
  PipelineRasterizationStateCreateInfo& setPolygonMode(VkPolygonMode _PolygonMode)
  {
    polygonMode = _PolygonMode;
    return *this;
  }
  PipelineRasterizationStateCreateInfo& setCullMode(VkCullModeFlags _CullMode)
  {
    cullMode = _CullMode;
    return *this;
  }
  PipelineRasterizationStateCreateInfo& setFrontFace(VkFrontFace _FrontFace)
  {
    frontFace = _FrontFace;
    return *this;
  }
  PipelineRasterizationStateCreateInfo& setDepthBiasEnable(VkBool32 _DepthBiasEnable)
  {
    depthBiasEnable = _DepthBiasEnable;
    return *this;
  }
  PipelineRasterizationStateCreateInfo& setDepthBiasConstantFactor(float _DepthBiasConstantFactor)
  {
    depthBiasConstantFactor = _DepthBiasConstantFactor;
    return *this;
  }
  PipelineRasterizationStateCreateInfo& setDepthBiasClamp(float _DepthBiasClamp)
  {
    depthBiasClamp = _DepthBiasClamp;
    return *this;
  }
  PipelineRasterizationStateCreateInfo& setDepthBiasSlopeFactor(float _DepthBiasSlopeFactor)
  {
    depthBiasSlopeFactor = _DepthBiasSlopeFactor;
    return *this;
  }
  PipelineRasterizationStateCreateInfo& setLineWidth(float _LineWidth)
  {
    lineWidth = _LineWidth;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkPipelineRasterizationStateCreateFlags flags;
  VkBool32 depthClampEnable;
  VkBool32 rasterizerDiscardEnable;
  VkPolygonMode polygonMode;
  VkCullModeFlags cullMode;
  VkFrontFace frontFace;
  VkBool32 depthBiasEnable;
  float depthBiasConstantFactor;
  float depthBiasClamp;
  float depthBiasSlopeFactor;
  float lineWidth;
};

class BufferViewCreateInfo
{
public:
  BufferViewCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  BufferViewCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  BufferViewCreateInfo& setFlags(VkBufferViewCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  BufferViewCreateInfo& setBuffer(VkBuffer _Buffer)
  {
    buffer = _Buffer;
    return *this;
  }
  BufferViewCreateInfo& setFormat(VkFormat _Format)
  {
    format = _Format;
    return *this;
  }
  BufferViewCreateInfo& setOffset(VkDeviceSize _Offset)
  {
    offset = _Offset;
    return *this;
  }
  BufferViewCreateInfo& setRange(VkDeviceSize _Range)
  {
    range = _Range;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkBufferViewCreateFlags flags;
  VkBuffer buffer;
  VkFormat format;
  VkDeviceSize offset;
  VkDeviceSize range;
};

class PresentInfoKHR
{
public:
  PresentInfoKHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PresentInfoKHR& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PresentInfoKHR& setWaitSemaphoreCount(uint32_t _WaitSemaphoreCount)
  {
    waitSemaphoreCount = _WaitSemaphoreCount;
    return *this;
  }
  PresentInfoKHR& setPWaitSemaphores(const VkSemaphore * _PWaitSemaphores)
  {
    pWaitSemaphores = _PWaitSemaphores;
    return *this;
  }
  PresentInfoKHR& setSwapchainCount(uint32_t _SwapchainCount)
  {
    swapchainCount = _SwapchainCount;
    return *this;
  }
  PresentInfoKHR& setPSwapchains(const VkSwapchainKHR * _PSwapchains)
  {
    pSwapchains = _PSwapchains;
    return *this;
  }
  PresentInfoKHR& setPImageIndices(const uint32_t * _PImageIndices)
  {
    pImageIndices = _PImageIndices;
    return *this;
  }
  PresentInfoKHR& setPResults(VkResult * _PResults)
  {
    pResults = _PResults;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t waitSemaphoreCount;
  const VkSemaphore * pWaitSemaphores;
  uint32_t swapchainCount;
  const VkSwapchainKHR * pSwapchains;
  const uint32_t * pImageIndices;
  VkResult * pResults;
};

class SpecializationInfo
{
public:
  SpecializationInfo& setMapEntryCount(uint32_t _MapEntryCount)
  {
    mapEntryCount = _MapEntryCount;
    return *this;
  }
  SpecializationInfo& setPMapEntries(const SpecializationMapEntry * _PMapEntries)
  {
    pMapEntries = _PMapEntries;
    return *this;
  }
  SpecializationInfo& setDataSize(size_t _DataSize)
  {
    dataSize = _DataSize;
    return *this;
  }
  SpecializationInfo& setPData(const void * _PData)
  {
    pData = _PData;
    return *this;
  }
public:
  uint32_t mapEntryCount;
  const SpecializationMapEntry * pMapEntries;
  size_t dataSize;
  const void * pData;
};

class ApplicationInfo
{
public:
  ApplicationInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ApplicationInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ApplicationInfo& setPApplicationName(const char * _PApplicationName)
  {
    pApplicationName = _PApplicationName;
    return *this;
  }
  ApplicationInfo& setApplicationVersion(uint32_t _ApplicationVersion)
  {
    applicationVersion = _ApplicationVersion;
    return *this;
  }
  ApplicationInfo& setPEngineName(const char * _PEngineName)
  {
    pEngineName = _PEngineName;
    return *this;
  }
  ApplicationInfo& setEngineVersion(uint32_t _EngineVersion)
  {
    engineVersion = _EngineVersion;
    return *this;
  }
  ApplicationInfo& setApiVersion(uint32_t _ApiVersion)
  {
    apiVersion = _ApiVersion;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  const char * pApplicationName;
  uint32_t applicationVersion;
  const char * pEngineName;
  uint32_t engineVersion;
  uint32_t apiVersion;
};

class DebugMarkerMarkerInfoEXT
{
public:
  DebugMarkerMarkerInfoEXT& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DebugMarkerMarkerInfoEXT& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DebugMarkerMarkerInfoEXT& setPMarkerName(const char * _PMarkerName)
  {
    pMarkerName = _PMarkerName;
    return *this;
  }
  DebugMarkerMarkerInfoEXT& setColor(float _Color)
  {
    color = _Color;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  const char * pMarkerName;
  float color;
};

class ImageResolve
{
public:
  ImageResolve& setSrcSubresource(ImageSubresourceLayers _SrcSubresource)
  {
    srcSubresource = _SrcSubresource;
    return *this;
  }
  ImageResolve& setSrcOffset(Offset3D _SrcOffset)
  {
    srcOffset = _SrcOffset;
    return *this;
  }
  ImageResolve& setDstSubresource(ImageSubresourceLayers _DstSubresource)
  {
    dstSubresource = _DstSubresource;
    return *this;
  }
  ImageResolve& setDstOffset(Offset3D _DstOffset)
  {
    dstOffset = _DstOffset;
    return *this;
  }
  ImageResolve& setExtent(Extent3D _Extent)
  {
    extent = _Extent;
    return *this;
  }
public:
  ImageSubresourceLayers srcSubresource;
  Offset3D srcOffset;
  ImageSubresourceLayers dstSubresource;
  Offset3D dstOffset;
  Extent3D extent;
};

class DebugMarkerObjectNameInfoEXT
{
public:
  DebugMarkerObjectNameInfoEXT& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DebugMarkerObjectNameInfoEXT& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DebugMarkerObjectNameInfoEXT& setObjectType(VkDebugReportObjectTypeEXT _ObjectType)
  {
    objectType = _ObjectType;
    return *this;
  }
  DebugMarkerObjectNameInfoEXT& setObject(uint64_t _Object)
  {
    object = _Object;
    return *this;
  }
  DebugMarkerObjectNameInfoEXT& setPObjectName(const char * _PObjectName)
  {
    pObjectName = _PObjectName;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDebugReportObjectTypeEXT objectType;
  uint64_t object;
  const char * pObjectName;
};

class AcquireNextImageInfoKHX
{
public:
  AcquireNextImageInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  AcquireNextImageInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  AcquireNextImageInfoKHX& setSwapchain(VkSwapchainKHR _Swapchain)
  {
    swapchain = _Swapchain;
    return *this;
  }
  AcquireNextImageInfoKHX& setTimeout(uint64_t _Timeout)
  {
    timeout = _Timeout;
    return *this;
  }
  AcquireNextImageInfoKHX& setSemaphore(VkSemaphore _Semaphore)
  {
    semaphore = _Semaphore;
    return *this;
  }
  AcquireNextImageInfoKHX& setFence(VkFence _Fence)
  {
    fence = _Fence;
    return *this;
  }
  AcquireNextImageInfoKHX& setDeviceMask(uint32_t _DeviceMask)
  {
    deviceMask = _DeviceMask;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkSwapchainKHR swapchain;
  uint64_t timeout;
  VkSemaphore semaphore;
  VkFence fence;
  uint32_t deviceMask;
};

class PushConstantRange
{
public:
  PushConstantRange& setStageFlags(VkShaderStageFlags _StageFlags)
  {
    stageFlags = _StageFlags;
    return *this;
  }
  PushConstantRange& setOffset(uint32_t _Offset)
  {
    offset = _Offset;
    return *this;
  }
  PushConstantRange& setSize(uint32_t _Size)
  {
    size = _Size;
    return *this;
  }
public:
  VkShaderStageFlags stageFlags;
  uint32_t offset;
  uint32_t size;
};

class ExternalMemoryImageCreateInfoNV
{
public:
  ExternalMemoryImageCreateInfoNV& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ExternalMemoryImageCreateInfoNV& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ExternalMemoryImageCreateInfoNV& setHandleTypes(VkExternalMemoryHandleTypeFlagsNV _HandleTypes)
  {
    handleTypes = _HandleTypes;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkExternalMemoryHandleTypeFlagsNV handleTypes;
};

class StencilOpState
{
public:
  StencilOpState& setFailOp(VkStencilOp _FailOp)
  {
    failOp = _FailOp;
    return *this;
  }
  StencilOpState& setPassOp(VkStencilOp _PassOp)
  {
    passOp = _PassOp;
    return *this;
  }
  StencilOpState& setDepthFailOp(VkStencilOp _DepthFailOp)
  {
    depthFailOp = _DepthFailOp;
    return *this;
  }
  StencilOpState& setCompareOp(VkCompareOp _CompareOp)
  {
    compareOp = _CompareOp;
    return *this;
  }
  StencilOpState& setCompareMask(uint32_t _CompareMask)
  {
    compareMask = _CompareMask;
    return *this;
  }
  StencilOpState& setWriteMask(uint32_t _WriteMask)
  {
    writeMask = _WriteMask;
    return *this;
  }
  StencilOpState& setReference(uint32_t _Reference)
  {
    reference = _Reference;
    return *this;
  }
public:
  VkStencilOp failOp;
  VkStencilOp passOp;
  VkStencilOp depthFailOp;
  VkCompareOp compareOp;
  uint32_t compareMask;
  uint32_t writeMask;
  uint32_t reference;
};

class MemoryRequirements
{
public:
  MemoryRequirements& setSize(VkDeviceSize _Size)
  {
    size = _Size;
    return *this;
  }
  MemoryRequirements& setAlignment(VkDeviceSize _Alignment)
  {
    alignment = _Alignment;
    return *this;
  }
  MemoryRequirements& setMemoryTypeBits(uint32_t _MemoryTypeBits)
  {
    memoryTypeBits = _MemoryTypeBits;
    return *this;
  }
public:
  VkDeviceSize size;
  VkDeviceSize alignment;
  uint32_t memoryTypeBits;
};

class IndirectCommandsTokenNVX
{
public:
  IndirectCommandsTokenNVX& setTokenType(VkIndirectCommandsTokenTypeNVX _TokenType)
  {
    tokenType = _TokenType;
    return *this;
  }
  IndirectCommandsTokenNVX& setBuffer(VkBuffer _Buffer)
  {
    buffer = _Buffer;
    return *this;
  }
  IndirectCommandsTokenNVX& setOffset(VkDeviceSize _Offset)
  {
    offset = _Offset;
    return *this;
  }
public:
  VkIndirectCommandsTokenTypeNVX tokenType;
  VkBuffer buffer;
  VkDeviceSize offset;
};

class GraphicsPipelineCreateInfo
{
public:
  GraphicsPipelineCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  GraphicsPipelineCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  GraphicsPipelineCreateInfo& setFlags(VkPipelineCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  GraphicsPipelineCreateInfo& setStageCount(uint32_t _StageCount)
  {
    stageCount = _StageCount;
    return *this;
  }
  GraphicsPipelineCreateInfo& setPStages(const PipelineShaderStageCreateInfo * _PStages)
  {
    pStages = _PStages;
    return *this;
  }
  GraphicsPipelineCreateInfo& setPVertexInputState(const PipelineVertexInputStateCreateInfo * _PVertexInputState)
  {
    pVertexInputState = _PVertexInputState;
    return *this;
  }
  GraphicsPipelineCreateInfo& setPInputAssemblyState(const PipelineInputAssemblyStateCreateInfo * _PInputAssemblyState)
  {
    pInputAssemblyState = _PInputAssemblyState;
    return *this;
  }
  GraphicsPipelineCreateInfo& setPTessellationState(const PipelineTessellationStateCreateInfo * _PTessellationState)
  {
    pTessellationState = _PTessellationState;
    return *this;
  }
  GraphicsPipelineCreateInfo& setPViewportState(const PipelineViewportStateCreateInfo * _PViewportState)
  {
    pViewportState = _PViewportState;
    return *this;
  }
  GraphicsPipelineCreateInfo& setPRasterizationState(const PipelineRasterizationStateCreateInfo * _PRasterizationState)
  {
    pRasterizationState = _PRasterizationState;
    return *this;
  }
  GraphicsPipelineCreateInfo& setPMultisampleState(const PipelineMultisampleStateCreateInfo * _PMultisampleState)
  {
    pMultisampleState = _PMultisampleState;
    return *this;
  }
  GraphicsPipelineCreateInfo& setPDepthStencilState(const PipelineDepthStencilStateCreateInfo * _PDepthStencilState)
  {
    pDepthStencilState = _PDepthStencilState;
    return *this;
  }
  GraphicsPipelineCreateInfo& setPColorBlendState(const PipelineColorBlendStateCreateInfo * _PColorBlendState)
  {
    pColorBlendState = _PColorBlendState;
    return *this;
  }
  GraphicsPipelineCreateInfo& setPDynamicState(const PipelineDynamicStateCreateInfo * _PDynamicState)
  {
    pDynamicState = _PDynamicState;
    return *this;
  }
  GraphicsPipelineCreateInfo& setLayout(VkPipelineLayout _Layout)
  {
    layout = _Layout;
    return *this;
  }
  GraphicsPipelineCreateInfo& setRenderPass(VkRenderPass _RenderPass)
  {
    renderPass = _RenderPass;
    return *this;
  }
  GraphicsPipelineCreateInfo& setSubpass(uint32_t _Subpass)
  {
    subpass = _Subpass;
    return *this;
  }
  GraphicsPipelineCreateInfo& setBasePipelineHandle(VkPipeline _BasePipelineHandle)
  {
    basePipelineHandle = _BasePipelineHandle;
    return *this;
  }
  GraphicsPipelineCreateInfo& setBasePipelineIndex(int32_t _BasePipelineIndex)
  {
    basePipelineIndex = _BasePipelineIndex;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkPipelineCreateFlags flags;
  uint32_t stageCount;
  const PipelineShaderStageCreateInfo * pStages;
  const PipelineVertexInputStateCreateInfo * pVertexInputState;
  const PipelineInputAssemblyStateCreateInfo * pInputAssemblyState;
  const PipelineTessellationStateCreateInfo * pTessellationState;
  const PipelineViewportStateCreateInfo * pViewportState;
  const PipelineRasterizationStateCreateInfo * pRasterizationState;
  const PipelineMultisampleStateCreateInfo * pMultisampleState;
  const PipelineDepthStencilStateCreateInfo * pDepthStencilState;
  const PipelineColorBlendStateCreateInfo * pColorBlendState;
  const PipelineDynamicStateCreateInfo * pDynamicState;
  VkPipelineLayout layout;
  VkRenderPass renderPass;
  uint32_t subpass;
  VkPipeline basePipelineHandle;
  int32_t basePipelineIndex;
};

class FramebufferCreateInfo
{
public:
  FramebufferCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  FramebufferCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  FramebufferCreateInfo& setFlags(VkFramebufferCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  FramebufferCreateInfo& setRenderPass(VkRenderPass _RenderPass)
  {
    renderPass = _RenderPass;
    return *this;
  }
  FramebufferCreateInfo& setAttachmentCount(uint32_t _AttachmentCount)
  {
    attachmentCount = _AttachmentCount;
    return *this;
  }
  FramebufferCreateInfo& setPAttachments(const VkImageView * _PAttachments)
  {
    pAttachments = _PAttachments;
    return *this;
  }
  FramebufferCreateInfo& setWidth(uint32_t _Width)
  {
    width = _Width;
    return *this;
  }
  FramebufferCreateInfo& setHeight(uint32_t _Height)
  {
    height = _Height;
    return *this;
  }
  FramebufferCreateInfo& setLayers(uint32_t _Layers)
  {
    layers = _Layers;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkFramebufferCreateFlags flags;
  VkRenderPass renderPass;
  uint32_t attachmentCount;
  const VkImageView * pAttachments;
  uint32_t width;
  uint32_t height;
  uint32_t layers;
};

class InstanceCreateInfo
{
public:
  InstanceCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  InstanceCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  InstanceCreateInfo& setFlags(VkInstanceCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  InstanceCreateInfo& setPApplicationInfo(const ApplicationInfo * _PApplicationInfo)
  {
    pApplicationInfo = _PApplicationInfo;
    return *this;
  }
  InstanceCreateInfo& setEnabledLayerCount(uint32_t _EnabledLayerCount)
  {
    enabledLayerCount = _EnabledLayerCount;
    return *this;
  }
  InstanceCreateInfo& setPpEnabledLayerNames(const char * const * _PpEnabledLayerNames)
  {
    ppEnabledLayerNames = _PpEnabledLayerNames;
    return *this;
  }
  InstanceCreateInfo& setEnabledExtensionCount(uint32_t _EnabledExtensionCount)
  {
    enabledExtensionCount = _EnabledExtensionCount;
    return *this;
  }
  InstanceCreateInfo& setPpEnabledExtensionNames(const char * const * _PpEnabledExtensionNames)
  {
    ppEnabledExtensionNames = _PpEnabledExtensionNames;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkInstanceCreateFlags flags;
  const ApplicationInfo * pApplicationInfo;
  uint32_t enabledLayerCount;
  const char * const * ppEnabledLayerNames;
  uint32_t enabledExtensionCount;
  const char * const * ppEnabledExtensionNames;
};

class PhysicalDeviceFeatures
{
public:
  PhysicalDeviceFeatures& setRobustBufferAccess(VkBool32 _RobustBufferAccess)
  {
    robustBufferAccess = _RobustBufferAccess;
    return *this;
  }
  PhysicalDeviceFeatures& setFullDrawIndexUint32(VkBool32 _FullDrawIndexUint32)
  {
    fullDrawIndexUint32 = _FullDrawIndexUint32;
    return *this;
  }
  PhysicalDeviceFeatures& setImageCubeArray(VkBool32 _ImageCubeArray)
  {
    imageCubeArray = _ImageCubeArray;
    return *this;
  }
  PhysicalDeviceFeatures& setIndependentBlend(VkBool32 _IndependentBlend)
  {
    independentBlend = _IndependentBlend;
    return *this;
  }
  PhysicalDeviceFeatures& setGeometryShader(VkBool32 _GeometryShader)
  {
    geometryShader = _GeometryShader;
    return *this;
  }
  PhysicalDeviceFeatures& setTessellationShader(VkBool32 _TessellationShader)
  {
    tessellationShader = _TessellationShader;
    return *this;
  }
  PhysicalDeviceFeatures& setSampleRateShading(VkBool32 _SampleRateShading)
  {
    sampleRateShading = _SampleRateShading;
    return *this;
  }
  PhysicalDeviceFeatures& setDualSrcBlend(VkBool32 _DualSrcBlend)
  {
    dualSrcBlend = _DualSrcBlend;
    return *this;
  }
  PhysicalDeviceFeatures& setLogicOp(VkBool32 _LogicOp)
  {
    logicOp = _LogicOp;
    return *this;
  }
  PhysicalDeviceFeatures& setMultiDrawIndirect(VkBool32 _MultiDrawIndirect)
  {
    multiDrawIndirect = _MultiDrawIndirect;
    return *this;
  }
  PhysicalDeviceFeatures& setDrawIndirectFirstInstance(VkBool32 _DrawIndirectFirstInstance)
  {
    drawIndirectFirstInstance = _DrawIndirectFirstInstance;
    return *this;
  }
  PhysicalDeviceFeatures& setDepthClamp(VkBool32 _DepthClamp)
  {
    depthClamp = _DepthClamp;
    return *this;
  }
  PhysicalDeviceFeatures& setDepthBiasClamp(VkBool32 _DepthBiasClamp)
  {
    depthBiasClamp = _DepthBiasClamp;
    return *this;
  }
  PhysicalDeviceFeatures& setFillModeNonSolid(VkBool32 _FillModeNonSolid)
  {
    fillModeNonSolid = _FillModeNonSolid;
    return *this;
  }
  PhysicalDeviceFeatures& setDepthBounds(VkBool32 _DepthBounds)
  {
    depthBounds = _DepthBounds;
    return *this;
  }
  PhysicalDeviceFeatures& setWideLines(VkBool32 _WideLines)
  {
    wideLines = _WideLines;
    return *this;
  }
  PhysicalDeviceFeatures& setLargePoints(VkBool32 _LargePoints)
  {
    largePoints = _LargePoints;
    return *this;
  }
  PhysicalDeviceFeatures& setAlphaToOne(VkBool32 _AlphaToOne)
  {
    alphaToOne = _AlphaToOne;
    return *this;
  }
  PhysicalDeviceFeatures& setMultiViewport(VkBool32 _MultiViewport)
  {
    multiViewport = _MultiViewport;
    return *this;
  }
  PhysicalDeviceFeatures& setSamplerAnisotropy(VkBool32 _SamplerAnisotropy)
  {
    samplerAnisotropy = _SamplerAnisotropy;
    return *this;
  }
  PhysicalDeviceFeatures& setTextureCompressionETC2(VkBool32 _TextureCompressionETC2)
  {
    textureCompressionETC2 = _TextureCompressionETC2;
    return *this;
  }
  PhysicalDeviceFeatures& setTextureCompressionASTC_LDR(VkBool32 _TextureCompressionASTC_LDR)
  {
    textureCompressionASTC_LDR = _TextureCompressionASTC_LDR;
    return *this;
  }
  PhysicalDeviceFeatures& setTextureCompressionBC(VkBool32 _TextureCompressionBC)
  {
    textureCompressionBC = _TextureCompressionBC;
    return *this;
  }
  PhysicalDeviceFeatures& setOcclusionQueryPrecise(VkBool32 _OcclusionQueryPrecise)
  {
    occlusionQueryPrecise = _OcclusionQueryPrecise;
    return *this;
  }
  PhysicalDeviceFeatures& setPipelineStatisticsQuery(VkBool32 _PipelineStatisticsQuery)
  {
    pipelineStatisticsQuery = _PipelineStatisticsQuery;
    return *this;
  }
  PhysicalDeviceFeatures& setVertexPipelineStoresAndAtomics(VkBool32 _VertexPipelineStoresAndAtomics)
  {
    vertexPipelineStoresAndAtomics = _VertexPipelineStoresAndAtomics;
    return *this;
  }
  PhysicalDeviceFeatures& setFragmentStoresAndAtomics(VkBool32 _FragmentStoresAndAtomics)
  {
    fragmentStoresAndAtomics = _FragmentStoresAndAtomics;
    return *this;
  }
  PhysicalDeviceFeatures& setShaderTessellationAndGeometryPointSize(VkBool32 _ShaderTessellationAndGeometryPointSize)
  {
    shaderTessellationAndGeometryPointSize = _ShaderTessellationAndGeometryPointSize;
    return *this;
  }
  PhysicalDeviceFeatures& setShaderImageGatherExtended(VkBool32 _ShaderImageGatherExtended)
  {
    shaderImageGatherExtended = _ShaderImageGatherExtended;
    return *this;
  }
  PhysicalDeviceFeatures& setShaderStorageImageExtendedFormats(VkBool32 _ShaderStorageImageExtendedFormats)
  {
    shaderStorageImageExtendedFormats = _ShaderStorageImageExtendedFormats;
    return *this;
  }
  PhysicalDeviceFeatures& setShaderStorageImageMultisample(VkBool32 _ShaderStorageImageMultisample)
  {
    shaderStorageImageMultisample = _ShaderStorageImageMultisample;
    return *this;
  }
  PhysicalDeviceFeatures& setShaderStorageImageReadWithoutFormat(VkBool32 _ShaderStorageImageReadWithoutFormat)
  {
    shaderStorageImageReadWithoutFormat = _ShaderStorageImageReadWithoutFormat;
    return *this;
  }
  PhysicalDeviceFeatures& setShaderStorageImageWriteWithoutFormat(VkBool32 _ShaderStorageImageWriteWithoutFormat)
  {
    shaderStorageImageWriteWithoutFormat = _ShaderStorageImageWriteWithoutFormat;
    return *this;
  }
  PhysicalDeviceFeatures& setShaderUniformBufferArrayDynamicIndexing(VkBool32 _ShaderUniformBufferArrayDynamicIndexing)
  {
    shaderUniformBufferArrayDynamicIndexing = _ShaderUniformBufferArrayDynamicIndexing;
    return *this;
  }
  PhysicalDeviceFeatures& setShaderSampledImageArrayDynamicIndexing(VkBool32 _ShaderSampledImageArrayDynamicIndexing)
  {
    shaderSampledImageArrayDynamicIndexing = _ShaderSampledImageArrayDynamicIndexing;
    return *this;
  }
  PhysicalDeviceFeatures& setShaderStorageBufferArrayDynamicIndexing(VkBool32 _ShaderStorageBufferArrayDynamicIndexing)
  {
    shaderStorageBufferArrayDynamicIndexing = _ShaderStorageBufferArrayDynamicIndexing;
    return *this;
  }
  PhysicalDeviceFeatures& setShaderStorageImageArrayDynamicIndexing(VkBool32 _ShaderStorageImageArrayDynamicIndexing)
  {
    shaderStorageImageArrayDynamicIndexing = _ShaderStorageImageArrayDynamicIndexing;
    return *this;
  }
  PhysicalDeviceFeatures& setShaderClipDistance(VkBool32 _ShaderClipDistance)
  {
    shaderClipDistance = _ShaderClipDistance;
    return *this;
  }
  PhysicalDeviceFeatures& setShaderCullDistance(VkBool32 _ShaderCullDistance)
  {
    shaderCullDistance = _ShaderCullDistance;
    return *this;
  }
  PhysicalDeviceFeatures& setShaderFloat64(VkBool32 _ShaderFloat64)
  {
    shaderFloat64 = _ShaderFloat64;
    return *this;
  }
  PhysicalDeviceFeatures& setShaderInt64(VkBool32 _ShaderInt64)
  {
    shaderInt64 = _ShaderInt64;
    return *this;
  }
  PhysicalDeviceFeatures& setShaderInt16(VkBool32 _ShaderInt16)
  {
    shaderInt16 = _ShaderInt16;
    return *this;
  }
  PhysicalDeviceFeatures& setShaderResourceResidency(VkBool32 _ShaderResourceResidency)
  {
    shaderResourceResidency = _ShaderResourceResidency;
    return *this;
  }
  PhysicalDeviceFeatures& setShaderResourceMinLod(VkBool32 _ShaderResourceMinLod)
  {
    shaderResourceMinLod = _ShaderResourceMinLod;
    return *this;
  }
  PhysicalDeviceFeatures& setSparseBinding(VkBool32 _SparseBinding)
  {
    sparseBinding = _SparseBinding;
    return *this;
  }
  PhysicalDeviceFeatures& setSparseResidencyBuffer(VkBool32 _SparseResidencyBuffer)
  {
    sparseResidencyBuffer = _SparseResidencyBuffer;
    return *this;
  }
  PhysicalDeviceFeatures& setSparseResidencyImage2D(VkBool32 _SparseResidencyImage2D)
  {
    sparseResidencyImage2D = _SparseResidencyImage2D;
    return *this;
  }
  PhysicalDeviceFeatures& setSparseResidencyImage3D(VkBool32 _SparseResidencyImage3D)
  {
    sparseResidencyImage3D = _SparseResidencyImage3D;
    return *this;
  }
  PhysicalDeviceFeatures& setSparseResidency2Samples(VkBool32 _SparseResidency2Samples)
  {
    sparseResidency2Samples = _SparseResidency2Samples;
    return *this;
  }
  PhysicalDeviceFeatures& setSparseResidency4Samples(VkBool32 _SparseResidency4Samples)
  {
    sparseResidency4Samples = _SparseResidency4Samples;
    return *this;
  }
  PhysicalDeviceFeatures& setSparseResidency8Samples(VkBool32 _SparseResidency8Samples)
  {
    sparseResidency8Samples = _SparseResidency8Samples;
    return *this;
  }
  PhysicalDeviceFeatures& setSparseResidency16Samples(VkBool32 _SparseResidency16Samples)
  {
    sparseResidency16Samples = _SparseResidency16Samples;
    return *this;
  }
  PhysicalDeviceFeatures& setSparseResidencyAliased(VkBool32 _SparseResidencyAliased)
  {
    sparseResidencyAliased = _SparseResidencyAliased;
    return *this;
  }
  PhysicalDeviceFeatures& setVariableMultisampleRate(VkBool32 _VariableMultisampleRate)
  {
    variableMultisampleRate = _VariableMultisampleRate;
    return *this;
  }
  PhysicalDeviceFeatures& setInheritedQueries(VkBool32 _InheritedQueries)
  {
    inheritedQueries = _InheritedQueries;
    return *this;
  }
public:
  VkBool32 robustBufferAccess;
  VkBool32 fullDrawIndexUint32;
  VkBool32 imageCubeArray;
  VkBool32 independentBlend;
  VkBool32 geometryShader;
  VkBool32 tessellationShader;
  VkBool32 sampleRateShading;
  VkBool32 dualSrcBlend;
  VkBool32 logicOp;
  VkBool32 multiDrawIndirect;
  VkBool32 drawIndirectFirstInstance;
  VkBool32 depthClamp;
  VkBool32 depthBiasClamp;
  VkBool32 fillModeNonSolid;
  VkBool32 depthBounds;
  VkBool32 wideLines;
  VkBool32 largePoints;
  VkBool32 alphaToOne;
  VkBool32 multiViewport;
  VkBool32 samplerAnisotropy;
  VkBool32 textureCompressionETC2;
  VkBool32 textureCompressionASTC_LDR;
  VkBool32 textureCompressionBC;
  VkBool32 occlusionQueryPrecise;
  VkBool32 pipelineStatisticsQuery;
  VkBool32 vertexPipelineStoresAndAtomics;
  VkBool32 fragmentStoresAndAtomics;
  VkBool32 shaderTessellationAndGeometryPointSize;
  VkBool32 shaderImageGatherExtended;
  VkBool32 shaderStorageImageExtendedFormats;
  VkBool32 shaderStorageImageMultisample;
  VkBool32 shaderStorageImageReadWithoutFormat;
  VkBool32 shaderStorageImageWriteWithoutFormat;
  VkBool32 shaderUniformBufferArrayDynamicIndexing;
  VkBool32 shaderSampledImageArrayDynamicIndexing;
  VkBool32 shaderStorageBufferArrayDynamicIndexing;
  VkBool32 shaderStorageImageArrayDynamicIndexing;
  VkBool32 shaderClipDistance;
  VkBool32 shaderCullDistance;
  VkBool32 shaderFloat64;
  VkBool32 shaderInt64;
  VkBool32 shaderInt16;
  VkBool32 shaderResourceResidency;
  VkBool32 shaderResourceMinLod;
  VkBool32 sparseBinding;
  VkBool32 sparseResidencyBuffer;
  VkBool32 sparseResidencyImage2D;
  VkBool32 sparseResidencyImage3D;
  VkBool32 sparseResidency2Samples;
  VkBool32 sparseResidency4Samples;
  VkBool32 sparseResidency8Samples;
  VkBool32 sparseResidency16Samples;
  VkBool32 sparseResidencyAliased;
  VkBool32 variableMultisampleRate;
  VkBool32 inheritedQueries;
};

class Win32KeyedMutexAcquireReleaseInfoNV
{
public:
  Win32KeyedMutexAcquireReleaseInfoNV& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  Win32KeyedMutexAcquireReleaseInfoNV& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  Win32KeyedMutexAcquireReleaseInfoNV& setAcquireCount(uint32_t _AcquireCount)
  {
    acquireCount = _AcquireCount;
    return *this;
  }
  Win32KeyedMutexAcquireReleaseInfoNV& setPAcquireSyncs(const VkDeviceMemory * _PAcquireSyncs)
  {
    pAcquireSyncs = _PAcquireSyncs;
    return *this;
  }
  Win32KeyedMutexAcquireReleaseInfoNV& setPAcquireKeys(const uint64_t * _PAcquireKeys)
  {
    pAcquireKeys = _PAcquireKeys;
    return *this;
  }
  Win32KeyedMutexAcquireReleaseInfoNV& setPAcquireTimeoutMilliseconds(const uint32_t * _PAcquireTimeoutMilliseconds)
  {
    pAcquireTimeoutMilliseconds = _PAcquireTimeoutMilliseconds;
    return *this;
  }
  Win32KeyedMutexAcquireReleaseInfoNV& setReleaseCount(uint32_t _ReleaseCount)
  {
    releaseCount = _ReleaseCount;
    return *this;
  }
  Win32KeyedMutexAcquireReleaseInfoNV& setPReleaseSyncs(const VkDeviceMemory * _PReleaseSyncs)
  {
    pReleaseSyncs = _PReleaseSyncs;
    return *this;
  }
  Win32KeyedMutexAcquireReleaseInfoNV& setPReleaseKeys(const uint64_t * _PReleaseKeys)
  {
    pReleaseKeys = _PReleaseKeys;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t acquireCount;
  const VkDeviceMemory * pAcquireSyncs;
  const uint64_t * pAcquireKeys;
  const uint32_t * pAcquireTimeoutMilliseconds;
  uint32_t releaseCount;
  const VkDeviceMemory * pReleaseSyncs;
  const uint64_t * pReleaseKeys;
};

class MirSurfaceCreateInfoKHR
{
public:
  MirSurfaceCreateInfoKHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  MirSurfaceCreateInfoKHR& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  MirSurfaceCreateInfoKHR& setFlags(VkMirSurfaceCreateFlagsKHR _Flags)
  {
    flags = _Flags;
    return *this;
  }
  MirSurfaceCreateInfoKHR& setConnection(MirConnection * _Connection)
  {
    connection = _Connection;
    return *this;
  }
  MirSurfaceCreateInfoKHR& setMirSurface(MirSurface * _MirSurface)
  {
    mirSurface = _MirSurface;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkMirSurfaceCreateFlagsKHR flags;
  MirConnection * connection;
  MirSurface * mirSurface;
};

class DeviceGeneratedCommandsLimitsNVX
{
public:
  DeviceGeneratedCommandsLimitsNVX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DeviceGeneratedCommandsLimitsNVX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DeviceGeneratedCommandsLimitsNVX& setMaxIndirectCommandsLayoutTokenCount(uint32_t _MaxIndirectCommandsLayoutTokenCount)
  {
    maxIndirectCommandsLayoutTokenCount = _MaxIndirectCommandsLayoutTokenCount;
    return *this;
  }
  DeviceGeneratedCommandsLimitsNVX& setMaxObjectEntryCounts(uint32_t _MaxObjectEntryCounts)
  {
    maxObjectEntryCounts = _MaxObjectEntryCounts;
    return *this;
  }
  DeviceGeneratedCommandsLimitsNVX& setMinSequenceCountBufferOffsetAlignment(uint32_t _MinSequenceCountBufferOffsetAlignment)
  {
    minSequenceCountBufferOffsetAlignment = _MinSequenceCountBufferOffsetAlignment;
    return *this;
  }
  DeviceGeneratedCommandsLimitsNVX& setMinSequenceIndexBufferOffsetAlignment(uint32_t _MinSequenceIndexBufferOffsetAlignment)
  {
    minSequenceIndexBufferOffsetAlignment = _MinSequenceIndexBufferOffsetAlignment;
    return *this;
  }
  DeviceGeneratedCommandsLimitsNVX& setMinCommandsTokenBufferOffsetAlignment(uint32_t _MinCommandsTokenBufferOffsetAlignment)
  {
    minCommandsTokenBufferOffsetAlignment = _MinCommandsTokenBufferOffsetAlignment;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t maxIndirectCommandsLayoutTokenCount;
  uint32_t maxObjectEntryCounts;
  uint32_t minSequenceCountBufferOffsetAlignment;
  uint32_t minSequenceIndexBufferOffsetAlignment;
  uint32_t minCommandsTokenBufferOffsetAlignment;
};

class CmdReserveSpaceForCommandsInfoNVX
{
public:
  CmdReserveSpaceForCommandsInfoNVX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  CmdReserveSpaceForCommandsInfoNVX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  CmdReserveSpaceForCommandsInfoNVX& setObjectTable(VkObjectTableNVX _ObjectTable)
  {
    objectTable = _ObjectTable;
    return *this;
  }
  CmdReserveSpaceForCommandsInfoNVX& setIndirectCommandsLayout(VkIndirectCommandsLayoutNVX _IndirectCommandsLayout)
  {
    indirectCommandsLayout = _IndirectCommandsLayout;
    return *this;
  }
  CmdReserveSpaceForCommandsInfoNVX& setMaxSequencesCount(uint32_t _MaxSequencesCount)
  {
    maxSequencesCount = _MaxSequencesCount;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkObjectTableNVX objectTable;
  VkIndirectCommandsLayoutNVX indirectCommandsLayout;
  uint32_t maxSequencesCount;
};

class DescriptorImageInfo
{
public:
  DescriptorImageInfo& setSampler(VkSampler _Sampler)
  {
    sampler = _Sampler;
    return *this;
  }
  DescriptorImageInfo& setImageView(VkImageView _ImageView)
  {
    imageView = _ImageView;
    return *this;
  }
  DescriptorImageInfo& setImageLayout(VkImageLayout _ImageLayout)
  {
    imageLayout = _ImageLayout;
    return *this;
  }
public:
  VkSampler sampler;
  VkImageView imageView;
  VkImageLayout imageLayout;
};

class Extent2D
{
public:
  Extent2D& setWidth(uint32_t _Width)
  {
    width = _Width;
    return *this;
  }
  Extent2D& setHeight(uint32_t _Height)
  {
    height = _Height;
    return *this;
  }
public:
  uint32_t width;
  uint32_t height;
};

class Win32SurfaceCreateInfoKHR
{
public:
  Win32SurfaceCreateInfoKHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  Win32SurfaceCreateInfoKHR& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  Win32SurfaceCreateInfoKHR& setFlags(VkWin32SurfaceCreateFlagsKHR _Flags)
  {
    flags = _Flags;
    return *this;
  }
  Win32SurfaceCreateInfoKHR& setHinstance(HINSTANCE _Hinstance)
  {
    hinstance = _Hinstance;
    return *this;
  }
  Win32SurfaceCreateInfoKHR& setHwnd(HWND _Hwnd)
  {
    hwnd = _Hwnd;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkWin32SurfaceCreateFlagsKHR flags;
  HINSTANCE hinstance;
  HWND hwnd;
};

class CommandBufferInheritanceInfo
{
public:
  CommandBufferInheritanceInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  CommandBufferInheritanceInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  CommandBufferInheritanceInfo& setRenderPass(VkRenderPass _RenderPass)
  {
    renderPass = _RenderPass;
    return *this;
  }
  CommandBufferInheritanceInfo& setSubpass(uint32_t _Subpass)
  {
    subpass = _Subpass;
    return *this;
  }
  CommandBufferInheritanceInfo& setFramebuffer(VkFramebuffer _Framebuffer)
  {
    framebuffer = _Framebuffer;
    return *this;
  }
  CommandBufferInheritanceInfo& setOcclusionQueryEnable(VkBool32 _OcclusionQueryEnable)
  {
    occlusionQueryEnable = _OcclusionQueryEnable;
    return *this;
  }
  CommandBufferInheritanceInfo& setQueryFlags(VkQueryControlFlags _QueryFlags)
  {
    queryFlags = _QueryFlags;
    return *this;
  }
  CommandBufferInheritanceInfo& setPipelineStatistics(VkQueryPipelineStatisticFlags _PipelineStatistics)
  {
    pipelineStatistics = _PipelineStatistics;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkRenderPass renderPass;
  uint32_t subpass;
  VkFramebuffer framebuffer;
  VkBool32 occlusionQueryEnable;
  VkQueryControlFlags queryFlags;
  VkQueryPipelineStatisticFlags pipelineStatistics;
};

class ExternalMemoryBufferCreateInfoKHX
{
public:
  ExternalMemoryBufferCreateInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ExternalMemoryBufferCreateInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ExternalMemoryBufferCreateInfoKHX& setHandleTypes(VkExternalMemoryHandleTypeFlagsKHX _HandleTypes)
  {
    handleTypes = _HandleTypes;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkExternalMemoryHandleTypeFlagsKHX handleTypes;
};

class ExternalImageFormatPropertiesNV
{
public:
  ExternalImageFormatPropertiesNV& setImageFormatProperties(ImageFormatProperties _ImageFormatProperties)
  {
    imageFormatProperties = _ImageFormatProperties;
    return *this;
  }
  ExternalImageFormatPropertiesNV& setExternalMemoryFeatures(VkExternalMemoryFeatureFlagsNV _ExternalMemoryFeatures)
  {
    externalMemoryFeatures = _ExternalMemoryFeatures;
    return *this;
  }
  ExternalImageFormatPropertiesNV& setExportFromImportedHandleTypes(VkExternalMemoryHandleTypeFlagsNV _ExportFromImportedHandleTypes)
  {
    exportFromImportedHandleTypes = _ExportFromImportedHandleTypes;
    return *this;
  }
  ExternalImageFormatPropertiesNV& setCompatibleHandleTypes(VkExternalMemoryHandleTypeFlagsNV _CompatibleHandleTypes)
  {
    compatibleHandleTypes = _CompatibleHandleTypes;
    return *this;
  }
public:
  ImageFormatProperties imageFormatProperties;
  VkExternalMemoryFeatureFlagsNV externalMemoryFeatures;
  VkExternalMemoryHandleTypeFlagsNV exportFromImportedHandleTypes;
  VkExternalMemoryHandleTypeFlagsNV compatibleHandleTypes;
};

class PhysicalDevicePushDescriptorPropertiesKHR
{
public:
  PhysicalDevicePushDescriptorPropertiesKHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PhysicalDevicePushDescriptorPropertiesKHR& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PhysicalDevicePushDescriptorPropertiesKHR& setMaxPushDescriptors(uint32_t _MaxPushDescriptors)
  {
    maxPushDescriptors = _MaxPushDescriptors;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  uint32_t maxPushDescriptors;
};

class ImportMemoryWin32HandleInfoNV
{
public:
  ImportMemoryWin32HandleInfoNV& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ImportMemoryWin32HandleInfoNV& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ImportMemoryWin32HandleInfoNV& setHandleType(VkExternalMemoryHandleTypeFlagsNV _HandleType)
  {
    handleType = _HandleType;
    return *this;
  }
  ImportMemoryWin32HandleInfoNV& setHandle(HANDLE _Handle)
  {
    handle = _Handle;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkExternalMemoryHandleTypeFlagsNV handleType;
  HANDLE handle;
};

class DescriptorSetAllocateInfo
{
public:
  DescriptorSetAllocateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DescriptorSetAllocateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DescriptorSetAllocateInfo& setDescriptorPool(VkDescriptorPool _DescriptorPool)
  {
    descriptorPool = _DescriptorPool;
    return *this;
  }
  DescriptorSetAllocateInfo& setDescriptorSetCount(uint32_t _DescriptorSetCount)
  {
    descriptorSetCount = _DescriptorSetCount;
    return *this;
  }
  DescriptorSetAllocateInfo& setPSetLayouts(const VkDescriptorSetLayout * _PSetLayouts)
  {
    pSetLayouts = _PSetLayouts;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDescriptorPool descriptorPool;
  uint32_t descriptorSetCount;
  const VkDescriptorSetLayout * pSetLayouts;
};

class FenceCreateInfo
{
public:
  FenceCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  FenceCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  FenceCreateInfo& setFlags(VkFenceCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkFenceCreateFlags flags;
};

class ClearValue
{
public:
  ClearValue& setColor(ClearColorValue _Color)
  {
    color = _Color;
    return *this;
  }
  ClearValue& setDepthStencil(ClearDepthStencilValue _DepthStencil)
  {
    depthStencil = _DepthStencil;
    return *this;
  }
public:
  ClearColorValue color;
  ClearDepthStencilValue depthStencil;
};

class MemoryWin32HandlePropertiesKHX
{
public:
  MemoryWin32HandlePropertiesKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  MemoryWin32HandlePropertiesKHX& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  MemoryWin32HandlePropertiesKHX& setMemoryTypeBits(uint32_t _MemoryTypeBits)
  {
    memoryTypeBits = _MemoryTypeBits;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  uint32_t memoryTypeBits;
};

class SubpassDescription
{
public:
  SubpassDescription& setFlags(VkSubpassDescriptionFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  SubpassDescription& setPipelineBindPoint(VkPipelineBindPoint _PipelineBindPoint)
  {
    pipelineBindPoint = _PipelineBindPoint;
    return *this;
  }
  SubpassDescription& setInputAttachmentCount(uint32_t _InputAttachmentCount)
  {
    inputAttachmentCount = _InputAttachmentCount;
    return *this;
  }
  SubpassDescription& setPInputAttachments(const AttachmentReference * _PInputAttachments)
  {
    pInputAttachments = _PInputAttachments;
    return *this;
  }
  SubpassDescription& setColorAttachmentCount(uint32_t _ColorAttachmentCount)
  {
    colorAttachmentCount = _ColorAttachmentCount;
    return *this;
  }
  SubpassDescription& setPColorAttachments(const AttachmentReference * _PColorAttachments)
  {
    pColorAttachments = _PColorAttachments;
    return *this;
  }
  SubpassDescription& setPResolveAttachments(const AttachmentReference * _PResolveAttachments)
  {
    pResolveAttachments = _PResolveAttachments;
    return *this;
  }
  SubpassDescription& setPDepthStencilAttachment(const AttachmentReference * _PDepthStencilAttachment)
  {
    pDepthStencilAttachment = _PDepthStencilAttachment;
    return *this;
  }
  SubpassDescription& setPreserveAttachmentCount(uint32_t _PreserveAttachmentCount)
  {
    preserveAttachmentCount = _PreserveAttachmentCount;
    return *this;
  }
  SubpassDescription& setPPreserveAttachments(const uint32_t * _PPreserveAttachments)
  {
    pPreserveAttachments = _PPreserveAttachments;
    return *this;
  }
public:
  VkSubpassDescriptionFlags flags;
  VkPipelineBindPoint pipelineBindPoint;
  uint32_t inputAttachmentCount;
  const AttachmentReference * pInputAttachments;
  uint32_t colorAttachmentCount;
  const AttachmentReference * pColorAttachments;
  const AttachmentReference * pResolveAttachments;
  const AttachmentReference * pDepthStencilAttachment;
  uint32_t preserveAttachmentCount;
  const uint32_t * pPreserveAttachments;
};

class DedicatedAllocationImageCreateInfoNV
{
public:
  DedicatedAllocationImageCreateInfoNV& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DedicatedAllocationImageCreateInfoNV& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DedicatedAllocationImageCreateInfoNV& setDedicatedAllocation(VkBool32 _DedicatedAllocation)
  {
    dedicatedAllocation = _DedicatedAllocation;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkBool32 dedicatedAllocation;
};

class ExportSemaphoreCreateInfoKHX
{
public:
  ExportSemaphoreCreateInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ExportSemaphoreCreateInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ExportSemaphoreCreateInfoKHX& setHandleTypes(VkExternalSemaphoreHandleTypeFlagsKHX _HandleTypes)
  {
    handleTypes = _HandleTypes;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkExternalSemaphoreHandleTypeFlagsKHX handleTypes;
};

class ComponentMapping
{
public:
  ComponentMapping& setR(VkComponentSwizzle _R)
  {
    r = _R;
    return *this;
  }
  ComponentMapping& setG(VkComponentSwizzle _G)
  {
    g = _G;
    return *this;
  }
  ComponentMapping& setB(VkComponentSwizzle _B)
  {
    b = _B;
    return *this;
  }
  ComponentMapping& setA(VkComponentSwizzle _A)
  {
    a = _A;
    return *this;
  }
public:
  VkComponentSwizzle r;
  VkComponentSwizzle g;
  VkComponentSwizzle b;
  VkComponentSwizzle a;
};

class MacOSSurfaceCreateInfoMVK
{
public:
  MacOSSurfaceCreateInfoMVK& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  MacOSSurfaceCreateInfoMVK& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  MacOSSurfaceCreateInfoMVK& setFlags(VkMacOSSurfaceCreateFlagsMVK _Flags)
  {
    flags = _Flags;
    return *this;
  }
  MacOSSurfaceCreateInfoMVK& setPView(const void * _PView)
  {
    pView = _PView;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkMacOSSurfaceCreateFlagsMVK flags;
  const void * pView;
};

class Offset3D
{
public:
  Offset3D& setX(int32_t _X)
  {
    x = _X;
    return *this;
  }
  Offset3D& setY(int32_t _Y)
  {
    y = _Y;
    return *this;
  }
  Offset3D& setZ(int32_t _Z)
  {
    z = _Z;
    return *this;
  }
public:
  int32_t x;
  int32_t y;
  int32_t z;
};

class Rect2D
{
public:
  Rect2D& setOffset(Offset2D _Offset)
  {
    offset = _Offset;
    return *this;
  }
  Rect2D& setExtent(Extent2D _Extent)
  {
    extent = _Extent;
    return *this;
  }
public:
  Offset2D offset;
  Extent2D extent;
};

class DeviceEventInfoEXT
{
public:
  DeviceEventInfoEXT& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DeviceEventInfoEXT& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DeviceEventInfoEXT& setDeviceEvent(VkDeviceEventTypeEXT _DeviceEvent)
  {
    deviceEvent = _DeviceEvent;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDeviceEventTypeEXT deviceEvent;
};

class XlibSurfaceCreateInfoKHR
{
public:
  XlibSurfaceCreateInfoKHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  XlibSurfaceCreateInfoKHR& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  XlibSurfaceCreateInfoKHR& setFlags(VkXlibSurfaceCreateFlagsKHR _Flags)
  {
    flags = _Flags;
    return *this;
  }
  XlibSurfaceCreateInfoKHR& setDpy(Display * _Dpy)
  {
    dpy = _Dpy;
    return *this;
  }
  XlibSurfaceCreateInfoKHR& setWindow(Window _Window)
  {
    window = _Window;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkXlibSurfaceCreateFlagsKHR flags;
  Display * dpy;
  Window window;
};

class AndroidSurfaceCreateInfoKHR
{
public:
  AndroidSurfaceCreateInfoKHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  AndroidSurfaceCreateInfoKHR& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  AndroidSurfaceCreateInfoKHR& setFlags(VkAndroidSurfaceCreateFlagsKHR _Flags)
  {
    flags = _Flags;
    return *this;
  }
  AndroidSurfaceCreateInfoKHR& setWindow(ANativeWindow * _Window)
  {
    window = _Window;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkAndroidSurfaceCreateFlagsKHR flags;
  ANativeWindow * window;
};

class SparseImageMemoryBindInfo
{
public:
  SparseImageMemoryBindInfo& setImage(VkImage _Image)
  {
    image = _Image;
    return *this;
  }
  SparseImageMemoryBindInfo& setBindCount(uint32_t _BindCount)
  {
    bindCount = _BindCount;
    return *this;
  }
  SparseImageMemoryBindInfo& setPBinds(const SparseImageMemoryBind * _PBinds)
  {
    pBinds = _PBinds;
    return *this;
  }
public:
  VkImage image;
  uint32_t bindCount;
  const SparseImageMemoryBind * pBinds;
};

class DisplayPlanePropertiesKHR
{
public:
  DisplayPlanePropertiesKHR& setCurrentDisplay(VkDisplayKHR _CurrentDisplay)
  {
    currentDisplay = _CurrentDisplay;
    return *this;
  }
  DisplayPlanePropertiesKHR& setCurrentStackIndex(uint32_t _CurrentStackIndex)
  {
    currentStackIndex = _CurrentStackIndex;
    return *this;
  }
public:
  VkDisplayKHR currentDisplay;
  uint32_t currentStackIndex;
};

class ImageCreateInfo
{
public:
  ImageCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ImageCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ImageCreateInfo& setFlags(VkImageCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  ImageCreateInfo& setImageType(VkImageType _ImageType)
  {
    imageType = _ImageType;
    return *this;
  }
  ImageCreateInfo& setFormat(VkFormat _Format)
  {
    format = _Format;
    return *this;
  }
  ImageCreateInfo& setExtent(Extent3D _Extent)
  {
    extent = _Extent;
    return *this;
  }
  ImageCreateInfo& setMipLevels(uint32_t _MipLevels)
  {
    mipLevels = _MipLevels;
    return *this;
  }
  ImageCreateInfo& setArrayLayers(uint32_t _ArrayLayers)
  {
    arrayLayers = _ArrayLayers;
    return *this;
  }
  ImageCreateInfo& setSamples(VkSampleCountFlagBits _Samples)
  {
    samples = _Samples;
    return *this;
  }
  ImageCreateInfo& setTiling(VkImageTiling _Tiling)
  {
    tiling = _Tiling;
    return *this;
  }
  ImageCreateInfo& setUsage(VkImageUsageFlags _Usage)
  {
    usage = _Usage;
    return *this;
  }
  ImageCreateInfo& setSharingMode(VkSharingMode _SharingMode)
  {
    sharingMode = _SharingMode;
    return *this;
  }
  ImageCreateInfo& setQueueFamilyIndexCount(uint32_t _QueueFamilyIndexCount)
  {
    queueFamilyIndexCount = _QueueFamilyIndexCount;
    return *this;
  }
  ImageCreateInfo& setPQueueFamilyIndices(const uint32_t * _PQueueFamilyIndices)
  {
    pQueueFamilyIndices = _PQueueFamilyIndices;
    return *this;
  }
  ImageCreateInfo& setInitialLayout(VkImageLayout _InitialLayout)
  {
    initialLayout = _InitialLayout;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkImageCreateFlags flags;
  VkImageType imageType;
  VkFormat format;
  Extent3D extent;
  uint32_t mipLevels;
  uint32_t arrayLayers;
  VkSampleCountFlagBits samples;
  VkImageTiling tiling;
  VkImageUsageFlags usage;
  VkSharingMode sharingMode;
  uint32_t queueFamilyIndexCount;
  const uint32_t * pQueueFamilyIndices;
  VkImageLayout initialLayout;
};

class DeviceQueueCreateInfo
{
public:
  DeviceQueueCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DeviceQueueCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DeviceQueueCreateInfo& setFlags(VkDeviceQueueCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  DeviceQueueCreateInfo& setQueueFamilyIndex(uint32_t _QueueFamilyIndex)
  {
    queueFamilyIndex = _QueueFamilyIndex;
    return *this;
  }
  DeviceQueueCreateInfo& setQueueCount(uint32_t _QueueCount)
  {
    queueCount = _QueueCount;
    return *this;
  }
  DeviceQueueCreateInfo& setPQueuePriorities(const float * _PQueuePriorities)
  {
    pQueuePriorities = _PQueuePriorities;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDeviceQueueCreateFlags flags;
  uint32_t queueFamilyIndex;
  uint32_t queueCount;
  const float * pQueuePriorities;
};

class DisplayEventInfoEXT
{
public:
  DisplayEventInfoEXT& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DisplayEventInfoEXT& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DisplayEventInfoEXT& setDisplayEvent(VkDisplayEventTypeEXT _DisplayEvent)
  {
    displayEvent = _DisplayEvent;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDisplayEventTypeEXT displayEvent;
};

class Extent3D
{
public:
  Extent3D& setWidth(uint32_t _Width)
  {
    width = _Width;
    return *this;
  }
  Extent3D& setHeight(uint32_t _Height)
  {
    height = _Height;
    return *this;
  }
  Extent3D& setDepth(uint32_t _Depth)
  {
    depth = _Depth;
    return *this;
  }
public:
  uint32_t width;
  uint32_t height;
  uint32_t depth;
};

class PipelineShaderStageCreateInfo
{
public:
  PipelineShaderStageCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PipelineShaderStageCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PipelineShaderStageCreateInfo& setFlags(VkPipelineShaderStageCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  PipelineShaderStageCreateInfo& setStage(VkShaderStageFlagBits _Stage)
  {
    stage = _Stage;
    return *this;
  }
  PipelineShaderStageCreateInfo& setModule(VkShaderModule _Module)
  {
    module = _Module;
    return *this;
  }
  PipelineShaderStageCreateInfo& setPName(const char * _PName)
  {
    pName = _PName;
    return *this;
  }
  PipelineShaderStageCreateInfo& setPSpecializationInfo(const SpecializationInfo * _PSpecializationInfo)
  {
    pSpecializationInfo = _PSpecializationInfo;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkPipelineShaderStageCreateFlags flags;
  VkShaderStageFlagBits stage;
  VkShaderModule module;
  const char * pName;
  const SpecializationInfo * pSpecializationInfo;
};

class ObjectTableCreateInfoNVX
{
public:
  ObjectTableCreateInfoNVX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ObjectTableCreateInfoNVX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ObjectTableCreateInfoNVX& setObjectCount(uint32_t _ObjectCount)
  {
    objectCount = _ObjectCount;
    return *this;
  }
  ObjectTableCreateInfoNVX& setPObjectEntryTypes(const VkObjectEntryTypeNVX * _PObjectEntryTypes)
  {
    pObjectEntryTypes = _PObjectEntryTypes;
    return *this;
  }
  ObjectTableCreateInfoNVX& setPObjectEntryCounts(const uint32_t * _PObjectEntryCounts)
  {
    pObjectEntryCounts = _PObjectEntryCounts;
    return *this;
  }
  ObjectTableCreateInfoNVX& setPObjectEntryUsageFlags(const VkObjectEntryUsageFlagsNVX * _PObjectEntryUsageFlags)
  {
    pObjectEntryUsageFlags = _PObjectEntryUsageFlags;
    return *this;
  }
  ObjectTableCreateInfoNVX& setMaxUniformBuffersPerDescriptor(uint32_t _MaxUniformBuffersPerDescriptor)
  {
    maxUniformBuffersPerDescriptor = _MaxUniformBuffersPerDescriptor;
    return *this;
  }
  ObjectTableCreateInfoNVX& setMaxStorageBuffersPerDescriptor(uint32_t _MaxStorageBuffersPerDescriptor)
  {
    maxStorageBuffersPerDescriptor = _MaxStorageBuffersPerDescriptor;
    return *this;
  }
  ObjectTableCreateInfoNVX& setMaxStorageImagesPerDescriptor(uint32_t _MaxStorageImagesPerDescriptor)
  {
    maxStorageImagesPerDescriptor = _MaxStorageImagesPerDescriptor;
    return *this;
  }
  ObjectTableCreateInfoNVX& setMaxSampledImagesPerDescriptor(uint32_t _MaxSampledImagesPerDescriptor)
  {
    maxSampledImagesPerDescriptor = _MaxSampledImagesPerDescriptor;
    return *this;
  }
  ObjectTableCreateInfoNVX& setMaxPipelineLayouts(uint32_t _MaxPipelineLayouts)
  {
    maxPipelineLayouts = _MaxPipelineLayouts;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t objectCount;
  const VkObjectEntryTypeNVX * pObjectEntryTypes;
  const uint32_t * pObjectEntryCounts;
  const VkObjectEntryUsageFlagsNVX * pObjectEntryUsageFlags;
  uint32_t maxUniformBuffersPerDescriptor;
  uint32_t maxStorageBuffersPerDescriptor;
  uint32_t maxStorageImagesPerDescriptor;
  uint32_t maxSampledImagesPerDescriptor;
  uint32_t maxPipelineLayouts;
};

class ImageCopy
{
public:
  ImageCopy& setSrcSubresource(ImageSubresourceLayers _SrcSubresource)
  {
    srcSubresource = _SrcSubresource;
    return *this;
  }
  ImageCopy& setSrcOffset(Offset3D _SrcOffset)
  {
    srcOffset = _SrcOffset;
    return *this;
  }
  ImageCopy& setDstSubresource(ImageSubresourceLayers _DstSubresource)
  {
    dstSubresource = _DstSubresource;
    return *this;
  }
  ImageCopy& setDstOffset(Offset3D _DstOffset)
  {
    dstOffset = _DstOffset;
    return *this;
  }
  ImageCopy& setExtent(Extent3D _Extent)
  {
    extent = _Extent;
    return *this;
  }
public:
  ImageSubresourceLayers srcSubresource;
  Offset3D srcOffset;
  ImageSubresourceLayers dstSubresource;
  Offset3D dstOffset;
  Extent3D extent;
};

class PipelineViewportStateCreateInfo
{
public:
  PipelineViewportStateCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PipelineViewportStateCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PipelineViewportStateCreateInfo& setFlags(VkPipelineViewportStateCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  PipelineViewportStateCreateInfo& setViewportCount(uint32_t _ViewportCount)
  {
    viewportCount = _ViewportCount;
    return *this;
  }
  PipelineViewportStateCreateInfo& setPViewports(const Viewport * _PViewports)
  {
    pViewports = _PViewports;
    return *this;
  }
  PipelineViewportStateCreateInfo& setScissorCount(uint32_t _ScissorCount)
  {
    scissorCount = _ScissorCount;
    return *this;
  }
  PipelineViewportStateCreateInfo& setPScissors(const Rect2D * _PScissors)
  {
    pScissors = _PScissors;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkPipelineViewportStateCreateFlags flags;
  uint32_t viewportCount;
  const Viewport * pViewports;
  uint32_t scissorCount;
  const Rect2D * pScissors;
};

class PipelineInputAssemblyStateCreateInfo
{
public:
  PipelineInputAssemblyStateCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PipelineInputAssemblyStateCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PipelineInputAssemblyStateCreateInfo& setFlags(VkPipelineInputAssemblyStateCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  PipelineInputAssemblyStateCreateInfo& setTopology(VkPrimitiveTopology _Topology)
  {
    topology = _Topology;
    return *this;
  }
  PipelineInputAssemblyStateCreateInfo& setPrimitiveRestartEnable(VkBool32 _PrimitiveRestartEnable)
  {
    primitiveRestartEnable = _PrimitiveRestartEnable;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkPipelineInputAssemblyStateCreateFlags flags;
  VkPrimitiveTopology topology;
  VkBool32 primitiveRestartEnable;
};

class ClearAttachment
{
public:
  ClearAttachment& setAspectMask(VkImageAspectFlags _AspectMask)
  {
    aspectMask = _AspectMask;
    return *this;
  }
  ClearAttachment& setColorAttachment(uint32_t _ColorAttachment)
  {
    colorAttachment = _ColorAttachment;
    return *this;
  }
  ClearAttachment& setClearValue(ClearValue _ClearValue)
  {
    clearValue = _ClearValue;
    return *this;
  }
public:
  VkImageAspectFlags aspectMask;
  uint32_t colorAttachment;
  ClearValue clearValue;
};

class ImageSwapchainCreateInfoKHX
{
public:
  ImageSwapchainCreateInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ImageSwapchainCreateInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ImageSwapchainCreateInfoKHX& setSwapchain(VkSwapchainKHR _Swapchain)
  {
    swapchain = _Swapchain;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkSwapchainKHR swapchain;
};

class Offset2D
{
public:
  Offset2D& setX(int32_t _X)
  {
    x = _X;
    return *this;
  }
  Offset2D& setY(int32_t _Y)
  {
    y = _Y;
    return *this;
  }
public:
  int32_t x;
  int32_t y;
};

class PhysicalDeviceFeatures2KHR
{
public:
  PhysicalDeviceFeatures2KHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PhysicalDeviceFeatures2KHR& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PhysicalDeviceFeatures2KHR& setFeatures(PhysicalDeviceFeatures _Features)
  {
    features = _Features;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  PhysicalDeviceFeatures features;
};

class DescriptorSetLayoutBinding
{
public:
  DescriptorSetLayoutBinding& setBinding(uint32_t _Binding)
  {
    binding = _Binding;
    return *this;
  }
  DescriptorSetLayoutBinding& setDescriptorType(VkDescriptorType _DescriptorType)
  {
    descriptorType = _DescriptorType;
    return *this;
  }
  DescriptorSetLayoutBinding& setDescriptorCount(uint32_t _DescriptorCount)
  {
    descriptorCount = _DescriptorCount;
    return *this;
  }
  DescriptorSetLayoutBinding& setStageFlags(VkShaderStageFlags _StageFlags)
  {
    stageFlags = _StageFlags;
    return *this;
  }
  DescriptorSetLayoutBinding& setPImmutableSamplers(const VkSampler * _PImmutableSamplers)
  {
    pImmutableSamplers = _PImmutableSamplers;
    return *this;
  }
public:
  uint32_t binding;
  VkDescriptorType descriptorType;
  uint32_t descriptorCount;
  VkShaderStageFlags stageFlags;
  const VkSampler * pImmutableSamplers;
};

class RenderPassCreateInfo
{
public:
  RenderPassCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  RenderPassCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  RenderPassCreateInfo& setFlags(VkRenderPassCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  RenderPassCreateInfo& setAttachmentCount(uint32_t _AttachmentCount)
  {
    attachmentCount = _AttachmentCount;
    return *this;
  }
  RenderPassCreateInfo& setPAttachments(const AttachmentDescription * _PAttachments)
  {
    pAttachments = _PAttachments;
    return *this;
  }
  RenderPassCreateInfo& setSubpassCount(uint32_t _SubpassCount)
  {
    subpassCount = _SubpassCount;
    return *this;
  }
  RenderPassCreateInfo& setPSubpasses(const SubpassDescription * _PSubpasses)
  {
    pSubpasses = _PSubpasses;
    return *this;
  }
  RenderPassCreateInfo& setDependencyCount(uint32_t _DependencyCount)
  {
    dependencyCount = _DependencyCount;
    return *this;
  }
  RenderPassCreateInfo& setPDependencies(const SubpassDependency * _PDependencies)
  {
    pDependencies = _PDependencies;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkRenderPassCreateFlags flags;
  uint32_t attachmentCount;
  const AttachmentDescription * pAttachments;
  uint32_t subpassCount;
  const SubpassDescription * pSubpasses;
  uint32_t dependencyCount;
  const SubpassDependency * pDependencies;
};

class ObjectTableEntryNVX
{
public:
  ObjectTableEntryNVX& setType(VkObjectEntryTypeNVX _Type)
  {
    type = _Type;
    return *this;
  }
  ObjectTableEntryNVX& setFlags(VkObjectEntryUsageFlagsNVX _Flags)
  {
    flags = _Flags;
    return *this;
  }
public:
  VkObjectEntryTypeNVX type;
  VkObjectEntryUsageFlagsNVX flags;
};

class ClearColorValue
{
public:
  ClearColorValue& setFloat32(float _Float32)
  {
    float32 = _Float32;
    return *this;
  }
  ClearColorValue& setInt32(int32_t _Int32)
  {
    int32 = _Int32;
    return *this;
  }
  ClearColorValue& setUint32(uint32_t _Uint32)
  {
    uint32 = _Uint32;
    return *this;
  }
public:
  float float32;
  int32_t int32;
  uint32_t uint32;
};

class BindImageMemorySwapchainInfoKHX
{
public:
  BindImageMemorySwapchainInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  BindImageMemorySwapchainInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  BindImageMemorySwapchainInfoKHX& setSwapchain(VkSwapchainKHR _Swapchain)
  {
    swapchain = _Swapchain;
    return *this;
  }
  BindImageMemorySwapchainInfoKHX& setImageIndex(uint32_t _ImageIndex)
  {
    imageIndex = _ImageIndex;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkSwapchainKHR swapchain;
  uint32_t imageIndex;
};

class PhysicalDeviceIDPropertiesKHX
{
public:
  PhysicalDeviceIDPropertiesKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PhysicalDeviceIDPropertiesKHX& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PhysicalDeviceIDPropertiesKHX& setDeviceUUID(uint8_t _DeviceUUID)
  {
    deviceUUID = _DeviceUUID;
    return *this;
  }
  PhysicalDeviceIDPropertiesKHX& setDriverUUID(uint8_t _DriverUUID)
  {
    driverUUID = _DriverUUID;
    return *this;
  }
  PhysicalDeviceIDPropertiesKHX& setDeviceLUID(uint8_t _DeviceLUID)
  {
    deviceLUID = _DeviceLUID;
    return *this;
  }
  PhysicalDeviceIDPropertiesKHX& setDeviceLUIDValid(VkBool32 _DeviceLUIDValid)
  {
    deviceLUIDValid = _DeviceLUIDValid;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  uint8_t deviceUUID;
  uint8_t driverUUID;
  uint8_t deviceLUID;
  VkBool32 deviceLUIDValid;
};

class MemoryAllocateFlagsInfoKHX
{
public:
  MemoryAllocateFlagsInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  MemoryAllocateFlagsInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  MemoryAllocateFlagsInfoKHX& setFlags(VkMemoryAllocateFlagsKHX _Flags)
  {
    flags = _Flags;
    return *this;
  }
  MemoryAllocateFlagsInfoKHX& setDeviceMask(uint32_t _DeviceMask)
  {
    deviceMask = _DeviceMask;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkMemoryAllocateFlagsKHX flags;
  uint32_t deviceMask;
};

class FormatProperties
{
public:
  FormatProperties& setLinearTilingFeatures(VkFormatFeatureFlags _LinearTilingFeatures)
  {
    linearTilingFeatures = _LinearTilingFeatures;
    return *this;
  }
  FormatProperties& setOptimalTilingFeatures(VkFormatFeatureFlags _OptimalTilingFeatures)
  {
    optimalTilingFeatures = _OptimalTilingFeatures;
    return *this;
  }
  FormatProperties& setBufferFeatures(VkFormatFeatureFlags _BufferFeatures)
  {
    bufferFeatures = _BufferFeatures;
    return *this;
  }
public:
  VkFormatFeatureFlags linearTilingFeatures;
  VkFormatFeatureFlags optimalTilingFeatures;
  VkFormatFeatureFlags bufferFeatures;
};

class ImageMemoryBarrier
{
public:
  ImageMemoryBarrier& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ImageMemoryBarrier& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ImageMemoryBarrier& setSrcAccessMask(VkAccessFlags _SrcAccessMask)
  {
    srcAccessMask = _SrcAccessMask;
    return *this;
  }
  ImageMemoryBarrier& setDstAccessMask(VkAccessFlags _DstAccessMask)
  {
    dstAccessMask = _DstAccessMask;
    return *this;
  }
  ImageMemoryBarrier& setOldLayout(VkImageLayout _OldLayout)
  {
    oldLayout = _OldLayout;
    return *this;
  }
  ImageMemoryBarrier& setNewLayout(VkImageLayout _NewLayout)
  {
    newLayout = _NewLayout;
    return *this;
  }
  ImageMemoryBarrier& setSrcQueueFamilyIndex(uint32_t _SrcQueueFamilyIndex)
  {
    srcQueueFamilyIndex = _SrcQueueFamilyIndex;
    return *this;
  }
  ImageMemoryBarrier& setDstQueueFamilyIndex(uint32_t _DstQueueFamilyIndex)
  {
    dstQueueFamilyIndex = _DstQueueFamilyIndex;
    return *this;
  }
  ImageMemoryBarrier& setImage(VkImage _Image)
  {
    image = _Image;
    return *this;
  }
  ImageMemoryBarrier& setSubresourceRange(ImageSubresourceRange _SubresourceRange)
  {
    subresourceRange = _SubresourceRange;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkAccessFlags srcAccessMask;
  VkAccessFlags dstAccessMask;
  VkImageLayout oldLayout;
  VkImageLayout newLayout;
  uint32_t srcQueueFamilyIndex;
  uint32_t dstQueueFamilyIndex;
  VkImage image;
  ImageSubresourceRange subresourceRange;
};

class RenderPassBeginInfo
{
public:
  RenderPassBeginInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  RenderPassBeginInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  RenderPassBeginInfo& setRenderPass(VkRenderPass _RenderPass)
  {
    renderPass = _RenderPass;
    return *this;
  }
  RenderPassBeginInfo& setFramebuffer(VkFramebuffer _Framebuffer)
  {
    framebuffer = _Framebuffer;
    return *this;
  }
  RenderPassBeginInfo& setRenderArea(Rect2D _RenderArea)
  {
    renderArea = _RenderArea;
    return *this;
  }
  RenderPassBeginInfo& setClearValueCount(uint32_t _ClearValueCount)
  {
    clearValueCount = _ClearValueCount;
    return *this;
  }
  RenderPassBeginInfo& setPClearValues(const ClearValue * _PClearValues)
  {
    pClearValues = _PClearValues;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkRenderPass renderPass;
  VkFramebuffer framebuffer;
  Rect2D renderArea;
  uint32_t clearValueCount;
  const ClearValue * pClearValues;
};

class SparseImageFormatProperties2KHR
{
public:
  SparseImageFormatProperties2KHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  SparseImageFormatProperties2KHR& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  SparseImageFormatProperties2KHR& setProperties(SparseImageFormatProperties _Properties)
  {
    properties = _Properties;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  SparseImageFormatProperties properties;
};

class PipelineViewportSwizzleStateCreateInfoNV
{
public:
  PipelineViewportSwizzleStateCreateInfoNV& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PipelineViewportSwizzleStateCreateInfoNV& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PipelineViewportSwizzleStateCreateInfoNV& setFlags(VkPipelineViewportSwizzleStateCreateFlagsNV _Flags)
  {
    flags = _Flags;
    return *this;
  }
  PipelineViewportSwizzleStateCreateInfoNV& setViewportCount(uint32_t _ViewportCount)
  {
    viewportCount = _ViewportCount;
    return *this;
  }
  PipelineViewportSwizzleStateCreateInfoNV& setPViewportSwizzles(const ViewportSwizzleNV * _PViewportSwizzles)
  {
    pViewportSwizzles = _PViewportSwizzles;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkPipelineViewportSwizzleStateCreateFlagsNV flags;
  uint32_t viewportCount;
  const ViewportSwizzleNV * pViewportSwizzles;
};

class ObjectTablePipelineEntryNVX
{
public:
  ObjectTablePipelineEntryNVX& setType(VkObjectEntryTypeNVX _Type)
  {
    type = _Type;
    return *this;
  }
  ObjectTablePipelineEntryNVX& setFlags(VkObjectEntryUsageFlagsNVX _Flags)
  {
    flags = _Flags;
    return *this;
  }
  ObjectTablePipelineEntryNVX& setPipeline(VkPipeline _Pipeline)
  {
    pipeline = _Pipeline;
    return *this;
  }
public:
  VkObjectEntryTypeNVX type;
  VkObjectEntryUsageFlagsNVX flags;
  VkPipeline pipeline;
};

class ImageSubresource
{
public:
  ImageSubresource& setAspectMask(VkImageAspectFlags _AspectMask)
  {
    aspectMask = _AspectMask;
    return *this;
  }
  ImageSubresource& setMipLevel(uint32_t _MipLevel)
  {
    mipLevel = _MipLevel;
    return *this;
  }
  ImageSubresource& setArrayLayer(uint32_t _ArrayLayer)
  {
    arrayLayer = _ArrayLayer;
    return *this;
  }
public:
  VkImageAspectFlags aspectMask;
  uint32_t mipLevel;
  uint32_t arrayLayer;
};

class VertexInputBindingDescription
{
public:
  VertexInputBindingDescription& setBinding(uint32_t _Binding)
  {
    binding = _Binding;
    return *this;
  }
  VertexInputBindingDescription& setStride(uint32_t _Stride)
  {
    stride = _Stride;
    return *this;
  }
  VertexInputBindingDescription& setInputRate(VkVertexInputRate _InputRate)
  {
    inputRate = _InputRate;
    return *this;
  }
public:
  uint32_t binding;
  uint32_t stride;
  VkVertexInputRate inputRate;
};

class CmdProcessCommandsInfoNVX
{
public:
  CmdProcessCommandsInfoNVX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  CmdProcessCommandsInfoNVX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  CmdProcessCommandsInfoNVX& setObjectTable(VkObjectTableNVX _ObjectTable)
  {
    objectTable = _ObjectTable;
    return *this;
  }
  CmdProcessCommandsInfoNVX& setIndirectCommandsLayout(VkIndirectCommandsLayoutNVX _IndirectCommandsLayout)
  {
    indirectCommandsLayout = _IndirectCommandsLayout;
    return *this;
  }
  CmdProcessCommandsInfoNVX& setIndirectCommandsTokenCount(uint32_t _IndirectCommandsTokenCount)
  {
    indirectCommandsTokenCount = _IndirectCommandsTokenCount;
    return *this;
  }
  CmdProcessCommandsInfoNVX& setPIndirectCommandsTokens(const IndirectCommandsTokenNVX * _PIndirectCommandsTokens)
  {
    pIndirectCommandsTokens = _PIndirectCommandsTokens;
    return *this;
  }
  CmdProcessCommandsInfoNVX& setMaxSequencesCount(uint32_t _MaxSequencesCount)
  {
    maxSequencesCount = _MaxSequencesCount;
    return *this;
  }
  CmdProcessCommandsInfoNVX& setTargetCommandBuffer(VkCommandBuffer _TargetCommandBuffer)
  {
    targetCommandBuffer = _TargetCommandBuffer;
    return *this;
  }
  CmdProcessCommandsInfoNVX& setSequencesCountBuffer(VkBuffer _SequencesCountBuffer)
  {
    sequencesCountBuffer = _SequencesCountBuffer;
    return *this;
  }
  CmdProcessCommandsInfoNVX& setSequencesCountOffset(VkDeviceSize _SequencesCountOffset)
  {
    sequencesCountOffset = _SequencesCountOffset;
    return *this;
  }
  CmdProcessCommandsInfoNVX& setSequencesIndexBuffer(VkBuffer _SequencesIndexBuffer)
  {
    sequencesIndexBuffer = _SequencesIndexBuffer;
    return *this;
  }
  CmdProcessCommandsInfoNVX& setSequencesIndexOffset(VkDeviceSize _SequencesIndexOffset)
  {
    sequencesIndexOffset = _SequencesIndexOffset;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkObjectTableNVX objectTable;
  VkIndirectCommandsLayoutNVX indirectCommandsLayout;
  uint32_t indirectCommandsTokenCount;
  const IndirectCommandsTokenNVX * pIndirectCommandsTokens;
  uint32_t maxSequencesCount;
  VkCommandBuffer targetCommandBuffer;
  VkBuffer sequencesCountBuffer;
  VkDeviceSize sequencesCountOffset;
  VkBuffer sequencesIndexBuffer;
  VkDeviceSize sequencesIndexOffset;
};

class SpecializationMapEntry
{
public:
  SpecializationMapEntry& setConstantID(uint32_t _ConstantID)
  {
    constantID = _ConstantID;
    return *this;
  }
  SpecializationMapEntry& setOffset(uint32_t _Offset)
  {
    offset = _Offset;
    return *this;
  }
  SpecializationMapEntry& setSize(size_t _Size)
  {
    size = _Size;
    return *this;
  }
public:
  uint32_t constantID;
  uint32_t offset;
  size_t size;
};

class ValidationFlagsEXT
{
public:
  ValidationFlagsEXT& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ValidationFlagsEXT& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ValidationFlagsEXT& setDisabledValidationCheckCount(uint32_t _DisabledValidationCheckCount)
  {
    disabledValidationCheckCount = _DisabledValidationCheckCount;
    return *this;
  }
  ValidationFlagsEXT& setPDisabledValidationChecks(VkValidationCheckEXT * _PDisabledValidationChecks)
  {
    pDisabledValidationChecks = _PDisabledValidationChecks;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t disabledValidationCheckCount;
  VkValidationCheckEXT * pDisabledValidationChecks;
};

class BindBufferMemoryInfoKHX
{
public:
  BindBufferMemoryInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  BindBufferMemoryInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  BindBufferMemoryInfoKHX& setBuffer(VkBuffer _Buffer)
  {
    buffer = _Buffer;
    return *this;
  }
  BindBufferMemoryInfoKHX& setMemory(VkDeviceMemory _Memory)
  {
    memory = _Memory;
    return *this;
  }
  BindBufferMemoryInfoKHX& setMemoryOffset(VkDeviceSize _MemoryOffset)
  {
    memoryOffset = _MemoryOffset;
    return *this;
  }
  BindBufferMemoryInfoKHX& setDeviceIndexCount(uint32_t _DeviceIndexCount)
  {
    deviceIndexCount = _DeviceIndexCount;
    return *this;
  }
  BindBufferMemoryInfoKHX& setPDeviceIndices(const uint32_t * _PDeviceIndices)
  {
    pDeviceIndices = _PDeviceIndices;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkBuffer buffer;
  VkDeviceMemory memory;
  VkDeviceSize memoryOffset;
  uint32_t deviceIndexCount;
  const uint32_t * pDeviceIndices;
};

class ExternalSemaphorePropertiesKHX
{
public:
  ExternalSemaphorePropertiesKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ExternalSemaphorePropertiesKHX& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ExternalSemaphorePropertiesKHX& setExportFromImportedHandleTypes(VkExternalSemaphoreHandleTypeFlagsKHX _ExportFromImportedHandleTypes)
  {
    exportFromImportedHandleTypes = _ExportFromImportedHandleTypes;
    return *this;
  }
  ExternalSemaphorePropertiesKHX& setCompatibleHandleTypes(VkExternalSemaphoreHandleTypeFlagsKHX _CompatibleHandleTypes)
  {
    compatibleHandleTypes = _CompatibleHandleTypes;
    return *this;
  }
  ExternalSemaphorePropertiesKHX& setExternalSemaphoreFeatures(VkExternalSemaphoreFeatureFlagsKHX _ExternalSemaphoreFeatures)
  {
    externalSemaphoreFeatures = _ExternalSemaphoreFeatures;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  VkExternalSemaphoreHandleTypeFlagsKHX exportFromImportedHandleTypes;
  VkExternalSemaphoreHandleTypeFlagsKHX compatibleHandleTypes;
  VkExternalSemaphoreFeatureFlagsKHX externalSemaphoreFeatures;
};

class ExternalImageFormatPropertiesKHX
{
public:
  ExternalImageFormatPropertiesKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ExternalImageFormatPropertiesKHX& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ExternalImageFormatPropertiesKHX& setExternalMemoryProperties(ExternalMemoryPropertiesKHX _ExternalMemoryProperties)
  {
    externalMemoryProperties = _ExternalMemoryProperties;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  ExternalMemoryPropertiesKHX externalMemoryProperties;
};

class PipelineCacheCreateInfo
{
public:
  PipelineCacheCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PipelineCacheCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PipelineCacheCreateInfo& setFlags(VkPipelineCacheCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  PipelineCacheCreateInfo& setInitialDataSize(size_t _InitialDataSize)
  {
    initialDataSize = _InitialDataSize;
    return *this;
  }
  PipelineCacheCreateInfo& setPInitialData(const void * _PInitialData)
  {
    pInitialData = _PInitialData;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkPipelineCacheCreateFlags flags;
  size_t initialDataSize;
  const void * pInitialData;
};

class ImportSemaphoreFdInfoKHX
{
public:
  ImportSemaphoreFdInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ImportSemaphoreFdInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ImportSemaphoreFdInfoKHX& setSemaphore(VkSemaphore _Semaphore)
  {
    semaphore = _Semaphore;
    return *this;
  }
  ImportSemaphoreFdInfoKHX& setHandleType(VkExternalSemaphoreHandleTypeFlagBitsKHX _HandleType)
  {
    handleType = _HandleType;
    return *this;
  }
  ImportSemaphoreFdInfoKHX& setFd(int _Fd)
  {
    fd = _Fd;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkSemaphore semaphore;
  VkExternalSemaphoreHandleTypeFlagBitsKHX handleType;
  int fd;
};

class SubresourceLayout
{
public:
  SubresourceLayout& setOffset(VkDeviceSize _Offset)
  {
    offset = _Offset;
    return *this;
  }
  SubresourceLayout& setSize(VkDeviceSize _Size)
  {
    size = _Size;
    return *this;
  }
  SubresourceLayout& setRowPitch(VkDeviceSize _RowPitch)
  {
    rowPitch = _RowPitch;
    return *this;
  }
  SubresourceLayout& setArrayPitch(VkDeviceSize _ArrayPitch)
  {
    arrayPitch = _ArrayPitch;
    return *this;
  }
  SubresourceLayout& setDepthPitch(VkDeviceSize _DepthPitch)
  {
    depthPitch = _DepthPitch;
    return *this;
  }
public:
  VkDeviceSize offset;
  VkDeviceSize size;
  VkDeviceSize rowPitch;
  VkDeviceSize arrayPitch;
  VkDeviceSize depthPitch;
};

class ComputePipelineCreateInfo
{
public:
  ComputePipelineCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ComputePipelineCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ComputePipelineCreateInfo& setFlags(VkPipelineCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  ComputePipelineCreateInfo& setStage(PipelineShaderStageCreateInfo _Stage)
  {
    stage = _Stage;
    return *this;
  }
  ComputePipelineCreateInfo& setLayout(VkPipelineLayout _Layout)
  {
    layout = _Layout;
    return *this;
  }
  ComputePipelineCreateInfo& setBasePipelineHandle(VkPipeline _BasePipelineHandle)
  {
    basePipelineHandle = _BasePipelineHandle;
    return *this;
  }
  ComputePipelineCreateInfo& setBasePipelineIndex(int32_t _BasePipelineIndex)
  {
    basePipelineIndex = _BasePipelineIndex;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkPipelineCreateFlags flags;
  PipelineShaderStageCreateInfo stage;
  VkPipelineLayout layout;
  VkPipeline basePipelineHandle;
  int32_t basePipelineIndex;
};

class DeviceGroupBindSparseInfoKHX
{
public:
  DeviceGroupBindSparseInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DeviceGroupBindSparseInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DeviceGroupBindSparseInfoKHX& setResourceDeviceIndex(uint32_t _ResourceDeviceIndex)
  {
    resourceDeviceIndex = _ResourceDeviceIndex;
    return *this;
  }
  DeviceGroupBindSparseInfoKHX& setMemoryDeviceIndex(uint32_t _MemoryDeviceIndex)
  {
    memoryDeviceIndex = _MemoryDeviceIndex;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t resourceDeviceIndex;
  uint32_t memoryDeviceIndex;
};

class ExtensionProperties
{
public:
  ExtensionProperties& setExtensionName(char _ExtensionName)
  {
    extensionName = _ExtensionName;
    return *this;
  }
  ExtensionProperties& setSpecVersion(uint32_t _SpecVersion)
  {
    specVersion = _SpecVersion;
    return *this;
  }
public:
  char extensionName;
  uint32_t specVersion;
};

class ImageFormatProperties2KHX
{
public:
  ImageFormatProperties2KHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ImageFormatProperties2KHX& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ImageFormatProperties2KHX& setImageFormatProperties(ImageFormatProperties _ImageFormatProperties)
  {
    imageFormatProperties = _ImageFormatProperties;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  ImageFormatProperties imageFormatProperties;
};

class ViewportSwizzleNV
{
public:
  ViewportSwizzleNV& setX(VkViewportCoordinateSwizzleNV _X)
  {
    x = _X;
    return *this;
  }
  ViewportSwizzleNV& setY(VkViewportCoordinateSwizzleNV _Y)
  {
    y = _Y;
    return *this;
  }
  ViewportSwizzleNV& setZ(VkViewportCoordinateSwizzleNV _Z)
  {
    z = _Z;
    return *this;
  }
  ViewportSwizzleNV& setW(VkViewportCoordinateSwizzleNV _W)
  {
    w = _W;
    return *this;
  }
public:
  VkViewportCoordinateSwizzleNV x;
  VkViewportCoordinateSwizzleNV y;
  VkViewportCoordinateSwizzleNV z;
  VkViewportCoordinateSwizzleNV w;
};

class ExternalMemoryPropertiesKHX
{
public:
  ExternalMemoryPropertiesKHX& setExternalMemoryFeatures(VkExternalMemoryFeatureFlagsKHX _ExternalMemoryFeatures)
  {
    externalMemoryFeatures = _ExternalMemoryFeatures;
    return *this;
  }
  ExternalMemoryPropertiesKHX& setExportFromImportedHandleTypes(VkExternalMemoryHandleTypeFlagsKHX _ExportFromImportedHandleTypes)
  {
    exportFromImportedHandleTypes = _ExportFromImportedHandleTypes;
    return *this;
  }
  ExternalMemoryPropertiesKHX& setCompatibleHandleTypes(VkExternalMemoryHandleTypeFlagsKHX _CompatibleHandleTypes)
  {
    compatibleHandleTypes = _CompatibleHandleTypes;
    return *this;
  }
public:
  VkExternalMemoryFeatureFlagsKHX externalMemoryFeatures;
  VkExternalMemoryHandleTypeFlagsKHX exportFromImportedHandleTypes;
  VkExternalMemoryHandleTypeFlagsKHX compatibleHandleTypes;
};

class PhysicalDeviceExternalSemaphoreInfoKHX
{
public:
  PhysicalDeviceExternalSemaphoreInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PhysicalDeviceExternalSemaphoreInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PhysicalDeviceExternalSemaphoreInfoKHX& setHandleType(VkExternalSemaphoreHandleTypeFlagBitsKHX _HandleType)
  {
    handleType = _HandleType;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkExternalSemaphoreHandleTypeFlagBitsKHX handleType;
};

class ImportMemoryWin32HandleInfoKHX
{
public:
  ImportMemoryWin32HandleInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ImportMemoryWin32HandleInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ImportMemoryWin32HandleInfoKHX& setHandleType(VkExternalMemoryHandleTypeFlagBitsKHX _HandleType)
  {
    handleType = _HandleType;
    return *this;
  }
  ImportMemoryWin32HandleInfoKHX& setHandle(HANDLE _Handle)
  {
    handle = _Handle;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkExternalMemoryHandleTypeFlagBitsKHX handleType;
  HANDLE handle;
};

class ImageFormatProperties2KHR
{
public:
  ImageFormatProperties2KHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ImageFormatProperties2KHR& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ImageFormatProperties2KHR& setImageFormatProperties(ImageFormatProperties _ImageFormatProperties)
  {
    imageFormatProperties = _ImageFormatProperties;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  ImageFormatProperties imageFormatProperties;
};

class PipelineTessellationStateCreateInfo
{
public:
  PipelineTessellationStateCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PipelineTessellationStateCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PipelineTessellationStateCreateInfo& setFlags(VkPipelineTessellationStateCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  PipelineTessellationStateCreateInfo& setPatchControlPoints(uint32_t _PatchControlPoints)
  {
    patchControlPoints = _PatchControlPoints;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkPipelineTessellationStateCreateFlags flags;
  uint32_t patchControlPoints;
};

class SemaphoreCreateInfo
{
public:
  SemaphoreCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  SemaphoreCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  SemaphoreCreateInfo& setFlags(VkSemaphoreCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkSemaphoreCreateFlags flags;
};

class DeviceGroupSwapchainCreateInfoKHX
{
public:
  DeviceGroupSwapchainCreateInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DeviceGroupSwapchainCreateInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DeviceGroupSwapchainCreateInfoKHX& setModes(VkDeviceGroupPresentModeFlagsKHX _Modes)
  {
    modes = _Modes;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDeviceGroupPresentModeFlagsKHX modes;
};

class ExternalBufferPropertiesKHX
{
public:
  ExternalBufferPropertiesKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ExternalBufferPropertiesKHX& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ExternalBufferPropertiesKHX& setExternalMemoryProperties(ExternalMemoryPropertiesKHX _ExternalMemoryProperties)
  {
    externalMemoryProperties = _ExternalMemoryProperties;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  ExternalMemoryPropertiesKHX externalMemoryProperties;
};

class XcbSurfaceCreateInfoKHR
{
public:
  XcbSurfaceCreateInfoKHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  XcbSurfaceCreateInfoKHR& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  XcbSurfaceCreateInfoKHR& setFlags(VkXcbSurfaceCreateFlagsKHR _Flags)
  {
    flags = _Flags;
    return *this;
  }
  XcbSurfaceCreateInfoKHR& setConnection(xcb_connection_t * _Connection)
  {
    connection = _Connection;
    return *this;
  }
  XcbSurfaceCreateInfoKHR& setWindow(xcb_window_t _Window)
  {
    window = _Window;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkXcbSurfaceCreateFlagsKHR flags;
  xcb_connection_t * connection;
  xcb_window_t window;
};

class ExportMemoryAllocateInfoKHX
{
public:
  ExportMemoryAllocateInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ExportMemoryAllocateInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ExportMemoryAllocateInfoKHX& setHandleTypes(VkExternalMemoryHandleTypeFlagsKHX _HandleTypes)
  {
    handleTypes = _HandleTypes;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkExternalMemoryHandleTypeFlagsKHX handleTypes;
};

class SparseImageOpaqueMemoryBindInfo
{
public:
  SparseImageOpaqueMemoryBindInfo& setImage(VkImage _Image)
  {
    image = _Image;
    return *this;
  }
  SparseImageOpaqueMemoryBindInfo& setBindCount(uint32_t _BindCount)
  {
    bindCount = _BindCount;
    return *this;
  }
  SparseImageOpaqueMemoryBindInfo& setPBinds(const SparseMemoryBind * _PBinds)
  {
    pBinds = _PBinds;
    return *this;
  }
public:
  VkImage image;
  uint32_t bindCount;
  const SparseMemoryBind * pBinds;
};

class ImageViewCreateInfo
{
public:
  ImageViewCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ImageViewCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ImageViewCreateInfo& setFlags(VkImageViewCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  ImageViewCreateInfo& setImage(VkImage _Image)
  {
    image = _Image;
    return *this;
  }
  ImageViewCreateInfo& setViewType(VkImageViewType _ViewType)
  {
    viewType = _ViewType;
    return *this;
  }
  ImageViewCreateInfo& setFormat(VkFormat _Format)
  {
    format = _Format;
    return *this;
  }
  ImageViewCreateInfo& setComponents(ComponentMapping _Components)
  {
    components = _Components;
    return *this;
  }
  ImageViewCreateInfo& setSubresourceRange(ImageSubresourceRange _SubresourceRange)
  {
    subresourceRange = _SubresourceRange;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkImageViewCreateFlags flags;
  VkImage image;
  VkImageViewType viewType;
  VkFormat format;
  ComponentMapping components;
  ImageSubresourceRange subresourceRange;
};

class DescriptorPoolSize
{
public:
  DescriptorPoolSize& setType(VkDescriptorType _Type)
  {
    type = _Type;
    return *this;
  }
  DescriptorPoolSize& setDescriptorCount(uint32_t _DescriptorCount)
  {
    descriptorCount = _DescriptorCount;
    return *this;
  }
public:
  VkDescriptorType type;
  uint32_t descriptorCount;
};

class Viewport
{
public:
  Viewport& setX(float _X)
  {
    x = _X;
    return *this;
  }
  Viewport& setY(float _Y)
  {
    y = _Y;
    return *this;
  }
  Viewport& setWidth(float _Width)
  {
    width = _Width;
    return *this;
  }
  Viewport& setHeight(float _Height)
  {
    height = _Height;
    return *this;
  }
  Viewport& setMinDepth(float _MinDepth)
  {
    minDepth = _MinDepth;
    return *this;
  }
  Viewport& setMaxDepth(float _MaxDepth)
  {
    maxDepth = _MaxDepth;
    return *this;
  }
public:
  float x;
  float y;
  float width;
  float height;
  float minDepth;
  float maxDepth;
};

class ObjectTableDescriptorSetEntryNVX
{
public:
  ObjectTableDescriptorSetEntryNVX& setType(VkObjectEntryTypeNVX _Type)
  {
    type = _Type;
    return *this;
  }
  ObjectTableDescriptorSetEntryNVX& setFlags(VkObjectEntryUsageFlagsNVX _Flags)
  {
    flags = _Flags;
    return *this;
  }
  ObjectTableDescriptorSetEntryNVX& setPipelineLayout(VkPipelineLayout _PipelineLayout)
  {
    pipelineLayout = _PipelineLayout;
    return *this;
  }
  ObjectTableDescriptorSetEntryNVX& setDescriptorSet(VkDescriptorSet _DescriptorSet)
  {
    descriptorSet = _DescriptorSet;
    return *this;
  }
public:
  VkObjectEntryTypeNVX type;
  VkObjectEntryUsageFlagsNVX flags;
  VkPipelineLayout pipelineLayout;
  VkDescriptorSet descriptorSet;
};

class DeviceGeneratedCommandsFeaturesNVX
{
public:
  DeviceGeneratedCommandsFeaturesNVX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DeviceGeneratedCommandsFeaturesNVX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DeviceGeneratedCommandsFeaturesNVX& setComputeBindingPointSupport(VkBool32 _ComputeBindingPointSupport)
  {
    computeBindingPointSupport = _ComputeBindingPointSupport;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkBool32 computeBindingPointSupport;
};

class CopyDescriptorSet
{
public:
  CopyDescriptorSet& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  CopyDescriptorSet& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  CopyDescriptorSet& setSrcSet(VkDescriptorSet _SrcSet)
  {
    srcSet = _SrcSet;
    return *this;
  }
  CopyDescriptorSet& setSrcBinding(uint32_t _SrcBinding)
  {
    srcBinding = _SrcBinding;
    return *this;
  }
  CopyDescriptorSet& setSrcArrayElement(uint32_t _SrcArrayElement)
  {
    srcArrayElement = _SrcArrayElement;
    return *this;
  }
  CopyDescriptorSet& setDstSet(VkDescriptorSet _DstSet)
  {
    dstSet = _DstSet;
    return *this;
  }
  CopyDescriptorSet& setDstBinding(uint32_t _DstBinding)
  {
    dstBinding = _DstBinding;
    return *this;
  }
  CopyDescriptorSet& setDstArrayElement(uint32_t _DstArrayElement)
  {
    dstArrayElement = _DstArrayElement;
    return *this;
  }
  CopyDescriptorSet& setDescriptorCount(uint32_t _DescriptorCount)
  {
    descriptorCount = _DescriptorCount;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDescriptorSet srcSet;
  uint32_t srcBinding;
  uint32_t srcArrayElement;
  VkDescriptorSet dstSet;
  uint32_t dstBinding;
  uint32_t dstArrayElement;
  uint32_t descriptorCount;
};

class PhysicalDeviceProperties
{
public:
  PhysicalDeviceProperties& setApiVersion(uint32_t _ApiVersion)
  {
    apiVersion = _ApiVersion;
    return *this;
  }
  PhysicalDeviceProperties& setDriverVersion(uint32_t _DriverVersion)
  {
    driverVersion = _DriverVersion;
    return *this;
  }
  PhysicalDeviceProperties& setVendorID(uint32_t _VendorID)
  {
    vendorID = _VendorID;
    return *this;
  }
  PhysicalDeviceProperties& setDeviceID(uint32_t _DeviceID)
  {
    deviceID = _DeviceID;
    return *this;
  }
  PhysicalDeviceProperties& setDeviceType(VkPhysicalDeviceType _DeviceType)
  {
    deviceType = _DeviceType;
    return *this;
  }
  PhysicalDeviceProperties& setDeviceName(char _DeviceName)
  {
    deviceName = _DeviceName;
    return *this;
  }
  PhysicalDeviceProperties& setPipelineCacheUUID(uint8_t _PipelineCacheUUID)
  {
    pipelineCacheUUID = _PipelineCacheUUID;
    return *this;
  }
  PhysicalDeviceProperties& setLimits(PhysicalDeviceLimits _Limits)
  {
    limits = _Limits;
    return *this;
  }
  PhysicalDeviceProperties& setSparseProperties(PhysicalDeviceSparseProperties _SparseProperties)
  {
    sparseProperties = _SparseProperties;
    return *this;
  }
public:
  uint32_t apiVersion;
  uint32_t driverVersion;
  uint32_t vendorID;
  uint32_t deviceID;
  VkPhysicalDeviceType deviceType;
  char deviceName;
  uint8_t pipelineCacheUUID;
  PhysicalDeviceLimits limits;
  PhysicalDeviceSparseProperties sparseProperties;
};

class WaylandSurfaceCreateInfoKHR
{
public:
  WaylandSurfaceCreateInfoKHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  WaylandSurfaceCreateInfoKHR& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  WaylandSurfaceCreateInfoKHR& setFlags(VkWaylandSurfaceCreateFlagsKHR _Flags)
  {
    flags = _Flags;
    return *this;
  }
  WaylandSurfaceCreateInfoKHR& setDisplay(struct wl_display * _Display)
  {
    display = _Display;
    return *this;
  }
  WaylandSurfaceCreateInfoKHR& setSurface(struct wl_surface * _Surface)
  {
    surface = _Surface;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkWaylandSurfaceCreateFlagsKHR flags;
  struct wl_display * display;
  struct wl_surface * surface;
};

class MemoryAllocateInfo
{
public:
  MemoryAllocateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  MemoryAllocateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  MemoryAllocateInfo& setAllocationSize(VkDeviceSize _AllocationSize)
  {
    allocationSize = _AllocationSize;
    return *this;
  }
  MemoryAllocateInfo& setMemoryTypeIndex(uint32_t _MemoryTypeIndex)
  {
    memoryTypeIndex = _MemoryTypeIndex;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDeviceSize allocationSize;
  uint32_t memoryTypeIndex;
};

class MemoryBarrier
{
public:
  MemoryBarrier& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  MemoryBarrier& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  MemoryBarrier& setSrcAccessMask(VkAccessFlags _SrcAccessMask)
  {
    srcAccessMask = _SrcAccessMask;
    return *this;
  }
  MemoryBarrier& setDstAccessMask(VkAccessFlags _DstAccessMask)
  {
    dstAccessMask = _DstAccessMask;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkAccessFlags srcAccessMask;
  VkAccessFlags dstAccessMask;
};

class MappedMemoryRange
{
public:
  MappedMemoryRange& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  MappedMemoryRange& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  MappedMemoryRange& setMemory(VkDeviceMemory _Memory)
  {
    memory = _Memory;
    return *this;
  }
  MappedMemoryRange& setOffset(VkDeviceSize _Offset)
  {
    offset = _Offset;
    return *this;
  }
  MappedMemoryRange& setSize(VkDeviceSize _Size)
  {
    size = _Size;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDeviceMemory memory;
  VkDeviceSize offset;
  VkDeviceSize size;
};

class DescriptorUpdateTemplateEntryKHR
{
public:
  DescriptorUpdateTemplateEntryKHR& setDstBinding(uint32_t _DstBinding)
  {
    dstBinding = _DstBinding;
    return *this;
  }
  DescriptorUpdateTemplateEntryKHR& setDstArrayElement(uint32_t _DstArrayElement)
  {
    dstArrayElement = _DstArrayElement;
    return *this;
  }
  DescriptorUpdateTemplateEntryKHR& setDescriptorCount(uint32_t _DescriptorCount)
  {
    descriptorCount = _DescriptorCount;
    return *this;
  }
  DescriptorUpdateTemplateEntryKHR& setDescriptorType(VkDescriptorType _DescriptorType)
  {
    descriptorType = _DescriptorType;
    return *this;
  }
  DescriptorUpdateTemplateEntryKHR& setOffset(size_t _Offset)
  {
    offset = _Offset;
    return *this;
  }
  DescriptorUpdateTemplateEntryKHR& setStride(size_t _Stride)
  {
    stride = _Stride;
    return *this;
  }
public:
  uint32_t dstBinding;
  uint32_t dstArrayElement;
  uint32_t descriptorCount;
  VkDescriptorType descriptorType;
  size_t offset;
  size_t stride;
};

class DescriptorPoolCreateInfo
{
public:
  DescriptorPoolCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DescriptorPoolCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DescriptorPoolCreateInfo& setFlags(VkDescriptorPoolCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  DescriptorPoolCreateInfo& setMaxSets(uint32_t _MaxSets)
  {
    maxSets = _MaxSets;
    return *this;
  }
  DescriptorPoolCreateInfo& setPoolSizeCount(uint32_t _PoolSizeCount)
  {
    poolSizeCount = _PoolSizeCount;
    return *this;
  }
  DescriptorPoolCreateInfo& setPPoolSizes(const DescriptorPoolSize * _PPoolSizes)
  {
    pPoolSizes = _PPoolSizes;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDescriptorPoolCreateFlags flags;
  uint32_t maxSets;
  uint32_t poolSizeCount;
  const DescriptorPoolSize * pPoolSizes;
};

class PipelineLayoutCreateInfo
{
public:
  PipelineLayoutCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PipelineLayoutCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PipelineLayoutCreateInfo& setFlags(VkPipelineLayoutCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  PipelineLayoutCreateInfo& setSetLayoutCount(uint32_t _SetLayoutCount)
  {
    setLayoutCount = _SetLayoutCount;
    return *this;
  }
  PipelineLayoutCreateInfo& setPSetLayouts(const VkDescriptorSetLayout * _PSetLayouts)
  {
    pSetLayouts = _PSetLayouts;
    return *this;
  }
  PipelineLayoutCreateInfo& setPushConstantRangeCount(uint32_t _PushConstantRangeCount)
  {
    pushConstantRangeCount = _PushConstantRangeCount;
    return *this;
  }
  PipelineLayoutCreateInfo& setPPushConstantRanges(const PushConstantRange * _PPushConstantRanges)
  {
    pPushConstantRanges = _PPushConstantRanges;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkPipelineLayoutCreateFlags flags;
  uint32_t setLayoutCount;
  const VkDescriptorSetLayout * pSetLayouts;
  uint32_t pushConstantRangeCount;
  const PushConstantRange * pPushConstantRanges;
};

class DisplayModeCreateInfoKHR
{
public:
  DisplayModeCreateInfoKHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DisplayModeCreateInfoKHR& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DisplayModeCreateInfoKHR& setFlags(VkDisplayModeCreateFlagsKHR _Flags)
  {
    flags = _Flags;
    return *this;
  }
  DisplayModeCreateInfoKHR& setParameters(DisplayModeParametersKHR _Parameters)
  {
    parameters = _Parameters;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDisplayModeCreateFlagsKHR flags;
  DisplayModeParametersKHR parameters;
};

class ExportMemoryWin32HandleInfoKHX
{
public:
  ExportMemoryWin32HandleInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ExportMemoryWin32HandleInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ExportMemoryWin32HandleInfoKHX& setPAttributes(const SECURITY_ATTRIBUTES * _PAttributes)
  {
    pAttributes = _PAttributes;
    return *this;
  }
  ExportMemoryWin32HandleInfoKHX& setDwAccess(DWORD _DwAccess)
  {
    dwAccess = _DwAccess;
    return *this;
  }
  ExportMemoryWin32HandleInfoKHX& setName(LPCWSTR _Name)
  {
    name = _Name;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  const SECURITY_ATTRIBUTES * pAttributes;
  DWORD dwAccess;
  LPCWSTR name;
};

class CommandBufferBeginInfo
{
public:
  CommandBufferBeginInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  CommandBufferBeginInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  CommandBufferBeginInfo& setFlags(VkCommandBufferUsageFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  CommandBufferBeginInfo& setPInheritanceInfo(const CommandBufferInheritanceInfo * _PInheritanceInfo)
  {
    pInheritanceInfo = _PInheritanceInfo;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkCommandBufferUsageFlags flags;
  const CommandBufferInheritanceInfo * pInheritanceInfo;
};

class ShaderModuleCreateInfo
{
public:
  ShaderModuleCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ShaderModuleCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ShaderModuleCreateInfo& setFlags(VkShaderModuleCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  ShaderModuleCreateInfo& setCodeSize(size_t _CodeSize)
  {
    codeSize = _CodeSize;
    return *this;
  }
  ShaderModuleCreateInfo& setPCode(const uint32_t * _PCode)
  {
    pCode = _PCode;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkShaderModuleCreateFlags flags;
  size_t codeSize;
  const uint32_t * pCode;
};

class DescriptorUpdateTemplateCreateInfoKHR
{
public:
  DescriptorUpdateTemplateCreateInfoKHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DescriptorUpdateTemplateCreateInfoKHR& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DescriptorUpdateTemplateCreateInfoKHR& setFlags(VkDescriptorUpdateTemplateCreateFlagsKHR _Flags)
  {
    flags = _Flags;
    return *this;
  }
  DescriptorUpdateTemplateCreateInfoKHR& setDescriptorUpdateEntryCount(uint32_t _DescriptorUpdateEntryCount)
  {
    descriptorUpdateEntryCount = _DescriptorUpdateEntryCount;
    return *this;
  }
  DescriptorUpdateTemplateCreateInfoKHR& setPDescriptorUpdateEntries(const DescriptorUpdateTemplateEntryKHR * _PDescriptorUpdateEntries)
  {
    pDescriptorUpdateEntries = _PDescriptorUpdateEntries;
    return *this;
  }
  DescriptorUpdateTemplateCreateInfoKHR& setTemplateType(VkDescriptorUpdateTemplateTypeKHR _TemplateType)
  {
    templateType = _TemplateType;
    return *this;
  }
  DescriptorUpdateTemplateCreateInfoKHR& setDescriptorSetLayout(VkDescriptorSetLayout _DescriptorSetLayout)
  {
    descriptorSetLayout = _DescriptorSetLayout;
    return *this;
  }
  DescriptorUpdateTemplateCreateInfoKHR& setPipelineBindPoint(VkPipelineBindPoint _PipelineBindPoint)
  {
    pipelineBindPoint = _PipelineBindPoint;
    return *this;
  }
  DescriptorUpdateTemplateCreateInfoKHR& setPipelineLayout(VkPipelineLayout _PipelineLayout)
  {
    pipelineLayout = _PipelineLayout;
    return *this;
  }
  DescriptorUpdateTemplateCreateInfoKHR& setSet(uint32_t _Set)
  {
    set = _Set;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  VkDescriptorUpdateTemplateCreateFlagsKHR flags;
  uint32_t descriptorUpdateEntryCount;
  const DescriptorUpdateTemplateEntryKHR * pDescriptorUpdateEntries;
  VkDescriptorUpdateTemplateTypeKHR templateType;
  VkDescriptorSetLayout descriptorSetLayout;
  VkPipelineBindPoint pipelineBindPoint;
  VkPipelineLayout pipelineLayout;
  uint32_t set;
};

class ImageSubresourceLayers
{
public:
  ImageSubresourceLayers& setAspectMask(VkImageAspectFlags _AspectMask)
  {
    aspectMask = _AspectMask;
    return *this;
  }
  ImageSubresourceLayers& setMipLevel(uint32_t _MipLevel)
  {
    mipLevel = _MipLevel;
    return *this;
  }
  ImageSubresourceLayers& setBaseArrayLayer(uint32_t _BaseArrayLayer)
  {
    baseArrayLayer = _BaseArrayLayer;
    return *this;
  }
  ImageSubresourceLayers& setLayerCount(uint32_t _LayerCount)
  {
    layerCount = _LayerCount;
    return *this;
  }
public:
  VkImageAspectFlags aspectMask;
  uint32_t mipLevel;
  uint32_t baseArrayLayer;
  uint32_t layerCount;
};

class QueueFamilyProperties
{
public:
  QueueFamilyProperties& setQueueFlags(VkQueueFlags _QueueFlags)
  {
    queueFlags = _QueueFlags;
    return *this;
  }
  QueueFamilyProperties& setQueueCount(uint32_t _QueueCount)
  {
    queueCount = _QueueCount;
    return *this;
  }
  QueueFamilyProperties& setTimestampValidBits(uint32_t _TimestampValidBits)
  {
    timestampValidBits = _TimestampValidBits;
    return *this;
  }
  QueueFamilyProperties& setMinImageTransferGranularity(Extent3D _MinImageTransferGranularity)
  {
    minImageTransferGranularity = _MinImageTransferGranularity;
    return *this;
  }
public:
  VkQueueFlags queueFlags;
  uint32_t queueCount;
  uint32_t timestampValidBits;
  Extent3D minImageTransferGranularity;
};

class WriteDescriptorSet
{
public:
  WriteDescriptorSet& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  WriteDescriptorSet& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  WriteDescriptorSet& setDstSet(VkDescriptorSet _DstSet)
  {
    dstSet = _DstSet;
    return *this;
  }
  WriteDescriptorSet& setDstBinding(uint32_t _DstBinding)
  {
    dstBinding = _DstBinding;
    return *this;
  }
  WriteDescriptorSet& setDstArrayElement(uint32_t _DstArrayElement)
  {
    dstArrayElement = _DstArrayElement;
    return *this;
  }
  WriteDescriptorSet& setDescriptorCount(uint32_t _DescriptorCount)
  {
    descriptorCount = _DescriptorCount;
    return *this;
  }
  WriteDescriptorSet& setDescriptorType(VkDescriptorType _DescriptorType)
  {
    descriptorType = _DescriptorType;
    return *this;
  }
  WriteDescriptorSet& setPImageInfo(const DescriptorImageInfo * _PImageInfo)
  {
    pImageInfo = _PImageInfo;
    return *this;
  }
  WriteDescriptorSet& setPBufferInfo(const DescriptorBufferInfo * _PBufferInfo)
  {
    pBufferInfo = _PBufferInfo;
    return *this;
  }
  WriteDescriptorSet& setPTexelBufferView(const VkBufferView * _PTexelBufferView)
  {
    pTexelBufferView = _PTexelBufferView;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDescriptorSet dstSet;
  uint32_t dstBinding;
  uint32_t dstArrayElement;
  uint32_t descriptorCount;
  VkDescriptorType descriptorType;
  const DescriptorImageInfo * pImageInfo;
  const DescriptorBufferInfo * pBufferInfo;
  const VkBufferView * pTexelBufferView;
};

class PhysicalDeviceLimits
{
public:
  PhysicalDeviceLimits& setMaxImageDimension1D(uint32_t _MaxImageDimension1D)
  {
    maxImageDimension1D = _MaxImageDimension1D;
    return *this;
  }
  PhysicalDeviceLimits& setMaxImageDimension2D(uint32_t _MaxImageDimension2D)
  {
    maxImageDimension2D = _MaxImageDimension2D;
    return *this;
  }
  PhysicalDeviceLimits& setMaxImageDimension3D(uint32_t _MaxImageDimension3D)
  {
    maxImageDimension3D = _MaxImageDimension3D;
    return *this;
  }
  PhysicalDeviceLimits& setMaxImageDimensionCube(uint32_t _MaxImageDimensionCube)
  {
    maxImageDimensionCube = _MaxImageDimensionCube;
    return *this;
  }
  PhysicalDeviceLimits& setMaxImageArrayLayers(uint32_t _MaxImageArrayLayers)
  {
    maxImageArrayLayers = _MaxImageArrayLayers;
    return *this;
  }
  PhysicalDeviceLimits& setMaxTexelBufferElements(uint32_t _MaxTexelBufferElements)
  {
    maxTexelBufferElements = _MaxTexelBufferElements;
    return *this;
  }
  PhysicalDeviceLimits& setMaxUniformBufferRange(uint32_t _MaxUniformBufferRange)
  {
    maxUniformBufferRange = _MaxUniformBufferRange;
    return *this;
  }
  PhysicalDeviceLimits& setMaxStorageBufferRange(uint32_t _MaxStorageBufferRange)
  {
    maxStorageBufferRange = _MaxStorageBufferRange;
    return *this;
  }
  PhysicalDeviceLimits& setMaxPushConstantsSize(uint32_t _MaxPushConstantsSize)
  {
    maxPushConstantsSize = _MaxPushConstantsSize;
    return *this;
  }
  PhysicalDeviceLimits& setMaxMemoryAllocationCount(uint32_t _MaxMemoryAllocationCount)
  {
    maxMemoryAllocationCount = _MaxMemoryAllocationCount;
    return *this;
  }
  PhysicalDeviceLimits& setMaxSamplerAllocationCount(uint32_t _MaxSamplerAllocationCount)
  {
    maxSamplerAllocationCount = _MaxSamplerAllocationCount;
    return *this;
  }
  PhysicalDeviceLimits& setBufferImageGranularity(VkDeviceSize _BufferImageGranularity)
  {
    bufferImageGranularity = _BufferImageGranularity;
    return *this;
  }
  PhysicalDeviceLimits& setSparseAddressSpaceSize(VkDeviceSize _SparseAddressSpaceSize)
  {
    sparseAddressSpaceSize = _SparseAddressSpaceSize;
    return *this;
  }
  PhysicalDeviceLimits& setMaxBoundDescriptorSets(uint32_t _MaxBoundDescriptorSets)
  {
    maxBoundDescriptorSets = _MaxBoundDescriptorSets;
    return *this;
  }
  PhysicalDeviceLimits& setMaxPerStageDescriptorSamplers(uint32_t _MaxPerStageDescriptorSamplers)
  {
    maxPerStageDescriptorSamplers = _MaxPerStageDescriptorSamplers;
    return *this;
  }
  PhysicalDeviceLimits& setMaxPerStageDescriptorUniformBuffers(uint32_t _MaxPerStageDescriptorUniformBuffers)
  {
    maxPerStageDescriptorUniformBuffers = _MaxPerStageDescriptorUniformBuffers;
    return *this;
  }
  PhysicalDeviceLimits& setMaxPerStageDescriptorStorageBuffers(uint32_t _MaxPerStageDescriptorStorageBuffers)
  {
    maxPerStageDescriptorStorageBuffers = _MaxPerStageDescriptorStorageBuffers;
    return *this;
  }
  PhysicalDeviceLimits& setMaxPerStageDescriptorSampledImages(uint32_t _MaxPerStageDescriptorSampledImages)
  {
    maxPerStageDescriptorSampledImages = _MaxPerStageDescriptorSampledImages;
    return *this;
  }
  PhysicalDeviceLimits& setMaxPerStageDescriptorStorageImages(uint32_t _MaxPerStageDescriptorStorageImages)
  {
    maxPerStageDescriptorStorageImages = _MaxPerStageDescriptorStorageImages;
    return *this;
  }
  PhysicalDeviceLimits& setMaxPerStageDescriptorInputAttachments(uint32_t _MaxPerStageDescriptorInputAttachments)
  {
    maxPerStageDescriptorInputAttachments = _MaxPerStageDescriptorInputAttachments;
    return *this;
  }
  PhysicalDeviceLimits& setMaxPerStageResources(uint32_t _MaxPerStageResources)
  {
    maxPerStageResources = _MaxPerStageResources;
    return *this;
  }
  PhysicalDeviceLimits& setMaxDescriptorSetSamplers(uint32_t _MaxDescriptorSetSamplers)
  {
    maxDescriptorSetSamplers = _MaxDescriptorSetSamplers;
    return *this;
  }
  PhysicalDeviceLimits& setMaxDescriptorSetUniformBuffers(uint32_t _MaxDescriptorSetUniformBuffers)
  {
    maxDescriptorSetUniformBuffers = _MaxDescriptorSetUniformBuffers;
    return *this;
  }
  PhysicalDeviceLimits& setMaxDescriptorSetUniformBuffersDynamic(uint32_t _MaxDescriptorSetUniformBuffersDynamic)
  {
    maxDescriptorSetUniformBuffersDynamic = _MaxDescriptorSetUniformBuffersDynamic;
    return *this;
  }
  PhysicalDeviceLimits& setMaxDescriptorSetStorageBuffers(uint32_t _MaxDescriptorSetStorageBuffers)
  {
    maxDescriptorSetStorageBuffers = _MaxDescriptorSetStorageBuffers;
    return *this;
  }
  PhysicalDeviceLimits& setMaxDescriptorSetStorageBuffersDynamic(uint32_t _MaxDescriptorSetStorageBuffersDynamic)
  {
    maxDescriptorSetStorageBuffersDynamic = _MaxDescriptorSetStorageBuffersDynamic;
    return *this;
  }
  PhysicalDeviceLimits& setMaxDescriptorSetSampledImages(uint32_t _MaxDescriptorSetSampledImages)
  {
    maxDescriptorSetSampledImages = _MaxDescriptorSetSampledImages;
    return *this;
  }
  PhysicalDeviceLimits& setMaxDescriptorSetStorageImages(uint32_t _MaxDescriptorSetStorageImages)
  {
    maxDescriptorSetStorageImages = _MaxDescriptorSetStorageImages;
    return *this;
  }
  PhysicalDeviceLimits& setMaxDescriptorSetInputAttachments(uint32_t _MaxDescriptorSetInputAttachments)
  {
    maxDescriptorSetInputAttachments = _MaxDescriptorSetInputAttachments;
    return *this;
  }
  PhysicalDeviceLimits& setMaxVertexInputAttributes(uint32_t _MaxVertexInputAttributes)
  {
    maxVertexInputAttributes = _MaxVertexInputAttributes;
    return *this;
  }
  PhysicalDeviceLimits& setMaxVertexInputBindings(uint32_t _MaxVertexInputBindings)
  {
    maxVertexInputBindings = _MaxVertexInputBindings;
    return *this;
  }
  PhysicalDeviceLimits& setMaxVertexInputAttributeOffset(uint32_t _MaxVertexInputAttributeOffset)
  {
    maxVertexInputAttributeOffset = _MaxVertexInputAttributeOffset;
    return *this;
  }
  PhysicalDeviceLimits& setMaxVertexInputBindingStride(uint32_t _MaxVertexInputBindingStride)
  {
    maxVertexInputBindingStride = _MaxVertexInputBindingStride;
    return *this;
  }
  PhysicalDeviceLimits& setMaxVertexOutputComponents(uint32_t _MaxVertexOutputComponents)
  {
    maxVertexOutputComponents = _MaxVertexOutputComponents;
    return *this;
  }
  PhysicalDeviceLimits& setMaxTessellationGenerationLevel(uint32_t _MaxTessellationGenerationLevel)
  {
    maxTessellationGenerationLevel = _MaxTessellationGenerationLevel;
    return *this;
  }
  PhysicalDeviceLimits& setMaxTessellationPatchSize(uint32_t _MaxTessellationPatchSize)
  {
    maxTessellationPatchSize = _MaxTessellationPatchSize;
    return *this;
  }
  PhysicalDeviceLimits& setMaxTessellationControlPerVertexInputComponents(uint32_t _MaxTessellationControlPerVertexInputComponents)
  {
    maxTessellationControlPerVertexInputComponents = _MaxTessellationControlPerVertexInputComponents;
    return *this;
  }
  PhysicalDeviceLimits& setMaxTessellationControlPerVertexOutputComponents(uint32_t _MaxTessellationControlPerVertexOutputComponents)
  {
    maxTessellationControlPerVertexOutputComponents = _MaxTessellationControlPerVertexOutputComponents;
    return *this;
  }
  PhysicalDeviceLimits& setMaxTessellationControlPerPatchOutputComponents(uint32_t _MaxTessellationControlPerPatchOutputComponents)
  {
    maxTessellationControlPerPatchOutputComponents = _MaxTessellationControlPerPatchOutputComponents;
    return *this;
  }
  PhysicalDeviceLimits& setMaxTessellationControlTotalOutputComponents(uint32_t _MaxTessellationControlTotalOutputComponents)
  {
    maxTessellationControlTotalOutputComponents = _MaxTessellationControlTotalOutputComponents;
    return *this;
  }
  PhysicalDeviceLimits& setMaxTessellationEvaluationInputComponents(uint32_t _MaxTessellationEvaluationInputComponents)
  {
    maxTessellationEvaluationInputComponents = _MaxTessellationEvaluationInputComponents;
    return *this;
  }
  PhysicalDeviceLimits& setMaxTessellationEvaluationOutputComponents(uint32_t _MaxTessellationEvaluationOutputComponents)
  {
    maxTessellationEvaluationOutputComponents = _MaxTessellationEvaluationOutputComponents;
    return *this;
  }
  PhysicalDeviceLimits& setMaxGeometryShaderInvocations(uint32_t _MaxGeometryShaderInvocations)
  {
    maxGeometryShaderInvocations = _MaxGeometryShaderInvocations;
    return *this;
  }
  PhysicalDeviceLimits& setMaxGeometryInputComponents(uint32_t _MaxGeometryInputComponents)
  {
    maxGeometryInputComponents = _MaxGeometryInputComponents;
    return *this;
  }
  PhysicalDeviceLimits& setMaxGeometryOutputComponents(uint32_t _MaxGeometryOutputComponents)
  {
    maxGeometryOutputComponents = _MaxGeometryOutputComponents;
    return *this;
  }
  PhysicalDeviceLimits& setMaxGeometryOutputVertices(uint32_t _MaxGeometryOutputVertices)
  {
    maxGeometryOutputVertices = _MaxGeometryOutputVertices;
    return *this;
  }
  PhysicalDeviceLimits& setMaxGeometryTotalOutputComponents(uint32_t _MaxGeometryTotalOutputComponents)
  {
    maxGeometryTotalOutputComponents = _MaxGeometryTotalOutputComponents;
    return *this;
  }
  PhysicalDeviceLimits& setMaxFragmentInputComponents(uint32_t _MaxFragmentInputComponents)
  {
    maxFragmentInputComponents = _MaxFragmentInputComponents;
    return *this;
  }
  PhysicalDeviceLimits& setMaxFragmentOutputAttachments(uint32_t _MaxFragmentOutputAttachments)
  {
    maxFragmentOutputAttachments = _MaxFragmentOutputAttachments;
    return *this;
  }
  PhysicalDeviceLimits& setMaxFragmentDualSrcAttachments(uint32_t _MaxFragmentDualSrcAttachments)
  {
    maxFragmentDualSrcAttachments = _MaxFragmentDualSrcAttachments;
    return *this;
  }
  PhysicalDeviceLimits& setMaxFragmentCombinedOutputResources(uint32_t _MaxFragmentCombinedOutputResources)
  {
    maxFragmentCombinedOutputResources = _MaxFragmentCombinedOutputResources;
    return *this;
  }
  PhysicalDeviceLimits& setMaxComputeSharedMemorySize(uint32_t _MaxComputeSharedMemorySize)
  {
    maxComputeSharedMemorySize = _MaxComputeSharedMemorySize;
    return *this;
  }
  PhysicalDeviceLimits& setMaxComputeWorkGroupCount(uint32_t _MaxComputeWorkGroupCount)
  {
    maxComputeWorkGroupCount = _MaxComputeWorkGroupCount;
    return *this;
  }
  PhysicalDeviceLimits& setMaxComputeWorkGroupInvocations(uint32_t _MaxComputeWorkGroupInvocations)
  {
    maxComputeWorkGroupInvocations = _MaxComputeWorkGroupInvocations;
    return *this;
  }
  PhysicalDeviceLimits& setMaxComputeWorkGroupSize(uint32_t _MaxComputeWorkGroupSize)
  {
    maxComputeWorkGroupSize = _MaxComputeWorkGroupSize;
    return *this;
  }
  PhysicalDeviceLimits& setSubPixelPrecisionBits(uint32_t _SubPixelPrecisionBits)
  {
    subPixelPrecisionBits = _SubPixelPrecisionBits;
    return *this;
  }
  PhysicalDeviceLimits& setSubTexelPrecisionBits(uint32_t _SubTexelPrecisionBits)
  {
    subTexelPrecisionBits = _SubTexelPrecisionBits;
    return *this;
  }
  PhysicalDeviceLimits& setMipmapPrecisionBits(uint32_t _MipmapPrecisionBits)
  {
    mipmapPrecisionBits = _MipmapPrecisionBits;
    return *this;
  }
  PhysicalDeviceLimits& setMaxDrawIndexedIndexValue(uint32_t _MaxDrawIndexedIndexValue)
  {
    maxDrawIndexedIndexValue = _MaxDrawIndexedIndexValue;
    return *this;
  }
  PhysicalDeviceLimits& setMaxDrawIndirectCount(uint32_t _MaxDrawIndirectCount)
  {
    maxDrawIndirectCount = _MaxDrawIndirectCount;
    return *this;
  }
  PhysicalDeviceLimits& setMaxSamplerLodBias(float _MaxSamplerLodBias)
  {
    maxSamplerLodBias = _MaxSamplerLodBias;
    return *this;
  }
  PhysicalDeviceLimits& setMaxSamplerAnisotropy(float _MaxSamplerAnisotropy)
  {
    maxSamplerAnisotropy = _MaxSamplerAnisotropy;
    return *this;
  }
  PhysicalDeviceLimits& setMaxViewports(uint32_t _MaxViewports)
  {
    maxViewports = _MaxViewports;
    return *this;
  }
  PhysicalDeviceLimits& setMaxViewportDimensions(uint32_t _MaxViewportDimensions)
  {
    maxViewportDimensions = _MaxViewportDimensions;
    return *this;
  }
  PhysicalDeviceLimits& setViewportBoundsRange(float _ViewportBoundsRange)
  {
    viewportBoundsRange = _ViewportBoundsRange;
    return *this;
  }
  PhysicalDeviceLimits& setViewportSubPixelBits(uint32_t _ViewportSubPixelBits)
  {
    viewportSubPixelBits = _ViewportSubPixelBits;
    return *this;
  }
  PhysicalDeviceLimits& setMinMemoryMapAlignment(size_t _MinMemoryMapAlignment)
  {
    minMemoryMapAlignment = _MinMemoryMapAlignment;
    return *this;
  }
  PhysicalDeviceLimits& setMinTexelBufferOffsetAlignment(VkDeviceSize _MinTexelBufferOffsetAlignment)
  {
    minTexelBufferOffsetAlignment = _MinTexelBufferOffsetAlignment;
    return *this;
  }
  PhysicalDeviceLimits& setMinUniformBufferOffsetAlignment(VkDeviceSize _MinUniformBufferOffsetAlignment)
  {
    minUniformBufferOffsetAlignment = _MinUniformBufferOffsetAlignment;
    return *this;
  }
  PhysicalDeviceLimits& setMinStorageBufferOffsetAlignment(VkDeviceSize _MinStorageBufferOffsetAlignment)
  {
    minStorageBufferOffsetAlignment = _MinStorageBufferOffsetAlignment;
    return *this;
  }
  PhysicalDeviceLimits& setMinTexelOffset(int32_t _MinTexelOffset)
  {
    minTexelOffset = _MinTexelOffset;
    return *this;
  }
  PhysicalDeviceLimits& setMaxTexelOffset(uint32_t _MaxTexelOffset)
  {
    maxTexelOffset = _MaxTexelOffset;
    return *this;
  }
  PhysicalDeviceLimits& setMinTexelGatherOffset(int32_t _MinTexelGatherOffset)
  {
    minTexelGatherOffset = _MinTexelGatherOffset;
    return *this;
  }
  PhysicalDeviceLimits& setMaxTexelGatherOffset(uint32_t _MaxTexelGatherOffset)
  {
    maxTexelGatherOffset = _MaxTexelGatherOffset;
    return *this;
  }
  PhysicalDeviceLimits& setMinInterpolationOffset(float _MinInterpolationOffset)
  {
    minInterpolationOffset = _MinInterpolationOffset;
    return *this;
  }
  PhysicalDeviceLimits& setMaxInterpolationOffset(float _MaxInterpolationOffset)
  {
    maxInterpolationOffset = _MaxInterpolationOffset;
    return *this;
  }
  PhysicalDeviceLimits& setSubPixelInterpolationOffsetBits(uint32_t _SubPixelInterpolationOffsetBits)
  {
    subPixelInterpolationOffsetBits = _SubPixelInterpolationOffsetBits;
    return *this;
  }
  PhysicalDeviceLimits& setMaxFramebufferWidth(uint32_t _MaxFramebufferWidth)
  {
    maxFramebufferWidth = _MaxFramebufferWidth;
    return *this;
  }
  PhysicalDeviceLimits& setMaxFramebufferHeight(uint32_t _MaxFramebufferHeight)
  {
    maxFramebufferHeight = _MaxFramebufferHeight;
    return *this;
  }
  PhysicalDeviceLimits& setMaxFramebufferLayers(uint32_t _MaxFramebufferLayers)
  {
    maxFramebufferLayers = _MaxFramebufferLayers;
    return *this;
  }
  PhysicalDeviceLimits& setFramebufferColorSampleCounts(VkSampleCountFlags _FramebufferColorSampleCounts)
  {
    framebufferColorSampleCounts = _FramebufferColorSampleCounts;
    return *this;
  }
  PhysicalDeviceLimits& setFramebufferDepthSampleCounts(VkSampleCountFlags _FramebufferDepthSampleCounts)
  {
    framebufferDepthSampleCounts = _FramebufferDepthSampleCounts;
    return *this;
  }
  PhysicalDeviceLimits& setFramebufferStencilSampleCounts(VkSampleCountFlags _FramebufferStencilSampleCounts)
  {
    framebufferStencilSampleCounts = _FramebufferStencilSampleCounts;
    return *this;
  }
  PhysicalDeviceLimits& setFramebufferNoAttachmentsSampleCounts(VkSampleCountFlags _FramebufferNoAttachmentsSampleCounts)
  {
    framebufferNoAttachmentsSampleCounts = _FramebufferNoAttachmentsSampleCounts;
    return *this;
  }
  PhysicalDeviceLimits& setMaxColorAttachments(uint32_t _MaxColorAttachments)
  {
    maxColorAttachments = _MaxColorAttachments;
    return *this;
  }
  PhysicalDeviceLimits& setSampledImageColorSampleCounts(VkSampleCountFlags _SampledImageColorSampleCounts)
  {
    sampledImageColorSampleCounts = _SampledImageColorSampleCounts;
    return *this;
  }
  PhysicalDeviceLimits& setSampledImageIntegerSampleCounts(VkSampleCountFlags _SampledImageIntegerSampleCounts)
  {
    sampledImageIntegerSampleCounts = _SampledImageIntegerSampleCounts;
    return *this;
  }
  PhysicalDeviceLimits& setSampledImageDepthSampleCounts(VkSampleCountFlags _SampledImageDepthSampleCounts)
  {
    sampledImageDepthSampleCounts = _SampledImageDepthSampleCounts;
    return *this;
  }
  PhysicalDeviceLimits& setSampledImageStencilSampleCounts(VkSampleCountFlags _SampledImageStencilSampleCounts)
  {
    sampledImageStencilSampleCounts = _SampledImageStencilSampleCounts;
    return *this;
  }
  PhysicalDeviceLimits& setStorageImageSampleCounts(VkSampleCountFlags _StorageImageSampleCounts)
  {
    storageImageSampleCounts = _StorageImageSampleCounts;
    return *this;
  }
  PhysicalDeviceLimits& setMaxSampleMaskWords(uint32_t _MaxSampleMaskWords)
  {
    maxSampleMaskWords = _MaxSampleMaskWords;
    return *this;
  }
  PhysicalDeviceLimits& setTimestampComputeAndGraphics(VkBool32 _TimestampComputeAndGraphics)
  {
    timestampComputeAndGraphics = _TimestampComputeAndGraphics;
    return *this;
  }
  PhysicalDeviceLimits& setTimestampPeriod(float _TimestampPeriod)
  {
    timestampPeriod = _TimestampPeriod;
    return *this;
  }
  PhysicalDeviceLimits& setMaxClipDistances(uint32_t _MaxClipDistances)
  {
    maxClipDistances = _MaxClipDistances;
    return *this;
  }
  PhysicalDeviceLimits& setMaxCullDistances(uint32_t _MaxCullDistances)
  {
    maxCullDistances = _MaxCullDistances;
    return *this;
  }
  PhysicalDeviceLimits& setMaxCombinedClipAndCullDistances(uint32_t _MaxCombinedClipAndCullDistances)
  {
    maxCombinedClipAndCullDistances = _MaxCombinedClipAndCullDistances;
    return *this;
  }
  PhysicalDeviceLimits& setDiscreteQueuePriorities(uint32_t _DiscreteQueuePriorities)
  {
    discreteQueuePriorities = _DiscreteQueuePriorities;
    return *this;
  }
  PhysicalDeviceLimits& setPointSizeRange(float _PointSizeRange)
  {
    pointSizeRange = _PointSizeRange;
    return *this;
  }
  PhysicalDeviceLimits& setLineWidthRange(float _LineWidthRange)
  {
    lineWidthRange = _LineWidthRange;
    return *this;
  }
  PhysicalDeviceLimits& setPointSizeGranularity(float _PointSizeGranularity)
  {
    pointSizeGranularity = _PointSizeGranularity;
    return *this;
  }
  PhysicalDeviceLimits& setLineWidthGranularity(float _LineWidthGranularity)
  {
    lineWidthGranularity = _LineWidthGranularity;
    return *this;
  }
  PhysicalDeviceLimits& setStrictLines(VkBool32 _StrictLines)
  {
    strictLines = _StrictLines;
    return *this;
  }
  PhysicalDeviceLimits& setStandardSampleLocations(VkBool32 _StandardSampleLocations)
  {
    standardSampleLocations = _StandardSampleLocations;
    return *this;
  }
  PhysicalDeviceLimits& setOptimalBufferCopyOffsetAlignment(VkDeviceSize _OptimalBufferCopyOffsetAlignment)
  {
    optimalBufferCopyOffsetAlignment = _OptimalBufferCopyOffsetAlignment;
    return *this;
  }
  PhysicalDeviceLimits& setOptimalBufferCopyRowPitchAlignment(VkDeviceSize _OptimalBufferCopyRowPitchAlignment)
  {
    optimalBufferCopyRowPitchAlignment = _OptimalBufferCopyRowPitchAlignment;
    return *this;
  }
  PhysicalDeviceLimits& setNonCoherentAtomSize(VkDeviceSize _NonCoherentAtomSize)
  {
    nonCoherentAtomSize = _NonCoherentAtomSize;
    return *this;
  }
public:
  uint32_t maxImageDimension1D;
  uint32_t maxImageDimension2D;
  uint32_t maxImageDimension3D;
  uint32_t maxImageDimensionCube;
  uint32_t maxImageArrayLayers;
  uint32_t maxTexelBufferElements;
  uint32_t maxUniformBufferRange;
  uint32_t maxStorageBufferRange;
  uint32_t maxPushConstantsSize;
  uint32_t maxMemoryAllocationCount;
  uint32_t maxSamplerAllocationCount;
  VkDeviceSize bufferImageGranularity;
  VkDeviceSize sparseAddressSpaceSize;
  uint32_t maxBoundDescriptorSets;
  uint32_t maxPerStageDescriptorSamplers;
  uint32_t maxPerStageDescriptorUniformBuffers;
  uint32_t maxPerStageDescriptorStorageBuffers;
  uint32_t maxPerStageDescriptorSampledImages;
  uint32_t maxPerStageDescriptorStorageImages;
  uint32_t maxPerStageDescriptorInputAttachments;
  uint32_t maxPerStageResources;
  uint32_t maxDescriptorSetSamplers;
  uint32_t maxDescriptorSetUniformBuffers;
  uint32_t maxDescriptorSetUniformBuffersDynamic;
  uint32_t maxDescriptorSetStorageBuffers;
  uint32_t maxDescriptorSetStorageBuffersDynamic;
  uint32_t maxDescriptorSetSampledImages;
  uint32_t maxDescriptorSetStorageImages;
  uint32_t maxDescriptorSetInputAttachments;
  uint32_t maxVertexInputAttributes;
  uint32_t maxVertexInputBindings;
  uint32_t maxVertexInputAttributeOffset;
  uint32_t maxVertexInputBindingStride;
  uint32_t maxVertexOutputComponents;
  uint32_t maxTessellationGenerationLevel;
  uint32_t maxTessellationPatchSize;
  uint32_t maxTessellationControlPerVertexInputComponents;
  uint32_t maxTessellationControlPerVertexOutputComponents;
  uint32_t maxTessellationControlPerPatchOutputComponents;
  uint32_t maxTessellationControlTotalOutputComponents;
  uint32_t maxTessellationEvaluationInputComponents;
  uint32_t maxTessellationEvaluationOutputComponents;
  uint32_t maxGeometryShaderInvocations;
  uint32_t maxGeometryInputComponents;
  uint32_t maxGeometryOutputComponents;
  uint32_t maxGeometryOutputVertices;
  uint32_t maxGeometryTotalOutputComponents;
  uint32_t maxFragmentInputComponents;
  uint32_t maxFragmentOutputAttachments;
  uint32_t maxFragmentDualSrcAttachments;
  uint32_t maxFragmentCombinedOutputResources;
  uint32_t maxComputeSharedMemorySize;
  uint32_t maxComputeWorkGroupCount;
  uint32_t maxComputeWorkGroupInvocations;
  uint32_t maxComputeWorkGroupSize;
  uint32_t subPixelPrecisionBits;
  uint32_t subTexelPrecisionBits;
  uint32_t mipmapPrecisionBits;
  uint32_t maxDrawIndexedIndexValue;
  uint32_t maxDrawIndirectCount;
  float maxSamplerLodBias;
  float maxSamplerAnisotropy;
  uint32_t maxViewports;
  uint32_t maxViewportDimensions;
  float viewportBoundsRange;
  uint32_t viewportSubPixelBits;
  size_t minMemoryMapAlignment;
  VkDeviceSize minTexelBufferOffsetAlignment;
  VkDeviceSize minUniformBufferOffsetAlignment;
  VkDeviceSize minStorageBufferOffsetAlignment;
  int32_t minTexelOffset;
  uint32_t maxTexelOffset;
  int32_t minTexelGatherOffset;
  uint32_t maxTexelGatherOffset;
  float minInterpolationOffset;
  float maxInterpolationOffset;
  uint32_t subPixelInterpolationOffsetBits;
  uint32_t maxFramebufferWidth;
  uint32_t maxFramebufferHeight;
  uint32_t maxFramebufferLayers;
  VkSampleCountFlags framebufferColorSampleCounts;
  VkSampleCountFlags framebufferDepthSampleCounts;
  VkSampleCountFlags framebufferStencilSampleCounts;
  VkSampleCountFlags framebufferNoAttachmentsSampleCounts;
  uint32_t maxColorAttachments;
  VkSampleCountFlags sampledImageColorSampleCounts;
  VkSampleCountFlags sampledImageIntegerSampleCounts;
  VkSampleCountFlags sampledImageDepthSampleCounts;
  VkSampleCountFlags sampledImageStencilSampleCounts;
  VkSampleCountFlags storageImageSampleCounts;
  uint32_t maxSampleMaskWords;
  VkBool32 timestampComputeAndGraphics;
  float timestampPeriod;
  uint32_t maxClipDistances;
  uint32_t maxCullDistances;
  uint32_t maxCombinedClipAndCullDistances;
  uint32_t discreteQueuePriorities;
  float pointSizeRange;
  float lineWidthRange;
  float pointSizeGranularity;
  float lineWidthGranularity;
  VkBool32 strictLines;
  VkBool32 standardSampleLocations;
  VkDeviceSize optimalBufferCopyOffsetAlignment;
  VkDeviceSize optimalBufferCopyRowPitchAlignment;
  VkDeviceSize nonCoherentAtomSize;
};

class ImageFormatProperties
{
public:
  ImageFormatProperties& setMaxExtent(Extent3D _MaxExtent)
  {
    maxExtent = _MaxExtent;
    return *this;
  }
  ImageFormatProperties& setMaxMipLevels(uint32_t _MaxMipLevels)
  {
    maxMipLevels = _MaxMipLevels;
    return *this;
  }
  ImageFormatProperties& setMaxArrayLayers(uint32_t _MaxArrayLayers)
  {
    maxArrayLayers = _MaxArrayLayers;
    return *this;
  }
  ImageFormatProperties& setSampleCounts(VkSampleCountFlags _SampleCounts)
  {
    sampleCounts = _SampleCounts;
    return *this;
  }
  ImageFormatProperties& setMaxResourceSize(VkDeviceSize _MaxResourceSize)
  {
    maxResourceSize = _MaxResourceSize;
    return *this;
  }
public:
  Extent3D maxExtent;
  uint32_t maxMipLevels;
  uint32_t maxArrayLayers;
  VkSampleCountFlags sampleCounts;
  VkDeviceSize maxResourceSize;
};

class PhysicalDeviceExternalImageFormatInfoKHX
{
public:
  PhysicalDeviceExternalImageFormatInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PhysicalDeviceExternalImageFormatInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PhysicalDeviceExternalImageFormatInfoKHX& setHandleType(VkExternalMemoryHandleTypeFlagBitsKHX _HandleType)
  {
    handleType = _HandleType;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkExternalMemoryHandleTypeFlagBitsKHX handleType;
};

class ImportSemaphoreWin32HandleInfoKHX
{
public:
  ImportSemaphoreWin32HandleInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ImportSemaphoreWin32HandleInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ImportSemaphoreWin32HandleInfoKHX& setSemaphore(VkSemaphore _Semaphore)
  {
    semaphore = _Semaphore;
    return *this;
  }
  ImportSemaphoreWin32HandleInfoKHX& setHandleType(VkExternalSemaphoreHandleTypeFlagsKHX _HandleType)
  {
    handleType = _HandleType;
    return *this;
  }
  ImportSemaphoreWin32HandleInfoKHX& setHandle(HANDLE _Handle)
  {
    handle = _Handle;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkSemaphore semaphore;
  VkExternalSemaphoreHandleTypeFlagsKHX handleType;
  HANDLE handle;
};

class DeviceGroupRenderPassBeginInfoKHX
{
public:
  DeviceGroupRenderPassBeginInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DeviceGroupRenderPassBeginInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DeviceGroupRenderPassBeginInfoKHX& setDeviceMask(uint32_t _DeviceMask)
  {
    deviceMask = _DeviceMask;
    return *this;
  }
  DeviceGroupRenderPassBeginInfoKHX& setDeviceRenderAreaCount(uint32_t _DeviceRenderAreaCount)
  {
    deviceRenderAreaCount = _DeviceRenderAreaCount;
    return *this;
  }
  DeviceGroupRenderPassBeginInfoKHX& setPDeviceRenderAreas(const Rect2D * _PDeviceRenderAreas)
  {
    pDeviceRenderAreas = _PDeviceRenderAreas;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t deviceMask;
  uint32_t deviceRenderAreaCount;
  const Rect2D * pDeviceRenderAreas;
};

class PhysicalDeviceMultiviewPropertiesKHX
{
public:
  PhysicalDeviceMultiviewPropertiesKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PhysicalDeviceMultiviewPropertiesKHX& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PhysicalDeviceMultiviewPropertiesKHX& setMaxMultiviewViewCount(uint32_t _MaxMultiviewViewCount)
  {
    maxMultiviewViewCount = _MaxMultiviewViewCount;
    return *this;
  }
  PhysicalDeviceMultiviewPropertiesKHX& setMaxMultiviewInstanceIndex(uint32_t _MaxMultiviewInstanceIndex)
  {
    maxMultiviewInstanceIndex = _MaxMultiviewInstanceIndex;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  uint32_t maxMultiviewViewCount;
  uint32_t maxMultiviewInstanceIndex;
};

class DispatchIndirectCommand
{
public:
  DispatchIndirectCommand& setX(uint32_t _X)
  {
    x = _X;
    return *this;
  }
  DispatchIndirectCommand& setY(uint32_t _Y)
  {
    y = _Y;
    return *this;
  }
  DispatchIndirectCommand& setZ(uint32_t _Z)
  {
    z = _Z;
    return *this;
  }
public:
  uint32_t x;
  uint32_t y;
  uint32_t z;
};

class MemoryHeap
{
public:
  MemoryHeap& setSize(VkDeviceSize _Size)
  {
    size = _Size;
    return *this;
  }
  MemoryHeap& setFlags(VkMemoryHeapFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
public:
  VkDeviceSize size;
  VkMemoryHeapFlags flags;
};

class PipelineViewportWScalingStateCreateInfoNV
{
public:
  PipelineViewportWScalingStateCreateInfoNV& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PipelineViewportWScalingStateCreateInfoNV& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PipelineViewportWScalingStateCreateInfoNV& setViewportWScalingEnable(VkBool32 _ViewportWScalingEnable)
  {
    viewportWScalingEnable = _ViewportWScalingEnable;
    return *this;
  }
  PipelineViewportWScalingStateCreateInfoNV& setViewportCount(uint32_t _ViewportCount)
  {
    viewportCount = _ViewportCount;
    return *this;
  }
  PipelineViewportWScalingStateCreateInfoNV& setPViewportWScalings(const ViewportWScalingNV * _PViewportWScalings)
  {
    pViewportWScalings = _PViewportWScalings;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkBool32 viewportWScalingEnable;
  uint32_t viewportCount;
  const ViewportWScalingNV * pViewportWScalings;
};

class QueueFamilyProperties2KHR
{
public:
  QueueFamilyProperties2KHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  QueueFamilyProperties2KHR& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  QueueFamilyProperties2KHR& setQueueFamilyProperties(QueueFamilyProperties _QueueFamilyProperties)
  {
    queueFamilyProperties = _QueueFamilyProperties;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  QueueFamilyProperties queueFamilyProperties;
};

class DisplayModePropertiesKHR
{
public:
  DisplayModePropertiesKHR& setDisplayMode(VkDisplayModeKHR _DisplayMode)
  {
    displayMode = _DisplayMode;
    return *this;
  }
  DisplayModePropertiesKHR& setParameters(DisplayModeParametersKHR _Parameters)
  {
    parameters = _Parameters;
    return *this;
  }
public:
  VkDisplayModeKHR displayMode;
  DisplayModeParametersKHR parameters;
};

class SparseBufferMemoryBindInfo
{
public:
  SparseBufferMemoryBindInfo& setBuffer(VkBuffer _Buffer)
  {
    buffer = _Buffer;
    return *this;
  }
  SparseBufferMemoryBindInfo& setBindCount(uint32_t _BindCount)
  {
    bindCount = _BindCount;
    return *this;
  }
  SparseBufferMemoryBindInfo& setPBinds(const SparseMemoryBind * _PBinds)
  {
    pBinds = _PBinds;
    return *this;
  }
public:
  VkBuffer buffer;
  uint32_t bindCount;
  const SparseMemoryBind * pBinds;
};

class PhysicalDeviceDiscardRectanglePropertiesEXT
{
public:
  PhysicalDeviceDiscardRectanglePropertiesEXT& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PhysicalDeviceDiscardRectanglePropertiesEXT& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PhysicalDeviceDiscardRectanglePropertiesEXT& setMaxDiscardRectangles(uint32_t _MaxDiscardRectangles)
  {
    maxDiscardRectangles = _MaxDiscardRectangles;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t maxDiscardRectangles;
};

class DrawIndexedIndirectCommand
{
public:
  DrawIndexedIndirectCommand& setIndexCount(uint32_t _IndexCount)
  {
    indexCount = _IndexCount;
    return *this;
  }
  DrawIndexedIndirectCommand& setInstanceCount(uint32_t _InstanceCount)
  {
    instanceCount = _InstanceCount;
    return *this;
  }
  DrawIndexedIndirectCommand& setFirstIndex(uint32_t _FirstIndex)
  {
    firstIndex = _FirstIndex;
    return *this;
  }
  DrawIndexedIndirectCommand& setVertexOffset(int32_t _VertexOffset)
  {
    vertexOffset = _VertexOffset;
    return *this;
  }
  DrawIndexedIndirectCommand& setFirstInstance(uint32_t _FirstInstance)
  {
    firstInstance = _FirstInstance;
    return *this;
  }
public:
  uint32_t indexCount;
  uint32_t instanceCount;
  uint32_t firstIndex;
  int32_t vertexOffset;
  uint32_t firstInstance;
};

class PhysicalDeviceExternalBufferInfoKHX
{
public:
  PhysicalDeviceExternalBufferInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PhysicalDeviceExternalBufferInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PhysicalDeviceExternalBufferInfoKHX& setFlags(VkBufferCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  PhysicalDeviceExternalBufferInfoKHX& setUsage(VkBufferUsageFlags _Usage)
  {
    usage = _Usage;
    return *this;
  }
  PhysicalDeviceExternalBufferInfoKHX& setHandleType(VkExternalMemoryHandleTypeFlagBitsKHX _HandleType)
  {
    handleType = _HandleType;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkBufferCreateFlags flags;
  VkBufferUsageFlags usage;
  VkExternalMemoryHandleTypeFlagBitsKHX handleType;
};

class SwapchainCreateInfoKHR
{
public:
  SwapchainCreateInfoKHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  SwapchainCreateInfoKHR& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  SwapchainCreateInfoKHR& setFlags(VkSwapchainCreateFlagsKHR _Flags)
  {
    flags = _Flags;
    return *this;
  }
  SwapchainCreateInfoKHR& setSurface(VkSurfaceKHR _Surface)
  {
    surface = _Surface;
    return *this;
  }
  SwapchainCreateInfoKHR& setMinImageCount(uint32_t _MinImageCount)
  {
    minImageCount = _MinImageCount;
    return *this;
  }
  SwapchainCreateInfoKHR& setImageFormat(VkFormat _ImageFormat)
  {
    imageFormat = _ImageFormat;
    return *this;
  }
  SwapchainCreateInfoKHR& setImageColorSpace(VkColorSpaceKHR _ImageColorSpace)
  {
    imageColorSpace = _ImageColorSpace;
    return *this;
  }
  SwapchainCreateInfoKHR& setImageExtent(Extent2D _ImageExtent)
  {
    imageExtent = _ImageExtent;
    return *this;
  }
  SwapchainCreateInfoKHR& setImageArrayLayers(uint32_t _ImageArrayLayers)
  {
    imageArrayLayers = _ImageArrayLayers;
    return *this;
  }
  SwapchainCreateInfoKHR& setImageUsage(VkImageUsageFlags _ImageUsage)
  {
    imageUsage = _ImageUsage;
    return *this;
  }
  SwapchainCreateInfoKHR& setImageSharingMode(VkSharingMode _ImageSharingMode)
  {
    imageSharingMode = _ImageSharingMode;
    return *this;
  }
  SwapchainCreateInfoKHR& setQueueFamilyIndexCount(uint32_t _QueueFamilyIndexCount)
  {
    queueFamilyIndexCount = _QueueFamilyIndexCount;
    return *this;
  }
  SwapchainCreateInfoKHR& setPQueueFamilyIndices(const uint32_t * _PQueueFamilyIndices)
  {
    pQueueFamilyIndices = _PQueueFamilyIndices;
    return *this;
  }
  SwapchainCreateInfoKHR& setPreTransform(VkSurfaceTransformFlagBitsKHR _PreTransform)
  {
    preTransform = _PreTransform;
    return *this;
  }
  SwapchainCreateInfoKHR& setCompositeAlpha(VkCompositeAlphaFlagBitsKHR _CompositeAlpha)
  {
    compositeAlpha = _CompositeAlpha;
    return *this;
  }
  SwapchainCreateInfoKHR& setPresentMode(VkPresentModeKHR _PresentMode)
  {
    presentMode = _PresentMode;
    return *this;
  }
  SwapchainCreateInfoKHR& setClipped(VkBool32 _Clipped)
  {
    clipped = _Clipped;
    return *this;
  }
  SwapchainCreateInfoKHR& setOldSwapchain(VkSwapchainKHR _OldSwapchain)
  {
    oldSwapchain = _OldSwapchain;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkSwapchainCreateFlagsKHR flags;
  VkSurfaceKHR surface;
  uint32_t minImageCount;
  VkFormat imageFormat;
  VkColorSpaceKHR imageColorSpace;
  Extent2D imageExtent;
  uint32_t imageArrayLayers;
  VkImageUsageFlags imageUsage;
  VkSharingMode imageSharingMode;
  uint32_t queueFamilyIndexCount;
  const uint32_t * pQueueFamilyIndices;
  VkSurfaceTransformFlagBitsKHR preTransform;
  VkCompositeAlphaFlagBitsKHR compositeAlpha;
  VkPresentModeKHR presentMode;
  VkBool32 clipped;
  VkSwapchainKHR oldSwapchain;
};

class DeviceGroupDeviceCreateInfoKHX
{
public:
  DeviceGroupDeviceCreateInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DeviceGroupDeviceCreateInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DeviceGroupDeviceCreateInfoKHX& setPhysicalDeviceCount(uint32_t _PhysicalDeviceCount)
  {
    physicalDeviceCount = _PhysicalDeviceCount;
    return *this;
  }
  DeviceGroupDeviceCreateInfoKHX& setPPhysicalDevices(const VkPhysicalDevice * _PPhysicalDevices)
  {
    pPhysicalDevices = _PPhysicalDevices;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t physicalDeviceCount;
  const VkPhysicalDevice * pPhysicalDevices;
};

class PhysicalDeviceSparseProperties
{
public:
  PhysicalDeviceSparseProperties& setResidencyStandard2DBlockShape(VkBool32 _ResidencyStandard2DBlockShape)
  {
    residencyStandard2DBlockShape = _ResidencyStandard2DBlockShape;
    return *this;
  }
  PhysicalDeviceSparseProperties& setResidencyStandard2DMultisampleBlockShape(VkBool32 _ResidencyStandard2DMultisampleBlockShape)
  {
    residencyStandard2DMultisampleBlockShape = _ResidencyStandard2DMultisampleBlockShape;
    return *this;
  }
  PhysicalDeviceSparseProperties& setResidencyStandard3DBlockShape(VkBool32 _ResidencyStandard3DBlockShape)
  {
    residencyStandard3DBlockShape = _ResidencyStandard3DBlockShape;
    return *this;
  }
  PhysicalDeviceSparseProperties& setResidencyAlignedMipSize(VkBool32 _ResidencyAlignedMipSize)
  {
    residencyAlignedMipSize = _ResidencyAlignedMipSize;
    return *this;
  }
  PhysicalDeviceSparseProperties& setResidencyNonResidentStrict(VkBool32 _ResidencyNonResidentStrict)
  {
    residencyNonResidentStrict = _ResidencyNonResidentStrict;
    return *this;
  }
public:
  VkBool32 residencyStandard2DBlockShape;
  VkBool32 residencyStandard2DMultisampleBlockShape;
  VkBool32 residencyStandard3DBlockShape;
  VkBool32 residencyAlignedMipSize;
  VkBool32 residencyNonResidentStrict;
};

class EventCreateInfo
{
public:
  EventCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  EventCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  EventCreateInfo& setFlags(VkEventCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkEventCreateFlags flags;
};

class PhysicalDeviceGroupPropertiesKHX
{
public:
  PhysicalDeviceGroupPropertiesKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PhysicalDeviceGroupPropertiesKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PhysicalDeviceGroupPropertiesKHX& setPhysicalDeviceCount(uint32_t _PhysicalDeviceCount)
  {
    physicalDeviceCount = _PhysicalDeviceCount;
    return *this;
  }
  PhysicalDeviceGroupPropertiesKHX& setPhysicalDevices(VkPhysicalDevice _PhysicalDevices)
  {
    physicalDevices = _PhysicalDevices;
    return *this;
  }
  PhysicalDeviceGroupPropertiesKHX& setSubsetAllocation(VkBool32 _SubsetAllocation)
  {
    subsetAllocation = _SubsetAllocation;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t physicalDeviceCount;
  VkPhysicalDevice physicalDevices;
  VkBool32 subsetAllocation;
};

class ImageBlit
{
public:
  ImageBlit& setSrcSubresource(ImageSubresourceLayers _SrcSubresource)
  {
    srcSubresource = _SrcSubresource;
    return *this;
  }
  ImageBlit& setSrcOffsets(Offset3D _SrcOffsets)
  {
    srcOffsets = _SrcOffsets;
    return *this;
  }
  ImageBlit& setDstSubresource(ImageSubresourceLayers _DstSubresource)
  {
    dstSubresource = _DstSubresource;
    return *this;
  }
  ImageBlit& setDstOffsets(Offset3D _DstOffsets)
  {
    dstOffsets = _DstOffsets;
    return *this;
  }
public:
  ImageSubresourceLayers srcSubresource;
  Offset3D srcOffsets;
  ImageSubresourceLayers dstSubresource;
  Offset3D dstOffsets;
};

class PhysicalDeviceMemoryProperties
{
public:
  PhysicalDeviceMemoryProperties& setMemoryTypeCount(uint32_t _MemoryTypeCount)
  {
    memoryTypeCount = _MemoryTypeCount;
    return *this;
  }
  PhysicalDeviceMemoryProperties& setMemoryTypes(MemoryType _MemoryTypes)
  {
    memoryTypes = _MemoryTypes;
    return *this;
  }
  PhysicalDeviceMemoryProperties& setMemoryHeapCount(uint32_t _MemoryHeapCount)
  {
    memoryHeapCount = _MemoryHeapCount;
    return *this;
  }
  PhysicalDeviceMemoryProperties& setMemoryHeaps(MemoryHeap _MemoryHeaps)
  {
    memoryHeaps = _MemoryHeaps;
    return *this;
  }
public:
  uint32_t memoryTypeCount;
  MemoryType memoryTypes;
  uint32_t memoryHeapCount;
  MemoryHeap memoryHeaps;
};

class DedicatedAllocationMemoryAllocateInfoNV
{
public:
  DedicatedAllocationMemoryAllocateInfoNV& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DedicatedAllocationMemoryAllocateInfoNV& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DedicatedAllocationMemoryAllocateInfoNV& setImage(VkImage _Image)
  {
    image = _Image;
    return *this;
  }
  DedicatedAllocationMemoryAllocateInfoNV& setBuffer(VkBuffer _Buffer)
  {
    buffer = _Buffer;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkImage image;
  VkBuffer buffer;
};

class BindSparseInfo
{
public:
  BindSparseInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  BindSparseInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  BindSparseInfo& setWaitSemaphoreCount(uint32_t _WaitSemaphoreCount)
  {
    waitSemaphoreCount = _WaitSemaphoreCount;
    return *this;
  }
  BindSparseInfo& setPWaitSemaphores(const VkSemaphore * _PWaitSemaphores)
  {
    pWaitSemaphores = _PWaitSemaphores;
    return *this;
  }
  BindSparseInfo& setBufferBindCount(uint32_t _BufferBindCount)
  {
    bufferBindCount = _BufferBindCount;
    return *this;
  }
  BindSparseInfo& setPBufferBinds(const SparseBufferMemoryBindInfo * _PBufferBinds)
  {
    pBufferBinds = _PBufferBinds;
    return *this;
  }
  BindSparseInfo& setImageOpaqueBindCount(uint32_t _ImageOpaqueBindCount)
  {
    imageOpaqueBindCount = _ImageOpaqueBindCount;
    return *this;
  }
  BindSparseInfo& setPImageOpaqueBinds(const SparseImageOpaqueMemoryBindInfo * _PImageOpaqueBinds)
  {
    pImageOpaqueBinds = _PImageOpaqueBinds;
    return *this;
  }
  BindSparseInfo& setImageBindCount(uint32_t _ImageBindCount)
  {
    imageBindCount = _ImageBindCount;
    return *this;
  }
  BindSparseInfo& setPImageBinds(const SparseImageMemoryBindInfo * _PImageBinds)
  {
    pImageBinds = _PImageBinds;
    return *this;
  }
  BindSparseInfo& setSignalSemaphoreCount(uint32_t _SignalSemaphoreCount)
  {
    signalSemaphoreCount = _SignalSemaphoreCount;
    return *this;
  }
  BindSparseInfo& setPSignalSemaphores(const VkSemaphore * _PSignalSemaphores)
  {
    pSignalSemaphores = _PSignalSemaphores;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t waitSemaphoreCount;
  const VkSemaphore * pWaitSemaphores;
  uint32_t bufferBindCount;
  const SparseBufferMemoryBindInfo * pBufferBinds;
  uint32_t imageOpaqueBindCount;
  const SparseImageOpaqueMemoryBindInfo * pImageOpaqueBinds;
  uint32_t imageBindCount;
  const SparseImageMemoryBindInfo * pImageBinds;
  uint32_t signalSemaphoreCount;
  const VkSemaphore * pSignalSemaphores;
};

class PhysicalDeviceImageFormatInfo2KHX
{
public:
  PhysicalDeviceImageFormatInfo2KHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PhysicalDeviceImageFormatInfo2KHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PhysicalDeviceImageFormatInfo2KHX& setFormat(VkFormat _Format)
  {
    format = _Format;
    return *this;
  }
  PhysicalDeviceImageFormatInfo2KHX& setType(VkImageType _Type)
  {
    type = _Type;
    return *this;
  }
  PhysicalDeviceImageFormatInfo2KHX& setTiling(VkImageTiling _Tiling)
  {
    tiling = _Tiling;
    return *this;
  }
  PhysicalDeviceImageFormatInfo2KHX& setUsage(VkImageUsageFlags _Usage)
  {
    usage = _Usage;
    return *this;
  }
  PhysicalDeviceImageFormatInfo2KHX& setFlags(VkImageCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkFormat format;
  VkImageType type;
  VkImageTiling tiling;
  VkImageUsageFlags usage;
  VkImageCreateFlags flags;
};

class ImportMemoryFdInfoKHX
{
public:
  ImportMemoryFdInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ImportMemoryFdInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ImportMemoryFdInfoKHX& setHandleType(VkExternalMemoryHandleTypeFlagBitsKHX _HandleType)
  {
    handleType = _HandleType;
    return *this;
  }
  ImportMemoryFdInfoKHX& setFd(int _Fd)
  {
    fd = _Fd;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkExternalMemoryHandleTypeFlagBitsKHX handleType;
  int fd;
};

class PipelineDynamicStateCreateInfo
{
public:
  PipelineDynamicStateCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PipelineDynamicStateCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PipelineDynamicStateCreateInfo& setFlags(VkPipelineDynamicStateCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  PipelineDynamicStateCreateInfo& setDynamicStateCount(uint32_t _DynamicStateCount)
  {
    dynamicStateCount = _DynamicStateCount;
    return *this;
  }
  PipelineDynamicStateCreateInfo& setPDynamicStates(const VkDynamicState * _PDynamicStates)
  {
    pDynamicStates = _PDynamicStates;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkPipelineDynamicStateCreateFlags flags;
  uint32_t dynamicStateCount;
  const VkDynamicState * pDynamicStates;
};

class BufferMemoryBarrier
{
public:
  BufferMemoryBarrier& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  BufferMemoryBarrier& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  BufferMemoryBarrier& setSrcAccessMask(VkAccessFlags _SrcAccessMask)
  {
    srcAccessMask = _SrcAccessMask;
    return *this;
  }
  BufferMemoryBarrier& setDstAccessMask(VkAccessFlags _DstAccessMask)
  {
    dstAccessMask = _DstAccessMask;
    return *this;
  }
  BufferMemoryBarrier& setSrcQueueFamilyIndex(uint32_t _SrcQueueFamilyIndex)
  {
    srcQueueFamilyIndex = _SrcQueueFamilyIndex;
    return *this;
  }
  BufferMemoryBarrier& setDstQueueFamilyIndex(uint32_t _DstQueueFamilyIndex)
  {
    dstQueueFamilyIndex = _DstQueueFamilyIndex;
    return *this;
  }
  BufferMemoryBarrier& setBuffer(VkBuffer _Buffer)
  {
    buffer = _Buffer;
    return *this;
  }
  BufferMemoryBarrier& setOffset(VkDeviceSize _Offset)
  {
    offset = _Offset;
    return *this;
  }
  BufferMemoryBarrier& setSize(VkDeviceSize _Size)
  {
    size = _Size;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkAccessFlags srcAccessMask;
  VkAccessFlags dstAccessMask;
  uint32_t srcQueueFamilyIndex;
  uint32_t dstQueueFamilyIndex;
  VkBuffer buffer;
  VkDeviceSize offset;
  VkDeviceSize size;
};

class ViSurfaceCreateInfoNN
{
public:
  ViSurfaceCreateInfoNN& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ViSurfaceCreateInfoNN& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ViSurfaceCreateInfoNN& setFlags(VkViSurfaceCreateFlagsNN _Flags)
  {
    flags = _Flags;
    return *this;
  }
  ViSurfaceCreateInfoNN& setWindow(void * _Window)
  {
    window = _Window;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkViSurfaceCreateFlagsNN flags;
  void * window;
};

class PipelineColorBlendAttachmentState
{
public:
  PipelineColorBlendAttachmentState& setBlendEnable(VkBool32 _BlendEnable)
  {
    blendEnable = _BlendEnable;
    return *this;
  }
  PipelineColorBlendAttachmentState& setSrcColorBlendFactor(VkBlendFactor _SrcColorBlendFactor)
  {
    srcColorBlendFactor = _SrcColorBlendFactor;
    return *this;
  }
  PipelineColorBlendAttachmentState& setDstColorBlendFactor(VkBlendFactor _DstColorBlendFactor)
  {
    dstColorBlendFactor = _DstColorBlendFactor;
    return *this;
  }
  PipelineColorBlendAttachmentState& setColorBlendOp(VkBlendOp _ColorBlendOp)
  {
    colorBlendOp = _ColorBlendOp;
    return *this;
  }
  PipelineColorBlendAttachmentState& setSrcAlphaBlendFactor(VkBlendFactor _SrcAlphaBlendFactor)
  {
    srcAlphaBlendFactor = _SrcAlphaBlendFactor;
    return *this;
  }
  PipelineColorBlendAttachmentState& setDstAlphaBlendFactor(VkBlendFactor _DstAlphaBlendFactor)
  {
    dstAlphaBlendFactor = _DstAlphaBlendFactor;
    return *this;
  }
  PipelineColorBlendAttachmentState& setAlphaBlendOp(VkBlendOp _AlphaBlendOp)
  {
    alphaBlendOp = _AlphaBlendOp;
    return *this;
  }
  PipelineColorBlendAttachmentState& setColorWriteMask(VkColorComponentFlags _ColorWriteMask)
  {
    colorWriteMask = _ColorWriteMask;
    return *this;
  }
public:
  VkBool32 blendEnable;
  VkBlendFactor srcColorBlendFactor;
  VkBlendFactor dstColorBlendFactor;
  VkBlendOp colorBlendOp;
  VkBlendFactor srcAlphaBlendFactor;
  VkBlendFactor dstAlphaBlendFactor;
  VkBlendOp alphaBlendOp;
  VkColorComponentFlags colorWriteMask;
};

class BufferCopy
{
public:
  BufferCopy& setSrcOffset(VkDeviceSize _SrcOffset)
  {
    srcOffset = _SrcOffset;
    return *this;
  }
  BufferCopy& setDstOffset(VkDeviceSize _DstOffset)
  {
    dstOffset = _DstOffset;
    return *this;
  }
  BufferCopy& setSize(VkDeviceSize _Size)
  {
    size = _Size;
    return *this;
  }
public:
  VkDeviceSize srcOffset;
  VkDeviceSize dstOffset;
  VkDeviceSize size;
};

class PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX
{
public:
  PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& setPerViewPositionAllComponents(VkBool32 _PerViewPositionAllComponents)
  {
    perViewPositionAllComponents = _PerViewPositionAllComponents;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  VkBool32 perViewPositionAllComponents;
};

class SubmitInfo
{
public:
  SubmitInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  SubmitInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  SubmitInfo& setWaitSemaphoreCount(uint32_t _WaitSemaphoreCount)
  {
    waitSemaphoreCount = _WaitSemaphoreCount;
    return *this;
  }
  SubmitInfo& setPWaitSemaphores(const VkSemaphore * _PWaitSemaphores)
  {
    pWaitSemaphores = _PWaitSemaphores;
    return *this;
  }
  SubmitInfo& setPWaitDstStageMask(const VkPipelineStageFlags * _PWaitDstStageMask)
  {
    pWaitDstStageMask = _PWaitDstStageMask;
    return *this;
  }
  SubmitInfo& setCommandBufferCount(uint32_t _CommandBufferCount)
  {
    commandBufferCount = _CommandBufferCount;
    return *this;
  }
  SubmitInfo& setPCommandBuffers(const VkCommandBuffer * _PCommandBuffers)
  {
    pCommandBuffers = _PCommandBuffers;
    return *this;
  }
  SubmitInfo& setSignalSemaphoreCount(uint32_t _SignalSemaphoreCount)
  {
    signalSemaphoreCount = _SignalSemaphoreCount;
    return *this;
  }
  SubmitInfo& setPSignalSemaphores(const VkSemaphore * _PSignalSemaphores)
  {
    pSignalSemaphores = _PSignalSemaphores;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t waitSemaphoreCount;
  const VkSemaphore * pWaitSemaphores;
  const VkPipelineStageFlags * pWaitDstStageMask;
  uint32_t commandBufferCount;
  const VkCommandBuffer * pCommandBuffers;
  uint32_t signalSemaphoreCount;
  const VkSemaphore * pSignalSemaphores;
};

class ExternalMemoryImageCreateInfoKHX
{
public:
  ExternalMemoryImageCreateInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  ExternalMemoryImageCreateInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  ExternalMemoryImageCreateInfoKHX& setHandleTypes(VkExternalMemoryHandleTypeFlagsKHX _HandleTypes)
  {
    handleTypes = _HandleTypes;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkExternalMemoryHandleTypeFlagsKHX handleTypes;
};

class DebugReportCallbackCreateInfoEXT
{
public:
  DebugReportCallbackCreateInfoEXT& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DebugReportCallbackCreateInfoEXT& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DebugReportCallbackCreateInfoEXT& setFlags(VkDebugReportFlagsEXT _Flags)
  {
    flags = _Flags;
    return *this;
  }
  DebugReportCallbackCreateInfoEXT& setPfnCallback(PFN_vkDebugReportCallbackEXT _PfnCallback)
  {
    pfnCallback = _PfnCallback;
    return *this;
  }
  DebugReportCallbackCreateInfoEXT& setPUserData(void * _PUserData)
  {
    pUserData = _PUserData;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkDebugReportFlagsEXT flags;
  PFN_vkDebugReportCallbackEXT pfnCallback;
  void * pUserData;
};

class PhysicalDeviceSparseImageFormatInfo2KHR
{
public:
  PhysicalDeviceSparseImageFormatInfo2KHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PhysicalDeviceSparseImageFormatInfo2KHR& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PhysicalDeviceSparseImageFormatInfo2KHR& setFormat(VkFormat _Format)
  {
    format = _Format;
    return *this;
  }
  PhysicalDeviceSparseImageFormatInfo2KHR& setType(VkImageType _Type)
  {
    type = _Type;
    return *this;
  }
  PhysicalDeviceSparseImageFormatInfo2KHR& setSamples(VkSampleCountFlagBits _Samples)
  {
    samples = _Samples;
    return *this;
  }
  PhysicalDeviceSparseImageFormatInfo2KHR& setUsage(VkImageUsageFlags _Usage)
  {
    usage = _Usage;
    return *this;
  }
  PhysicalDeviceSparseImageFormatInfo2KHR& setTiling(VkImageTiling _Tiling)
  {
    tiling = _Tiling;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkFormat format;
  VkImageType type;
  VkSampleCountFlagBits samples;
  VkImageUsageFlags usage;
  VkImageTiling tiling;
};

class AttachmentReference
{
public:
  AttachmentReference& setAttachment(uint32_t _Attachment)
  {
    attachment = _Attachment;
    return *this;
  }
  AttachmentReference& setLayout(VkImageLayout _Layout)
  {
    layout = _Layout;
    return *this;
  }
public:
  uint32_t attachment;
  VkImageLayout layout;
};

class ObjectTableVertexBufferEntryNVX
{
public:
  ObjectTableVertexBufferEntryNVX& setType(VkObjectEntryTypeNVX _Type)
  {
    type = _Type;
    return *this;
  }
  ObjectTableVertexBufferEntryNVX& setFlags(VkObjectEntryUsageFlagsNVX _Flags)
  {
    flags = _Flags;
    return *this;
  }
  ObjectTableVertexBufferEntryNVX& setBuffer(VkBuffer _Buffer)
  {
    buffer = _Buffer;
    return *this;
  }
public:
  VkObjectEntryTypeNVX type;
  VkObjectEntryUsageFlagsNVX flags;
  VkBuffer buffer;
};

class PipelineVertexInputStateCreateInfo
{
public:
  PipelineVertexInputStateCreateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PipelineVertexInputStateCreateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PipelineVertexInputStateCreateInfo& setFlags(VkPipelineVertexInputStateCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
  PipelineVertexInputStateCreateInfo& setVertexBindingDescriptionCount(uint32_t _VertexBindingDescriptionCount)
  {
    vertexBindingDescriptionCount = _VertexBindingDescriptionCount;
    return *this;
  }
  PipelineVertexInputStateCreateInfo& setPVertexBindingDescriptions(const VertexInputBindingDescription * _PVertexBindingDescriptions)
  {
    pVertexBindingDescriptions = _PVertexBindingDescriptions;
    return *this;
  }
  PipelineVertexInputStateCreateInfo& setVertexAttributeDescriptionCount(uint32_t _VertexAttributeDescriptionCount)
  {
    vertexAttributeDescriptionCount = _VertexAttributeDescriptionCount;
    return *this;
  }
  PipelineVertexInputStateCreateInfo& setPVertexAttributeDescriptions(const VertexInputAttributeDescription * _PVertexAttributeDescriptions)
  {
    pVertexAttributeDescriptions = _PVertexAttributeDescriptions;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkPipelineVertexInputStateCreateFlags flags;
  uint32_t vertexBindingDescriptionCount;
  const VertexInputBindingDescription * pVertexBindingDescriptions;
  uint32_t vertexAttributeDescriptionCount;
  const VertexInputAttributeDescription * pVertexAttributeDescriptions;
};

class PhysicalDeviceImageFormatInfo2KHR
{
public:
  PhysicalDeviceImageFormatInfo2KHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PhysicalDeviceImageFormatInfo2KHR& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PhysicalDeviceImageFormatInfo2KHR& setFormat(VkFormat _Format)
  {
    format = _Format;
    return *this;
  }
  PhysicalDeviceImageFormatInfo2KHR& setType(VkImageType _Type)
  {
    type = _Type;
    return *this;
  }
  PhysicalDeviceImageFormatInfo2KHR& setTiling(VkImageTiling _Tiling)
  {
    tiling = _Tiling;
    return *this;
  }
  PhysicalDeviceImageFormatInfo2KHR& setUsage(VkImageUsageFlags _Usage)
  {
    usage = _Usage;
    return *this;
  }
  PhysicalDeviceImageFormatInfo2KHR& setFlags(VkImageCreateFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkFormat format;
  VkImageType type;
  VkImageTiling tiling;
  VkImageUsageFlags usage;
  VkImageCreateFlags flags;
};

class ClearRect
{
public:
  ClearRect& setRect(Rect2D _Rect)
  {
    rect = _Rect;
    return *this;
  }
  ClearRect& setBaseArrayLayer(uint32_t _BaseArrayLayer)
  {
    baseArrayLayer = _BaseArrayLayer;
    return *this;
  }
  ClearRect& setLayerCount(uint32_t _LayerCount)
  {
    layerCount = _LayerCount;
    return *this;
  }
public:
  Rect2D rect;
  uint32_t baseArrayLayer;
  uint32_t layerCount;
};

class IndirectCommandsLayoutCreateInfoNVX
{
public:
  IndirectCommandsLayoutCreateInfoNVX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  IndirectCommandsLayoutCreateInfoNVX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  IndirectCommandsLayoutCreateInfoNVX& setPipelineBindPoint(VkPipelineBindPoint _PipelineBindPoint)
  {
    pipelineBindPoint = _PipelineBindPoint;
    return *this;
  }
  IndirectCommandsLayoutCreateInfoNVX& setFlags(VkIndirectCommandsLayoutUsageFlagsNVX _Flags)
  {
    flags = _Flags;
    return *this;
  }
  IndirectCommandsLayoutCreateInfoNVX& setTokenCount(uint32_t _TokenCount)
  {
    tokenCount = _TokenCount;
    return *this;
  }
  IndirectCommandsLayoutCreateInfoNVX& setPTokens(const IndirectCommandsLayoutTokenNVX * _PTokens)
  {
    pTokens = _PTokens;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkPipelineBindPoint pipelineBindPoint;
  VkIndirectCommandsLayoutUsageFlagsNVX flags;
  uint32_t tokenCount;
  const IndirectCommandsLayoutTokenNVX * pTokens;
};

class SparseMemoryBind
{
public:
  SparseMemoryBind& setResourceOffset(VkDeviceSize _ResourceOffset)
  {
    resourceOffset = _ResourceOffset;
    return *this;
  }
  SparseMemoryBind& setSize(VkDeviceSize _Size)
  {
    size = _Size;
    return *this;
  }
  SparseMemoryBind& setMemory(VkDeviceMemory _Memory)
  {
    memory = _Memory;
    return *this;
  }
  SparseMemoryBind& setMemoryOffset(VkDeviceSize _MemoryOffset)
  {
    memoryOffset = _MemoryOffset;
    return *this;
  }
  SparseMemoryBind& setFlags(VkSparseMemoryBindFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
public:
  VkDeviceSize resourceOffset;
  VkDeviceSize size;
  VkDeviceMemory memory;
  VkDeviceSize memoryOffset;
  VkSparseMemoryBindFlags flags;
};

class CommandBufferAllocateInfo
{
public:
  CommandBufferAllocateInfo& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  CommandBufferAllocateInfo& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  CommandBufferAllocateInfo& setCommandPool(VkCommandPool _CommandPool)
  {
    commandPool = _CommandPool;
    return *this;
  }
  CommandBufferAllocateInfo& setLevel(VkCommandBufferLevel _Level)
  {
    level = _Level;
    return *this;
  }
  CommandBufferAllocateInfo& setCommandBufferCount(uint32_t _CommandBufferCount)
  {
    commandBufferCount = _CommandBufferCount;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkCommandPool commandPool;
  VkCommandBufferLevel level;
  uint32_t commandBufferCount;
};

class DeviceGroupCommandBufferBeginInfoKHX
{
public:
  DeviceGroupCommandBufferBeginInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DeviceGroupCommandBufferBeginInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DeviceGroupCommandBufferBeginInfoKHX& setDeviceMask(uint32_t _DeviceMask)
  {
    deviceMask = _DeviceMask;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t deviceMask;
};

class FormatProperties2KHR
{
public:
  FormatProperties2KHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  FormatProperties2KHR& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  FormatProperties2KHR& setFormatProperties(FormatProperties _FormatProperties)
  {
    formatProperties = _FormatProperties;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  FormatProperties formatProperties;
};

class PipelineRasterizationStateRasterizationOrderAMD
{
public:
  PipelineRasterizationStateRasterizationOrderAMD& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PipelineRasterizationStateRasterizationOrderAMD& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PipelineRasterizationStateRasterizationOrderAMD& setRasterizationOrder(VkRasterizationOrderAMD _RasterizationOrder)
  {
    rasterizationOrder = _RasterizationOrder;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkRasterizationOrderAMD rasterizationOrder;
};

class MemoryFdPropertiesKHX
{
public:
  MemoryFdPropertiesKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  MemoryFdPropertiesKHX& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  MemoryFdPropertiesKHX& setMemoryTypeBits(uint32_t _MemoryTypeBits)
  {
    memoryTypeBits = _MemoryTypeBits;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  uint32_t memoryTypeBits;
};

class PhysicalDeviceProperties2KHR
{
public:
  PhysicalDeviceProperties2KHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PhysicalDeviceProperties2KHR& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PhysicalDeviceProperties2KHR& setProperties(PhysicalDeviceProperties _Properties)
  {
    properties = _Properties;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  PhysicalDeviceProperties properties;
};

class PipelineDiscardRectangleStateCreateInfoEXT
{
public:
  PipelineDiscardRectangleStateCreateInfoEXT& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PipelineDiscardRectangleStateCreateInfoEXT& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PipelineDiscardRectangleStateCreateInfoEXT& setFlags(VkPipelineDiscardRectangleStateCreateFlagsEXT _Flags)
  {
    flags = _Flags;
    return *this;
  }
  PipelineDiscardRectangleStateCreateInfoEXT& setDiscardRectangleMode(VkDiscardRectangleModeEXT _DiscardRectangleMode)
  {
    discardRectangleMode = _DiscardRectangleMode;
    return *this;
  }
  PipelineDiscardRectangleStateCreateInfoEXT& setDiscardRectangleCount(uint32_t _DiscardRectangleCount)
  {
    discardRectangleCount = _DiscardRectangleCount;
    return *this;
  }
  PipelineDiscardRectangleStateCreateInfoEXT& setPDiscardRectangles(const Rect2D * _PDiscardRectangles)
  {
    pDiscardRectangles = _PDiscardRectangles;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  VkPipelineDiscardRectangleStateCreateFlagsEXT flags;
  VkDiscardRectangleModeEXT discardRectangleMode;
  uint32_t discardRectangleCount;
  const Rect2D * pDiscardRectangles;
};

class SparseImageFormatProperties
{
public:
  SparseImageFormatProperties& setAspectMask(VkImageAspectFlags _AspectMask)
  {
    aspectMask = _AspectMask;
    return *this;
  }
  SparseImageFormatProperties& setImageGranularity(Extent3D _ImageGranularity)
  {
    imageGranularity = _ImageGranularity;
    return *this;
  }
  SparseImageFormatProperties& setFlags(VkSparseImageFormatFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
public:
  VkImageAspectFlags aspectMask;
  Extent3D imageGranularity;
  VkSparseImageFormatFlags flags;
};

class PhysicalDeviceMemoryProperties2KHR
{
public:
  PhysicalDeviceMemoryProperties2KHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PhysicalDeviceMemoryProperties2KHR& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PhysicalDeviceMemoryProperties2KHR& setMemoryProperties(PhysicalDeviceMemoryProperties _MemoryProperties)
  {
    memoryProperties = _MemoryProperties;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  PhysicalDeviceMemoryProperties memoryProperties;
};

class SurfaceCapabilities2EXT
{
public:
  SurfaceCapabilities2EXT& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  SurfaceCapabilities2EXT& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  SurfaceCapabilities2EXT& setMinImageCount(uint32_t _MinImageCount)
  {
    minImageCount = _MinImageCount;
    return *this;
  }
  SurfaceCapabilities2EXT& setMaxImageCount(uint32_t _MaxImageCount)
  {
    maxImageCount = _MaxImageCount;
    return *this;
  }
  SurfaceCapabilities2EXT& setCurrentExtent(Extent2D _CurrentExtent)
  {
    currentExtent = _CurrentExtent;
    return *this;
  }
  SurfaceCapabilities2EXT& setMinImageExtent(Extent2D _MinImageExtent)
  {
    minImageExtent = _MinImageExtent;
    return *this;
  }
  SurfaceCapabilities2EXT& setMaxImageExtent(Extent2D _MaxImageExtent)
  {
    maxImageExtent = _MaxImageExtent;
    return *this;
  }
  SurfaceCapabilities2EXT& setMaxImageArrayLayers(uint32_t _MaxImageArrayLayers)
  {
    maxImageArrayLayers = _MaxImageArrayLayers;
    return *this;
  }
  SurfaceCapabilities2EXT& setSupportedTransforms(VkSurfaceTransformFlagsKHR _SupportedTransforms)
  {
    supportedTransforms = _SupportedTransforms;
    return *this;
  }
  SurfaceCapabilities2EXT& setCurrentTransform(VkSurfaceTransformFlagBitsKHR _CurrentTransform)
  {
    currentTransform = _CurrentTransform;
    return *this;
  }
  SurfaceCapabilities2EXT& setSupportedCompositeAlpha(VkCompositeAlphaFlagsKHR _SupportedCompositeAlpha)
  {
    supportedCompositeAlpha = _SupportedCompositeAlpha;
    return *this;
  }
  SurfaceCapabilities2EXT& setSupportedUsageFlags(VkImageUsageFlags _SupportedUsageFlags)
  {
    supportedUsageFlags = _SupportedUsageFlags;
    return *this;
  }
  SurfaceCapabilities2EXT& setSupportedSurfaceCounters(VkSurfaceCounterFlagsEXT _SupportedSurfaceCounters)
  {
    supportedSurfaceCounters = _SupportedSurfaceCounters;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  uint32_t minImageCount;
  uint32_t maxImageCount;
  Extent2D currentExtent;
  Extent2D minImageExtent;
  Extent2D maxImageExtent;
  uint32_t maxImageArrayLayers;
  VkSurfaceTransformFlagsKHR supportedTransforms;
  VkSurfaceTransformFlagBitsKHR currentTransform;
  VkCompositeAlphaFlagsKHR supportedCompositeAlpha;
  VkImageUsageFlags supportedUsageFlags;
  VkSurfaceCounterFlagsEXT supportedSurfaceCounters;
};

class DisplayPresentInfoKHR
{
public:
  DisplayPresentInfoKHR& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DisplayPresentInfoKHR& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DisplayPresentInfoKHR& setSrcRect(Rect2D _SrcRect)
  {
    srcRect = _SrcRect;
    return *this;
  }
  DisplayPresentInfoKHR& setDstRect(Rect2D _DstRect)
  {
    dstRect = _DstRect;
    return *this;
  }
  DisplayPresentInfoKHR& setPersistent(VkBool32 _Persistent)
  {
    persistent = _Persistent;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  Rect2D srcRect;
  Rect2D dstRect;
  VkBool32 persistent;
};

class VertexInputAttributeDescription
{
public:
  VertexInputAttributeDescription& setLocation(uint32_t _Location)
  {
    location = _Location;
    return *this;
  }
  VertexInputAttributeDescription& setBinding(uint32_t _Binding)
  {
    binding = _Binding;
    return *this;
  }
  VertexInputAttributeDescription& setFormat(VkFormat _Format)
  {
    format = _Format;
    return *this;
  }
  VertexInputAttributeDescription& setOffset(uint32_t _Offset)
  {
    offset = _Offset;
    return *this;
  }
public:
  uint32_t location;
  uint32_t binding;
  VkFormat format;
  uint32_t offset;
};

class PhysicalDeviceProperties2KHX
{
public:
  PhysicalDeviceProperties2KHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  PhysicalDeviceProperties2KHX& setPNext(void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  PhysicalDeviceProperties2KHX& setProperties(PhysicalDeviceProperties _Properties)
  {
    properties = _Properties;
    return *this;
  }
public:
  VkStructureType sType;
  void * pNext;
  PhysicalDeviceProperties properties;
};

class DeviceGroupSubmitInfoKHX
{
public:
  DeviceGroupSubmitInfoKHX& setSType(VkStructureType _SType)
  {
    sType = _SType;
    return *this;
  }
  DeviceGroupSubmitInfoKHX& setPNext(const void * _PNext)
  {
    pNext = _PNext;
    return *this;
  }
  DeviceGroupSubmitInfoKHX& setWaitSemaphoreCount(uint32_t _WaitSemaphoreCount)
  {
    waitSemaphoreCount = _WaitSemaphoreCount;
    return *this;
  }
  DeviceGroupSubmitInfoKHX& setPWaitSemaphoreDeviceIndices(const uint32_t * _PWaitSemaphoreDeviceIndices)
  {
    pWaitSemaphoreDeviceIndices = _PWaitSemaphoreDeviceIndices;
    return *this;
  }
  DeviceGroupSubmitInfoKHX& setCommandBufferCount(uint32_t _CommandBufferCount)
  {
    commandBufferCount = _CommandBufferCount;
    return *this;
  }
  DeviceGroupSubmitInfoKHX& setPCommandBufferDeviceMasks(const uint32_t * _PCommandBufferDeviceMasks)
  {
    pCommandBufferDeviceMasks = _PCommandBufferDeviceMasks;
    return *this;
  }
  DeviceGroupSubmitInfoKHX& setSignalSemaphoreCount(uint32_t _SignalSemaphoreCount)
  {
    signalSemaphoreCount = _SignalSemaphoreCount;
    return *this;
  }
  DeviceGroupSubmitInfoKHX& setPSignalSemaphoreDeviceIndices(const uint32_t * _PSignalSemaphoreDeviceIndices)
  {
    pSignalSemaphoreDeviceIndices = _PSignalSemaphoreDeviceIndices;
    return *this;
  }
public:
  VkStructureType sType;
  const void * pNext;
  uint32_t waitSemaphoreCount;
  const uint32_t * pWaitSemaphoreDeviceIndices;
  uint32_t commandBufferCount;
  const uint32_t * pCommandBufferDeviceMasks;
  uint32_t signalSemaphoreCount;
  const uint32_t * pSignalSemaphoreDeviceIndices;
};

class SparseImageMemoryRequirements
{
public:
  SparseImageMemoryRequirements& setFormatProperties(SparseImageFormatProperties _FormatProperties)
  {
    formatProperties = _FormatProperties;
    return *this;
  }
  SparseImageMemoryRequirements& setImageMipTailFirstLod(uint32_t _ImageMipTailFirstLod)
  {
    imageMipTailFirstLod = _ImageMipTailFirstLod;
    return *this;
  }
  SparseImageMemoryRequirements& setImageMipTailSize(VkDeviceSize _ImageMipTailSize)
  {
    imageMipTailSize = _ImageMipTailSize;
    return *this;
  }
  SparseImageMemoryRequirements& setImageMipTailOffset(VkDeviceSize _ImageMipTailOffset)
  {
    imageMipTailOffset = _ImageMipTailOffset;
    return *this;
  }
  SparseImageMemoryRequirements& setImageMipTailStride(VkDeviceSize _ImageMipTailStride)
  {
    imageMipTailStride = _ImageMipTailStride;
    return *this;
  }
public:
  SparseImageFormatProperties formatProperties;
  uint32_t imageMipTailFirstLod;
  VkDeviceSize imageMipTailSize;
  VkDeviceSize imageMipTailOffset;
  VkDeviceSize imageMipTailStride;
};

class ImageSubresourceRange
{
public:
  ImageSubresourceRange& setAspectMask(VkImageAspectFlags _AspectMask)
  {
    aspectMask = _AspectMask;
    return *this;
  }
  ImageSubresourceRange& setBaseMipLevel(uint32_t _BaseMipLevel)
  {
    baseMipLevel = _BaseMipLevel;
    return *this;
  }
  ImageSubresourceRange& setLevelCount(uint32_t _LevelCount)
  {
    levelCount = _LevelCount;
    return *this;
  }
  ImageSubresourceRange& setBaseArrayLayer(uint32_t _BaseArrayLayer)
  {
    baseArrayLayer = _BaseArrayLayer;
    return *this;
  }
  ImageSubresourceRange& setLayerCount(uint32_t _LayerCount)
  {
    layerCount = _LayerCount;
    return *this;
  }
public:
  VkImageAspectFlags aspectMask;
  uint32_t baseMipLevel;
  uint32_t levelCount;
  uint32_t baseArrayLayer;
  uint32_t layerCount;
};

class DisplayModeParametersKHR
{
public:
  DisplayModeParametersKHR& setVisibleRegion(Extent2D _VisibleRegion)
  {
    visibleRegion = _VisibleRegion;
    return *this;
  }
  DisplayModeParametersKHR& setRefreshRate(uint32_t _RefreshRate)
  {
    refreshRate = _RefreshRate;
    return *this;
  }
public:
  Extent2D visibleRegion;
  uint32_t refreshRate;
};

class SparseImageMemoryBind
{
public:
  SparseImageMemoryBind& setSubresource(ImageSubresource _Subresource)
  {
    subresource = _Subresource;
    return *this;
  }
  SparseImageMemoryBind& setOffset(Offset3D _Offset)
  {
    offset = _Offset;
    return *this;
  }
  SparseImageMemoryBind& setExtent(Extent3D _Extent)
  {
    extent = _Extent;
    return *this;
  }
  SparseImageMemoryBind& setMemory(VkDeviceMemory _Memory)
  {
    memory = _Memory;
    return *this;
  }
  SparseImageMemoryBind& setMemoryOffset(VkDeviceSize _MemoryOffset)
  {
    memoryOffset = _MemoryOffset;
    return *this;
  }
  SparseImageMemoryBind& setFlags(VkSparseMemoryBindFlags _Flags)
  {
    flags = _Flags;
    return *this;
  }
public:
  ImageSubresource subresource;
  Offset3D offset;
  Extent3D extent;
  VkDeviceMemory memory;
  VkDeviceSize memoryOffset;
  VkSparseMemoryBindFlags flags;
};
inline VkResult CreateInstance(const InstanceCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkInstance * pInstance)
{
  return vkCreateInstance(pCreateInfo, pAllocator, pInstance);
}

inline void DestroyInstance(VkInstance instance, const AllocationCallbacks * pAllocator)
{
  vkDestroyInstance(instance, pAllocator);
}

inline VkResult EnumeratePhysicalDevices(VkInstance instance, uint32_t * pPhysicalDeviceCount, VkPhysicalDevice * pPhysicalDevices)
{
  return vkEnumeratePhysicalDevices(instance, pPhysicalDeviceCount, pPhysicalDevices);
}

inline void GetPhysicalDeviceFeatures(VkPhysicalDevice physicalDevice, PhysicalDeviceFeatures * pFeatures)
{
  vkGetPhysicalDeviceFeatures(physicalDevice, pFeatures);
}

inline void GetPhysicalDeviceFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, FormatProperties * pFormatProperties)
{
  vkGetPhysicalDeviceFormatProperties(physicalDevice, format, pFormatProperties);
}

inline VkResult GetPhysicalDeviceImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, ImageFormatProperties * pImageFormatProperties)
{
  return vkGetPhysicalDeviceImageFormatProperties(physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties);
}

inline void GetPhysicalDeviceProperties(VkPhysicalDevice physicalDevice, PhysicalDeviceProperties * pProperties)
{
  vkGetPhysicalDeviceProperties(physicalDevice, pProperties);
}

inline void GetPhysicalDeviceQueueFamilyProperties(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, QueueFamilyProperties * pQueueFamilyProperties)
{
  vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
}

inline void GetPhysicalDeviceMemoryProperties(VkPhysicalDevice physicalDevice, PhysicalDeviceMemoryProperties * pMemoryProperties)
{
  vkGetPhysicalDeviceMemoryProperties(physicalDevice, pMemoryProperties);
}

inline PFN_vkVoidFunction GetInstanceProcAddr(VkInstance instance, const char * pName)
{
  return vkGetInstanceProcAddr(instance, pName);
}

inline PFN_vkVoidFunction GetDeviceProcAddr(VkDevice device, const char * pName)
{
  return vkGetDeviceProcAddr(device, pName);
}

inline VkResult CreateDevice(VkPhysicalDevice physicalDevice, const DeviceCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkDevice * pDevice)
{
  return vkCreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice);
}

inline void DestroyDevice(VkDevice device, const AllocationCallbacks * pAllocator)
{
  vkDestroyDevice(device, pAllocator);
}

inline VkResult EnumerateInstanceExtensionProperties(const char * pLayerName, uint32_t * pPropertyCount, ExtensionProperties * pProperties)
{
  return vkEnumerateInstanceExtensionProperties(pLayerName, pPropertyCount, pProperties);
}

inline VkResult EnumerateDeviceExtensionProperties(VkPhysicalDevice physicalDevice, const char * pLayerName, uint32_t * pPropertyCount, ExtensionProperties * pProperties)
{
  return vkEnumerateDeviceExtensionProperties(physicalDevice, pLayerName, pPropertyCount, pProperties);
}

inline VkResult EnumerateInstanceLayerProperties(uint32_t * pPropertyCount, LayerProperties * pProperties)
{
  return vkEnumerateInstanceLayerProperties(pPropertyCount, pProperties);
}

inline VkResult EnumerateDeviceLayerProperties(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, LayerProperties * pProperties)
{
  return vkEnumerateDeviceLayerProperties(physicalDevice, pPropertyCount, pProperties);
}

inline void GetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue * pQueue)
{
  vkGetDeviceQueue(device, queueFamilyIndex, queueIndex, pQueue);
}

inline VkResult QueueSubmit(VkQueue queue, uint32_t submitCount, const SubmitInfo * pSubmits, VkFence fence)
{
  return vkQueueSubmit(queue, submitCount, pSubmits, fence);
}

inline VkResult QueueWaitIdle(VkQueue queue)
{
  return vkQueueWaitIdle(queue);
}

inline VkResult DeviceWaitIdle(VkDevice device)
{
  return vkDeviceWaitIdle(device);
}

inline VkResult AllocateMemory(VkDevice device, const MemoryAllocateInfo * pAllocateInfo, const AllocationCallbacks * pAllocator, VkDeviceMemory * pMemory)
{
  return vkAllocateMemory(device, pAllocateInfo, pAllocator, pMemory);
}

inline void FreeMemory(VkDevice device, VkDeviceMemory memory, const AllocationCallbacks * pAllocator)
{
  vkFreeMemory(device, memory, pAllocator);
}

inline VkResult MapMemory(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void * * ppData)
{
  return vkMapMemory(device, memory, offset, size, flags, ppData);
}

inline void UnmapMemory(VkDevice device, VkDeviceMemory memory)
{
  vkUnmapMemory(device, memory);
}

inline VkResult FlushMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const MappedMemoryRange * pMemoryRanges)
{
  return vkFlushMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
}

inline VkResult InvalidateMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const MappedMemoryRange * pMemoryRanges)
{
  return vkInvalidateMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
}

inline void GetDeviceMemoryCommitment(VkDevice device, VkDeviceMemory memory, VkDeviceSize * pCommittedMemoryInBytes)
{
  vkGetDeviceMemoryCommitment(device, memory, pCommittedMemoryInBytes);
}

inline VkResult BindBufferMemory(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset)
{
  return vkBindBufferMemory(device, buffer, memory, memoryOffset);
}

inline VkResult BindImageMemory(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset)
{
  return vkBindImageMemory(device, image, memory, memoryOffset);
}

inline void GetBufferMemoryRequirements(VkDevice device, VkBuffer buffer, MemoryRequirements * pMemoryRequirements)
{
  vkGetBufferMemoryRequirements(device, buffer, pMemoryRequirements);
}

inline void GetImageMemoryRequirements(VkDevice device, VkImage image, MemoryRequirements * pMemoryRequirements)
{
  vkGetImageMemoryRequirements(device, image, pMemoryRequirements);
}

inline void GetImageSparseMemoryRequirements(VkDevice device, VkImage image, uint32_t * pSparseMemoryRequirementCount, SparseImageMemoryRequirements * pSparseMemoryRequirements)
{
  vkGetImageSparseMemoryRequirements(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
}

inline void GetPhysicalDeviceSparseImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t * pPropertyCount, SparseImageFormatProperties * pProperties)
{
  vkGetPhysicalDeviceSparseImageFormatProperties(physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties);
}

inline VkResult QueueBindSparse(VkQueue queue, uint32_t bindInfoCount, const BindSparseInfo * pBindInfo, VkFence fence)
{
  return vkQueueBindSparse(queue, bindInfoCount, pBindInfo, fence);
}

inline VkResult CreateFence(VkDevice device, const FenceCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkFence * pFence)
{
  return vkCreateFence(device, pCreateInfo, pAllocator, pFence);
}

inline void DestroyFence(VkDevice device, VkFence fence, const AllocationCallbacks * pAllocator)
{
  vkDestroyFence(device, fence, pAllocator);
}

inline VkResult ResetFences(VkDevice device, uint32_t fenceCount, const VkFence * pFences)
{
  return vkResetFences(device, fenceCount, pFences);
}

inline VkResult GetFenceStatus(VkDevice device, VkFence fence)
{
  return vkGetFenceStatus(device, fence);
}

inline VkResult WaitForFences(VkDevice device, uint32_t fenceCount, const VkFence * pFences, VkBool32 waitAll, uint64_t timeout)
{
  return vkWaitForFences(device, fenceCount, pFences, waitAll, timeout);
}

inline VkResult CreateSemaphore(VkDevice device, const SemaphoreCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkSemaphore * pSemaphore)
{
  return vkCreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore);
}

inline void DestroySemaphore(VkDevice device, VkSemaphore semaphore, const AllocationCallbacks * pAllocator)
{
  vkDestroySemaphore(device, semaphore, pAllocator);
}

inline VkResult CreateEvent(VkDevice device, const EventCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkEvent * pEvent)
{
  return vkCreateEvent(device, pCreateInfo, pAllocator, pEvent);
}

inline void DestroyEvent(VkDevice device, VkEvent event, const AllocationCallbacks * pAllocator)
{
  vkDestroyEvent(device, event, pAllocator);
}

inline VkResult GetEventStatus(VkDevice device, VkEvent event)
{
  return vkGetEventStatus(device, event);
}

inline VkResult SetEvent(VkDevice device, VkEvent event)
{
  return vkSetEvent(device, event);
}

inline VkResult ResetEvent(VkDevice device, VkEvent event)
{
  return vkResetEvent(device, event);
}

inline VkResult CreateQueryPool(VkDevice device, const QueryPoolCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkQueryPool * pQueryPool)
{
  return vkCreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool);
}

inline void DestroyQueryPool(VkDevice device, VkQueryPool queryPool, const AllocationCallbacks * pAllocator)
{
  vkDestroyQueryPool(device, queryPool, pAllocator);
}

inline VkResult GetQueryPoolResults(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void * pData, VkDeviceSize stride, VkQueryResultFlags flags)
{
  return vkGetQueryPoolResults(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);
}

inline VkResult CreateBuffer(VkDevice device, const BufferCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkBuffer * pBuffer)
{
  return vkCreateBuffer(device, pCreateInfo, pAllocator, pBuffer);
}

inline void DestroyBuffer(VkDevice device, VkBuffer buffer, const AllocationCallbacks * pAllocator)
{
  vkDestroyBuffer(device, buffer, pAllocator);
}

inline VkResult CreateBufferView(VkDevice device, const BufferViewCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkBufferView * pView)
{
  return vkCreateBufferView(device, pCreateInfo, pAllocator, pView);
}

inline void DestroyBufferView(VkDevice device, VkBufferView bufferView, const AllocationCallbacks * pAllocator)
{
  vkDestroyBufferView(device, bufferView, pAllocator);
}

inline VkResult CreateImage(VkDevice device, const ImageCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkImage * pImage)
{
  return vkCreateImage(device, pCreateInfo, pAllocator, pImage);
}

inline void DestroyImage(VkDevice device, VkImage image, const AllocationCallbacks * pAllocator)
{
  vkDestroyImage(device, image, pAllocator);
}

inline void GetImageSubresourceLayout(VkDevice device, VkImage image, const ImageSubresource * pSubresource, SubresourceLayout * pLayout)
{
  vkGetImageSubresourceLayout(device, image, pSubresource, pLayout);
}

inline VkResult CreateImageView(VkDevice device, const ImageViewCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkImageView * pView)
{
  return vkCreateImageView(device, pCreateInfo, pAllocator, pView);
}

inline void DestroyImageView(VkDevice device, VkImageView imageView, const AllocationCallbacks * pAllocator)
{
  vkDestroyImageView(device, imageView, pAllocator);
}

inline VkResult CreateShaderModule(VkDevice device, const ShaderModuleCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkShaderModule * pShaderModule)
{
  return vkCreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule);
}

inline void DestroyShaderModule(VkDevice device, VkShaderModule shaderModule, const AllocationCallbacks * pAllocator)
{
  vkDestroyShaderModule(device, shaderModule, pAllocator);
}

inline VkResult CreatePipelineCache(VkDevice device, const PipelineCacheCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkPipelineCache * pPipelineCache)
{
  return vkCreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache);
}

inline void DestroyPipelineCache(VkDevice device, VkPipelineCache pipelineCache, const AllocationCallbacks * pAllocator)
{
  vkDestroyPipelineCache(device, pipelineCache, pAllocator);
}

inline VkResult GetPipelineCacheData(VkDevice device, VkPipelineCache pipelineCache, size_t * pDataSize, void * pData)
{
  return vkGetPipelineCacheData(device, pipelineCache, pDataSize, pData);
}

inline VkResult MergePipelineCaches(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache * pSrcCaches)
{
  return vkMergePipelineCaches(device, dstCache, srcCacheCount, pSrcCaches);
}

inline VkResult CreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const GraphicsPipelineCreateInfo * pCreateInfos, const AllocationCallbacks * pAllocator, VkPipeline * pPipelines)
{
  return vkCreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

inline VkResult CreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const ComputePipelineCreateInfo * pCreateInfos, const AllocationCallbacks * pAllocator, VkPipeline * pPipelines)
{
  return vkCreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

inline void DestroyPipeline(VkDevice device, VkPipeline pipeline, const AllocationCallbacks * pAllocator)
{
  vkDestroyPipeline(device, pipeline, pAllocator);
}

inline VkResult CreatePipelineLayout(VkDevice device, const PipelineLayoutCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkPipelineLayout * pPipelineLayout)
{
  return vkCreatePipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout);
}

inline void DestroyPipelineLayout(VkDevice device, VkPipelineLayout pipelineLayout, const AllocationCallbacks * pAllocator)
{
  vkDestroyPipelineLayout(device, pipelineLayout, pAllocator);
}

inline VkResult CreateSampler(VkDevice device, const SamplerCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkSampler * pSampler)
{
  return vkCreateSampler(device, pCreateInfo, pAllocator, pSampler);
}

inline void DestroySampler(VkDevice device, VkSampler sampler, const AllocationCallbacks * pAllocator)
{
  vkDestroySampler(device, sampler, pAllocator);
}

inline VkResult CreateDescriptorSetLayout(VkDevice device, const DescriptorSetLayoutCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkDescriptorSetLayout * pSetLayout)
{
  return vkCreateDescriptorSetLayout(device, pCreateInfo, pAllocator, pSetLayout);
}

inline void DestroyDescriptorSetLayout(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const AllocationCallbacks * pAllocator)
{
  vkDestroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator);
}

inline VkResult CreateDescriptorPool(VkDevice device, const DescriptorPoolCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkDescriptorPool * pDescriptorPool)
{
  return vkCreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool);
}

inline void DestroyDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, const AllocationCallbacks * pAllocator)
{
  vkDestroyDescriptorPool(device, descriptorPool, pAllocator);
}

inline VkResult ResetDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags)
{
  return vkResetDescriptorPool(device, descriptorPool, flags);
}

inline VkResult AllocateDescriptorSets(VkDevice device, const DescriptorSetAllocateInfo * pAllocateInfo, VkDescriptorSet * pDescriptorSets)
{
  return vkAllocateDescriptorSets(device, pAllocateInfo, pDescriptorSets);
}

inline VkResult FreeDescriptorSets(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets)
{
  return vkFreeDescriptorSets(device, descriptorPool, descriptorSetCount, pDescriptorSets);
}

inline void UpdateDescriptorSets(VkDevice device, uint32_t descriptorWriteCount, const WriteDescriptorSet * pDescriptorWrites, uint32_t descriptorCopyCount, const CopyDescriptorSet * pDescriptorCopies)
{
  vkUpdateDescriptorSets(device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies);
}

inline VkResult CreateFramebuffer(VkDevice device, const FramebufferCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkFramebuffer * pFramebuffer)
{
  return vkCreateFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer);
}

inline void DestroyFramebuffer(VkDevice device, VkFramebuffer framebuffer, const AllocationCallbacks * pAllocator)
{
  vkDestroyFramebuffer(device, framebuffer, pAllocator);
}

inline VkResult CreateRenderPass(VkDevice device, const RenderPassCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkRenderPass * pRenderPass)
{
  return vkCreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass);
}

inline void DestroyRenderPass(VkDevice device, VkRenderPass renderPass, const AllocationCallbacks * pAllocator)
{
  vkDestroyRenderPass(device, renderPass, pAllocator);
}

inline void GetRenderAreaGranularity(VkDevice device, VkRenderPass renderPass, Extent2D * pGranularity)
{
  vkGetRenderAreaGranularity(device, renderPass, pGranularity);
}

inline VkResult CreateCommandPool(VkDevice device, const CommandPoolCreateInfo * pCreateInfo, const AllocationCallbacks * pAllocator, VkCommandPool * pCommandPool)
{
  return vkCreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool);
}

inline void DestroyCommandPool(VkDevice device, VkCommandPool commandPool, const AllocationCallbacks * pAllocator)
{
  vkDestroyCommandPool(device, commandPool, pAllocator);
}

inline VkResult ResetCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags)
{
  return vkResetCommandPool(device, commandPool, flags);
}

inline VkResult AllocateCommandBuffers(VkDevice device, const CommandBufferAllocateInfo * pAllocateInfo, VkCommandBuffer * pCommandBuffers)
{
  return vkAllocateCommandBuffers(device, pAllocateInfo, pCommandBuffers);
}

inline void FreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer * pCommandBuffers)
{
  vkFreeCommandBuffers(device, commandPool, commandBufferCount, pCommandBuffers);
}

inline VkResult BeginCommandBuffer(VkCommandBuffer commandBuffer, const CommandBufferBeginInfo * pBeginInfo)
{
  return vkBeginCommandBuffer(commandBuffer, pBeginInfo);
}

inline VkResult EndCommandBuffer(VkCommandBuffer commandBuffer)
{
  return vkEndCommandBuffer(commandBuffer);
}

inline VkResult ResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags)
{
  return vkResetCommandBuffer(commandBuffer, flags);
}

inline void CmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline)
{
  vkCmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline);
}

inline void CmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const Viewport * pViewports)
{
  vkCmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports);
}

inline void CmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const Rect2D * pScissors)
{
  vkCmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors);
}

inline void CmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth)
{
  vkCmdSetLineWidth(commandBuffer, lineWidth);
}

inline void CmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor)
{
  vkCmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
}

inline void CmdSetBlendConstants(VkCommandBuffer commandBuffer, const float blendConstants)
{
  vkCmdSetBlendConstants(commandBuffer, blendConstants);
}

inline void CmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds)
{
  vkCmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds);
}

inline void CmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask)
{
  vkCmdSetStencilCompareMask(commandBuffer, faceMask, compareMask);
}

inline void CmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask)
{
  vkCmdSetStencilWriteMask(commandBuffer, faceMask, writeMask);
}

inline void CmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference)
{
  vkCmdSetStencilReference(commandBuffer, faceMask, reference);
}

inline void CmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t * pDynamicOffsets)
{
  vkCmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets);
}

inline void CmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType)
{
  vkCmdBindIndexBuffer(commandBuffer, buffer, offset, indexType);
}

inline void CmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets)
{
  vkCmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets);
}

inline void CmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance)
{
  vkCmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance);
}

inline void CmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance)
{
  vkCmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
}

inline void CmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
{
  vkCmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride);
}

inline void CmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
{
  vkCmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride);
}

inline void CmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
{
  vkCmdDispatch(commandBuffer, groupCountX, groupCountY, groupCountZ);
}

inline void CmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset)
{
  vkCmdDispatchIndirect(commandBuffer, buffer, offset);
}

inline void CmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const BufferCopy * pRegions)
{
  vkCmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions);
}

inline void CmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const ImageCopy * pRegions)
{
  vkCmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
}

inline void CmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const ImageBlit * pRegions, VkFilter filter)
{
  vkCmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);
}

inline void CmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const BufferImageCopy * pRegions)
{
  vkCmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);
}

inline void CmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const BufferImageCopy * pRegions)
{
  vkCmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);
}

inline void CmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void * pData)
{
  vkCmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData);
}

inline void CmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data)
{
  vkCmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data);
}

inline void CmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const ClearColorValue * pColor, uint32_t rangeCount, const ImageSubresourceRange * pRanges)
{
  vkCmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges);
}

inline void CmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const ClearDepthStencilValue * pDepthStencil, uint32_t rangeCount, const ImageSubresourceRange * pRanges)
{
  vkCmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges);
}

inline void CmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const ClearAttachment * pAttachments, uint32_t rectCount, const ClearRect * pRects)
{
  vkCmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects);
}

inline void CmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const ImageResolve * pRegions)
{
  vkCmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
}

inline void CmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
{
  vkCmdSetEvent(commandBuffer, event, stageMask);
}

inline void CmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
{
  vkCmdResetEvent(commandBuffer, event, stageMask);
}

inline void CmdWaitEvents(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent * pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const MemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const BufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const ImageMemoryBarrier * pImageMemoryBarriers)
{
  vkCmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
}

inline void CmdPipelineBarrier(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const MemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const BufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const ImageMemoryBarrier * pImageMemoryBarriers)
{
  vkCmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
}

inline void CmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags)
{
  vkCmdBeginQuery(commandBuffer, queryPool, query, flags);
}

inline void CmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query)
{
  vkCmdEndQuery(commandBuffer, queryPool, query);
}

inline void CmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount)
{
  vkCmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount);
}

inline void CmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query)
{
  vkCmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query);
}

inline void CmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags)
{
  vkCmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);
}

inline void CmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void * pValues)
{
  vkCmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues);
}

inline void CmdBeginRenderPass(VkCommandBuffer commandBuffer, const RenderPassBeginInfo * pRenderPassBegin, VkSubpassContents contents)
{
  vkCmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents);
}

inline void CmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents)
{
  vkCmdNextSubpass(commandBuffer, contents);
}

inline void CmdEndRenderPass(VkCommandBuffer commandBuffer)
{
  vkCmdEndRenderPass(commandBuffer);
}

inline void CmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer * pCommandBuffers)
{
  vkCmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers);
}

inline void DestroySurfaceKHR(VkInstance instance, VkSurfaceKHR surface, const AllocationCallbacks * pAllocator)
{
  vkDestroySurfaceKHR(instance, surface, pAllocator);
}

inline VkResult GetPhysicalDeviceSurfaceSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32 * pSupported)
{
  return vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported);
}

inline VkResult GetPhysicalDeviceSurfaceCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, SurfaceCapabilitiesKHR * pSurfaceCapabilities)
{
  return vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities);
}

inline VkResult GetPhysicalDeviceSurfaceFormatsKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pSurfaceFormatCount, SurfaceFormatKHR * pSurfaceFormats)
{
  return vkGetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats);
}

inline VkResult GetPhysicalDeviceSurfacePresentModesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pPresentModeCount, VkPresentModeKHR * pPresentModes)
{
  return vkGetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes);
}

inline VkResult CreateSwapchainKHR(VkDevice device, const SwapchainCreateInfoKHR * pCreateInfo, const AllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchain)
{
  return vkCreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain);
}

inline void DestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain, const AllocationCallbacks * pAllocator)
{
  vkDestroySwapchainKHR(device, swapchain, pAllocator);
}

inline VkResult GetSwapchainImagesKHR(VkDevice device, VkSwapchainKHR swapchain, uint32_t * pSwapchainImageCount, VkImage * pSwapchainImages)
{
  return vkGetSwapchainImagesKHR(device, swapchain, pSwapchainImageCount, pSwapchainImages);
}

inline VkResult AcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t * pImageIndex)
{
  return vkAcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex);
}

inline VkResult QueuePresentKHR(VkQueue queue, const PresentInfoKHR * pPresentInfo)
{
  return vkQueuePresentKHR(queue, pPresentInfo);
}

inline VkResult GetPhysicalDeviceDisplayPropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, DisplayPropertiesKHR * pProperties)
{
  return vkGetPhysicalDeviceDisplayPropertiesKHR(physicalDevice, pPropertyCount, pProperties);
}

inline VkResult GetPhysicalDeviceDisplayPlanePropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, DisplayPlanePropertiesKHR * pProperties)
{
  return vkGetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties);
}

inline VkResult GetDisplayPlaneSupportedDisplaysKHR(VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t * pDisplayCount, VkDisplayKHR * pDisplays)
{
  return vkGetDisplayPlaneSupportedDisplaysKHR(physicalDevice, planeIndex, pDisplayCount, pDisplays);
}

inline VkResult GetDisplayModePropertiesKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t * pPropertyCount, DisplayModePropertiesKHR * pProperties)
{
  return vkGetDisplayModePropertiesKHR(physicalDevice, display, pPropertyCount, pProperties);
}

inline VkResult CreateDisplayModeKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const DisplayModeCreateInfoKHR * pCreateInfo, const AllocationCallbacks * pAllocator, VkDisplayModeKHR * pMode)
{
  return vkCreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode);
}

inline VkResult GetDisplayPlaneCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, DisplayPlaneCapabilitiesKHR * pCapabilities)
{
  return vkGetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities);
}

inline VkResult CreateDisplayPlaneSurfaceKHR(VkInstance instance, const DisplaySurfaceCreateInfoKHR * pCreateInfo, const AllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
  return vkCreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

inline VkResult CreateSharedSwapchainsKHR(VkDevice device, uint32_t swapchainCount, const SwapchainCreateInfoKHR * pCreateInfos, const AllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchains)
{
  return vkCreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
}

inline VkResult CreateXlibSurfaceKHR(VkInstance instance, const XlibSurfaceCreateInfoKHR * pCreateInfo, const AllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
  return vkCreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

inline VkBool32 GetPhysicalDeviceXlibPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display * dpy, VisualID visualID)
{
  return vkGetPhysicalDeviceXlibPresentationSupportKHR(physicalDevice, queueFamilyIndex, dpy, visualID);
}

inline VkResult CreateXcbSurfaceKHR(VkInstance instance, const XcbSurfaceCreateInfoKHR * pCreateInfo, const AllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
  return vkCreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

inline VkBool32 GetPhysicalDeviceXcbPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t * connection, xcb_visualid_t visual_id)
{
  return vkGetPhysicalDeviceXcbPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection, visual_id);
}

inline VkResult CreateWaylandSurfaceKHR(VkInstance instance, const WaylandSurfaceCreateInfoKHR * pCreateInfo, const AllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
  return vkCreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

inline VkBool32 GetPhysicalDeviceWaylandPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display * display)
{
  return vkGetPhysicalDeviceWaylandPresentationSupportKHR(physicalDevice, queueFamilyIndex, display);
}

inline VkResult CreateMirSurfaceKHR(VkInstance instance, const MirSurfaceCreateInfoKHR * pCreateInfo, const AllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
  return vkCreateMirSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

inline VkBool32 GetPhysicalDeviceMirPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, MirConnection * connection)
{
  return vkGetPhysicalDeviceMirPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection);
}

inline VkResult CreateAndroidSurfaceKHR(VkInstance instance, const AndroidSurfaceCreateInfoKHR * pCreateInfo, const AllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
  return vkCreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

inline VkResult CreateWin32SurfaceKHR(VkInstance instance, const Win32SurfaceCreateInfoKHR * pCreateInfo, const AllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
  return vkCreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

inline VkBool32 GetPhysicalDeviceWin32PresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex)
{
  return vkGetPhysicalDeviceWin32PresentationSupportKHR(physicalDevice, queueFamilyIndex);
}

inline void GetPhysicalDeviceFeatures2KHR(VkPhysicalDevice physicalDevice, PhysicalDeviceFeatures2KHR * pFeatures)
{
  vkGetPhysicalDeviceFeatures2KHR(physicalDevice, pFeatures);
}

inline void GetPhysicalDeviceProperties2KHR(VkPhysicalDevice physicalDevice, PhysicalDeviceProperties2KHR * pProperties)
{
  vkGetPhysicalDeviceProperties2KHR(physicalDevice, pProperties);
}

inline void GetPhysicalDeviceFormatProperties2KHR(VkPhysicalDevice physicalDevice, VkFormat format, FormatProperties2KHR * pFormatProperties)
{
  vkGetPhysicalDeviceFormatProperties2KHR(physicalDevice, format, pFormatProperties);
}

inline VkResult GetPhysicalDeviceImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const PhysicalDeviceImageFormatInfo2KHR * pImageFormatInfo, ImageFormatProperties2KHR * pImageFormatProperties)
{
  return vkGetPhysicalDeviceImageFormatProperties2KHR(physicalDevice, pImageFormatInfo, pImageFormatProperties);
}

inline void GetPhysicalDeviceQueueFamilyProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, QueueFamilyProperties2KHR * pQueueFamilyProperties)
{
  vkGetPhysicalDeviceQueueFamilyProperties2KHR(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
}

inline void GetPhysicalDeviceMemoryProperties2KHR(VkPhysicalDevice physicalDevice, PhysicalDeviceMemoryProperties2KHR * pMemoryProperties)
{
  vkGetPhysicalDeviceMemoryProperties2KHR(physicalDevice, pMemoryProperties);
}

inline void GetPhysicalDeviceSparseImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const PhysicalDeviceSparseImageFormatInfo2KHR * pFormatInfo, uint32_t * pPropertyCount, SparseImageFormatProperties2KHR * pProperties)
{
  vkGetPhysicalDeviceSparseImageFormatProperties2KHR(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
}

inline void TrimCommandPoolKHR(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlagsKHR flags)
{
  vkTrimCommandPoolKHR(device, commandPool, flags);
}

inline void CmdPushDescriptorSetKHR(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const WriteDescriptorSet * pDescriptorWrites)
{
  vkCmdPushDescriptorSetKHR(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
}

inline VkResult CreateDescriptorUpdateTemplateKHR(VkDevice device, const DescriptorUpdateTemplateCreateInfoKHR * pCreateInfo, const AllocationCallbacks * pAllocator, VkDescriptorUpdateTemplateKHR * pDescriptorUpdateTemplate)
{
  return vkCreateDescriptorUpdateTemplateKHR(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
}

inline void DestroyDescriptorUpdateTemplateKHR(VkDevice device, VkDescriptorUpdateTemplateKHR descriptorUpdateTemplate, const AllocationCallbacks * pAllocator)
{
  vkDestroyDescriptorUpdateTemplateKHR(device, descriptorUpdateTemplate, pAllocator);
}

inline void UpdateDescriptorSetWithTemplateKHR(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplateKHR descriptorUpdateTemplate, const void * pData)
{
  vkUpdateDescriptorSetWithTemplateKHR(device, descriptorSet, descriptorUpdateTemplate, pData);
}

inline void CmdPushDescriptorSetWithTemplateKHR(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplateKHR descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void * pData)
{
  vkCmdPushDescriptorSetWithTemplateKHR(commandBuffer, descriptorUpdateTemplate, layout, set, pData);
}

inline VkResult CreateDebugReportCallbackEXT(VkInstance instance, const DebugReportCallbackCreateInfoEXT * pCreateInfo, const AllocationCallbacks * pAllocator, VkDebugReportCallbackEXT * pCallback)
{
  return vkCreateDebugReportCallbackEXT(instance, pCreateInfo, pAllocator, pCallback);
}

inline void DestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback, const AllocationCallbacks * pAllocator)
{
  vkDestroyDebugReportCallbackEXT(instance, callback, pAllocator);
}

inline void DebugReportMessageEXT(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char * pLayerPrefix, const char * pMessage)
{
  vkDebugReportMessageEXT(instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage);
}

inline VkResult DebugMarkerSetObjectTagEXT(VkDevice device, DebugMarkerObjectTagInfoEXT * pTagInfo)
{
  return vkDebugMarkerSetObjectTagEXT(device, pTagInfo);
}

inline VkResult DebugMarkerSetObjectNameEXT(VkDevice device, DebugMarkerObjectNameInfoEXT * pNameInfo)
{
  return vkDebugMarkerSetObjectNameEXT(device, pNameInfo);
}

inline void CmdDebugMarkerBeginEXT(VkCommandBuffer commandBuffer, DebugMarkerMarkerInfoEXT * pMarkerInfo)
{
  vkCmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo);
}

inline void CmdDebugMarkerEndEXT(VkCommandBuffer commandBuffer)
{
  vkCmdDebugMarkerEndEXT(commandBuffer);
}

inline void CmdDebugMarkerInsertEXT(VkCommandBuffer commandBuffer, DebugMarkerMarkerInfoEXT * pMarkerInfo)
{
  vkCmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo);
}

inline void CmdDrawIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
  vkCmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

inline void CmdDrawIndexedIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
  vkCmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

inline VkResult GetPhysicalDeviceExternalImageFormatPropertiesNV(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, ExternalImageFormatPropertiesNV * pExternalImageFormatProperties)
{
  return vkGetPhysicalDeviceExternalImageFormatPropertiesNV(physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties);
}

inline VkResult GetMemoryWin32HandleNV(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE * pHandle)
{
  return vkGetMemoryWin32HandleNV(device, memory, handleType, pHandle);
}

inline void GetDeviceGroupPeerMemoryFeaturesKHX(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlagsKHX * pPeerMemoryFeatures)
{
  vkGetDeviceGroupPeerMemoryFeaturesKHX(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
}

inline VkResult BindBufferMemory2KHX(VkDevice device, uint32_t bindInfoCount, const BindBufferMemoryInfoKHX * pBindInfos)
{
  return vkBindBufferMemory2KHX(device, bindInfoCount, pBindInfos);
}

inline VkResult BindImageMemory2KHX(VkDevice device, uint32_t bindInfoCount, const BindImageMemoryInfoKHX * pBindInfos)
{
  return vkBindImageMemory2KHX(device, bindInfoCount, pBindInfos);
}

inline void CmdSetDeviceMaskKHX(VkCommandBuffer commandBuffer, uint32_t deviceMask)
{
  vkCmdSetDeviceMaskKHX(commandBuffer, deviceMask);
}

inline VkResult GetDeviceGroupPresentCapabilitiesKHX(VkDevice device, DeviceGroupPresentCapabilitiesKHX * pDeviceGroupPresentCapabilities)
{
  return vkGetDeviceGroupPresentCapabilitiesKHX(device, pDeviceGroupPresentCapabilities);
}

inline VkResult GetDeviceGroupSurfacePresentModesKHX(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHX * pModes)
{
  return vkGetDeviceGroupSurfacePresentModesKHX(device, surface, pModes);
}

inline VkResult AcquireNextImage2KHX(VkDevice device, const AcquireNextImageInfoKHX * pAcquireInfo, uint32_t * pImageIndex)
{
  return vkAcquireNextImage2KHX(device, pAcquireInfo, pImageIndex);
}

inline void CmdDispatchBaseKHX(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
{
  vkCmdDispatchBaseKHX(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
}

inline VkResult GetPhysicalDevicePresentRectanglesKHX(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pRectCount, Rect2D * pRects)
{
  return vkGetPhysicalDevicePresentRectanglesKHX(physicalDevice, surface, pRectCount, pRects);
}

inline VkResult CreateViSurfaceNN(VkInstance instance, const ViSurfaceCreateInfoNN * pCreateInfo, const AllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
  return vkCreateViSurfaceNN(instance, pCreateInfo, pAllocator, pSurface);
}

inline VkResult EnumeratePhysicalDeviceGroupsKHX(VkInstance instance, uint32_t * pPhysicalDeviceGroupCount, PhysicalDeviceGroupPropertiesKHX * pPhysicalDeviceGroupProperties)
{
  return vkEnumeratePhysicalDeviceGroupsKHX(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
}

inline void GetPhysicalDeviceExternalBufferPropertiesKHX(VkPhysicalDevice physicalDevice, const PhysicalDeviceExternalBufferInfoKHX * pExternalBufferInfo, ExternalBufferPropertiesKHX * pExternalBufferProperties)
{
  vkGetPhysicalDeviceExternalBufferPropertiesKHX(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
}

inline void GetPhysicalDeviceProperties2KHX(VkPhysicalDevice physicalDevice, PhysicalDeviceProperties2KHX * pProperties)
{
  vkGetPhysicalDeviceProperties2KHX(physicalDevice, pProperties);
}

inline VkResult GetPhysicalDeviceImageFormatProperties2KHX(VkPhysicalDevice physicalDevice, const PhysicalDeviceImageFormatInfo2KHX * pImageFormatInfo, ImageFormatProperties2KHX * pImageFormatProperties)
{
  return vkGetPhysicalDeviceImageFormatProperties2KHX(physicalDevice, pImageFormatInfo, pImageFormatProperties);
}

inline VkResult GetMemoryWin32HandleKHX(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagBitsKHX handleType, HANDLE * pHandle)
{
  return vkGetMemoryWin32HandleKHX(device, memory, handleType, pHandle);
}

inline VkResult GetMemoryWin32HandlePropertiesKHX(VkDevice device, VkExternalMemoryHandleTypeFlagBitsKHX handleType, HANDLE handle, MemoryWin32HandlePropertiesKHX * pMemoryWin32HandleProperties)
{
  return vkGetMemoryWin32HandlePropertiesKHX(device, handleType, handle, pMemoryWin32HandleProperties);
}

inline VkResult GetMemoryFdKHX(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagBitsKHX handleType, int * pFd)
{
  return vkGetMemoryFdKHX(device, memory, handleType, pFd);
}

inline VkResult GetMemoryFdPropertiesKHX(VkDevice device, VkExternalMemoryHandleTypeFlagBitsKHX handleType, int fd, MemoryFdPropertiesKHX * pMemoryFdProperties)
{
  return vkGetMemoryFdPropertiesKHX(device, handleType, fd, pMemoryFdProperties);
}

inline void GetPhysicalDeviceExternalSemaphorePropertiesKHX(VkPhysicalDevice physicalDevice, const PhysicalDeviceExternalSemaphoreInfoKHX * pExternalSemaphoreInfo, ExternalSemaphorePropertiesKHX * pExternalSemaphoreProperties)
{
  vkGetPhysicalDeviceExternalSemaphorePropertiesKHX(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
}

inline VkResult ImportSemaphoreWin32HandleKHX(VkDevice device, const ImportSemaphoreWin32HandleInfoKHX * pImportSemaphoreWin32HandleInfo)
{
  return vkImportSemaphoreWin32HandleKHX(device, pImportSemaphoreWin32HandleInfo);
}

inline VkResult GetSemaphoreWin32HandleKHX(VkDevice device, VkSemaphore semaphore, VkExternalSemaphoreHandleTypeFlagBitsKHX handleType, HANDLE * pHandle)
{
  return vkGetSemaphoreWin32HandleKHX(device, semaphore, handleType, pHandle);
}

inline VkResult ImportSemaphoreFdKHX(VkDevice device, const ImportSemaphoreFdInfoKHX * pImportSemaphoreFdInfo)
{
  return vkImportSemaphoreFdKHX(device, pImportSemaphoreFdInfo);
}

inline VkResult GetSemaphoreFdKHX(VkDevice device, VkSemaphore semaphore, VkExternalSemaphoreHandleTypeFlagBitsKHX handleType, int * pFd)
{
  return vkGetSemaphoreFdKHX(device, semaphore, handleType, pFd);
}

inline void CmdProcessCommandsNVX(VkCommandBuffer commandBuffer, const CmdProcessCommandsInfoNVX * pProcessCommandsInfo)
{
  vkCmdProcessCommandsNVX(commandBuffer, pProcessCommandsInfo);
}

inline void CmdReserveSpaceForCommandsNVX(VkCommandBuffer commandBuffer, const CmdReserveSpaceForCommandsInfoNVX * pReserveSpaceInfo)
{
  vkCmdReserveSpaceForCommandsNVX(commandBuffer, pReserveSpaceInfo);
}

inline VkResult CreateIndirectCommandsLayoutNVX(VkDevice device, const IndirectCommandsLayoutCreateInfoNVX * pCreateInfo, const AllocationCallbacks * pAllocator, VkIndirectCommandsLayoutNVX * pIndirectCommandsLayout)
{
  return vkCreateIndirectCommandsLayoutNVX(device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
}

inline void DestroyIndirectCommandsLayoutNVX(VkDevice device, VkIndirectCommandsLayoutNVX indirectCommandsLayout, const AllocationCallbacks * pAllocator)
{
  vkDestroyIndirectCommandsLayoutNVX(device, indirectCommandsLayout, pAllocator);
}

inline VkResult CreateObjectTableNVX(VkDevice device, const ObjectTableCreateInfoNVX * pCreateInfo, const AllocationCallbacks * pAllocator, VkObjectTableNVX * pObjectTable)
{
  return vkCreateObjectTableNVX(device, pCreateInfo, pAllocator, pObjectTable);
}

inline void DestroyObjectTableNVX(VkDevice device, VkObjectTableNVX objectTable, const AllocationCallbacks * pAllocator)
{
  vkDestroyObjectTableNVX(device, objectTable, pAllocator);
}

inline VkResult RegisterObjectsNVX(VkDevice device, VkObjectTableNVX objectTable, uint32_t objectCount, const ObjectTableEntryNVX * const * ppObjectTableEntries, const uint32_t * pObjectIndices)
{
  return vkRegisterObjectsNVX(device, objectTable, objectCount, ppObjectTableEntries, pObjectIndices);
}

inline VkResult UnregisterObjectsNVX(VkDevice device, VkObjectTableNVX objectTable, uint32_t objectCount, const VkObjectEntryTypeNVX * pObjectEntryTypes, const uint32_t * pObjectIndices)
{
  return vkUnregisterObjectsNVX(device, objectTable, objectCount, pObjectEntryTypes, pObjectIndices);
}

inline void GetPhysicalDeviceGeneratedCommandsPropertiesNVX(VkPhysicalDevice physicalDevice, DeviceGeneratedCommandsFeaturesNVX * pFeatures, DeviceGeneratedCommandsLimitsNVX * pLimits)
{
  vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(physicalDevice, pFeatures, pLimits);
}

inline void CmdSetViewportWScalingNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const ViewportWScalingNV * pViewportWScalings)
{
  vkCmdSetViewportWScalingNV(commandBuffer, firstViewport, viewportCount, pViewportWScalings);
}

inline VkResult ReleaseDisplayEXT(VkPhysicalDevice physicalDevice, VkDisplayKHR display)
{
  return vkReleaseDisplayEXT(physicalDevice, display);
}

inline VkResult AcquireXlibDisplayEXT(VkPhysicalDevice physicalDevice, Display * dpy, VkDisplayKHR display)
{
  return vkAcquireXlibDisplayEXT(physicalDevice, dpy, display);
}

inline VkResult GetRandROutputDisplayEXT(VkPhysicalDevice physicalDevice, Display * dpy, RROutput rrOutput, VkDisplayKHR * pDisplay)
{
  return vkGetRandROutputDisplayEXT(physicalDevice, dpy, rrOutput, pDisplay);
}

inline VkResult GetPhysicalDeviceSurfaceCapabilities2EXT(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, SurfaceCapabilities2EXT * pSurfaceCapabilities)
{
  return vkGetPhysicalDeviceSurfaceCapabilities2EXT(physicalDevice, surface, pSurfaceCapabilities);
}

inline VkResult DisplayPowerControlEXT(VkDevice device, VkDisplayKHR display, const DisplayPowerInfoEXT * pDisplayPowerInfo)
{
  return vkDisplayPowerControlEXT(device, display, pDisplayPowerInfo);
}

inline VkResult RegisterDeviceEventEXT(VkDevice device, const DeviceEventInfoEXT * pDeviceEventInfo, const AllocationCallbacks * pAllocator, VkFence * pFence)
{
  return vkRegisterDeviceEventEXT(device, pDeviceEventInfo, pAllocator, pFence);
}

inline VkResult RegisterDisplayEventEXT(VkDevice device, VkDisplayKHR display, const DisplayEventInfoEXT * pDisplayEventInfo, const AllocationCallbacks * pAllocator, VkFence * pFence)
{
  return vkRegisterDisplayEventEXT(device, display, pDisplayEventInfo, pAllocator, pFence);
}

inline VkResult GetSwapchainCounterEXT(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t * pCounterValue)
{
  return vkGetSwapchainCounterEXT(device, swapchain, counter, pCounterValue);
}

inline void CmdSetDiscardRectangleEXT(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const Rect2D * pDiscardRectangles)
{
  vkCmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
}

inline VkResult CreateIOSSurfaceMVK(VkInstance instance, const IOSSurfaceCreateInfoMVK * pCreateInfo, const AllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
  return vkCreateIOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
}

inline VkResult CreateMacOSSurfaceMVK(VkInstance instance, const MacOSSurfaceCreateInfoMVK * pCreateInfo, const AllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface)
{
  return vkCreateMacOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
}

}
