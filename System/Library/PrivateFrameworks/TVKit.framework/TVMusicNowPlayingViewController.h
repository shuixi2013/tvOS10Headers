/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <TVKit/TVCollectionViewDelegate.h>
#import <TVKit/TVMusicNowPlayingViewDelegate.h>
#import <TVKit/TVPlaybackProgressAnimatorDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol TVPlaybackViewControllerDelegate, TVSPlayback;
@class TVSImageProxy, _TVMusicBarsView, NSTimer, NSIndexPath, UITapGestureRecognizer, UIDigitizerTapGestureRecognizer, UIDigitizerLongPressGestureRecognizer, _TVB39TapGestureRecognizer, UILongPressGestureRecognizer, _TVB239FingerRestGestureRecognizer, _TVMusicNowPlayingCollectionViewCell, _UIBackdropViewSettings, NSArray, NSObject, TVSStateMachine, TVAudioTransportBarView, TVPlaybackProgressAnimator, TVDefiniteDurationPlaybackProgress, NSDate, TVRestrictionsPasscodeEntryViewController, NSString, UIScrollView, TVScrubbingConfiguration, TVSChapter, TVMusicNowPlayingView;

@interface TVMusicNowPlayingViewController : UIViewController <TVCollectionViewDelegate, TVMusicNowPlayingViewDelegate, TVPlaybackProgressAnimatorDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, UIScrollViewDelegate> {

	TVSImageProxy* _currentBackgroundImageProxy;
	TVSImageProxy* _currentArtworkImageProxy;
	_TVMusicBarsView* _musicBarsView;
	CGPoint _scrubStartTouchLocation;
	double _scrubStartPlayPosition;
	double _scrubberFocusTime;
	BOOL _ignorePlaylistChanges;
	NSTimer* _backgroundChangeTimer;
	BOOL _changeBackgroundAutomatically;
	NSIndexPath* _focusToIndexPath;
	UITapGestureRecognizer* _b239TapGestureRecognizer;
	UIDigitizerTapGestureRecognizer* _selectGestureRecognizer;
	UIDigitizerLongPressGestureRecognizer* _longClickGestureRecognizer;
	_TVB39TapGestureRecognizer* _leftTapGestureRecognizer;
	_TVB39TapGestureRecognizer* _rightTapGestureRecognizer;
	_TVB39TapGestureRecognizer* _upTapGestureRecognizer;
	_TVB39TapGestureRecognizer* _downTapGestureRecognizer;
	_TVB39TapGestureRecognizer* _B39SelectGestureRecognizer;
	UILongPressGestureRecognizer* _leftb39LongClickRecognizer;
	UILongPressGestureRecognizer* _rightb39LongClickRecognizer;
	UITapGestureRecognizer* _menuButtonRecognizer;
	UILongPressGestureRecognizer* _touchRecognizer;
	_TVB239FingerRestGestureRecognizer* _fingerRestedRecognizer;
	BOOL _ignoreNextPlaylistReload;
	BOOL _needsTransportBarWhenBecomesActive;
	BOOL _limitingRemoteInput;
	BOOL _playingItemWasFocused;
	long long _indexForCurrentControls;
	_TVMusicNowPlayingCollectionViewCell* _lastFocusedCell;
	BOOL _isTouchingB239;
	_UIBackdropViewSettings* _backgroundImageSettings;
	BOOL _isRadioPlayback;
	BOOL _popWhenPlayerStops;
	BOOL _singleCoverOnly;
	BOOL _transportBarVisible;
	BOOL _scrubbing;
	BOOL _willUpdateDisplayedMediaItem;
	BOOL _restrictionsEnforcementPassed;
	NSArray* _historyMediaItems;
	id<TVPlaybackViewControllerDelegate> _playbackDelegate;
	NSObject*<TVSPlayback> _player;
	NSTimer* _updateTimer;
	TVSStateMachine* _stateMachine;
	TVAudioTransportBarView* _transportBar;
	TVPlaybackProgressAnimator* _playbackProgressAnimator;
	TVDefiniteDurationPlaybackProgress* _definiteDurationPlaybackProgress;
	id _elapsedTimeToken;
	double _lastKnownElapsedTime;
	double _lastKnownEffectiveRate;
	NSDate* _lastObserverFireDate;
	double _transportBarDisplayTime;
	double _playlistExitTime;
	TVRestrictionsPasscodeEntryViewController* _restrictionsPasscodeViewController;
	NSString* _restrictionsPasscodePreviousState;
	long long _indexToPlayAfterPasscodePrompt;
	NSIndexPath* _initialIndexPath;
	double _initialScrubPercentage;
	UIScrollView* _scrubScrollView;
	double _scrubPercentage;
	TVScrubbingConfiguration* _scrubbingConfiguration;
	TVSChapter* _jumpDestinationChapter;

}

@property (nonatomic,retain) NSObject*<TVSPlayback> player;                                                               //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) NSTimer * updateTimer;                                                                       //@synthesize updateTimer=_updateTimer - In the implementation block
@property (nonatomic,retain) TVSStateMachine * stateMachine;                                                              //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) TVAudioTransportBarView * transportBar;                                                      //@synthesize transportBar=_transportBar - In the implementation block
@property (nonatomic,retain) TVPlaybackProgressAnimator * playbackProgressAnimator;                                       //@synthesize playbackProgressAnimator=_playbackProgressAnimator - In the implementation block
@property (nonatomic,retain) TVDefiniteDurationPlaybackProgress * definiteDurationPlaybackProgress;                       //@synthesize definiteDurationPlaybackProgress=_definiteDurationPlaybackProgress - In the implementation block
@property (nonatomic,retain) id elapsedTimeToken;                                                                         //@synthesize elapsedTimeToken=_elapsedTimeToken - In the implementation block
@property (assign,nonatomic) double lastKnownElapsedTime;                                                                 //@synthesize lastKnownElapsedTime=_lastKnownElapsedTime - In the implementation block
@property (assign,nonatomic) double lastKnownEffectiveRate;                                                               //@synthesize lastKnownEffectiveRate=_lastKnownEffectiveRate - In the implementation block
@property (nonatomic,copy) NSDate * lastObserverFireDate;                                                                 //@synthesize lastObserverFireDate=_lastObserverFireDate - In the implementation block
@property (assign,getter=isTransportBarVisible,nonatomic) BOOL transportBarVisible;                                       //@synthesize transportBarVisible=_transportBarVisible - In the implementation block
@property (assign,nonatomic) double transportBarDisplayTime;                                                              //@synthesize transportBarDisplayTime=_transportBarDisplayTime - In the implementation block
@property (assign,nonatomic) double playlistExitTime;                                                                     //@synthesize playlistExitTime=_playlistExitTime - In the implementation block
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing;                                                           //@synthesize scrubbing=_scrubbing - In the implementation block
@property (nonatomic,readonly) NSArray * mediaItems; 
@property (assign,nonatomic) BOOL willUpdateDisplayedMediaItem;                                                           //@synthesize willUpdateDisplayedMediaItem=_willUpdateDisplayedMediaItem - In the implementation block
@property (nonatomic,retain) TVRestrictionsPasscodeEntryViewController * restrictionsPasscodeViewController;              //@synthesize restrictionsPasscodeViewController=_restrictionsPasscodeViewController - In the implementation block
@property (assign,nonatomic) BOOL restrictionsEnforcementPassed;                                                          //@synthesize restrictionsEnforcementPassed=_restrictionsEnforcementPassed - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPathForLastFocusedItem; 
@property (nonatomic,retain) NSString * restrictionsPasscodePreviousState;                                                //@synthesize restrictionsPasscodePreviousState=_restrictionsPasscodePreviousState - In the implementation block
@property (assign,nonatomic) long long indexToPlayAfterPasscodePrompt;                                                    //@synthesize indexToPlayAfterPasscodePrompt=_indexToPlayAfterPasscodePrompt - In the implementation block
@property (nonatomic,retain) NSIndexPath * initialIndexPath;                                                              //@synthesize initialIndexPath=_initialIndexPath - In the implementation block
@property (assign,nonatomic) double initialScrubPercentage;                                                               //@synthesize initialScrubPercentage=_initialScrubPercentage - In the implementation block
@property (nonatomic,retain) UIScrollView * scrubScrollView;                                                              //@synthesize scrubScrollView=_scrubScrollView - In the implementation block
@property (assign,nonatomic) double scrubPercentage;                                                                      //@synthesize scrubPercentage=_scrubPercentage - In the implementation block
@property (nonatomic,retain) TVScrubbingConfiguration * scrubbingConfiguration;                                           //@synthesize scrubbingConfiguration=_scrubbingConfiguration - In the implementation block
@property (nonatomic,retain) TVSChapter * jumpDestinationChapter;                                                         //@synthesize jumpDestinationChapter=_jumpDestinationChapter - In the implementation block
@property (assign,nonatomic) BOOL isRadioPlayback;                                                                        //@synthesize isRadioPlayback=_isRadioPlayback - In the implementation block
@property (assign,nonatomic) BOOL popWhenPlayerStops;                                                                     //@synthesize popWhenPlayerStops=_popWhenPlayerStops - In the implementation block
@property (assign,nonatomic) BOOL singleCoverOnly;                                                                        //@synthesize singleCoverOnly=_singleCoverOnly - In the implementation block
@property (nonatomic,readonly) TVMusicNowPlayingView * nowPlayingView; 
@property (nonatomic,copy) NSArray * historyMediaItems;                                                                   //@synthesize historyMediaItems=_historyMediaItems - In the implementation block
@property (assign,nonatomic,__weak) id<TVPlaybackViewControllerDelegate> playbackDelegate;                                //@synthesize playbackDelegate=_playbackDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)_addGestureRecognizers;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)focusedViewWillChange;
-(void)focusedViewDidChange;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSTimer *)updateTimer;
-(void)setUpdateTimer:(NSTimer *)arg1 ;
-(void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)setPlayer:(NSObject*<TVSPlayback>)arg1 ;
-(NSObject*<TVSPlayback>)player;
-(id)initWithPlayer:(id)arg1 ;
-(BOOL)isScrubbing;
-(void)_playbackStateDidChange:(id)arg1 ;
-(TVSStateMachine *)stateMachine;
-(void)setStateMachine:(TVSStateMachine *)arg1 ;
-(void)_registerStateMachineHandlers;
-(BOOL)_isMediaItemExplicit:(id)arg1 ;
-(void)_handleMenuButton:(id)arg1 ;
-(NSIndexPath *)indexPathForLastFocusedItem;
-(void)playbackProgressAnimator:(id)arg1 updateTitlesForElapsedTime:(double)arg2 withPlaybackDuration:(double)arg3 ;
-(double)currentElapsedTimeForPlaybackProgressAnimator:(id)arg1 ;
-(void)_stateMachineStateChanged:(id)arg1 ;
-(void)_removeRestrictionsPasscodeViewController;
-(BOOL)_restrictionsEnabled;
-(TVRestrictionsPasscodeEntryViewController *)restrictionsPasscodeViewController;
-(void)setRestrictionsPasscodeViewController:(TVRestrictionsPasscodeEntryViewController *)arg1 ;
-(void)_handleSelectButton:(id)arg1 ;
-(void)_setNowPlayingInfo:(id)arg1 ;
-(void)nowPlayingViewDidSelectContextMenu:(id)arg1 ;
-(id)_playlistCollectionView;
-(id)BufferredTimeRangeBinding;
-(void)_updateBoundBufferredTimeRange;
-(void)_playbackMediaItemDidChange:(id)arg1 ;
-(void)_metadataDidChange:(id)arg1 ;
-(void)_musicLibraryDidChange:(id)arg1 ;
-(void)_willResignActive:(id)arg1 ;
-(void)_didBecomeActive:(id)arg1 ;
-(void)_backgroundContrastChanged:(id)arg1 ;
-(TVPlaybackProgressAnimator *)playbackProgressAnimator;
-(void)setLastObserverFireDate:(NSDate *)arg1 ;
-(void)setLastKnownElapsedTime:(double)arg1 ;
-(void)setLastKnownEffectiveRate:(double)arg1 ;
-(TVAudioTransportBarView *)transportBar;
-(void)_timerTick:(id)arg1 ;
-(void)reloadPlaylist;
-(void)_startPlaylistExitTimeout:(long long)arg1 ;
-(void)_postWillDisplayMediaItemNotification;
-(void)_updateNowPlayingView;
-(BOOL)_isStreamingRadioPlayback;
-(void)setScrubbingConfiguration:(TVScrubbingConfiguration *)arg1 ;
-(TVMusicNowPlayingView *)nowPlayingView;
-(void)_addTransportBar;
-(BOOL)isTransportBarVisible;
-(void)_syncPlaybackProgressAnimatorToTransportBarVisibleState:(BOOL)arg1 ;
-(BOOL)isRadioPlayback;
-(void)_showRadioStationName:(BOOL)arg1 ;
-(double)playlistExitTime;
-(double)transportBarDisplayTime;
-(void)setTransportBarVisible:(BOOL)arg1 ;
-(void)setPlaylistExitTime:(double)arg1 ;
-(id)_indexPathForPlayingItem;
-(void)_scrollCollectionView:(id)arg1 toIndexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)_setBackdropWithTimer:(id)arg1 ;
-(NSArray *)mediaItems;
-(void)_setBackdropForMediaItem:(id)arg1 ;
-(id)_imageProxyForMediaItem:(id)arg1 ;
-(TVDefiniteDurationPlaybackProgress *)definiteDurationPlaybackProgress;
-(NSArray *)historyMediaItems;
-(void)_handleLeftTap:(id)arg1 ;
-(void)_handleLeftLongClick:(id)arg1 ;
-(void)_handleRightTap:(id)arg1 ;
-(void)_handleRightLongClick:(id)arg1 ;
-(void)_handleUpTap:(id)arg1 ;
-(void)_handleDownTap:(id)arg1 ;
-(void)_handleB39Select:(id)arg1 ;
-(void)_handleTogglePlayPause;
-(void)_handleLongClick:(id)arg1 ;
-(void)_fingerRestRecognized:(id)arg1 ;
-(double)scrubPercentage;
-(double)_elapsedTimeForScrubPercentage:(double)arg1 ;
-(NSDate *)lastObserverFireDate;
-(UIScrollView *)scrubScrollView;
-(double)_scrubPercentageForElapsedTime:(double)arg1 ;
-(CGPoint)_contentOffsetForScrubPercentage:(double)arg1 withScrollView:(id)arg2 ;
-(double)_scrubPercentageForContentOffset:(CGPoint)arg1 withScrollView:(id)arg2 ;
-(double)_scrubPercentageBySnappingToNeareastChapterForScrubPercentage:(double)arg1 withScrollView:(id)arg2 horizontalVelocity:(double)arg3 ;
-(void)setScrubPercentage:(double)arg1 ;
-(void)_scrubScrollViewDidScroll;
-(void)_updateScrubPercentageWithScrollView:(id)arg1 ;
-(void)_scrubScrollViewWillBeginDragging;
-(void)_scrubScrollViewDidEndDraggingAndWillDecelerate:(BOOL)arg1 ;
-(void)_scrubScrollViewDidEndDecelerating;
-(void)setJumpDestinationChapter:(TVSChapter *)arg1 ;
-(TVSChapter *)jumpDestinationChapter;
-(TVScrubbingConfiguration *)scrubbingConfiguration;
-(id<TVPlaybackViewControllerDelegate>)playbackDelegate;
-(void)_performPlayNextCommandForItemAtIndex:(long long)arg1 ;
-(void)_showContextMenu;
-(BOOL)_isScrubbingAllowed;
-(void)_willStartUserInitiatedPlayback;
-(BOOL)willUpdateDisplayedMediaItem;
-(BOOL)popWhenPlayerStops;
-(void)setTransportBarDisplayTime:(double)arg1 ;
-(BOOL)_shouldShowTransportBar;
-(void)_updateControlsForMediaItemAtIndexPath:(id)arg1 ;
-(void)setWillUpdateDisplayedMediaItem:(BOOL)arg1 ;
-(void)_updateControlsForMediaItem:(id)arg1 ;
-(id)_nowPlayingInfoFromMediaItem:(id)arg1 ;
-(void)_setBackdropForItemAtIndexPath:(id)arg1 afterDelay:(double)arg2 ;
-(CGPoint)_contentOffsetForIndexPath:(id)arg1 ;
-(void)_focusCurrentPlayingItem;
-(void)_postDidDisplayMediaItemNotification;
-(BOOL)_shouldRestrictExplicitTracks;
-(BOOL)_isAudioOnDemand;
-(void)_showDataForFocusedItem:(id)arg1 ;
-(void)_scrubScrollViewWillEndDraggingWithVelocity:(CGPoint)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(void)setRestrictionsEnforcementPassed:(BOOL)arg1 ;
-(BOOL)_shouldShowRestrictionsPromptForMediaItem:(id)arg1 ;
-(void)setRestrictionsPasscodePreviousState:(NSString *)arg1 ;
-(void)setIndexToPlayAfterPasscodePrompt:(long long)arg1 ;
-(void)_playMediaItemAtIndex:(long long)arg1 ;
-(NSString *)restrictionsPasscodePreviousState;
-(void)_updateOffsetWithElapsedTime:(double)arg1 ;
-(void)setInitialScrubPercentage:(double)arg1 ;
-(BOOL)singleCoverOnly;
-(BOOL)_playRadioHistoryItemAtIndexPath:(id)arg1 ;
-(void)_saveJumpDestinationChapterWithElapsedTime:(double)arg1 ;
-(long long)indexToPlayAfterPasscodePrompt;
-(void)tvs_bindBufferredTimeRangeBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)setIsRadioPlayback:(BOOL)arg1 ;
-(BOOL)_isScrubberActive;
-(id)_loadStringValueForMetadataItem:(id)arg1 ;
-(void)setHistoryMediaItems:(NSArray *)arg1 ;
-(void)setPopWhenPlayerStops:(BOOL)arg1 ;
-(void)setSingleCoverOnly:(BOOL)arg1 ;
-(void)setPlaybackDelegate:(id<TVPlaybackViewControllerDelegate>)arg1 ;
-(void)setTransportBar:(TVAudioTransportBarView *)arg1 ;
-(void)setPlaybackProgressAnimator:(TVPlaybackProgressAnimator *)arg1 ;
-(void)setDefiniteDurationPlaybackProgress:(TVDefiniteDurationPlaybackProgress *)arg1 ;
-(id)elapsedTimeToken;
-(void)setElapsedTimeToken:(id)arg1 ;
-(double)lastKnownElapsedTime;
-(double)lastKnownEffectiveRate;
-(BOOL)restrictionsEnforcementPassed;
-(double)initialScrubPercentage;
-(void)setScrubScrollView:(UIScrollView *)arg1 ;
-(void)setScrubbing:(BOOL)arg1 ;
-(void)setInitialIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)initialIndexPath;
@end

