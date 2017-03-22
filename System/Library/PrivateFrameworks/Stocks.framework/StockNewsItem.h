/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSURL;

@interface StockNewsItem : NSObject {

	NSString* _headline;
	NSString* _summary;
	NSString* _source;
	NSDate* _date;
	NSURL* _link;
	NSString* _localizedDateString;

}

@property (nonatomic,retain) NSString * headline;                                  //@synthesize headline=_headline - In the implementation block
@property (nonatomic,retain) NSString * summary;                                   //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSString * source;                                    //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSDate * date;                                        //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSURL * link;                                         //@synthesize link=_link - In the implementation block
@property (nonatomic,retain,readonly) NSString * localizedDateString; 
+(id)localizedStringForDate:(id)arg1 ;
-(id)description;
-(void)setSource:(NSString *)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(id)archiveDictionary;
-(NSString *)source;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(NSString *)summary;
-(void)setHeadline:(NSString *)arg1 ;
-(NSString *)headline;
-(void)resetLocale;
-(id)initWithArchiveDictionary:(id)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(long long)chronologicalComparisonWithNewsItem:(id)arg1 ;
-(NSString *)localizedDateString;
@end

