/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassAttachmentDescriptor.h>

@interface MTLRenderPassDepthAttachmentDescriptor : MTLRenderPassAttachmentDescriptor {

	unsigned long long _depthResolveFilter;

}

@property (assign,nonatomic) double clearDepth; 
@property (assign,nonatomic) unsigned long long depthResolveFilter;              //@synthesize depthResolveFilter=_depthResolveFilter - In the implementation block
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned long long)depthResolveFilter;
-(void)setDepthResolveFilter:(unsigned long long)arg1 ;
@end

