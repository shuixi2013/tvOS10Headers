/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface TVSDateRange : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	double _durationInSeconds;

}

@property (nonatomic,readonly) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                      //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) double durationInSeconds;              //@synthesize durationInSeconds=_durationInSeconds - In the implementation block
-(id)initWithStartDate:(id)arg1 duration:(double)arg2 ;
-(BOOL)containsDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)durationInSeconds;
-(id)dateRangeByIntersectingDateRange:(id)arg1 ;
@end

