/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLCommandBuffer;
#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
@interface MPSCommandBufferImageCache : NSObject {

	MPSDevice* _device;
	id<MTLCommandBuffer> _cmdBuffer;
	int _debugMode;
	HeapNode* _freeList;
	CacheFrame* _frameList;
	ResourceNode* _retainedResources;
	BOOL _needsRetain;
	MPSAutoCache* _userCacheFrame;

}

@property (nonatomic,readonly) id<MTLCommandBuffer> commandBuffer;              //@synthesize cmdBuffer=_cmdBuffer - In the implementation block
-(id)initWithCommandBuffer:(id)arg1 ;
-(void)flushDeviceOnlyBufferCache;
-(id)newHeapBlock:(unsigned long long)arg1 ;
-(void)releaseHeapBlock:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id<MTLCommandBuffer>)commandBuffer;
@end

