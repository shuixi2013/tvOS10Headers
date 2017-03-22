/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface LSPingResults : NSObject <NSSecureCoding> {

	NSMutableDictionary* _devices;
	NSMutableDictionary* _errorsMap;
	NSMutableDictionary* _resultsMap;
	double _pingAvg;

}

@property (retain) NSMutableDictionary * devices;                 //@synthesize devices=_devices - In the implementation block
@property (retain) NSMutableDictionary * errorsMap;               //@synthesize errorsMap=_errorsMap - In the implementation block
@property (retain) NSMutableDictionary * resultsMap;              //@synthesize resultsMap=_resultsMap - In the implementation block
@property (assign) double pingAvg;                                //@synthesize pingAvg=_pingAvg - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setErrorsMap:(NSMutableDictionary *)arg1 ;
-(void)setResultsMap:(NSMutableDictionary *)arg1 ;
-(void)setPingAvg:(double)arg1 ;
-(NSMutableDictionary *)errorsMap;
-(NSMutableDictionary *)resultsMap;
-(double)pingAvg;
-(void)addKeysForDevice:(id)arg1 ;
-(void)incrementResultForStatus:(long long)arg1 andDevice:(id)arg2 ;
-(id)seenDevices;
-(long long)statusForDevice:(id)arg1 ;
-(id)dateDeviceLastSeen:(id)arg1 ;
-(id)resultCountsForDevice:(id)arg1 ;
-(void)updateDevice:(id)arg1 withStatus:(long long)arg2 ;
-(void)updateDevice:(id)arg1 withError:(id)arg2 ;
-(double)averagePingTime;
-(void)updatePingAverageWithInterval:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)clear;
-(void)setDevices:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)devices;
-(void)addDevice:(id)arg1 ;
-(id)errors;
@end

