/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CalendarDatabase/CalendarDatabase-Structs.h>
@class NSCalendar, NSDate, NSTimeZone, NSArray;

@interface CDBRecurrenceGenerator : NSObject {

	NSCalendar* _calendar;
	NSDate* _eventStartDate;
	NSDate* _eventEndDate;
	NSTimeZone* _eventTimeZone;
	unsigned long long _duration;
	BOOL _allDay;
	int _interval;
	int _frequency;
	NSDate* _endDate;
	int _weekStart;
	BOOL _shouldPinMonthDays;
	NSArray* _daysOfTheWeek;
	NSArray* _daysOfTheMonth;
	NSArray* _daysOfTheYear;
	NSArray* _weeksOfTheYear;
	NSArray* _monthsOfTheYear;
	NSArray* _setPositions;

}

@property (nonatomic,copy) NSDate * eventStartDate;                 //@synthesize eventStartDate=_eventStartDate - In the implementation block
@property (nonatomic,copy) NSDate * eventEndDate;                   //@synthesize eventEndDate=_eventEndDate - In the implementation block
@property (nonatomic,copy) NSTimeZone * eventTimeZone;              //@synthesize eventTimeZone=_eventTimeZone - In the implementation block
@property (assign,nonatomic) BOOL allDay;                           //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                        //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSArray * daysOfTheWeek;                 //@synthesize daysOfTheWeek=_daysOfTheWeek - In the implementation block
@property (nonatomic,copy) NSArray * daysOfTheMonth;                //@synthesize daysOfTheMonth=_daysOfTheMonth - In the implementation block
@property (nonatomic,copy) NSArray * daysOfTheYear;                 //@synthesize daysOfTheYear=_daysOfTheYear - In the implementation block
@property (nonatomic,copy) NSArray * weeksOfTheYear;                //@synthesize weeksOfTheYear=_weeksOfTheYear - In the implementation block
@property (nonatomic,copy) NSArray * monthsOfTheYear;               //@synthesize monthsOfTheYear=_monthsOfTheYear - In the implementation block
@property (nonatomic,copy) NSArray * setPositions;                  //@synthesize setPositions=_setPositions - In the implementation block
-(NSTimeZone *)eventTimeZone;
-(void)setEventTimeZone:(NSTimeZone *)arg1 ;
-(id)init;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)allDay;
-(NSDate *)endDate;
-(NSArray *)daysOfTheMonth;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(NSArray *)daysOfTheWeek;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(NSArray *)daysOfTheYear;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(NSArray *)monthsOfTheYear;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(NSArray *)weeksOfTheYear;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(id)computeRecurrenceEndDateForCalEvent:(void*)arg1 recurrenceRule:(void*)arg2 count:(unsigned long long)arg3 locked:(BOOL)arg4 ;
-(id)copyOccurrenceDatesWithCalEvent:(void*)arg1 startDate:(SCD_Struct_CD7)arg2 endDate:(SCD_Struct_CD7)arg3 timeZone:(id)arg4 limit:(long long)arg5 locked:(BOOL)arg6 ;
-(void)_setupForCalEvent:(void*)arg1 locked:(BOOL)arg2 ;
-(id)_copyOccurrenceDatesWithBirthdayEvent:(void*)arg1 startDate:(SCD_Struct_CD7)arg2 endDate:(SCD_Struct_CD7)arg3 timeZone:(id)arg4 limit:(long long)arg5 locked:(BOOL)arg6 ;
-(void)_prepareForCalRecurrence:(void*)arg1 locked:(BOOL)arg2 ;
-(double)_convertAbsoluteTime:(double)arg1 fromTimeZone:(id)arg2 toTimeZone:(id)arg3 ;
-(id)_copyDailyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4 ;
-(id)_copyWeeklyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4 ;
-(id)_copyMonthlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4 ;
-(id)_copyYearlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4 ;
-(BOOL)_validateCalDate:(SCD_Struct_CD7)arg1 pinned:(BOOL)arg2 ;
-(id)copyOccurrenceDatesWithInitialDate:(id)arg1 calRecurrences:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 timeZone:(id)arg5 ;
-(BOOL)_isSimpleYearlyRecurrence;
-(id)_copySimpleYearlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4 ;
-(void)setSetPositions:(NSArray *)arg1 ;
-(NSArray *)setPositions;
-(void)setEventStartDate:(NSDate *)arg1 ;
-(void)setEventEndDate:(NSDate *)arg1 ;
-(NSDate *)eventEndDate;
-(NSDate *)eventStartDate;
-(id)copyOccurrenceDatesBetweenStartDate:(SCD_Struct_CD7)arg1 endDate:(SCD_Struct_CD7)arg2 timeZone:(id)arg3 limit:(long long)arg4 ;
-(id)computeRecurrenceEndDate:(unsigned long long)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
@end

