//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVSAVFPlayback.h"
#import "TVSPlayback.h"

@class AVPlayer, IMAVPlayer, NSArray, NSDate, NSHashTable, NSMutableDictionary, NSNumber, NSObject<TVSMediaItem>, NSString, TVSAudioOption, TVSChapter, TVSChapterCollection, TVSDateRange, TVSInterstitial, TVSPlaybackState, TVSPlaylist, TVSSubtitleOption, TVSTimeRange;

@interface MTTVPlayback : NSObject <TVSPlayback, TVSAVFPlayback>
{
    _Bool _currentMediaItemHasDates;	// 8 = 0x8
    _Bool _currentMediaItemPreparedForLoading;	// 9 = 0x9
    _Bool _interactive;	// 10 = 0xa
    _Bool _isLive;	// 11 = 0xb
    _Bool _muted;	// 12 = 0xc
    _Bool _preventsSleepDuringVideoPlayback;	// 13 = 0xd
    _Bool _updatesMediaRemoteInfoAutomatically;	// 14 = 0xe
    _Bool _waitsAfterPreparingMediaItems;	// 15 = 0xf
    _Bool _videoViewsNeedPlayerUpdate;	// 16 = 0x10
    float _volume;	// 20 = 0x14
    id <TVSASyncPlaybackDelegate> _asyncDelegate;	// 24 = 0x18
    NSArray *_audioOptions;	// 32 = 0x20
    NSArray *_chapterCollections;	// 40 = 0x28
    TVSChapter *_currentChapter;	// 48 = 0x30
    TVSChapterCollection *_currentChapterCollection;	// 56 = 0x38
    TVSInterstitial *_currentInterstitial;	// 64 = 0x40
    NSObject<TVSMediaItem> *_currentMediaItem;	// 72 = 0x48
    NSString *_debugDescription;	// 80 = 0x50
    id <TVSPlaybackDelegate> _delegate;	// 88 = 0x58
    NSString *_description;	// 96 = 0x60
    double _elapsedTime;	// 104 = 0x68
    long long _errorBehavior;	// 112 = 0x70
    double _forwardPlaybackEndTime;	// 120 = 0x78
    double _maximumBitRate;	// 128 = 0x80
    long long _mediaItemEndAction;	// 136 = 0x88
    NSString *_name;	// 144 = 0x90
    NSDate *_playbackDate;	// 152 = 0x98
    IMAVPlayer *_player;	// 160 = 0xa0
    TVSPlaylist *_playlist;	// 168 = 0xa8
    double _rate;	// 176 = 0xb0
    double _rateUsedForPlayback;	// 184 = 0xb8
    double _reversePlaybackEndTime;	// 192 = 0xc0
    TVSDateRange *_seekableDateRange;	// 200 = 0xc8
    TVSTimeRange *_seekableTimeRange;	// 208 = 0xd0
    TVSAudioOption *_selectedAudioOption;	// 216 = 0xd8
    TVSSubtitleOption *_selectedSubtitleOption;	// 224 = 0xe0
    TVSPlaybackState *_state;	// 232 = 0xe8
    NSArray *_subtitleOptions;	// 240 = 0xf0
    NSMutableDictionary *_timeObservers;	// 248 = 0xf8
    NSNumber *_temporarySubtitleOverrideType;	// 256 = 0x100
    TVSPlaybackState *_oldPlaybackState;	// 264 = 0x108
    NSHashTable *_videoViewWeakReferences;	// 272 = 0x110
    struct CGSize _currentMediaItemPresentationSize;	// 280 = 0x118
}

@property(nonatomic) _Bool videoViewsNeedPlayerUpdate; // @synthesize videoViewsNeedPlayerUpdate=_videoViewsNeedPlayerUpdate;
@property(retain, nonatomic) NSHashTable *videoViewWeakReferences; // @synthesize videoViewWeakReferences=_videoViewWeakReferences;
@property(retain, nonatomic) TVSPlaybackState *oldPlaybackState; // @synthesize oldPlaybackState=_oldPlaybackState;
@property(retain, nonatomic) NSNumber *temporarySubtitleOverrideType; // @synthesize temporarySubtitleOverrideType=_temporarySubtitleOverrideType;
@property(nonatomic) _Bool waitsAfterPreparingMediaItems; // @synthesize waitsAfterPreparingMediaItems=_waitsAfterPreparingMediaItems;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool updatesMediaRemoteInfoAutomatically; // @synthesize updatesMediaRemoteInfoAutomatically=_updatesMediaRemoteInfoAutomatically;
@property(retain, nonatomic) NSMutableDictionary *timeObservers; // @synthesize timeObservers=_timeObservers;
@property(retain, nonatomic) TVSAudioOption *selectedAudioOption; // @synthesize selectedAudioOption=_selectedAudioOption;
@property(readonly, nonatomic) TVSTimeRange *seekableTimeRange; // @synthesize seekableTimeRange=_seekableTimeRange;
@property(readonly, nonatomic) TVSDateRange *seekableDateRange; // @synthesize seekableDateRange=_seekableDateRange;
@property(readonly, nonatomic) double reversePlaybackEndTime; // @synthesize reversePlaybackEndTime=_reversePlaybackEndTime;
@property(nonatomic) double rateUsedForPlayback; // @synthesize rateUsedForPlayback=_rateUsedForPlayback;
@property(nonatomic) _Bool preventsSleepDuringVideoPlayback; // @synthesize preventsSleepDuringVideoPlayback=_preventsSleepDuringVideoPlayback;
@property(retain, nonatomic) TVSPlaylist *playlist; // @synthesize playlist=_playlist;
@property(readonly, nonatomic) IMAVPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic) NSDate *playbackDate; // @synthesize playbackDate=_playbackDate;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) long long mediaItemEndAction; // @synthesize mediaItemEndAction=_mediaItemEndAction;
@property(nonatomic) double maximumBitRate; // @synthesize maximumBitRate=_maximumBitRate;
@property(readonly, nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
@property(readonly, nonatomic) double forwardPlaybackEndTime; // @synthesize forwardPlaybackEndTime=_forwardPlaybackEndTime;
@property(nonatomic) long long errorBehavior; // @synthesize errorBehavior=_errorBehavior;
@property(readonly, copy) NSString *description; // @synthesize description=_description;
@property(nonatomic) __weak id <TVSPlaybackDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *debugDescription; // @synthesize debugDescription=_debugDescription;
@property(readonly, nonatomic) struct CGSize currentMediaItemPresentationSize; // @synthesize currentMediaItemPresentationSize=_currentMediaItemPresentationSize;
@property(readonly, nonatomic) _Bool currentMediaItemPreparedForLoading; // @synthesize currentMediaItemPreparedForLoading=_currentMediaItemPreparedForLoading;
@property(readonly, nonatomic) _Bool currentMediaItemHasDates; // @synthesize currentMediaItemHasDates=_currentMediaItemHasDates;
@property(retain, nonatomic) NSObject<TVSMediaItem> *currentMediaItem; // @synthesize currentMediaItem=_currentMediaItem;
@property(readonly, nonatomic) TVSInterstitial *currentInterstitial; // @synthesize currentInterstitial=_currentInterstitial;
@property(retain, nonatomic) TVSChapterCollection *currentChapterCollection; // @synthesize currentChapterCollection=_currentChapterCollection;
@property(readonly, nonatomic) TVSChapter *currentChapter; // @synthesize currentChapter=_currentChapter;
@property(readonly, nonatomic) NSArray *chapterCollections; // @synthesize chapterCollections=_chapterCollections;
@property(readonly, nonatomic) NSArray *audioOptions; // @synthesize audioOptions=_audioOptions;
@property(nonatomic) __weak id <TVSASyncPlaybackDelegate> asyncDelegate; // @synthesize asyncDelegate=_asyncDelegate;
- (void).cxx_destruct;	// IMP=0x000000010007fe38
- (void)continueLoadingCurrentItem;	// IMP=0x000000010007f94c
- (void)_setSelectedSubtitleOption:(id)arg1 userOverridesSystemSubtitleSettings:(_Bool)arg2;	// IMP=0x000000010007f3cc
@property(retain, nonatomic) TVSSubtitleOption *selectedSubtitleOption; // @synthesize selectedSubtitleOption=_selectedSubtitleOption;
- (void)setSelectedSubtitleOption:(id)arg1 setGlobalPreference:(_Bool)arg2;	// IMP=0x000000010007f3b0
- (id)fetchSubtitleOptions;	// IMP=0x000000010007ee5c
@property(readonly, nonatomic) NSArray *subtitleOptions; // @synthesize subtitleOptions=_subtitleOptions;
- (void)updateSubtitleOptionsAndSelection;	// IMP=0x000000010007edb0
- (void)updateSubtitleOptions;	// IMP=0x000000010007ed3c
- (void)beginLoadingSubtitleOptions;	// IMP=0x000000010007ea0c
- (void)postPlaybackStateChangeNotificationWithOldState:(id)arg1;	// IMP=0x000000010007e8d0
- (id)currentPlayingItem;	// IMP=0x000000010007e87c
- (id)playerController;	// IMP=0x000000010007e868
- (id)manifest;	// IMP=0x000000010007e814
@property(readonly, nonatomic) AVPlayer *avPlayer;
@property(readonly, nonatomic) _Bool currentMediaItemHasVideoContent;
@property(readonly, nonatomic) _Bool currentMediaItemIsStreaming;
@property(readonly, nonatomic) _Bool currentMediaItemInitialLoadingComplete;
- (void)removeWeakReferenceToVideoView:(id)arg1;	// IMP=0x000000010007e6ec
- (void)addWeakReferenceToVideoView:(id)arg1;	// IMP=0x000000010007e6cc
- (void)_updateVideoViewsWithAVPlayer:(id)arg1;	// IMP=0x000000010007e424
- (void)setCurrentMediaItemPresentationSize:(struct CGSize)arg1;	// IMP=0x000000010007e390
- (_Bool)currentMediaItemSupportsScrubbingUsingPlayer;	// IMP=0x000000010007e388
@property(nonatomic) _Bool limitReadAhead;
@property(readonly, nonatomic) TVSTimeRange *bufferedTimeRange;
@property(readonly, nonatomic) TVSPlaybackState *state; // @synthesize state=_state;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
- (void)setElapsedTime:(double)arg1;	// IMP=0x000000010007df54
- (void)setElapsedTime:(double)arg1 precise:(_Bool)arg2;	// IMP=0x000000010007df48
- (void)setElapsedTime:(double)arg1 seekPrecision:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000010007df3c
- (void)setElapsedTime:(double)arg1 seekPrecision:(CDStruct_1b6d18a9)arg2 ignoreDelegate:(_Bool)arg3;	// IMP=0x000000010007df30
- (void)removeElapsedTimeObserverWithToken:(id)arg1;	// IMP=0x000000010007dec4
- (void)removeBoundaryTimeObserverWithToken:(id)arg1;	// IMP=0x000000010007dec0
- (id)addBoundaryTimeObserverForTimes:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007deb8
- (id)addBoundaryTimeObserverForDates:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007deb0
- (id)addElapsedTimeObserver:(CDUnknownBlockType)arg1;	// IMP=0x000000010007ddd0
@property(readonly, nonatomic) double rate; // @synthesize rate=_rate;
- (void)scanWithRate:(double)arg1;	// IMP=0x000000010007dcbc
- (void)changeMediaInDirection:(long long)arg1;	// IMP=0x000000010007dbe8
- (void)changeMediaInDirection:(long long)arg1 reason:(id)arg2;	// IMP=0x000000010007dbdc
- (void)stopWithVolumeRampDuration:(double)arg1;	// IMP=0x000000010007dbd0
- (void)pauseWithVolumeRampDuration:(double)arg1;	// IMP=0x000000010007dbc4
- (void)skipToNextChapterInDirection:(long long)arg1;	// IMP=0x000000010007db44
- (void)stop;	// IMP=0x000000010007db04
- (void)pauseIgnoringDelegate:(_Bool)arg1;	// IMP=0x000000010007daf8
- (void)pause;	// IMP=0x000000010007dab8
- (void)togglePlayPause;	// IMP=0x000000010007da78
- (void)playIgnoringDelegate:(_Bool)arg1;	// IMP=0x000000010007da6c
- (void)play;	// IMP=0x000000010007da2c
- (void)_updatePlaylist;	// IMP=0x000000010007d918
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010007d8a0
- (void)_subtitleSettingsDidChange;	// IMP=0x000000010007d844
- (void)_durationAvailable;	// IMP=0x000000010007d800
- (void)_mediaServicesDidReset;	// IMP=0x000000010007d774
- (void)_mediaServicesWillReset;	// IMP=0x000000010007d760
- (void)_loadedDurationDidChange;	// IMP=0x000000010007d71c
- (void)_mediaItemPresentationSizeDidChange;	// IMP=0x000000010007d6a0
- (void)_rateDidChange;	// IMP=0x000000010007d690
- (void)_mediaItemStatusDidChange;	// IMP=0x000000010007d684
- (void)_loadStateChanged;	// IMP=0x000000010007d61c
- (void)_periodicUpdate;	// IMP=0x000000010007d44c
- (void)_manifestDidChange;	// IMP=0x000000010007d440
- (void)_stateDidChange;	// IMP=0x000000010007d3b0
- (void)_stateWillChange;	// IMP=0x000000010007d364
- (void)_mediaItemDidChange;	// IMP=0x000000010007d208
- (void)_mediaItemWillChange;	// IMP=0x000000010007d15c
- (void)invalidate;	// IMP=0x000000010007d158
- (void)dealloc;	// IMP=0x000000010007d03c
- (id)initWithPlayer:(id)arg1;	// IMP=0x000000010007c828
- (id)initWithName:(id)arg1;	// IMP=0x000000010007c7c8

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
