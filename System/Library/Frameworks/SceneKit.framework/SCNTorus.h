/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNTorus : SCNGeometry {

	double _torusringRadius;
	double _toruspipeRadius;
	double _torusradialSpan;
	long long _torusringSegmentCount;
	long long _toruspipeSegmentCount;
	long long _torusprimitiveType;

}

@property (assign,nonatomic) double ringRadius; 
@property (assign,nonatomic) double pipeRadius; 
@property (assign,nonatomic) long long ringSegmentCount; 
@property (assign,nonatomic) long long pipeSegmentCount; 
+(BOOL)supportsSecureCoding;
+(id)torusWithRingRadius:(double)arg1 pipeRadius:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)primitiveType;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(void)setPrimitiveType:(long long)arg1 ;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(id)presentationGeometry;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(_C3DGeometry*)__createCFObject;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(void)_syncObjCModel:(_C3DParametricGeometry*)arg1 ;
-(id)initPresentationParametricGeometryWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(id)initWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(double)radialSpan;
-(void)setRadialSpan:(double)arg1 ;
-(id)presentationTorus;
-(double)ringRadius;
-(double)pipeRadius;
-(void)setRingRadius:(double)arg1 ;
-(void)setPipeRadius:(double)arg1 ;
-(void)setRingSegmentCount:(long long)arg1 ;
-(void)setPipeSegmentCount:(long long)arg1 ;
-(long long)pipeSegmentCount;
-(long long)ringSegmentCount;
@end

