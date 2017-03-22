/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface CDDHistoryWindow : NSObject {

	NSDate* _start;
	double _duration;
	double _recurrenceDelta;
	double _recurrenceWidth;

}

@property (readonly) NSDate * start;                      //@synthesize start=_start - In the implementation block
@property (readonly) double duration;                     //@synthesize duration=_duration - In the implementation block
@property (readonly) double recurrenceDelta;              //@synthesize recurrenceDelta=_recurrenceDelta - In the implementation block
@property (readonly) double recurrenceWidth;              //@synthesize recurrenceWidth=_recurrenceWidth - In the implementation block
+(id)singleDayHistoryWindowWithWidth:(double)arg1 forDate:(id)arg2 ;
+(id)allTimeHistoryWindow;
+(id)dailyHistoryWindowWithWidth:(double)arg1 endingOnDate:(id)arg2 historyLengthInDays:(int)arg3 ;
-(id)description;
-(double)duration;
-(NSDate *)start;
-(double)recurrenceDelta;
-(double)recurrenceWidth;
-(id)initWithStart:(id)arg1 duration:(double)arg2 recurrenceDelta:(double)arg3 recurrenceWidth:(double)arg4 error:(id*)arg5 ;
@end

