/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsHeap.h>

@class MTLDebugDevice;

@interface MTLDebugHeap : MTLToolsHeap {

	int _historyLock;
	HeapHistoryEvent* _oldestEvent;
	HeapHistoryEvent* _latestEvent;
	MTLDebugDevice* _debugDevice;

}

@property (assign,nonatomic) HeapHistoryEvent* oldestEvent;               //@synthesize oldestEvent=_oldestEvent - In the implementation block
@property (assign,nonatomic) HeapHistoryEvent* latestEvent;               //@synthesize latestEvent=_latestEvent - In the implementation block
@property (nonatomic,readonly) MTLDebugDevice * debugDevice;              //@synthesize debugDevice=_debugDevice - In the implementation block
-(unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)newTextureWithDescriptor:(id)arg1 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)removeResourceFromHistory:(id)arg1 ;
-(void)addResourceToHistory:(id)arg1 madeAliasable:(BOOL)arg2 ;
-(id)initWithHeap:(id)arg1 device:(id)arg2 ;
-(void)validateHeapResourceOptions:(unsigned long long)arg1 isTexture:(BOOL)arg2 isIOSurface:(BOOL)arg3 ;
-(HeapHistoryEvent*)oldestEvent;
-(void)setOldestEvent:(HeapHistoryEvent*)arg1 ;
-(HeapHistoryEvent*)latestEvent;
-(void)setLatestEvent:(HeapHistoryEvent*)arg1 ;
-(MTLDebugDevice *)debugDevice;
@end

