/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CADCalendarInterface
@required
-(void)CADDatabaseGetCalendarsWithFaultedProperties:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADCalendar:(SCD_Struct_CA1)arg1 hasEvents:(/*^block*/id)arg2;
-(void)CADCalendar:(SCD_Struct_CA1)arg1 hasReminders:(/*^block*/id)arg2;
-(void)CADDatabaseDeleteCalendar:(SCD_Struct_CA1)arg1 forEntityType:(int)arg2 error:(/*^block*/id)arg3;

@end

