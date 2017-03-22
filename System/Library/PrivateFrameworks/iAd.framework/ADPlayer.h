/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADBannerViewInternalDelegate.h>

@protocol ADPlayerDelegate;
@class ADBannerView, AVPlayerItem, AVPlayer, NSString;

@interface ADPlayer : NSObject <ADBannerViewInternalDelegate> {

	id<ADPlayerDelegate> _delegate;
	BOOL _playbackHasBegun;
	ADBannerView* _videoAd;
	AVPlayerItem* _avPlayerItem;
	AVPlayer* _avPlayer;
	unsigned long long _playbackState;
	id _timeObserver;

}

@property (assign,nonatomic) BOOL playbackHasBegun;                             //@synthesize playbackHasBegun=_playbackHasBegun - In the implementation block
@property (nonatomic,retain) AVPlayerItem * avPlayerItem;                       //@synthesize avPlayerItem=_avPlayerItem - In the implementation block
@property (nonatomic,retain) AVPlayer * avPlayer;                               //@synthesize avPlayer=_avPlayer - In the implementation block
@property (assign,nonatomic) unsigned long long playbackState;                  //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,retain) ADBannerView * videoAd;                            //@synthesize videoAd=_videoAd - In the implementation block
@property (nonatomic,retain) id timeObserver;                                   //@synthesize timeObserver=_timeObserver - In the implementation block
@property (assign,nonatomic,__weak) id<ADPlayerDelegate> delegate; 
@property (nonatomic,readonly) float playbackRate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<ADPlayerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ADPlayerDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)pause;
-(void)performAction;
-(unsigned long long)playbackState;
-(void)play;
-(AVPlayer *)avPlayer;
-(float)playbackRate;
-(void)setPlaybackState:(unsigned long long)arg1 ;
-(void)shutdown;
-(AVPlayerItem *)avPlayerItem;
-(void)bannerViewActionDidFinish:(id)arg1 ;
-(BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2 ;
-(void)showAdTransparency;
-(id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1 ;
-(void)bannerViewWillLoadAd:(id)arg1 ;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)bannerViewShouldPauseMedia:(id)arg1 ;
-(void)bannerViewShouldResumeMedia:(id)arg1 ;
-(ADBannerView *)videoAd;
-(BOOL)prepareForPlayback;
-(BOOL)prepareForPlayackOfInterstitialWithURL:(id)arg1 ;
-(void)setVideoAd:(ADBannerView *)arg1 ;
-(id)_networkOptimalVideoURLForAd:(id)arg1 ;
-(BOOL)_beginLoadingVideoFromURL:(id)arg1 ;
-(BOOL)playbackHasBegun;
-(void)playerItemDidPlayToEnd:(id)arg1 ;
-(void)playerItemDidFailedToPlayToEnd:(id)arg1 ;
-(void)playerItemEncounteredPlaybackStall:(id)arg1 ;
-(void)setAvPlayerItem:(AVPlayerItem *)arg1 ;
-(void)setPlaybackHasBegun:(BOOL)arg1 ;
-(void)playerDidStart;
-(void)playerDidPause;
-(void)setAvPlayer:(AVPlayer *)arg1 ;
-(id)timeObserver;
-(void)setTimeObserver:(id)arg1 ;
@end
