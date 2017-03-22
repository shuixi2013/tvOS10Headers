/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateIntervalFormatter, NSLocale;

@interface CLSDateIntervalFormatter : NSObject {

	NSDateIntervalFormatter* _dateIntervalFormatter;
	NSLocale* _locale;

}

@property (nonatomic,readonly) NSDateIntervalFormatter * dateIntervalFormatter;              //@synthesize dateIntervalFormatter=_dateIntervalFormatter - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                              //@synthesize locale=_locale - In the implementation block
+(id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 showLongMonthFormatIfNeeded:(BOOL)arg4 ;
+(id)_dateFormatForDateFormatterType:(unsigned long long)arg1 displayYear:(BOOL)arg2 displayLongMonth:(BOOL)arg3 ;
+(id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 ;
+(BOOL)_yearIsNeededForDisplayingDate:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 showLongMonthFormatIfNeeded:(BOOL)arg4 ;
-(NSDateIntervalFormatter *)dateIntervalFormatter;
-(id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 ;
@end

