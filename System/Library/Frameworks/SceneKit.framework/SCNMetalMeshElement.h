/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNMTLBuffer;

@interface SCNMetalMeshElement : NSObject {

	unsigned long long _primitiveType;
	long long _indexCount;
	unsigned long long _instanceCount;
	long long _offset;
	SCNMTLBuffer* _indexBuffer;
	unsigned long long _indexType;

}

@property (assign,nonatomic) long long indexCount;                          //@synthesize indexCount=_indexCount - In the implementation block
@property (assign,nonatomic) unsigned long long instanceCount;              //@synthesize instanceCount=_instanceCount - In the implementation block
@property (assign,nonatomic) long long offset;                              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) SCNMTLBuffer * indexBuffer;                    //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long indexType;                  //@synthesize indexType=_indexType - In the implementation block
@property (assign,nonatomic) unsigned long long primitiveType;              //@synthesize primitiveType=_primitiveType - In the implementation block
@property (nonatomic,readonly) long long primitiveCount; 
-(void)dealloc;
-(void)setOffset:(long long)arg1 ;
-(long long)offset;
-(void)setInstanceCount:(unsigned long long)arg1 ;
-(unsigned long long)primitiveType;
-(unsigned long long)instanceCount;
-(long long)primitiveCount;
-(long long)indexCount;
-(unsigned long long)indexType;
-(SCNMTLBuffer *)indexBuffer;
-(void)setIndexBuffer:(SCNMTLBuffer *)arg1 ;
-(void)setupWithElement:(_C3DMeshElement*)arg1 ;
-(void)setPrimitiveType:(unsigned long long)arg1 ;
-(void)setIndexCount:(long long)arg1 ;
-(void)setIndexType:(unsigned long long)arg1 ;
@end
