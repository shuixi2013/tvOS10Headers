/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNDateHelper : NSObject
+(id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7 ;
+(long long)gregorianYearInGMTFromDate:(id)arg1 ;
+(id)gregorianCalendarInGMT;
+(id)gregorianCalendar;
+(BOOL)isComponentsEmpty:(id)arg1 ;
+(long long)currentGregorianYearInGMT;
+(long long)gregorianYearFromDate:(id)arg1 ;
+(id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 ;
+(id)componentsFromDate:(id)arg1 ;
+(id)componentsForJanuary1WithYear:(long long)arg1 ;
@end

