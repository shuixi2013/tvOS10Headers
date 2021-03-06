/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSLocking;
@class NSDateFormatter, NSNumberFormatter;

@interface TVSStoreDataConverter : NSObject {

	id<NSLocking> _lock;
	NSDateFormatter* _dateFormatter;
	NSNumberFormatter* _numberFormatter;

}

@property (nonatomic,retain) id<NSLocking> lock;                               //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                  //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * numberFormatter;              //@synthesize numberFormatter=_numberFormatter - In the implementation block
+(id)adamIDForNumber:(id)arg1 ;
+(id)releaseDateFromString:(id)arg1 ;
+(id)sharedFormatter;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(id)init;
-(id<NSLocking>)lock;
-(NSDateFormatter *)dateFormatter;
-(void)setLock:(id<NSLocking>)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
@end

