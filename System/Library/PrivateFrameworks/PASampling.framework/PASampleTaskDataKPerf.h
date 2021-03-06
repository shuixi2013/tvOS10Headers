/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampleTaskData.h>

@interface PASampleTaskDataKPerf : PASampleTaskData {

	BOOL isSentinel;
	BOOL filledState;
	BOOL filledMem;
	BOOL filledLatencyQoS;
	PASampleTaskDataKPerf* previousSampleTask;

}

@property (assign) BOOL isSentinel; 
@property (__weak) PASampleTaskDataKPerf * previousSampleTask; 
@property (assign) BOOL filledState; 
@property (assign) BOOL filledMem; 
@property (assign) BOOL filledLatencyQoS; 
-(BOOL)isSentinel;
-(void)setIsSentinel:(BOOL)arg1 ;
-(void)setPrivateData:(id)arg1 ;
-(id)privateData;
-(PASampleTaskDataKPerf *)previousSampleTask;
-(void)setPreviousSampleTask:(PASampleTaskDataKPerf *)arg1 ;
-(BOOL)filledState;
-(void)setFilledState:(BOOL)arg1 ;
-(BOOL)filledMem;
-(void)setFilledMem:(BOOL)arg1 ;
-(BOOL)filledLatencyQoS;
-(void)setFilledLatencyQoS:(BOOL)arg1 ;
@end

