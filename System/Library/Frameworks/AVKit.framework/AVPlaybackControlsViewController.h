/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class AVPlayerController, AVDelegateManager, AVKeyValueObserverCollection;

@interface AVPlaybackControlsViewController : UIViewController {

	BOOL _playing;
	BOOL _scrubberEnabled;
	BOOL _playPauseButtonEnabled;
	BOOL _showsStreamingControls;
	BOOL _showsLoadingIndicator;
	float _playbackRate;
	AVPlayerController* _playerController;
	AVDelegateManager* _delegateManager;
	double _scrubberWidth;
	AVKeyValueObserverCollection* _keyValueObservers;

}

@property (readonly) AVKeyValueObserverCollection * keyValueObservers;                                 //@synthesize keyValueObservers=_keyValueObservers - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                                    //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,retain) AVDelegateManager * delegateManager;                                      //@synthesize delegateManager=_delegateManager - In the implementation block
@property (nonatomic,readonly) double scrubberWidth;                                                   //@synthesize scrubberWidth=_scrubberWidth - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                            //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) float playbackRate;                                                       //@synthesize playbackRate=_playbackRate - In the implementation block
@property (assign,getter=isScrubberEnabled,nonatomic) BOOL scrubberEnabled;                            //@synthesize scrubberEnabled=_scrubberEnabled - In the implementation block
@property (assign,getter=isPlayPauseButtonEnabled,nonatomic) BOOL playPauseButtonEnabled;              //@synthesize playPauseButtonEnabled=_playPauseButtonEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsStreamingControls;                                              //@synthesize showsStreamingControls=_showsStreamingControls - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingIndicator;                                               //@synthesize showsLoadingIndicator=_showsLoadingIndicator - In the implementation block
@property (getter=areControlsVisible,nonatomic,readonly) BOOL controlsVisible; 
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(BOOL)isPlaying;
-(void)_beginObservations;
-(void)_endObservations;
-(BOOL)areControlsVisible;
-(void)setControlsVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)upToNextNavigationMode;
-(void)downToNextNavigationMode;
-(void)skipToNextFrame;
-(void)skipToPreviousFrame;
-(void)_didChangePlayerControllerFrom:(id)arg1 to:(id)arg2 ;
-(void)didChangePlayerController;
-(BOOL)forwardMethodToPlayerViewController:(SEL)arg1 sender:(id)arg2 ;
-(AVDelegateManager *)delegateManager;
-(void)setDelegateManager:(AVDelegateManager *)arg1 ;
-(BOOL)isScrubberEnabled;
-(void)setScrubberEnabled:(BOOL)arg1 ;
-(BOOL)isPlayPauseButtonEnabled;
-(void)setPlayPauseButtonEnabled:(BOOL)arg1 ;
-(BOOL)showsStreamingControls;
-(void)setShowsStreamingControls:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(AVKeyValueObserverCollection *)keyValueObservers;
-(double)scrubberWidth;
-(void)setPlaying:(BOOL)arg1 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
@end

