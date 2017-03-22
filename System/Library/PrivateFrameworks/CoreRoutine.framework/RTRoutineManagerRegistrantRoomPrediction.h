/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/RTRoutineManagerRegistrant.h>

@interface RTRoutineManagerRegistrantRoomPrediction : RTRoutineManagerRegistrant {

	BOOL _registered;
	/*^block*/id _predictedRoomsHandler;

}

@property (nonatomic,copy) id predictedRoomsHandler;              //@synthesize predictedRoomsHandler=_predictedRoomsHandler - In the implementation block
@property (assign,nonatomic) BOOL registered;                     //@synthesize registered=_registered - In the implementation block
-(BOOL)registered;
-(void)setRegistered:(BOOL)arg1 ;
-(void)setPredictedRoomsHandler:(id)arg1 ;
-(id)predictedRoomsHandler;
-(id)startMonitoringForPredictedRoomsWithHandler:(/*^block*/id)arg1 ;
-(id)stopMonitoringForPredictedRooms;
-(void)onPredictedRooms:(id)arg1 error:(id)arg2 ;
@end

