/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKConstraint.h>

@class SKRange, SKNode;

@interface SKDistanceConstraint : SKConstraint {

	SKRange* _distanceRange;
	SKNode* _node;
	CGPoint _point;

}

@property (copy) SKRange * distanceRange;              //@synthesize distanceRange=_distanceRange - In the implementation block
@property (__weak) SKNode * node;                      //@synthesize node=_node - In the implementation block
@property (assign) CGPoint point;                      //@synthesize point=_point - In the implementation block
+(id)constraintWithNode:(id)arg1 distanceRange:(id)arg2 ;
+(id)constraintWithPoint:(CGPoint)arg1 distanceRange:(id)arg2 ;
+(id)constraintWithPoint:(CGPoint)arg1 inNode:(id)arg2 distanceRange:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(SKNode *)node;
-(void)setNode:(SKNode *)arg1 ;
-(SKRange *)distanceRange;
-(void)setDistanceRange:(SKRange *)arg1 ;
-(id)initWithPoint:(CGPoint)arg1 inNode:(id)arg2 distanceRange:(id)arg3 ;
@end

