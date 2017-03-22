/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <libobjc.A.dylib/ADAdRecipient.h>

@protocol ADInterstitialAdDelegate;
@class UIViewController, ADTVInterstitialMediaViewController, ADInterstitialView, ADAdSpace, NSString, UIView;

@interface ADInterstitialAd : NSObject <ADAdRecipient> {

	id<ADInterstitialAdDelegate> _delegate;
	id<ADInterstitialAdDelegate> _internalDelegate;
	UIViewController* _internalPresentingViewController;
	BOOL _loaded;
	BOOL _actionInProgress;
	BOOL _dimmingEnabled;
	BOOL _canLoadMoreThanOnce;
	BOOL _hasLoadedFirstAd;
	int _creativeType;
	int _state;
	long long _options;
	ADTVInterstitialMediaViewController* _presentationViewController;
	/*^block*/id _stateChangedBlock;
	ADInterstitialView* _interstitialView;
	ADAdSpace* _adSpace;

}

@property (assign,nonatomic) BOOL dimmingEnabled;                                                           //@synthesize dimmingEnabled=_dimmingEnabled - In the implementation block
@property (assign,nonatomic) int creativeType;                                                              //@synthesize creativeType=_creativeType - In the implementation block
@property (nonatomic,retain) ADTVInterstitialMediaViewController * presentationViewController;              //@synthesize presentationViewController=_presentationViewController - In the implementation block
@property (assign,nonatomic) int state;                                                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id stateChangedBlock;                                                            //@synthesize stateChangedBlock=_stateChangedBlock - In the implementation block
@property (assign,nonatomic,__weak) id<ADInterstitialAdDelegate> internalDelegate; 
@property (nonatomic,retain) ADInterstitialView * interstitialView;                                         //@synthesize interstitialView=_interstitialView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * internalPresentingViewController; 
@property (nonatomic,retain) ADAdSpace * adSpace;                                                           //@synthesize adSpace=_adSpace - In the implementation block
@property (assign,getter=isLoaded,nonatomic) BOOL loaded;                                                   //@synthesize loaded=_loaded - In the implementation block
@property (assign,nonatomic) BOOL canLoadMoreThanOnce;                                                      //@synthesize canLoadMoreThanOnce=_canLoadMoreThanOnce - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedFirstAd;                                                         //@synthesize hasLoadedFirstAd=_hasLoadedFirstAd - In the implementation block
@property (assign,getter=isActionInProgress,nonatomic) BOOL actionInProgress;                               //@synthesize actionInProgress=_actionInProgress - In the implementation block
@property (assign,nonatomic,__weak) id<ADInterstitialAdDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int internalAdType; 
@property (nonatomic,readonly) long long options;                                                           //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) UIView * adSpaceView; 
@property (nonatomic,readonly) UIViewController * presentingViewController; 
-(id)serverURL;
-(void)setDelegate:(id<ADInterstitialAdDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ADInterstitialAdDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)identifier;
-(UIViewController *)presentingViewController;
-(id)context;
-(long long)options;
-(void)cancelAction;
-(void)setContext:(id)arg1 ;
-(BOOL)isLoaded;
-(void)setSection:(id)arg1 ;
-(void)setInternalDelegate:(id<ADInterstitialAdDelegate>)arg1 ;
-(id<ADInterstitialAdDelegate>)internalDelegate;
-(ADTVInterstitialMediaViewController *)presentationViewController;
-(ADAdSpace *)adSpace;
-(int)internalAdType;
-(void)privacyButtonWasTapped;
-(void)bannerTappedAtPoint:(CGPoint)arg1 ;
-(void)setServerURL:(id)arg1 ;
-(void)setAuthenticationUserName:(id)arg1 ;
-(id)stateChangedBlock;
-(void)changeBannerViewState:(int)arg1 ;
-(void)serverBannerViewWillLoad;
-(void)serverBannerViewDidLoad;
-(void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1 ;
-(void)serverStoryboardDidTransitionOut;
-(void)storyboardViewControllerDidPresent;
-(void)pauseBannerMedia;
-(void)resumeBannerMedia;
-(BOOL)shouldTestVisibilityAtPoint:(CGPoint)arg1 ;
-(UIView *)adSpaceView;
-(void)setAdSpace:(ADAdSpace *)arg1 ;
-(void)setStateChangedBlock:(id)arg1 ;
-(id)initWithCreativeType:(int)arg1 options:(long long)arg2 ;
-(void)setDimmingEnabled:(BOOL)arg1 ;
-(ADInterstitialView *)interstitialView;
-(UIViewController *)internalPresentingViewController;
-(int)creativeType;
-(void)_presentFromViewController:(id)arg1 ;
-(void)setInternalPresentingViewController:(UIViewController *)arg1 ;
-(BOOL)hasLoadedFirstAd;
-(BOOL)canLoadMoreThanOnce;
-(void)setLoaded:(BOOL)arg1 ;
-(void)setHasLoadedFirstAd:(BOOL)arg1 ;
-(void)_notifyDelegateOfBannerLoad;
-(BOOL)_considerClosingAdSpace;
-(void)_handleServerBannerViewDidLoadForTV;
-(void)setActionInProgress:(BOOL)arg1 ;
-(BOOL)presentInView:(id)arg1 ;
-(void)presentFromViewController:(id)arg1 ;
-(int)clickAction;
-(void)_dismissModalInterstitial;
-(BOOL)isActionInProgress;
-(BOOL)dimmingEnabled;
-(void)setCreativeType:(int)arg1 ;
-(void)setInterstitialView:(ADInterstitialView *)arg1 ;
-(void)setCanLoadMoreThanOnce:(BOOL)arg1 ;
-(void)setPresentationViewController:(ADTVInterstitialMediaViewController *)arg1 ;
@end

