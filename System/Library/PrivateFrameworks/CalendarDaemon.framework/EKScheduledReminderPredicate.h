/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>

@class NSDate;

@interface EKScheduledReminderPredicate : EKPredicate {

	NSDate* _day;

}

@property (nonatomic,retain) NSDate * day;              //@synthesize day=_day - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateForScheduledRemindersInCalendars:(id)arg1 onDay:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDay:(NSDate *)arg1 ;
-(NSDate *)day;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
@end

