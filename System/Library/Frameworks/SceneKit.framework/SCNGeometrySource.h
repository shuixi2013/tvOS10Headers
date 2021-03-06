/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MTLBuffer;
@class NSData, NSString;

@interface SCNGeometrySource : NSObject <NSSecureCoding> {

	_C3DMeshSource* _meshSource;
	NSData* _data;
	NSString* _semantic;
	long long _vectorCount;
	short _componentType;
	unsigned short _componentCount;
	long long _dataOffset;
	long long _dataStride;
	unsigned char _mkSemantic;
	id<MTLBuffer> _mtlBuffer;
	long long _mtlVertexFormat;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * semantic; 
@property (nonatomic,readonly) long long vectorCount; 
@property (nonatomic,readonly) BOOL floatComponents; 
@property (nonatomic,readonly) long long componentsPerVector; 
@property (nonatomic,readonly) long long bytesPerComponent; 
@property (nonatomic,readonly) long long dataOffset; 
@property (nonatomic,readonly) long long dataStride; 
+(BOOL)supportsSecureCoding;
+(id)geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(BOOL)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8 ;
+(id)geometrySourceWithMDLVertexAttribute:(id)arg1 mesh:(id)arg2 ;
+(id)geometrySourceWithMeshSourceRef:(_C3DMeshSource*)arg1 ;
+(id)_geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 componentType:(short)arg4 componentCount:(unsigned long long)arg5 dataOffset:(long long)arg6 dataStride:(long long)arg7 ;
+(id)geometrySourceWithVertices:(const SCNVector3*)arg1 count:(long long)arg2 ;
+(id)dataByConvertingDoublesToFloats:(const double*)arg1 count:(long long)arg2 ;
+(id)dataWithVector3Array:(const SCNVector3*)arg1 count:(long long)arg2 bytesPerComponent:(long long*)arg3 ;
+(id)dataWithPointArray:(const CGPoint*)arg1 count:(long long)arg2 bytesPerComponent:(long long*)arg3 ;
+(id)geometrySourceWithNormals:(const SCNVector3*)arg1 count:(long long)arg2 ;
+(id)geometrySourceWithTextureCoordinates:(const CGPoint*)arg1 count:(long long)arg2 ;
+(id)geometrySourceWithBuffer:(id)arg1 vertexFormat:(unsigned long long)arg2 semantic:(id)arg3 vertexCount:(long long)arg4 dataOffset:(long long)arg5 dataStride:(long long)arg6 ;
+(id)_geometrySourceWithSource:(id)arg1 vertexFormat:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSData *)data;
-(long long)dataOffset;
-(long long)vectorCount;
-(long long)dataStride;
-(void)setMkSemantic:(id)arg1 ;
-(id)mkSemantic;
-(void)_clearC3DCache;
-(_C3DMeshSource*)meshSource;
-(NSString *)semantic;
-(id)initWithMeshSource:(_C3DMeshSource*)arg1 ;
-(long long)bytesPerComponent;
-(BOOL)floatComponents;
-(long long)componentsPerVector;
-(short)_componentType;
-(id)initWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(BOOL)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8 ;
-(id)initWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 componentType:(short)arg4 componentCount:(unsigned long long)arg5 dataOffset:(long long)arg6 dataStride:(long long)arg7 ;
-(id)initWithBuffer:(id)arg1 vertexFormat:(unsigned long long)arg2 semantic:(id)arg3 vertexCount:(long long)arg4 dataOffset:(long long)arg5 dataStride:(long long)arg6 ;
@end

