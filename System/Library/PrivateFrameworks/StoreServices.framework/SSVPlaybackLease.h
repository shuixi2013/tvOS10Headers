/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSVPlaybackLeaseDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, NSData, NSString, SSVPlaybackLeaseConfiguration, NSObject, SSVFairPlaySubscriptionController, SSVPlaybackLeaseRequest, NSDate, SSVRefreshSubscriptionRequest, SSVBarrierOperationQueue, SSURLBag;

@interface SSVPlaybackLease : NSObject {

	NSMutableArray* _assetOperations;
	NSData* _certificateData;
	NSString* _certificateURLBagKey;
	SSVPlaybackLeaseConfiguration* _configuration;
	id<SSVPlaybackLeaseDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	SSVFairPlaySubscriptionController* _fairPlaySubscriptionController;
	unsigned long long _kdMovieIdentifier;
	SSVPlaybackLeaseRequest* _lastKDLeaseRequest;
	int _leaseDidEndNotificationToken;
	NSDate* _leaseExpirationDate;
	long long _leaseType;
	SSVRefreshSubscriptionRequest* _offlineSlotRequest;
	SSVBarrierOperationQueue* _operationQueue;
	BOOL _refreshesAutomatically;
	NSObject*<OS_dispatch_source> _refreshTimer;
	NSObject*<OS_dispatch_queue> _serialQueue;
	SSURLBag* _urlBag;

}

@property (__weak) id<SSVPlaybackLeaseDelegate> delegate; 
@property (assign) BOOL refreshesAutomatically; 
@property (copy) NSData * certificateData; 
@property (copy) NSString * certificateURLBagKey; 
-(NSString *)certificateURLBagKey;
-(void)setCertificateURLBagKey:(NSString *)arg1 ;
-(id)_initSSVPlaybackLease;
-(id)initWithURLBag:(id)arg1 leaseType:(long long)arg2 ;
-(id)_addOperationWithRequest:(id)arg1 configurationURL:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getCertificateDataWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_startRefreshTimerIfNecessary;
-(void)_cancelRefreshTimer;
-(void)_updateForLeaseResponse:(id)arg1 error:(id)arg2 ;
-(void)_fireRefreshTimer;
-(BOOL)_shouldEndLeaseForError:(id)arg1 returningEndReasonType:(unsigned long long*)arg2 ;
-(void)_sendLeaseDidEndWithEndReasonType:(unsigned long long)arg1 ;
-(id)initWithLeaseConfiguration:(id)arg1 ;
-(BOOL)refreshesAutomatically;
-(void)setDelegate:(id<SSVPlaybackLeaseDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SSVPlaybackLeaseDelegate>)delegate;
-(void)cancelAllAssetRequests;
-(void)beginLeaseWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setRefreshesAutomatically:(BOOL)arg1 ;
-(void)endLease;
-(void)getAssetWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)preheatLeaseRequestsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)refreshLeaseWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithURLBag:(id)arg1 ;
-(NSData *)certificateData;
-(void)setCertificateData:(NSData *)arg1 ;
-(void)_endLease;
@end

