/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/ADAdSpace_RPC.h>
#import <libobjc.A.dylib/ADAdSpaceRemoteViewControllerDelegate.h>
#import <libobjc.A.dylib/ADPrivacyViewControllerInternalDelegate.h>
#import <libobjc.A.dylib/ADWebViewActionViewControllerDelegate.h>

@protocol ADAdRecipient;
@class NSString, NSURL, NSSet, ADAdImpressionPublicAttributes, ADAdActionPublicAttributes, ADAdSpaceRemoteViewController, _UIAsyncInvocation, _ADRemoteViewController, ADWebViewActionViewController, NSDictionary, UIImageView, ADPrivacyViewController, ADAdSpaceConfiguration;

@interface ADAdSpace : NSObject <UIViewControllerTransitioningDelegate, ADAdSpace_RPC, ADAdSpaceRemoteViewControllerDelegate, ADPrivacyViewControllerInternalDelegate, ADWebViewActionViewControllerDelegate> {

	id<ADAdRecipient> _recipient;
	BOOL _isModalInterstitial;
	BOOL _visibilityCheckScheduled;
	BOOL _serviceAdSpaceRequestInProgress;
	BOOL _shouldPresentActionViewControllerWhenReady;
	BOOL _actionViewControllerReadyForPresentation;
	BOOL _actionViewControllerWantsDismissal;
	BOOL _requiresFastVisibiltyTestOnly;
	BOOL _fastVisibilityContextIsFeed;
	BOOL _gettingSnapshot;
	NSString* _identifier;
	NSURL* _serverURL;
	NSString* _advertisingSection;
	NSString* _authenticationUserName;
	NSSet* _context;
	ADAdImpressionPublicAttributes* _currentAdImpressionPublicAttributes;
	ADAdActionPublicAttributes* _currentActionPublicAttributes;
	long long _visibility;
	double _lastSlowCheck;
	ADAdSpaceRemoteViewController* _creativeViewController;
	_UIAsyncInvocation* _remoteViewControllerRequestCancelationInvocation;
	_ADRemoteViewController* _remoteViewController;
	_ADRemoteViewController* _portraitOnlyViewController;
	ADWebViewActionViewController* _webViewActionViewController;
	NSDictionary* _adToLoad;
	UIImageView* _imageView;
	long long _lastSnapshottingOrientation;
	ADPrivacyViewController* _privacyViewController;
	CGRect _placeholderImageRect;
	CGRect _nativeAdFrame;

}

@property (nonatomic,readonly) ADAdSpaceConfiguration * configuration; 
@property (assign,nonatomic) long long visibility;                                                               //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) BOOL visibilityCheckScheduled;                                                      //@synthesize visibilityCheckScheduled=_visibilityCheckScheduled - In the implementation block
@property (assign,nonatomic) double lastSlowCheck;                                                               //@synthesize lastSlowCheck=_lastSlowCheck - In the implementation block
@property (nonatomic,retain) ADAdSpaceRemoteViewController * creativeViewController;                             //@synthesize creativeViewController=_creativeViewController - In the implementation block
@property (assign,nonatomic) BOOL serviceAdSpaceRequestInProgress;                                               //@synthesize serviceAdSpaceRequestInProgress=_serviceAdSpaceRequestInProgress - In the implementation block
@property (nonatomic,retain) ADAdImpressionPublicAttributes * currentAdImpressionPublicAttributes;               //@synthesize currentAdImpressionPublicAttributes=_currentAdImpressionPublicAttributes - In the implementation block
@property (nonatomic,retain) ADAdActionPublicAttributes * currentActionPublicAttributes;                         //@synthesize currentActionPublicAttributes=_currentActionPublicAttributes - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * remoteViewControllerRequestCancelationInvocation;              //@synthesize remoteViewControllerRequestCancelationInvocation=_remoteViewControllerRequestCancelationInvocation - In the implementation block
@property (nonatomic,retain) _ADRemoteViewController * remoteViewController;                                     //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) _ADRemoteViewController * portraitOnlyViewController;                               //@synthesize portraitOnlyViewController=_portraitOnlyViewController - In the implementation block
@property (nonatomic,retain) ADWebViewActionViewController * webViewActionViewController;                        //@synthesize webViewActionViewController=_webViewActionViewController - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentActionViewControllerWhenReady;                                    //@synthesize shouldPresentActionViewControllerWhenReady=_shouldPresentActionViewControllerWhenReady - In the implementation block
@property (assign,nonatomic) BOOL actionViewControllerReadyForPresentation;                                      //@synthesize actionViewControllerReadyForPresentation=_actionViewControllerReadyForPresentation - In the implementation block
@property (assign,nonatomic) BOOL actionViewControllerWantsDismissal;                                            //@synthesize actionViewControllerWantsDismissal=_actionViewControllerWantsDismissal - In the implementation block
@property (nonatomic,readonly) NSString * connectionAssertionIdentifier; 
@property (nonatomic,retain) NSDictionary * adToLoad;                                                            //@synthesize adToLoad=_adToLoad - In the implementation block
@property (assign,nonatomic) BOOL requiresFastVisibiltyTestOnly;                                                 //@synthesize requiresFastVisibiltyTestOnly=_requiresFastVisibiltyTestOnly - In the implementation block
@property (assign,nonatomic) BOOL fastVisibilityContextIsFeed;                                                   //@synthesize fastVisibilityContextIsFeed=_fastVisibilityContextIsFeed - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                            //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL gettingSnapshot;                                                               //@synthesize gettingSnapshot=_gettingSnapshot - In the implementation block
@property (assign,nonatomic) long long lastSnapshottingOrientation;                                              //@synthesize lastSnapshottingOrientation=_lastSnapshottingOrientation - In the implementation block
@property (nonatomic,retain) ADPrivacyViewController * privacyViewController;                                    //@synthesize privacyViewController=_privacyViewController - In the implementation block
@property (nonatomic,readonly) id<ADAdRecipient> recipient; 
@property (nonatomic,readonly) id<ADSAdSpace_RPC><NSObject> serviceAdSpace; 
@property (nonatomic,copy) NSString * identifier;                                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * serverURL;                                                                    //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,copy) NSString * advertisingSection;                                                        //@synthesize advertisingSection=_advertisingSection - In the implementation block
@property (nonatomic,copy) NSString * authenticationUserName;                                                    //@synthesize authenticationUserName=_authenticationUserName - In the implementation block
@property (nonatomic,copy) NSSet * context;                                                                      //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) CGRect placeholderImageRect;                                                        //@synthesize placeholderImageRect=_placeholderImageRect - In the implementation block
@property (assign,nonatomic) BOOL isModalInterstitial;                                                           //@synthesize isModalInterstitial=_isModalInterstitial - In the implementation block
@property (assign,nonatomic) CGRect nativeAdFrame;                                                               //@synthesize nativeAdFrame=_nativeAdFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_modalTansitionStyleForTransitionType:(int)arg1 ;
-(NSURL *)serverURL;
-(void)dealloc;
-(NSString *)description;
-(NSString *)identifier;
-(NSSet *)context;
-(void)setIdentifier:(NSString *)arg1 ;
-(_ADRemoteViewController *)remoteViewController;
-(UIImageView *)imageView;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)close;
-(ADAdSpaceConfiguration *)configuration;
-(void)setContext:(NSSet *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setRemoteViewController:(_ADRemoteViewController *)arg1 ;
-(long long)visibility;
-(void)setVisibility:(long long)arg1 ;
-(id<ADAdRecipient>)recipient;
-(id)initForRecipient:(id)arg1 ;
-(id<ADSAdSpace_RPC><NSObject>)serviceAdSpace;
-(ADAdImpressionPublicAttributes *)currentAdImpressionPublicAttributes;
-(void)updateCreativeSnapshotImageWithDebugHighlight:(BOOL)arg1 frame:(CGRect)arg2 ;
-(void)setNativeAdFrame:(CGRect)arg1 ;
-(void)updateVisibility;
-(ADAdActionPublicAttributes *)currentActionPublicAttributes;
-(void)executeBannerViewActionFrom:(CGRect)arg1 withTapLocation:(CGPoint)arg2 ;
-(void)refuseBannerViewAction;
-(void)determineActionForTapAtLocation:(CGPoint)arg1 inFrame:(CGRect)arg2 completeHandler:(/*^block*/id)arg3 ;
-(void)reportNativeClickEvent;
-(void)showAdTransparency;
-(void)setAdvertisingSection:(NSString *)arg1 ;
-(void)cancelBannerViewAction;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)setAuthenticationUserName:(NSString *)arg1 ;
-(void)loadAd:(id)arg1 ;
-(NSString *)advertisingSection;
-(NSString *)authenticationUserName;
-(void)setIsModalInterstitial:(BOOL)arg1 ;
-(void)interstitialWasRemovedFromSuperview;
-(NSString *)connectionAssertionIdentifier;
-(void)_requestServiceAdSpace;
-(void)_clientApplicationDidBecomeActive;
-(void)_clientApplicationDidEnterBackground;
-(void)setRequiresFastVisibiltyTestOnly:(BOOL)arg1 ;
-(void)setGettingSnapshot:(BOOL)arg1 ;
-(void)setLastSnapshottingOrientation:(long long)arg1 ;
-(ADAdSpaceRemoteViewController *)creativeViewController;
-(BOOL)serviceAdSpaceRequestInProgress;
-(void)setServiceAdSpaceRequestInProgress:(BOOL)arg1 ;
-(void)setCreativeViewController:(ADAdSpaceRemoteViewController *)arg1 ;
-(void)_remote_close;
-(void)_closeConnectionIfNecessary;
-(ADWebViewActionViewController *)webViewActionViewController;
-(void)_updateAllProperties;
-(NSDictionary *)adToLoad;
-(void)setAdToLoad:(NSDictionary *)arg1 ;
-(void)installCreativeView;
-(_UIAsyncInvocation *)remoteViewControllerRequestCancelationInvocation;
-(void)_remote_dismissViewController;
-(void)setCurrentAdImpressionPublicAttributes:(ADAdImpressionPublicAttributes *)arg1 ;
-(BOOL)requiresFastVisibiltyTestOnly;
-(BOOL)visibilityCheckScheduled;
-(void)setVisibilityCheckScheduled:(BOOL)arg1 ;
-(double)lastSlowCheck;
-(void)setLastSlowCheck:(double)arg1 ;
-(BOOL)_contextForFeldsparClientIsFeed:(id)arg1 ;
-(void)setFastVisibilityContextIsFeed:(BOOL)arg1 ;
-(void)setCurrentActionPublicAttributes:(ADAdActionPublicAttributes *)arg1 ;
-(void)setShouldPresentActionViewControllerWhenReady:(BOOL)arg1 ;
-(void)_considerPresentingWebViewActionViewController;
-(void)_considerPresentingActionViewController;
-(ADPrivacyViewController *)privacyViewController;
-(void)setPrivacyViewController:(ADPrivacyViewController *)arg1 ;
-(void)_presentPrivacyViewController;
-(void)_remote_resumeBannerMedia;
-(void)installImageView;
-(BOOL)shouldPresentActionViewControllerWhenReady;
-(BOOL)actionViewControllerReadyForPresentation;
-(BOOL)remoteViewControllerShouldAnimate:(id)arg1 ;
-(void)setActionViewControllerWantsDismissal:(BOOL)arg1 ;
-(BOOL)actionViewControllerWantsDismissal;
-(void)setActionViewControllerReadyForPresentation:(BOOL)arg1 ;
-(void)setRemoteViewControllerRequestCancelationInvocation:(_UIAsyncInvocation *)arg1 ;
-(void)_remote_dismissViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(_ADRemoteViewController *)portraitOnlyViewController;
-(void)_remote_dismissPortraitOnlyViewController;
-(void)setPortraitOnlyViewController:(_ADRemoteViewController *)arg1 ;
-(void)_remote_changeBannerViewState:(int)arg1 ;
-(void)_remote_creativeWillLoad;
-(void)_remote_adImpressionDidLoadWithPublicAttributes:(id)arg1 ;
-(void)_remote_creativeDidFailWithError:(id)arg1 ;
-(void)_remote_openURL:(id)arg1 ;
-(void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2 ;
-(void)_remote_updateViewControllerSupportedOrientations:(unsigned long long)arg1 ;
-(void)_remote_actionViewControllerReadyForPresentation;
-(void)_remote_requestPortraitOnlyViewController;
-(void)_remote_pauseBannerMedia;
-(void)_remote_setRequiresFastVisibilityTestOnly:(BOOL)arg1 ;
-(void)_remote_requestPresentationForMRAIDOpenEvent;
-(void)adSpaceRemoteViewControllerDidTerminateWithError:(id)arg1 ;
-(void)adPrivacyViewControllerDidAppear:(id)arg1 ;
-(void)adPrivacyViewControllerDidRenderTransparency:(id)arg1 ;
-(void)adPrivacyViewControllerDidLinkOut:(id)arg1 ;
-(void)adPrivacyViewControllerDidLoad:(id)arg1 ;
-(void)adPrivacyViewControllerDidDismiss:(id)arg1 ;
-(void)adPrivacyViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)showPlaceholderImage:(BOOL)arg1 ;
-(void)setAdSpaceType:(int)arg1 ;
-(CGRect)placeholderImageRect;
-(void)setPlaceholderImageRect:(CGRect)arg1 ;
-(BOOL)isModalInterstitial;
-(CGRect)nativeAdFrame;
-(void)setWebViewActionViewController:(ADWebViewActionViewController *)arg1 ;
-(BOOL)fastVisibilityContextIsFeed;
-(BOOL)gettingSnapshot;
-(long long)lastSnapshottingOrientation;
@end

