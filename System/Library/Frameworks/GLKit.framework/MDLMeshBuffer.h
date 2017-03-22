/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDLMeshBuffer <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferAllocator> allocator; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferZone> zone; 
@property (nonatomic,readonly) unsigned long long type; 
@required
-(id<MDLMeshBufferZone>)zone;
-(unsigned long long)length;
-(unsigned long long)type;
-(id)map;
-(id<MDLMeshBufferAllocator>)allocator;
-(void)fillData:(id)arg1 offset:(unsigned long long)arg2;

@end

