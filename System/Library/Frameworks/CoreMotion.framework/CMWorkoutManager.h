/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMWorkoutManagerInternal;

@interface CMWorkoutManager : NSObject {

	CMWorkoutManagerInternal* _internal;

}

@property (nonatomic,readonly) CMWorkoutManagerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic) id<CMWorkoutManagerDelegate> delegate; 
+(BOOL)isAvailable;
-(void)setDelegate:(id<CMWorkoutManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CMWorkoutManagerDelegate>)delegate;
-(void)startWorkout:(id)arg1 ;
-(void)stopWorkout:(id)arg1 ;
-(unsigned long long)supportedMetricsForWorkoutType:(long long)arg1 ;
-(CMWorkoutManagerInternal *)_internal;
@end
