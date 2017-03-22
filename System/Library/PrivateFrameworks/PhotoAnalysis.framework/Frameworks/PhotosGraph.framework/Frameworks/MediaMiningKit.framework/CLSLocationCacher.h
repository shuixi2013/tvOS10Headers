/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapServiceTicket, OS_dispatch_source, OS_dispatch_queue;
@class NSArray, NSObject, CLSLocationCacheTestObject;

@interface CLSLocationCacher : NSObject {

	id<GEOMapServiceTicket> _ticket;
	NSArray* _geoLocations;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _retryLevel;
	double _nextRetryTime;
	NSObject*<OS_dispatch_queue> _timerQueue;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	CLSLocationCacheTestObject* _testObject;

}

@property (nonatomic,copy) id progressBlock;                                       //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                     //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) CLSLocationCacheTestObject * testObject;              //@synthesize testObject=_testObject - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)_handleError:(id)arg1 ;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(id)initWithLocations:(id)arg1 ;
-(void)cachePlacemarks;
-(void)_heartBeat;
-(void)_cacheMapItems:(id)arg1 ;
-(CLSLocationCacheTestObject *)testObject;
-(void)setTestObject:(CLSLocationCacheTestObject *)arg1 ;
@end

