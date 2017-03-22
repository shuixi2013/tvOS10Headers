/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADSession_RPC.h>
#import <libobjc.A.dylib/ADAdSheetProxyDelegate.h>
#import <libobjc.A.dylib/ADAdSheetConnectionDelegate.h>

@class NSMutableArray, ADAdSheetConnection, NSString;

@interface ADSession : NSObject <ADSession_RPC, ADAdSheetProxyDelegate, ADAdSheetConnectionDelegate> {

	BOOL _applicationCanReceiveBackgroundAds;
	BOOL _canUpdateFrequencyCap;
	BOOL _canUpdateToroClickData;
	int _classicUnavailableToken;
	NSMutableArray* _adSpaces;
	ADAdSheetConnection* _connection;

}

@property (nonatomic,retain) NSMutableArray * adSpaces;                            //@synthesize adSpaces=_adSpaces - In the implementation block
@property (assign,nonatomic) int classicUnavailableToken;                          //@synthesize classicUnavailableToken=_classicUnavailableToken - In the implementation block
@property (nonatomic,retain) ADAdSheetConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) id<ADSSession_RPC> rpcProxy; 
@property (assign) BOOL canUpdateFrequencyCap;                                     //@synthesize canUpdateFrequencyCap=_canUpdateFrequencyCap - In the implementation block
@property (assign) BOOL canUpdateToroClickData;                                    //@synthesize canUpdateToroClickData=_canUpdateToroClickData - In the implementation block
@property (assign,nonatomic) BOOL applicationCanReceiveBackgroundAds;              //@synthesize applicationCanReceiveBackgroundAds=_applicationCanReceiveBackgroundAds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(ADAdSheetConnection *)connection;
-(void)setConnection:(ADAdSheetConnection *)arg1 ;
-(void)_appDidBecomeActive;
-(id<ADSSession_RPC>)rpcProxy;
-(BOOL)applicationCanReceiveBackgroundAds;
-(BOOL)shouldLaunchAdSheet;
-(void)performWhenConnected:(/*^block*/id)arg1 ;
-(id)rpcProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_remote_heartbeatTokenDidChange:(id)arg1 expirationDate:(double)arg2 error:(id)arg3 ;
-(void)_remote_policyEngineDidIdleDisable;
-(void)_reportAdSpaceStatusEventWithAdOpportunityIdentifier:(id)arg1 adOriginIdentifier:(id)arg2 tags:(id)arg3 durationInFeed:(double)arg4 responseTime:(double)arg5 firstMessage:(BOOL)arg6 screenfuls:(long long)arg7 errorCode:(long long)arg8 ;
-(id)_linkedOnVersion;
-(NSMutableArray *)adSpaces;
-(void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2 privateSegment:(BOOL)arg3 ;
-(id)additionalAdSheetLaunchOptions;
-(id)adSheetMachServiceName;
-(void)configureConnection:(id)arg1 ;
-(BOOL)shouldConnectToAdSheet;
-(void)adSheetConnectionEstablished;
-(void)adSheetConnectionLost;
-(void)registerAdSpace:(id)arg1 ;
-(void)unregisterAdSpace:(id)arg1 ;
-(void)determineAppInstallAttributionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestUserTargetingIdentifier:(/*^block*/id)arg1 ;
-(void)refreshTargetingData;
-(void)updateSponsoredFrequencyCapData:(id)arg1 ;
-(void)updateTrendingFrequencyCapData:(id)arg1 ;
-(void)updateToroClickData:(id)arg1 ;
-(void)requestSponsoredSearchData:(/*^block*/id)arg1 ;
-(void)requestSponsoredSearchDataAndRequestID:(/*^block*/id)arg1 ;
-(void)requestTrendingSearchData:(/*^block*/id)arg1 ;
-(void)requestSponsoredSearchURL:(/*^block*/id)arg1 ;
-(void)requestTrendingSearchURL:(/*^block*/id)arg1 ;
-(void)lookupAdConversionDetails:(/*^block*/id)arg1 ;
-(void)requestAttributionDetailsWithBlock:(/*^block*/id)arg1 ;
-(void)_reportAdSubscriptionEvent:(id)arg1 ;
-(void)_reportAdSpaceStatusEventWithAdOpportunityIdentifier:(id)arg1 adOriginIdentifier:(id)arg2 durationInFeed:(double)arg3 responseTime:(double)arg4 firstMessage:(BOOL)arg5 screenfuls:(long long)arg6 errorCode:(long long)arg7 ;
-(void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2 ;
-(void)reportPrerollRequest;
-(void)updateDPIDWithAction:(unsigned long long)arg1 ;
-(void)setApplicationCanReceiveBackgroundAds:(BOOL)arg1 ;
-(void)setAdSpaces:(NSMutableArray *)arg1 ;
-(int)classicUnavailableToken;
-(void)setClassicUnavailableToken:(int)arg1 ;
-(BOOL)canUpdateFrequencyCap;
-(void)setCanUpdateFrequencyCap:(BOOL)arg1 ;
-(BOOL)canUpdateToroClickData;
-(void)setCanUpdateToroClickData:(BOOL)arg1 ;
@end

