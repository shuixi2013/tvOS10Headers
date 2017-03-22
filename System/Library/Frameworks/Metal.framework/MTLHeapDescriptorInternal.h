/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLHeapDescriptor.h>

@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {

	MTLHeapDescriptorPrivate* _private;

}
-(const MTLHeapDescriptorPrivate*)descriptorPrivate;
-(BOOL)validateWithDevice:(id)arg1 ;
-(unsigned long long)size;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setCpuCacheMode:(unsigned long long)arg1 ;
-(void)setStorageMode:(unsigned long long)arg1 ;
-(unsigned long long)storageMode;
-(unsigned long long)cpuCacheMode;
@end

