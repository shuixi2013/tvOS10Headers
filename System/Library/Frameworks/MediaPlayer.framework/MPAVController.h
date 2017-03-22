/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/AVAudioSessionDelegateMediaPlayerOnly.h>
#import <libobjc.A.dylib/MPAVPlaylistManagerDelegate.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/MPAVErrorResolverDelegate.h>

@protocol OS_dispatch_source;
@class NSDate, MPAVPlaylistManager, MPAVRoutingController, MPAVRoute, MPAVErrorResolver, AVPlayerLayer, MPVideoView, MPAVItem, NSArray, NSMutableArray, NSMapTable, NSNotification, NSObject, MPAVControllerToAggregateDCommunicator, NSString, NSMutableSet, AVAudioSessionMediaPlayerOnly, MPQueueFeeder, MPQueuePlayer, MPMediaItem, MPMediaQuery;

@interface MPAVController : NSObject <AVAudioSessionDelegateMediaPlayerOnly, MPAVPlaylistManagerDelegate, MPAVRoutingControllerDelegate, MPAVErrorResolverDelegate> {

	BOOL _currentItemDidLoad;
	BOOL _currentItemStartedAsCloudItem;
	BOOL _didResolveError;
	BOOL _disallowsAMRAudio;
	BOOL _disableAirPlayMirroringDuringPlayback;
	NSDate* _itemDidChangeDate;
	BOOL _shouldPreventStateChangesForRateChange;
	unsigned long long _stallBackgroundTaskIdentifier;
	BOOL _usesAudioOnlyModeForExternalPlayback;
	MPAVPlaylistManager* _playlistManager;
	long long _playbackMode;
	BOOL _valid;
	MPAVRoutingController* _routingController;
	MPAVRoute* _pickedRoute;
	MPAVErrorResolver* _itemErrorResolver;
	AVPlayerLayer* _videoLayer;
	unsigned long long _videoLayerUsageCount;
	MPVideoView* _videoView;
	unsigned long long _tickTimerEnabled;
	CFRunLoopTimerRef _tickTimer;
	double _tickInterval;
	CFRunLoopTimerRef _currentItemBookkeepingTimer;
	long long _indexChangeDirection;
	unsigned long long _itemIndexAtDeath;
	long long _lastDisconnectReason;
	double _lastKnownTimeBeforeDeath;
	double _lastPlaybackIndexChangeTime;
	double _lastSetTime;
	double _lastSetTimeChangeTime;
	unsigned _hasDelayedCurrentTimeToSet : 1;
	unsigned _forceDelayedCurrentTimeToSet : 1;
	double _delayedCurrentTimeToSet;
	long long _delayedCurrentTimeOptions;
	unsigned long long _lastSetTimeMarker;
	double _temporaryChapterTime;
	unsigned _autoPlayWhenLikelyToKeepUp : 1;
	unsigned _autoplayDisabledForCurrentItem : 1;
	double _nextFadeOutDuration;
	BOOL _hasPendingRate;
	BOOL _hasSentTracePlaybackStartDidFinish;
	MPAVItem* _pendingRateItem;
	float _pendingRate;
	BOOL _pendingChangeForScanning;
	id _boundaryTimeObserver;
	NSArray* _boundaryTimes;
	unsigned long long _boundaryTimeIndexLastPosted;
	NSMutableArray* _observerInfos;
	NSMapTable* _observerInfoToCoreMediaObserver;
	float _rateBeforeSeek;
	float _inflightSeekRate;
	unsigned long long _scanLevel;
	long long _scanDirection;
	long long _resetRateAfterSeekingUpdateDisabled;
	long long _seeklessState;
	unsigned _isSeekingOrScrubbing : 1;
	unsigned _resetRateAfterSeeking : 1;
	unsigned _activeRewindHoldingAtStart : 1;
	double _lastSeekableEnd;
	double _whenSawSeekableEnd;
	double _maxSeekableFwd;
	double _seekFwdSlop;
	double _lastSeekableStart;
	double _whenSawSeekableStart;
	double _maxSeekableRev;
	double _seekRevSlop;
	unsigned _canSeekRev : 1;
	unsigned _canSeekFwd : 1;
	unsigned _alwaysPlayWheneverPossible : 1;
	unsigned _stopAtEnd : 1;
	unsigned _didReachEnd : 1;
	unsigned _pausedDuringInterruption : 1;
	unsigned _resumePlaybackWhenActive : 1;
	unsigned _useApplicationAudioSession : 1;
	unsigned _playInBackgroundUserDefaultEnabled : 1;
	unsigned _canPlayFastForward : 1;
	unsigned _canPlayFastReverse : 1;
	unsigned _shouldAutoclearDisplayOverride : 1;
	long long _state;
	long long _displayOverridePlaybackState;
	unsigned long long _bufferingState;
	NSNotification* _delayedPlaybackStateNotification;
	NSObject*<OS_dispatch_source> _stallTimerSource;
	BOOL _isConnectingPlayer;
	MPAVControllerToAggregateDCommunicator* _aggregateDCommunicator;
	double _itemInitialBookmarkTime;
	float _rateBeforeResignActive;
	long long _ubiquitousBookkeepingDisabledCount;
	double _secondsSinceUbiquitousCheckpoint;
	Class _videoViewClass;
	NSString* _audioSessionModeOverride;
	double _lastInterruptionEnd;
	BOOL _shouldEnforceHDCP;
	NSMutableSet* _clientsWantingExternalPlayback;
	double _lastLoadedTime;
	long long _currentItemRevisionID;
	unsigned long long _numberOfErrorsSinceLastPlay;
	BOOL _shouldSkipToNextTrackOnResumeFromInterruption;
	BOOL _shouldResetQueueWhenReachingEnd;
	BOOL _muted;
	BOOL _useAirPlayMusicMode;
	BOOL _managesAirPlayBehaviors;
	BOOL _limitsBandwidthForCellularAccess;

}

@property (getter=_playlistManager,nonatomic,retain) MPAVPlaylistManager * playlistManager; 
@property (nonatomic,readonly) MPVideoView * videoView; 
@property (nonatomic,readonly) AVPlayerLayer * videoLayer; 
@property (nonatomic,copy) NSString * externalPlaybackVideoGravity; 
@property (nonatomic,readonly) long long externalPlaybackType; 
@property (assign,nonatomic) BOOL usesAudioOnlyModeForExternalPlayback; 
@property (assign,setter=setDestinationIsTVOut:,getter=destinationIsTVOut,nonatomic) BOOL destinationIsTVOut; 
@property (nonatomic,readonly) BOOL showPlaybackStateOverlaysOnTVOut; 
@property (assign,nonatomic) long long state;                                                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) float _playerRate; 
@property (nonatomic,readonly) long long _displayPlaybackState; 
@property (nonatomic,readonly) BOOL currentItemIsRental; 
@property (assign,nonatomic) BOOL useAirPlayMusicMode;                                                                     //@synthesize useAirPlayMusicMode=_useAirPlayMusicMode - In the implementation block
@property (assign,nonatomic) BOOL managesAirPlayBehaviors;                                                                 //@synthesize managesAirPlayBehaviors=_managesAirPlayBehaviors - In the implementation block
@property (nonatomic,readonly) AVAudioSessionMediaPlayerOnly * _playerAVAudioSession; 
@property (assign,nonatomic) BOOL limitsBandwidthForCellularAccess;                                                        //@synthesize limitsBandwidthForCellularAccess=_limitsBandwidthForCellularAccess - In the implementation block
@property (nonatomic,readonly) float rate; 
@property (assign,nonatomic) BOOL disallowsAMRAudio; 
@property (nonatomic,readonly) MPQueueFeeder * feeder; 
@property (nonatomic,readonly) MPAVItem * currentItem; 
@property (nonatomic,readonly) MPAVRoutingController * routingController; 
@property (nonatomic,readonly) MPQueuePlayer * avPlayer; 
@property (assign,nonatomic) BOOL shouldSkipToNextTrackOnResumeFromInterruption;                                           //@synthesize shouldSkipToNextTrackOnResumeFromInterruption=_shouldSkipToNextTrackOnResumeFromInterruption - In the implementation block
@property (assign,nonatomic) BOOL shouldResetQueueWhenReachingEnd;                                                         //@synthesize shouldResetQueueWhenReachingEnd=_shouldResetQueueWhenReachingEnd - In the implementation block
@property (getter=isTickTimerEnabled,nonatomic,readonly) BOOL tickTimerEnabled; 
@property (nonatomic,readonly) long long activeRepeatType; 
@property (nonatomic,readonly) long long activeShuffleType; 
@property (assign,nonatomic) long long repeatType; 
@property (assign,nonatomic) long long shuffleType; 
@property (getter=isShuffled,nonatomic,readonly) BOOL shuffled; 
@property (assign,nonatomic) BOOL autoPlayWhenLikelyToKeepUp; 
@property (assign,nonatomic) BOOL closedCaptioningEnabled; 
@property (assign,nonatomic) double nextFadeOutDuration;                                                                   //@synthesize nextFadeOutDuration=_nextFadeOutDuration - In the implementation block
@property (nonatomic,readonly) BOOL hasVolumeControl; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,readonly) BOOL muted;                                                                                 //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) NSString * routeNameForVolumeControl; 
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) double currentMonotonousTime; 
@property (nonatomic,readonly) double durationOfCurrentItemIfAvailable; 
@property (nonatomic,readonly) double playableDurationOfCurrentItemIfAvailable; 
@property (nonatomic,readonly) unsigned long long bufferingState; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (getter=isRewindHoldingAtStart,nonatomic,readonly) BOOL rewindHoldingAtStart; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (assign,nonatomic) BOOL alwaysPlayWheneverPossible; 
@property (assign,nonatomic) long long playbackMode;                                                                       //@synthesize playbackMode=_playbackMode - In the implementation block
@property (assign,nonatomic) BOOL stopAtEnd; 
@property (assign,nonatomic) BOOL useApplicationAudioSession; 
@property (nonatomic,readonly) BOOL isCurrentItemReady; 
@property (nonatomic,readonly) MPMediaItem * currentMediaItem; 
@property (nonatomic,readonly) MPMediaQuery * currentMediaQuery; 
@property (assign,nonatomic) long long displayOverridePlaybackState;                                                       //@synthesize displayOverridePlaybackState=_displayOverridePlaybackState - In the implementation block
@property (assign,nonatomic) BOOL ubiquitousBookkeepingEnabled; 
@property (nonatomic,readonly) BOOL isExternalPlaybackActive; 
@property (assign,nonatomic) BOOL disableAirPlayMirroringDuringPlayback; 
@property (assign,nonatomic) BOOL shouldEnforceHDCP;                                                                       //@synthesize shouldEnforceHDCP=_shouldEnforceHDCP - In the implementation block
@property (nonatomic,retain) NSString * audioSessionModeOverride;                                                          //@synthesize audioSessionModeOverride=_audioSessionModeOverride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)outputSupportsAC3;
+(BOOL)isNetworkSupportedPath:(id)arg1 ;
+(id)_playerKeysToObserve;
+(Class)playlistManagerClass;
+(id)_itemKeysToObserve;
-(void)dealloc;
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(BOOL)isValid;
-(void)setActive:(BOOL)arg1 ;
-(id)preferredLanguages;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(MPAVItem *)currentItem;
-(double)currentTime;
-(void)_setState:(long long)arg1 ;
-(void)pause;
-(BOOL)showPlaybackStateOverlaysOnTVOut;
-(void)play;
-(void)setStopAtEnd:(BOOL)arg1 ;
-(void)_itemPlaybackDidEndNotification:(id)arg1 ;
-(unsigned long long)bufferingState;
-(void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1 ;
-(MPQueuePlayer *)avPlayer;
-(BOOL)isExternalPlaybackActive;
-(void)beginSeek:(int)arg1 ;
-(void)endSeek;
-(void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ;
-(void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 ;
-(long long)playbackMode;
-(void)setPlaybackMode:(long long)arg1 ;
-(void)beginUsingVideoLayer;
-(MPQueueFeeder *)feeder;
-(void)changePlaybackIndexBy:(long long)arg1 ;
-(MPVideoView *)videoView;
-(void)setCurrentTime:(double)arg1 options:(long long)arg2 ;
-(NSString *)audioSessionModeOverride;
-(BOOL)disallowsAMRAudio;
-(double)timeOfPlayableEnd;
-(double)timeOfPlayableStart;
-(double)timeOfSeekableEnd;
-(double)timeOfSeekableStart;
-(void)setAudioSessionModeOverride:(NSString *)arg1 ;
-(void)setDisplayOverridePlaybackState:(long long)arg1 ;
-(void)setDisallowsAMRAudio:(BOOL)arg1 ;
-(void)setShouldEnforceHDCP:(BOOL)arg1 ;
-(BOOL)shouldEnforceHDCP;
-(void)endPlayback;
-(void)setPlaybackIndex:(long long)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 ;
-(void)setUseApplicationAudioSession:(BOOL)arg1 ;
-(void)setNextFadeOutDuration:(double)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)endUsingVideoLayer;
-(BOOL)useApplicationAudioSession;
-(BOOL)stopAtEnd;
-(BOOL)muted;
-(float)volume;
-(BOOL)closedCaptioningEnabled;
-(void)setClosedCaptioningEnabled:(BOOL)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)notifyAVPlayerItemWillChange:(id)arg1 ;
-(void)notifyAVPlayerItemDidChange:(id)arg1 ;
-(BOOL)allowsExternalPlayback;
-(long long)repeatType;
-(long long)shuffleType;
-(void)setRepeatType:(long long)arg1 ;
-(void)setShuffleType:(long long)arg1 ;
-(long long)activeShuffleType;
-(BOOL)isPlaying;
-(void)_resetInternalState;
-(void)_itemTimeMarkersAvailableNotification:(id)arg1 ;
-(void)_applicationWillAddDeactivationReason:(id)arg1 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_networkChangedNotification:(id)arg1 ;
-(void)_cancelStallTimer;
-(void)_cancelUpdateCurrentItemBookkeepingTimer;
-(void)removeTimeObserver:(id)arg1 ;
-(void)_unregisterForPlayer:(id)arg1 ;
-(void)_unregisterForAVItemNotifications:(id)arg1 ;
-(void)_unregisterForPlaylistManager:(id)arg1 ;
-(id)_playlistManager;
-(void)setUbiquitousBookkeepingEnabled:(BOOL)arg1 ;
-(void)_pauseWithFadeout:(float)arg1 forScanning:(BOOL)arg2 ;
-(BOOL)currentItemIsRental;
-(AVAudioSessionMediaPlayerOnly *)_playerAVAudioSession;
-(void)_updateScanningRate;
-(BOOL)_hasValidPlayerTime;
-(void)_setLastSetTime:(double)arg1 ;
-(void)updateBookkeepingNow;
-(void)setPlaybackIndex:(long long)arg1 selectionDirection:(long long)arg2 ;
-(void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 allowSkippingUnskippableContent:(BOOL)arg4 ;
-(BOOL)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 allowSkippingUnskippableContent:(BOOL)arg4 error:(id*)arg5 ;
-(void)_delayedPlaybackIndexChange;
-(BOOL)_changeChapterTimeMarkerIndexBy:(long long)arg1 ;
-(void)_endSeekAndChangeRate:(BOOL)arg1 ;
-(BOOL)isCurrentItemReady;
-(BOOL)isLiveStreaming;
-(double)_currentTimeWithPreloadedPlayerTime:(BOOL)arg1 value:(SCD_Struct_MP12)arg2 ;
-(BOOL)_setRate:(float)arg1 forScanning:(BOOL)arg2 withItem:(id)arg3 ;
-(void)_setItemErrorResolver:(id)arg1 ;
-(void)pauseWithFadeout:(float)arg1 ;
-(void)disableAutoplayForCurrentItem;
-(BOOL)_setRate:(float)arg1 forScanning:(BOOL)arg2 ;
-(void)playWithOptions:(unsigned long long)arg1 ;
-(void)_playWithOptions:(unsigned long long)arg1 allowsEnablingAutoPlay:(BOOL)arg2 ;
-(void)_delayedSetCurrentTime;
-(BOOL)_hasEnoughDataToPlay;
-(BOOL)_canPlayItem:(id)arg1 ;
-(void)_rateDidChange:(id)arg1 ;
-(void)enableAutoplayForCurrentItem;
-(void)playItemAtIndex:(unsigned long long)arg1 forceRestart:(BOOL)arg2 ;
-(void)playItemAtIndex:(unsigned long long)arg1 withOptions:(unsigned long long)arg2 ;
-(void)playChapterTimeMarkerAtIndex:(unsigned long long)arg1 withOptions:(unsigned long long)arg2 ;
-(void)_attemptAutoPlay;
-(void)togglePlaybackWithOptions:(unsigned long long)arg1 ;
-(BOOL)alwaysPlayWheneverPossible;
-(void)_addObserverInfo:(id)arg1 forCoreMediaObserver:(id)arg2 forInitialCreation:(BOOL)arg3 ;
-(void)endTickTimer;
-(void)setClient:(id)arg1 wantsToAllowExternalPlayback:(BOOL)arg2 shouldIgnorePlaybackQueueTransactions:(BOOL)arg3 ;
-(BOOL)_showsPlayingWhenInState:(long long)arg1 ;
-(long long)_displayPlaybackState;
-(void)setDisableAirPlayMirroringDuringPlayback:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2 ;
-(void)_sendTracePlaybackStartDidFinishIfNeededForItem:(id)arg1 ;
-(void)applyRepeatSettings;
-(void)applyShuffleSettings;
-(void)_setActionAtEndAttributeForState:(long long)arg1 ;
-(void)_applyAirPlayMusicMode;
-(void)setClient:(id)arg1 wantsToAllowExternalPlayback:(BOOL)arg2 ;
-(void)setDisableAirPlayMirroringDuringPlayback:(BOOL)arg1 ;
-(void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1 ;
-(void)_disconnectAVPlayerWithReason:(long long)arg1 ;
-(void)_connectAVPlayer;
-(void)_setVideoLayerAttachedToPlayer:(BOOL)arg1 force:(BOOL)arg2 pauseIfNecessary:(BOOL)arg3 ;
-(void)_clearVideoLayer:(BOOL)arg1 ;
-(long long)externalPlaybackType;
-(NSString *)externalPlaybackVideoGravity;
-(void)setExternalPlaybackVideoGravity:(NSString *)arg1 ;
-(void)_clearSeekingIntervalsForStreaming;
-(void)_resumeTickTimer;
-(void)_pauseTickTimer;
-(id)_pickedRoute;
-(void)_applyCellularAccessSettings;
-(void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2 ;
-(BOOL)usesAudioOnlyModeForExternalPlayback;
-(void)_playbackFailedWithError:(id)arg1 canResolve:(BOOL)arg2 ;
-(id)_playerFailedToQueueNotification:(id)arg1 ;
-(double)currentTimeForBookmarking;
-(double)playableDurationOfCurrentItemIfAvailable;
-(void)_applyAirPlayMusicModeForItem:(id)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2 ;
-(void)_pausePlaybackIfNecessaryIgnoringVideoLayerAttachment:(BOOL)arg1 ;
-(void)_registerForAVItemNotifications:(id)arg1 ;
-(void)_reloadTimeMarkerObservationsForItem:(id)arg1 ;
-(void)_updatePropertiesForLoadedTimeRangeUpdate;
-(BOOL)_isChangingPlayerProperties;
-(BOOL)shouldResetQueueWhenReachingEnd;
-(void)_itemFailedToPlayToEnd:(id)arg1 ;
-(void)airPlayVideoEnded;
-(void)airPlayFailedRentalDownloadRequired;
-(void)_delayedUpdateScanningRate;
-(void)_verifyDisplayProtection;
-(void)_setValid:(BOOL)arg1 ;
-(void)_setBufferingState:(unsigned long long)arg1 ;
-(BOOL)canPlayFastReverse;
-(void)_postMPAVControllerItemReadyToPlayNotificationWithItem:(id)arg1 ;
-(void)_updatePlaybackModeForItem:(id)arg1 ;
-(void)_delayedUpdateTimeMarker;
-(void)_prepareToPlayItem:(id)arg1 ;
-(void)skipToSeekableEnd;
-(MPAVRoutingController *)routingController;
-(void)_updateCurrentItemBookkeepingMarkedAsCheckpoint:(BOOL)arg1 ;
-(void)_clearLastSetTimeIfPlayerTimeIsValid;
-(void)_volumeDidChangeNotification:(id)arg1 ;
-(id)_expectedAssetTypesForPlaybackMode:(long long)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)_postMPAVControllerSizeDidChangeNotificationWithItem:(id)arg1 ;
-(void)_checkForBoundaryTimeCrossing;
-(id)_extractImageFromMetadata:(id)arg1 ;
-(void)_updateTypeForItem:(id)arg1 ;
-(void)_itemWillChange:(id)arg1 ;
-(void)_itemDidChange:(id)arg1 ;
-(void)_isExternalPlaybackActiveDidChange:(id)arg1 ;
-(void)_serverConnectionDidDie:(id)arg1 ;
-(void)_streamRanDry:(id)arg1 ;
-(void)_streamBufferFull:(id)arg1 ;
-(void)_streamLikelyToKeepUp:(id)arg1 ;
-(void)_streamUnlikelyToKeepUp:(id)arg1 ;
-(void)_sizeDidChange:(id)arg1 ;
-(void)_itemReadyToPlay:(id)arg1 ;
-(void)_timedMetadataAvailable:(id)arg1 ;
-(void)_tracksDidChange:(id)arg1 ;
-(void)_durationDidChange:(id)arg1 ;
-(void)_firstVideoFrameDisplayed:(id)arg1 ;
-(void)_pausePlaybackIfNecessary;
-(BOOL)_itemIsRestricted:(id)arg1 ;
-(void)_resumePlaybackIfNecessary;
-(void)_pauseBookkeepingTimer;
-(void)_resumeBookkeepingTimer;
-(unsigned long long)_currentIndexInBoundaryCMTimes:(id)arg1 ;
-(BOOL)limitsBandwidthForCellularAccess;
-(void)setLimitsBandwidthForCellularAccess:(BOOL)arg1 ;
-(void)setPlaylistManager:(MPAVPlaylistManager *)arg1 ;
-(void)_registerForPlaylistManager:(id)arg1 ;
-(void)_configureAVPlaylistManager;
-(id)embeddedDataTimesForItem:(id)arg1 ;
-(void)_itemFailedToPlayToEndNotification:(id)arg1 ;
-(void)_timeHasJumpedNotification:(id)arg1 ;
-(void)_itemAssetIsLoadedNotification:(id)arg1 ;
-(void)_itemTypeAvailableNotification:(id)arg1 ;
-(void)_itemPlaybackModeAvailableNotification:(id)arg1 ;
-(void)_itemBookmarkTimeDidChangeNotification:(id)arg1 ;
-(BOOL)autoPlayWhenLikelyToKeepUp;
-(BOOL)shouldHaveNoActionAtEndForState:(long long)arg1 ;
-(void)_delayedPostPlaybackStateChangedNotification;
-(void)autoclearDisplayOverride;
-(void)_postPlaybackStateChangedNotificationWithOriginalState:(long long)arg1 newState:(long long)arg2 delayable:(BOOL)arg3 ;
-(void)_scheduleUpdateCurrentItemBookkeepingTimer;
-(void)_clearResetRateAfterSeeking;
-(long long)_seeklessStateForState:(long long)arg1 ;
-(void)_configureUpdateCurrentItemBookkeepingTimer;
-(AVPlayerLayer *)videoLayer;
-(void)_updateSeekingIntervalsForStreaming;
-(void)tickTimerFired;
-(void)setRateForScanning:(float)arg1 ;
-(BOOL)destinationIsTVOut;
-(BOOL)useAirPlayMusicMode;
-(BOOL)_isVideoLayerAttachedToPlayer;
-(void)endInterruptionFromInterruptor:(id)arg1 category:(id)arg2 flags:(unsigned long long)arg3 ;
-(void)beginInterruption;
-(void)playlistManager:(id)arg1 didTransitionToPlaylistFeeder:(id)arg2 ;
-(void)playlistManager:(id)arg1 didFailLoadingAllItemsForQueueFeeder:(id)arg2 ;
-(void)playlistManager:(id)arg1 queueCoordinator:(id)arg2 willInsertItem:(id)arg3 afterItem:(id)arg4 ;
-(void)routingControllerExternalScreenTypeDidChange:(id)arg1 ;
-(void)routingControllerDidPauseFromActiveRouteChange:(id)arg1 ;
-(void)errorResolver:(id)arg1 didResolveError:(id)arg2 withResolution:(long long)arg3 ;
-(void)_updateLastSetTimeForCurrentItemIfNeeded;
-(BOOL)isSeekingOrScrubbing;
-(BOOL)isRewindHoldingAtStart;
-(double)currentMonotonousTime;
-(void)playItemAtIndex:(unsigned long long)arg1 ;
-(void)playChapterTimeMarkerAtIndex:(unsigned long long)arg1 ;
-(void)togglePlayback;
-(BOOL)forceRestartPlaybackIfNecessary;
-(id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)addBoundaryTimeObserverForTimes:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)beginTickTimerWithInterval:(double)arg1 ;
-(BOOL)isTickTimerEnabled;
-(long long)activeRepeatType;
-(MPMediaItem *)currentMediaItem;
-(MPMediaQuery *)currentMediaQuery;
-(BOOL)shouldDisplayAsPlaying;
-(BOOL)isShuffled;
-(void)setAlwaysPlayWheneverPossible:(BOOL)arg1 ;
-(float)_playerRate;
-(BOOL)disableAirPlayMirroringDuringPlayback;
-(BOOL)hasVolumeControl;
-(void)setVolume:(float)arg1 ;
-(NSString *)routeNameForVolumeControl;
-(void)setUseAirPlayMusicMode:(BOOL)arg1 ;
-(void)setManagesAirPlayBehaviors:(BOOL)arg1 ;
-(void)setDestinationIsTVOut:(BOOL)arg1 ;
-(void)finalizeBookkeepingNow;
-(double)durationOfCurrentItemIfAvailable;
-(BOOL)canSeekBackwards;
-(BOOL)canSeekForwards;
-(BOOL)canSkipToSeekableEnd;
-(void)skipToSeekableStart;
-(BOOL)ubiquitousBookkeepingEnabled;
-(void)_updateCurrentItemBookkeepingForTimerCallback;
-(void)setAutoclearingDisplayOverridePlaybackState:(long long)arg1 ;
-(void)_updateProgress:(CFRunLoopTimerRef)arg1 ;
-(long long)displayOverridePlaybackState;
-(BOOL)shouldSkipToNextTrackOnResumeFromInterruption;
-(void)setShouldSkipToNextTrackOnResumeFromInterruption:(BOOL)arg1 ;
-(void)setShouldResetQueueWhenReachingEnd:(BOOL)arg1 ;
-(double)nextFadeOutDuration;
-(BOOL)managesAirPlayBehaviors;
-(float)rate;
-(BOOL)setRate:(float)arg1 ;
@end

