/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineDescriptor.h>

@interface MTLRenderPipelineDescriptorInternal : MTLRenderPipelineDescriptor {

	MTLRenderPipelineDescriptorPrivate _private;

}
-(void)validateWithDevice:(id)arg1 ;
-(id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)fragmentFunction;
-(id)serializeFragmentData;
-(const MTLRenderPipelineDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)tessellationPartitionMode;
-(void)setTessellationPartitionMode:(unsigned long long)arg1 ;
-(unsigned long long)maxTessellationFactor;
-(void)setMaxTessellationFactor:(unsigned long long)arg1 ;
-(BOOL)isTessellationFactorScaleEnabled;
-(void)setTessellationFactorScaleEnabled:(BOOL)arg1 ;
-(unsigned long long)tessellationFactorFormat;
-(void)setTessellationFactorFormat:(unsigned long long)arg1 ;
-(unsigned long long)tessellationControlPointIndexType;
-(void)setTessellationControlPointIndexType:(unsigned long long)arg1 ;
-(unsigned long long)tessellationFactorStepFunction;
-(void)setTessellationFactorStepFunction:(unsigned long long)arg1 ;
-(unsigned long long)tessellationOutputWindingOrder;
-(void)setTessellationOutputWindingOrder:(unsigned long long)arg1 ;
-(unsigned long long)sampleMask;
-(void)setSampleMask:(unsigned long long)arg1 ;
-(float)sampleCoverage;
-(void)setSampleCoverage:(float)arg1 ;
-(BOOL)isAlphaToCoverageEnabled;
-(void)setAlphaToCoverageEnabled:(BOOL)arg1 ;
-(BOOL)isAlphaToOneEnabled;
-(void)setAlphaToOneEnabled:(BOOL)arg1 ;
-(BOOL)isRasterizationEnabled;
-(void)setRasterizationEnabled:(BOOL)arg1 ;
-(BOOL)isVertexEnabled;
-(BOOL)isLogicOperationEnabled;
-(void)setLogicOperationEnabled:(BOOL)arg1 ;
-(unsigned long long)logicOperation;
-(void)setLogicOperation:(unsigned long long)arg1 ;
-(BOOL)isAlphaTestEnabled;
-(void)setAlphaTestEnabled:(BOOL)arg1 ;
-(unsigned long long)alphaTestFunction;
-(void)setAlphaTestFunction:(unsigned long long)arg1 ;
-(void)setClipDistanceEnableMask:(unsigned char)arg1 ;
-(unsigned char)clipDistanceEnableMask;
-(BOOL)isPointSmoothEnabled;
-(void)setPointSmoothEnabled:(BOOL)arg1 ;
-(unsigned)vertexDepthCompareClampMask;
-(void)setVertexDepthCompareClampMask:(unsigned)arg1 ;
-(unsigned)fragmentDepthCompareClampMask;
-(void)setFragmentDepthCompareClampMask:(unsigned)arg1 ;
-(BOOL)isDepthStencilWriteDisabled;
-(void)setDepthStencilWriteDisabled:(BOOL)arg1 ;
-(id)fastBlendDescriptorAtIndex:(unsigned long long)arg1 ;
-(void)attachVertexDescriptor:(id)arg1 ;
-(void)setVertexEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)colorAttachments;
-(void)setDepthAttachmentPixelFormat:(unsigned long long)arg1 ;
-(void)setStencilAttachmentPixelFormat:(unsigned long long)arg1 ;
-(id)vertexDescriptor;
-(void)setVertexDescriptor:(id)arg1 ;
-(void)setVertexFunction:(id)arg1 ;
-(void)setFragmentFunction:(id)arg1 ;
-(unsigned long long)depthAttachmentPixelFormat;
-(unsigned long long)stencilAttachmentPixelFormat;
-(id)vertexFunction;
@end

