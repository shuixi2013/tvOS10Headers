//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ADSAdSpace_RPC.h"

@class ADSAdSpaceController, ADSCreativeContainerView, ADSSession, NSSet, NSString, NSTimer, NSURL;

@interface ADSAdSpace : UIViewController <ADSAdSpace_RPC>
{
    ADSSession *_session;	// 8 = 0x8
    _Bool _shouldNotCycle;	// 16 = 0x10
    _Bool _setupComplete;	// 17 = 0x11
    _Bool _hasSentVisibleWithoutContentError;	// 18 = 0x12
    _Bool _hasLoadedAdOrSentError;	// 19 = 0x13
    _Bool _hasNewsEntitlement;	// 20 = 0x14
    _Bool _closed;	// 21 = 0x15
    int _creativeType;	// 24 = 0x18
    id <ADAdSpace_RPC><NSObject> _clientAdSpace;	// 32 = 0x20
    double _creationTimestamp;	// 40 = 0x28
    double _lastVisibleTimestamp;	// 48 = 0x30
    ADSAdSpaceController *_adSpaceController;	// 56 = 0x38
    NSURL *_serverURL;	// 64 = 0x40
    NSString *_section;	// 72 = 0x48
    NSString *_authenticationUserName;	// 80 = 0x50
    NSSet *_context;	// 88 = 0x58
    long long _visibility;	// 96 = 0x60
    ADSCreativeContainerView *_creativeContainerView;	// 104 = 0x68
    long long _options;	// 112 = 0x70
    NSString *_identifier;	// 120 = 0x78
    NSTimer *_adDismissTimer;	// 128 = 0x80
    struct CGRect _frame;	// 136 = 0x88
}

+ (id)_exportedInterface;	// IMP=0x0000000100010628
@property(retain, nonatomic) NSTimer *adDismissTimer; // @synthesize adDismissTimer=_adDismissTimer;
@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, nonatomic) _Bool hasNewsEntitlement; // @synthesize hasNewsEntitlement=_hasNewsEntitlement;
@property(retain, nonatomic) ADSCreativeContainerView *creativeContainerView; // @synthesize creativeContainerView=_creativeContainerView;
@property(nonatomic) _Bool hasLoadedAdOrSentError; // @synthesize hasLoadedAdOrSentError=_hasLoadedAdOrSentError;
@property(nonatomic) _Bool hasSentVisibleWithoutContentError; // @synthesize hasSentVisibleWithoutContentError=_hasSentVisibleWithoutContentError;
@property(nonatomic) long long visibility; // @synthesize visibility=_visibility;
@property(copy, nonatomic) NSSet *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(copy, nonatomic) NSString *section; // @synthesize section=_section;
@property(copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) ADSAdSpaceController *adSpaceController; // @synthesize adSpaceController=_adSpaceController;
@property(nonatomic) double lastVisibleTimestamp; // @synthesize lastVisibleTimestamp=_lastVisibleTimestamp;
@property(readonly, nonatomic) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(nonatomic) _Bool setupComplete; // @synthesize setupComplete=_setupComplete;
@property(nonatomic) _Bool shouldNotCycle; // @synthesize shouldNotCycle=_shouldNotCycle;
@property(readonly, nonatomic) int creativeType; // @synthesize creativeType=_creativeType;
@property(retain, nonatomic) id <ADAdSpace_RPC><NSObject> clientAdSpace; // @synthesize clientAdSpace=_clientAdSpace;
@property(readonly, nonatomic) _Bool requiresFastVisibilityTestOnly;
@property(readonly, nonatomic) _Bool allowsTransitionWithoutAnimation;
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x0000000100013838
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x0000000100013830
- (void)requestPresentationForMRAIDOpenEvent;	// IMP=0x000000010001380c
- (void)_remote_reportPrivacyAdTransparencyDidLinkOut;	// IMP=0x0000000100013774
- (void)_remote_reportPrivacyAdTransparencyDidDisappear;	// IMP=0x00000001000136dc
- (void)_remote_reportPrivacyAdTransparencyDidRenderTransparency;	// IMP=0x0000000100013644
- (void)_remote_reportPrivacyAdTransparencyDidAppear;	// IMP=0x00000001000135ac
- (void)_remote_reportPrivacyAdMarkWasTapped;	// IMP=0x0000000100013514
- (void)_priv_loadAd:(id)arg1;	// IMP=0x0000000100013314
- (void)_priv_adSpaceDidDisappear;	// IMP=0x000000010001316c
- (void)_priv_adSpaceDidAppear;	// IMP=0x0000000100012fc4
- (void)_remote_playbackFailedForURL:(id)arg1;	// IMP=0x0000000100012e40
- (void)_remote_playbackFinishedForContentHash:(id)arg1;	// IMP=0x0000000100012cdc
- (void)_remote_playbackResumed;	// IMP=0x0000000100012c44
- (void)_remote_playbackPaused;	// IMP=0x0000000100012bac
- (void)_remote_playbackStartedForImpressionSource:(int)arg1;	// IMP=0x0000000100012b04
- (void)_remote_actionCompletedWithSystemEvent:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012a00
- (void)_remote_reportSystemEvent:(int)arg1;	// IMP=0x0000000100012958
- (void)_remote_setNativeAdFrame:(id)arg1;	// IMP=0x000000010001284c
- (void)_remote_userDidSkipPreroll;	// IMP=0x00000001000127b4
- (void)_remote_reportPreRollDidStop;	// IMP=0x000000010001271c
- (void)_remote_reportPreRollDidStart;	// IMP=0x0000000100012684
- (void)_remote_interstitialCreativeWasDismissed;	// IMP=0x00000001000125ec
- (void)_remote_interstitialRemovedFromSuperview;	// IMP=0x0000000100012554
- (void)_remote_reportNativeClickEvent;	// IMP=0x00000001000124bc
- (void)_remote_bannerCancelAction;	// IMP=0x0000000100012424
- (void)_remote_bannerRefuseAction;	// IMP=0x000000010001238c
- (void)_remote_bannerBeginActionFromFrame:(id)arg1 tapLocation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000121fc
- (void)_remote_determineActionForTapAtLocation:(id)arg1 inFrame:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001206c
- (void)_remote_setShouldNotCycle:(_Bool)arg1;	// IMP=0x0000000100011fe4
- (void)_remote_setIsModalInterstitial:(_Bool)arg1;	// IMP=0x0000000100011f24
- (void)_remote_setAdSpaceType:(int)arg1;	// IMP=0x0000000100011e70
- (void)_remote_setVisibility:(long long)arg1;	// IMP=0x0000000100011ce4
- (void)_dismissViewController;	// IMP=0x0000000100011c7c
- (void)_remote_dismissAdDelayed;	// IMP=0x0000000100011bb4
- (void)_remote_setContext:(id)arg1;	// IMP=0x0000000100011ae0
- (void)_remote_setAuthenticationUserName:(id)arg1;	// IMP=0x0000000100011a0c
- (void)_remote_setSection:(id)arg1;	// IMP=0x0000000100011938
- (void)_priv_cycleImpressionImmediately;	// IMP=0x0000000100011780
- (void)_priv_setServerURL:(id)arg1;	// IMP=0x00000001000116ac
- (void)_remote_setIdentifier:(id)arg1;	// IMP=0x00000001000115d8
- (void)_remote_close;	// IMP=0x0000000100011520
- (void)_remote_setupComplete;	// IMP=0x000000010001144c
@property(readonly, nonatomic) _Bool shouldDismissWithoutTransition;
@property(readonly, nonatomic) _Bool shouldCycleAfterAction;
@property(readonly, nonatomic) _Bool policyEngineManagesLoading;
@property(readonly, nonatomic) _Bool excludedFromControllerPool;
@property(nonatomic) __weak ADSSession *session;
- (id)description;	// IMP=0x0000000100010edc
- (void)close;	// IMP=0x0000000100010e44
- (void)_remote_configureForClientAdSpace:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000100010ac0
- (void)_remote_snapshotImageWithDebugHighlight:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000109bc
- (id)_snapshotImageWithDebugHighlight:(_Bool)arg1;	// IMP=0x0000000100010880
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100010814
- (void)dealloc;	// IMP=0x00000001000106e0

@end

