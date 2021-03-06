/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MTLHeap <NSObject>
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long size; 
@property (readonly) unsigned long long usedSize; 
@required
-(unsigned long long)usedSize;
-(unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
-(unsigned long long)size;
-(NSString *)label;
-(void)setLabel:(id)arg1;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
-(id)newTextureWithDescriptor:(id)arg1;
-(unsigned long long)storageMode;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1;
-(unsigned long long)cpuCacheMode;
-(id<MTLDevice>)device;

@end

