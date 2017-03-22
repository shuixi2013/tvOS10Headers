/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
#import <SceneKit/SceneKit-Structs.h>
@class NSArray;

@interface SCNMTLMorph : NSObject {

	id<MTLBuffer> _baseBuffer;
	unsigned _baseVertexCount;
	unsigned long long _semanticUsageMask;
	id<MTLBuffer> _vertexTopology;
	id<MTLBuffer> _sharedTriangle;
	BOOL _sharedTriangleIs16bits;
	Target* _targets;
	unsigned long long _targetCount;
	NSArray* _originalTargets;

}
-(void)dealloc;
-(id)initWithMorph:(C3DMorphRef)arg1 baseMesh:(C3DMeshRef)arg2 resourceManager:(id)arg3 ;
-(BOOL)isCompatibleWithMorph:(C3DMorphRef)arg1 ;
-(void)morphMesh:(id)arg1 morph:(C3DMorphRef)arg2 computeEncoder:(id)arg3 resourceManager:(id)arg4 ;
-(void)morphOptimizedMesh:(id)arg1 morph:(C3DMorphRef)arg2 computeEncoder:(id)arg3 resourceManager:(id)arg4 ;
-(void)morphIncrementalMesh:(id)arg1 morpher:(_C3DMorpher*)arg2 computeEncoder:(id)arg3 resourceManager:(id)arg4 ;
-(void)unifyMesh:(id)arg1 computeEncoder:(id)arg2 resourceManager:(id)arg3 ;
-(void)morphSparseMesh:(id)arg1 morpher:(_C3DMorpher*)arg2 computeEncoder:(id)arg3 resourceManager:(id)arg4 ;
@end
