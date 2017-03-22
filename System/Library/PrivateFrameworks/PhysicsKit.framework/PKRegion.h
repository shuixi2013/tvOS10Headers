/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface PKRegion : NSObject <NSCopying, NSCoding> {

	int _shape;
	BOOL _isExclusive;
	vec4 _halfExtent;
	shared_ptr<PKCPathHolder>* _path;
	int _regionOp;
	int _shape2;
	vec4 _halfExtent2;
	shared_ptr<PKCPathHolder>* _path2;

}

@property (nonatomic,readonly) CGPathRef path; 
+(id)infiniteRegion;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGPathRef)path;
-(id)initWithSize:(CGSize)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(id)initWithRadius:(float)arg1 ;
-(id)initWithPath:(CGPathRef)arg1 ;
-(id)inverseRegion;
-(id)regionByUnionWithRegion:(id)arg1 ;
-(id)regionByDifferenceFromRegion:(id)arg1 ;
-(id)regionByIntersectionWithRegion:(id)arg1 ;
-(void)containsPoints:(const float*)arg1 locationStride:(long long)arg2 results:(char*)arg3 resultsStride:(long long)arg4 count:(int)arg5 ;
-(BOOL)isInfinite;
@end

