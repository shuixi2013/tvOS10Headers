/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPServerObject.h>
#import <libobjc.A.dylib/MPMusicPlayerController.h>

@protocol MPMusicPlayerControllerServerDelegate;
@class MPMusicPlayerControllerServer, BKSApplicationStateMonitor, NSMutableArray, NSMutableDictionary, MPVideoViewController;

@interface MPMusicPlayerControllerServerInternal : MPServerObject <MPMusicPlayerController> {

	id<MPMusicPlayerControllerServerDelegate> _delegate;
	MPMusicPlayerControllerServer* _musicPlayerServer;
	int _activeClientPID;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	long long _applicationStateMonitorCount;
	NSMutableArray* _clientPorts;
	NSMutableDictionary* _clientPortsForPIDs;
	NSMutableDictionary* _clientStateForPIDs;
	MPVideoViewController* _videoViewController;
	unsigned _queuePrepared : 1;
	unsigned _hasSentQueuePrepared : 1;

}
+(BOOL)_canSeedGeniusWithItem:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(id)numberOfItems;
-(void)pause;
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(id)playbackState;
-(id)repeatMode;
-(void)setRepeatMode:(id)arg1 ;
-(void)prepareToPlay;
-(void)play;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(id)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(id)arg1 ;
-(id)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(id)arg1 ;
-(void)_itemDidChangeNotification:(id)arg1 ;
-(void)_itemPlaybackDidEndNotification:(id)arg1 ;
-(void)_endPlayback;
-(void)_tvOutCapabilityDidChangeNotification:(id)arg1 ;
-(id)nowPlayingItem;
-(void)setNowPlayingItem:(id)arg1 ;
-(void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2 ;
-(void)setQueueWithItemCollection:(id)arg1 ;
-(id)shuffleMode;
-(void)setShuffleMode:(id)arg1 ;
-(id)isGeniusAvailable;
-(id)isGeniusAvailableForSeedItems:(id)arg1 ;
-(id)setQueueWithSeedItems:(id)arg1 ;
-(id)nowPlayingItemAtIndex:(id)arg1 ;
-(void)pauseWithFadeoutDuration:(id)arg1 ;
-(id)allowsBackgroundVideo;
-(void)setAllowsBackgroundVideo:(id)arg1 ;
-(id)playbackSpeed;
-(void)setPlaybackSpeed:(id)arg1 ;
-(id)indexOfNowPlayingItem;
-(id)unshuffledIndexOfNowPlayingItem;
-(id)isNowPlayingItemFromGeniusMix;
-(id)currentChapterIndex;
-(void)setCurrentChapterIndex:(id)arg1 ;
-(void)setQueueWithGeniusMixPlaylist:(id)arg1 ;
-(void)setQueueWithRadioStation:(id)arg1 ;
-(id)setQueueWithStoreIDs:(id)arg1 ;
-(void)setQueueWithDescriptor:(id)arg1 ;
-(id)userQueueModificationsDisabled;
-(void)setUserQueueModificationsDisabled:(id)arg1 ;
-(id)skipInDirection:(id)arg1 ;
-(id)queueAsQuery;
-(id)queueAsRadioStation;
-(void)playItem:(id)arg1 ;
-(void)shuffle;
-(void)skipToBeginningOrPreviousItem;
-(void)skipToNextChapter;
-(void)skipToPreviousChapter;
-(void)prepareQueueForPlayback;
-(id)serverIsAlive;
-(void)setUseApplicationSpecificQueue:(id)arg1 ;
-(void)registerForServerDiedNotifications;
-(void)setQueueWithQuery:(id)arg1 ;
-(BOOL)shouldDelayInvocation:(id)arg1 ;
-(id)_avController;
-(void)_prepareQueueIfNecessary;
-(void)_setQueueWithQuery:(id)arg1 ;
-(id)_clientState;
-(unsigned long long)_numberOfItems;
-(BOOL)useApplicationSpecificQueue;
-(void)_clientPortInvalidated:(id)arg1 ;
-(BOOL)_clientPIDHasPermissionToPlay:(int)arg1 ;
-(void)_endPlaybackForClientIfNecessary:(int)arg1 ;
-(void)_setQueuePrepared:(BOOL)arg1 ;
-(void)_tearDownVideoView;
-(id)_avControllerForClientPID:(int)arg1 ;
-(void)_updateVideoView;
-(void)_playbackBufferingStateDidChangeNotification:(id)arg1 ;
-(void)_playbackErrorPostedNotification:(id)arg1 ;
-(void)_clientPortInvalidatedNotification:(id)arg1 ;
-(void)_applicationStateChangedWithUserInfo:(id)arg1 ;
-(id)_clientStateForPID:(int)arg1 ;
-(BOOL)_currentClientPIDHasPermissionToPlay;
-(void)_registerClientPort:(unsigned)arg1 forProcessID:(int)arg2 hasAudioBackgroundMode:(BOOL)arg3 ;
@end

