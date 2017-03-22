/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, CMWorkoutManagerDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMWorkoutManager, CMWorkout;

@interface CMWorkoutManagerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	id<CMWorkoutManagerDelegate> fDelegate;
	CMWorkoutManager* fSender;
	CMWorkout* fWorkout;
	BOOL fResumeWorkoutOnInterrupt;

}
-(void)dealloc;
-(id)init;
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)_handleDaemonEvent:(id)arg1 ;
-(void)_startWorkout:(id)arg1 ;
-(void)_unregisterForWorkoutEvents;
-(id)swimWorkoutInstance:(id)arg1 ;
-(void)_handleDaemonResponse:(id)arg1 ;
-(void)_stopWorkout:(id)arg1 ;
-(void)_registerForWorkoutEvents;
-(void)_teardown;
@end

