/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSAnimationSettings.h>

@interface BSSpringAnimationSettings : BSAnimationSettings {

	double _mass;
	double _stiffness;
	double _damping;
	double _epsilon;
	double _initialVelocity;
	BOOL _hasCalculatedDuration;

}

@property (nonatomic,readonly) double mass; 
@property (nonatomic,readonly) double stiffness; 
@property (nonatomic,readonly) double damping; 
@property (nonatomic,readonly) double epsilon; 
@property (nonatomic,readonly) double initialVelocity; 
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 ;
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 ;
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 initialVelocity:(double)arg5 ;
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 timingFunction:(id)arg4 ;
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 timingFunction:(id)arg5 ;
+(id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 delay:(double)arg5 timingFunction:(id)arg6 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isSpringAnimation;
-(void)_setTimingFunction:(id)arg1 ;
-(void)_setEpsilon:(double)arg1 ;
-(id)_initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 initialVelocity:(double)arg5 delay:(double)arg6 frameInterval:(double)arg7 timingFunction:(id)arg8 speed:(float)arg9 ;
-(id)_initWithDuration:(double)arg1 delay:(double)arg2 frameInterval:(double)arg3 timingFunction:(id)arg4 ;
-(BOOL)_hasCalculatedDuration;
-(void)_setMass:(double)arg1 ;
-(void)_setStiffness:(double)arg1 ;
-(void)_setDamping:(double)arg1 ;
-(void)_setInitialVelocity:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(void)_setDuration:(double)arg1 ;
-(double)damping;
-(double)mass;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(double)stiffness;
-(double)initialVelocity;
-(void)_setSpeed:(float)arg1 ;
-(double)epsilon;
@end

