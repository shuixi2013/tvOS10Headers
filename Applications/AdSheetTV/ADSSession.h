//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADClientStateDelegate.h"
#import "ADSSession_RPC.h"

@class ADClientState, NSData, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer, NSXPCConnection;

@interface ADSSession : NSObject <ADSSession_RPC, ADClientStateDelegate>
{
    _Bool _clientIsPrivileged;	// 8 = 0x8
    _Bool _hasNewsEntitlement;	// 9 = 0x9
    _Bool _canReceiveAdsInBackground;	// 10 = 0xa
    _Bool _hasMobileInstallationData;	// 11 = 0xb
    _Bool _isOpen;	// 12 = 0xc
    _Bool _policyEngineEnabled;	// 13 = 0xd
    unsigned int _state;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    NSString *_appVersion;	// 32 = 0x20
    NSData *_clientAuditToken;	// 40 = 0x28
    NSXPCConnection *_connection;	// 48 = 0x30
    double _connectTime;	// 56 = 0x38
    unsigned long long _adSpaceCount;	// 64 = 0x40
    long long _PID;	// 72 = 0x48
    NSString *_authenticationUserName;	// 80 = 0x50
    ADClientState *_clientState;	// 88 = 0x58
    NSMutableDictionary *_adSpacesByCreativeType;	// 96 = 0x60
    NSMutableArray *_adSpaceControllers;	// 104 = 0x68
    NSString *_clientLinkedOnVersion;	// 112 = 0x70
    long long _clientApplicationRunState;	// 120 = 0x78
    NSString *_clientApplicationVersion;	// 128 = 0x80
    NSMutableArray *_actionsAwaitingMobileInstallationData;	// 136 = 0x88
    NSTimer *_closeTimer;	// 144 = 0x90
    double _lastPolicyEngineEventTimestamp;	// 152 = 0x98
    double _lastBannerEventTimestamp;	// 160 = 0xa0
    double _lastClientStateChangeTimestamp;	// 168 = 0xa8
    NSMutableArray *_outstandingStationEntryRecords;	// 176 = 0xb0
    NSMutableArray *_outstandingSongBeganRecords;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_searchQueue;	// 192 = 0xc0
}

@property(nonatomic) NSObject<OS_dispatch_queue> *searchQueue; // @synthesize searchQueue=_searchQueue;
@property(readonly, nonatomic) NSMutableArray *outstandingSongBeganRecords; // @synthesize outstandingSongBeganRecords=_outstandingSongBeganRecords;
@property(readonly, nonatomic) NSMutableArray *outstandingStationEntryRecords; // @synthesize outstandingStationEntryRecords=_outstandingStationEntryRecords;
@property(nonatomic) _Bool policyEngineEnabled; // @synthesize policyEngineEnabled=_policyEngineEnabled;
@property(nonatomic) double lastClientStateChangeTimestamp; // @synthesize lastClientStateChangeTimestamp=_lastClientStateChangeTimestamp;
@property(nonatomic) double lastBannerEventTimestamp; // @synthesize lastBannerEventTimestamp=_lastBannerEventTimestamp;
@property(nonatomic) double lastPolicyEngineEventTimestamp; // @synthesize lastPolicyEngineEventTimestamp=_lastPolicyEngineEventTimestamp;
@property(readonly, nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(readonly, retain, nonatomic) NSTimer *closeTimer; // @synthesize closeTimer=_closeTimer;
@property(retain, nonatomic) NSMutableArray *actionsAwaitingMobileInstallationData; // @synthesize actionsAwaitingMobileInstallationData=_actionsAwaitingMobileInstallationData;
@property(nonatomic) _Bool hasMobileInstallationData; // @synthesize hasMobileInstallationData=_hasMobileInstallationData;
@property(copy, nonatomic) NSString *clientApplicationVersion; // @synthesize clientApplicationVersion=_clientApplicationVersion;
@property(nonatomic) long long clientApplicationRunState; // @synthesize clientApplicationRunState=_clientApplicationRunState;
@property(copy, nonatomic) NSString *clientLinkedOnVersion; // @synthesize clientLinkedOnVersion=_clientLinkedOnVersion;
@property(nonatomic) _Bool canReceiveAdsInBackground; // @synthesize canReceiveAdsInBackground=_canReceiveAdsInBackground;
@property(retain, nonatomic) NSMutableArray *adSpaceControllers; // @synthesize adSpaceControllers=_adSpaceControllers;
@property(retain, nonatomic) NSMutableDictionary *adSpacesByCreativeType; // @synthesize adSpacesByCreativeType=_adSpacesByCreativeType;
@property(retain, nonatomic) ADClientState *clientState; // @synthesize clientState=_clientState;
@property(readonly, nonatomic) _Bool hasNewsEntitlement; // @synthesize hasNewsEntitlement=_hasNewsEntitlement;
@property(readonly, nonatomic) _Bool clientIsPrivileged; // @synthesize clientIsPrivileged=_clientIsPrivileged;
@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(readonly, nonatomic) long long PID; // @synthesize PID=_PID;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) unsigned long long adSpaceCount; // @synthesize adSpaceCount=_adSpaceCount;
@property(readonly, nonatomic) double connectTime; // @synthesize connectTime=_connectTime;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSData *clientAuditToken; // @synthesize clientAuditToken=_clientAuditToken;
@property(readonly, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy) NSString *description;
- (void)_test_closeUnassignedBannerControllers;	// IMP=0x000000010002df90
- (void)_test_clearCurrentAdSpaceControllerAds;	// IMP=0x000000010002df64
- (void)_remote_requestTrendingSearchURL:(CDUnknownBlockType)arg1;	// IMP=0x000000010002dd08
- (void)_remote_requestSponsoredSearchURL:(CDUnknownBlockType)arg1;	// IMP=0x000000010002daac
- (void)_remote_requestTrendingSearchData:(CDUnknownBlockType)arg1;	// IMP=0x000000010002d358
- (void)_remote_requestSponsoredSearchData:(CDUnknownBlockType)arg1;	// IMP=0x000000010002d2b0
- (void)_remote_requestSponsoredSearchDataAndRequestID:(CDUnknownBlockType)arg1;	// IMP=0x000000010002c940
- (void)requestUserTargetingProperties:(CDUnknownBlockType)arg1;	// IMP=0x000000010002c790
- (void)_remote_refreshTargetingData;	// IMP=0x000000010002c5f4
- (void)_remote_updateToroClickData:(id)arg1;	// IMP=0x000000010002c4f4
- (void)_remote_updateFrequencyCapData:(id)arg1 forType:(id)arg2;	// IMP=0x000000010002c3d4
- (void)_remote_requestUserTargetingIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x000000010002c1a8
- (void)_remote_reportPrerollRequest;	// IMP=0x000000010002c0e8
- (void)_remote_addClientToSegments:(id)arg1 replaceExisting:(_Bool)arg2 privateSegment:(_Bool)arg3;	// IMP=0x000000010002bd6c
- (void)_reportSubscriptionEventWithType:(long long)arg1 withQToken:(id)arg2 sourceIdentifier:(id)arg3 eventTime:(double)arg4 info:(id)arg5;	// IMP=0x000000010002bb84
- (void)_reportAdSpaceStatusEventWithAdOpportunityIdentifier:(id)arg1 adOriginIdentifier:(id)arg2 tags:(id)arg3 durationInFeed:(double)arg4 responseTime:(double)arg5 firstMessage:(_Bool)arg6 screenfuls:(long long)arg7 errorCode:(long long)arg8;	// IMP=0x000000010002b9c8
- (void)_remote_lookupAdConversionDetails:(CDUnknownBlockType)arg1;	// IMP=0x000000010002b5e0
- (void)_remote_determineAppInstallAttributionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002b338
- (void)_remote_requestAttributionDetailsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002a758
- (_Bool)_hasActiveStoryboard;	// IMP=0x000000010002a63c
- (void)_remote_updateDPIDWithAction:(unsigned long long)arg1;	// IMP=0x000000010002a5bc
- (void)_priv_removeRecordForAccountWithIdentifier:(id)arg1;	// IMP=0x000000010002a498
- (void)_remote_acquireMatchSlotWithBodyParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002a410
- (void)_remote_reportClientEvent:(id)arg1;	// IMP=0x000000010002a2e8
- (void)_remote_reportStationTileImpression:(id)arg1;	// IMP=0x000000010002a1c4
- (void)_remote_optimalTransmissionWindowDidOpen;	// IMP=0x000000010002a1c0
- (void)loadAd:(id)arg1 forAdSpace:(id)arg2;	// IMP=0x000000010002a04c
- (void)_remote_didFinishAdPlaybackForSlot:(id)arg1 skippedCount:(long long)arg2;	// IMP=0x0000000100029f20
- (void)_remote_willBeginAdPlaybackForSlot:(id)arg1 visuallyEngaged:(_Bool)arg2 adSpaceType:(int)arg3;	// IMP=0x0000000100029de8
- (void)_remote_requestAdsForSlot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100029a2c
- (void)_remote_didStopPlaybackOnStation:(id)arg1;	// IMP=0x0000000100029904
- (void)_remote_didBeginPlaybackOnStation:(id)arg1 song:(id)arg2;	// IMP=0x00000001000297bc
- (void)_remote_didEnterStation:(id)arg1;	// IMP=0x0000000100029694
- (void)_remote_setVisuallyEngaged:(_Bool)arg1;	// IMP=0x00000001000295d4
- (void)_remote_disablePolicyEngine;	// IMP=0x00000001000294ac
- (void)_remote_enablePolicyEngine;	// IMP=0x000000010002925c
- (void)_handleHeartbeatTokenChangedNotification:(id)arg1;	// IMP=0x0000000100028fa8
@property(readonly, nonatomic) _Bool productionClient;
@property(readonly, nonatomic) _Bool applicationStateAllowsAds;
@property(readonly, nonatomic) _Bool clientIsVisible;
- (_Bool)_canReceiveAdsInState:(unsigned int)arg1;	// IMP=0x0000000100028890
- (void)adSpaceControllerDidClose:(id)arg1;	// IMP=0x0000000100028810
- (id)requestProperties;	// IMP=0x00000001000286f4
- (void)registerAdSpace:(id)arg1;	// IMP=0x00000001000285b0
- (void)_remote_setClientLinkedOnVersion:(id)arg1;	// IMP=0x00000001000284a0
- (void)_remote_didBecomeActive;	// IMP=0x00000001000283cc
- (void)_remote_willResignActive;	// IMP=0x00000001000282f8
- (void)close;	// IMP=0x0000000100027f30
- (void)closeAllAdSpaces;	// IMP=0x0000000100027d44
- (void)considerClosing;	// IMP=0x0000000100027ce4
@property(readonly, nonatomic) _Bool shouldClose;
- (void)_didReceiveMemoryWarning;	// IMP=0x000000010002795c
@property(readonly, nonatomic) _Bool actionInProgress;
- (void)willLoadAdForType:(int)arg1 section:(id)arg2 serverURL:(id)arg3;	// IMP=0x00000001000276ec
- (id)adSpaceControllerDetailsMatchingServerURL:(id)arg1 section:(id)arg2 adType:(int)arg3;	// IMP=0x000000010002744c
- (_Bool)_adSpaceController:(id)arg1 matchesServerURL:(id)arg2 section:(id)arg3 adType:(int)arg4;	// IMP=0x0000000100027348
- (void)closeAdSpace:(id)arg1;	// IMP=0x0000000100027248
- (void)reassignAdSpaceControllersForCreativeType:(int)arg1;	// IMP=0x0000000100026c7c
- (id)_sortedAdSpacesForCreativeType:(int)arg1;	// IMP=0x0000000100026a7c
- (long long)_countOfControllersForCreativeType:(int)arg1;	// IMP=0x000000010002691c
- (id)_unassignedAdSpaceControllerForCreativeType:(int)arg1;	// IMP=0x00000001000267cc
- (void)clientStateDidChange:(id)arg1;	// IMP=0x00000001000266a0
- (void)_lookupMobileInstallationData;	// IMP=0x0000000100026408
- (void)_handleMobileInstallationDataVersion:(id)arg1 runState:(int)arg2;	// IMP=0x00000001000261d4
- (void)_abortForStalledDetermineRoamingStatus;	// IMP=0x00000001000261c8
- (void)_abortForStallediTunesStorefrontLookup;	// IMP=0x00000001000261bc
- (void)_abortForStalledMobileInstallationLookup;	// IMP=0x00000001000261b0
- (void)_handleRequestPropertiesAcquisitionTimeout;	// IMP=0x0000000100026088
- (id)initWithConnection:(id)arg1 bundleID:(id)arg2 version:(id)arg3;	// IMP=0x00000001000257a8
- (void)dealloc;	// IMP=0x000000010002560c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
