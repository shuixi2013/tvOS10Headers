/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMapTable;

@interface GEOTileUsageInfo : NSObject {

	double _startTime;
	double _endTime;
	NSMapTable* _tileStyleToCount;
	unsigned long long _dataLength;

}

@property (assign,nonatomic) double startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                               //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) NSMapTable * tileStyleToCount;              //@synthesize tileStyleToCount=_tileStyleToCount - In the implementation block
@property (nonatomic,readonly) unsigned long long dataLength;              //@synthesize dataLength=_dataLength - In the implementation block
-(void)dealloc;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(unsigned long long)dataLength;
-(NSMapTable *)tileStyleToCount;
-(void)addTileKey:(const GEOTileKey*)arg1 dataLength:(unsigned long long)arg2 ;
@end

