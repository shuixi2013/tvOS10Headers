/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MDLMeshBufferMap;

@interface MDLVertexAttributeData : NSObject {

	MDLMeshBufferMap* _map;
	void* _dataStart;
	unsigned long long _stride;
	unsigned long long _format;

}

@property (nonatomic,retain) MDLMeshBufferMap * map; 
@property (assign,nonatomic) void* dataStart; 
@property (assign,nonatomic) unsigned long long stride; 
@property (assign,nonatomic) unsigned long long format; 
-(id)init;
-(unsigned long long)format;
-(MDLMeshBufferMap *)map;
-(void)setFormat:(unsigned long long)arg1 ;
-(void*)dataStart;
-(void)setDataStart:(void*)arg1 ;
-(void)setStride:(unsigned long long)arg1 ;
-(void)setMap:(MDLMeshBufferMap *)arg1 ;
-(unsigned long long)stride;
@end
