/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSData;

@interface _GEOMapItemHandleCacheData : NSObject {

	NSDate* _timestamp;
	NSData* _data;

}

@property (nonatomic,readonly) NSDate * timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long cost; 
-(void)dealloc;
-(NSDate *)timestamp;
-(NSData *)data;
-(unsigned long long)cost;
-(id)initWithTimestamp:(id)arg1 data:(id)arg2 ;
@end

