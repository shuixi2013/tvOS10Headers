/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSInputClue.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSSet, NSDate;

@interface CLSInputTimeClue : CLSInputClue <NSCoding> {

	NSArray* _dateComponentsArray;
	NSArray* _events;
	NSSet* _localDates;
	NSDate* _localStartDate;
	NSDate* _localEndDate;
	NSSet* _universalDates;
	NSDate* _universalStartDate;
	NSDate* _universalEndDate;

}

@property (nonatomic,copy) NSArray * events;              //@synthesize events=_events - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)clueWithDates:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)timeInterval;
-(void)setEvents:(NSArray *)arg1 ;
-(NSArray *)events;
-(id)universalStartDate;
-(id)universalEndDate;
-(id)localStartDate;
-(id)localEndDate;
-(id)localDates;
-(unsigned long long)numberOfDays;
-(BOOL)isEqualToClue:(id)arg1 ;
-(id)_prepareOperation;
-(void)_computeDateProperties;
-(id)universalDates;
@end

