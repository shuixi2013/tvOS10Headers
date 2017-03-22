/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKRecurrenceEnd, NSString, NSDate, NSArray, EKPersistentCalendarItem;

@interface EKPersistentRecurrenceRule : EKPersistentObject <NSCopying> {

	id _helper;
	EKRecurrenceEnd* _recurrenceEnd;

}

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy) NSDate * endDate; 
@property (assign,nonatomic) unsigned long long count; 
@property (assign,nonatomic) long long frequency; 
@property (assign,nonatomic) long long interval; 
@property (assign,nonatomic) long long firstDayOfTheWeek; 
@property (nonatomic,copy) NSArray * daysOfTheWeek; 
@property (nonatomic,copy) NSArray * daysOfTheMonth; 
@property (nonatomic,copy) NSArray * daysOfTheYear; 
@property (nonatomic,copy) NSArray * weeksOfTheYear; 
@property (nonatomic,copy) NSArray * monthsOfTheYear; 
@property (nonatomic,copy) NSArray * setPositions; 
@property (nonatomic,readonly) NSDate * cachedEndDate; 
@property (nonatomic,retain) EKPersistentCalendarItem * owner; 
@property (nonatomic,readonly) BOOL shouldPinMonthDays; 
+(id)defaultPropertiesToLoad;
+(id)relations;
-(unsigned long long)count;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUID;
-(void)setCount:(unsigned long long)arg1 ;
-(long long)frequency;
-(void)setFrequency:(long long)arg1 ;
-(NSString *)calendarIdentifier;
-(EKPersistentCalendarItem *)owner;
-(void)setOwner:(EKPersistentCalendarItem *)arg1 ;
-(void)setInterval:(long long)arg1 ;
-(long long)interval;
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
-(void)setSetPositions:(NSArray *)arg1 ;
-(NSArray *)setPositions;
-(void)setFirstDayOfTheWeek:(long long)arg1 ;
-(NSDate *)cachedEndDate;
-(BOOL)shouldPinMonthDays;
-(SCD_Struct_EK1)gregorianUnits;
-(long long)firstDayOfTheWeek;
-(BOOL)validate:(id*)arg1 ;
-(int)entityType;
-(void)setEndDate:(NSDate *)arg1 ;
-(BOOL)isDirty;
-(id)_helper;
@end

