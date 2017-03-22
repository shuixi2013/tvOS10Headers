/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLComputePipelineStateSPI.h>

@protocol MTLFunction;
@class NSString;

@interface MTLToolsComputePipelineState : MTLToolsObject <MTLComputePipelineStateSPI> {

	id<MTLFunction> _function;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned long long threadExecutionWidth; 
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
-(unsigned long long)threadExecutionWidth;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(id<MTLDevice>)device;
-(void)acceptVisitor:(id)arg1 ;
-(unsigned long long)staticThreadgroupMemoryLength;
@end

