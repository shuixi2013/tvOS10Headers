/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKAgent.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface GKAgent2D : GKAgent <NSCoding>

@property (assign,nonatomic)  position; 
@property (nonatomic,readonly)  velocity; 
@property (assign,nonatomic) float rotation; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setPosition:;
-()position;
-()velocity;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(void)updateWithDeltaTime:(double)arg1 ;
-(void)applySteeringForce:(double)arg1 ;
-(void)setPosition_:(float2)arg1 ;
-(float2)position_;
-(float2)velocity_;
-(void)applyBrakingForce:(float)arg1 deltaTime:(double)arg2 ;
@end

