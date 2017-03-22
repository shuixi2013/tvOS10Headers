/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface AVController : NSObject {

	AVControllerPrivate* _priv;

}
+(id)compatibleAudioRouteForRoute:(id)arg1 ;
+(id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)arg1 stringURLToNSURLWithKey:(id)arg2 inDictionaries:(id)arg3 ;
+(void)setEnableNetworkMode:(BOOL)arg1 ;
+(BOOL)isSupportedMimeType:(id)arg1 ;
+(BOOL)isSupportedFileExtension:(id)arg1 ;
+(id)avControllerWithQueue:(id)arg1 error:(id*)arg2 ;
+(BOOL)isNetworkSupportedPath:(id)arg1 ;
+(id)avController;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(BOOL)isValid;
-(void)setLayer:(id)arg1 ;
-(id)currentItem;
-(double)currentTime;
-(id)queue;
-(void)pause;
-(BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)initWithQueue:(id)arg1 error:(id*)arg2 ;
-(void)makeCurrentItemReady;
-(CGImageRef)grabCGImageAtTime:(double)arg1 withTimeOptions:(long long)arg2 withImageOptions:(id)arg3 actualTime:(double*)arg4 ;
-(void)setQueue:(id)arg1 ;
-(long long)eqPreset;
-(void)setEQPreset:(long long)arg1 ;
-(BOOL)okToNotifyFromThisThread;
-(void)makeError:(id*)arg1 withDescription:(id)arg2 code:(int)arg3 ;
-(BOOL)vibrationEnabled;
-(void)setVibrationEnabled:(BOOL)arg1 ;
-(id)initWithQueue:(id)arg1 fmpType:(unsigned)arg2 error:(id*)arg3 ;
-(id)_figPlayerNotifications;
-(void)checkQueueSpace;
-(id)addNextFeederItemToQueue;
-(id)queueFeeder;
-(BOOL)playNextItem:(id*)arg1 ;
-(void)feederRangeWasInserted:(id)arg1 ;
-(void)feederRangeWasRemoved:(id)arg1 ;
-(void)feederInvalidatedWithCurrentItemMoved:(id)arg1 ;
-(void)setQueueFeeder:(id)arg1 withIndex:(int)arg2 ;
-(void)applyDesiredRepeatMode;
-(void)continueAfterRepeatGap;
-(BOOL)setRate:(float)arg1 error:(id*)arg2 ;
-(void)dequeueFirstItem;
-(OpaqueFigPlaybackItemRef)currentFPItem;
-(void)cancelContinueAfterRepeatGap;
-(BOOL)shouldBeginPlayingItem:(id)arg1 error:(id*)arg2 ;
-(id)errorWithDescription:(id)arg1 code:(int)arg2 ;
-(id)lkLayer;
-(BOOL)shouldDisplayClosedCaptions;
-(void)setVisualContext:(OpaqueFigVisualContextRef)arg1 ;
-(int)updateActionAtEnd;
-(void)setOutputQTESFilePath:(id)arg1 ;
-(void)setShouldDisplayClosedCaptions:(BOOL)arg1 ;
-(void)setSubtitleRecipient:(id)arg1 ;
-(void)setApplyVideoTrackMatrix;
-(void)requestAsyncCGImagesAtTimes:(id)arg1 requestIDs:(id)arg2 withTimeOptions:(long long)arg3 withImageOptions:(id)arg4 ;
-(void)scheduleUpdateTimeMarkerObservations;
-(void)scheduleQueueSpaceCheck;
-(void)avPlaybackQueueCurrentItemChangedNotification:(id)arg1 ;
-(void)updateTimeMarkerObservations;
-(void)removeObserver:(id)arg1 fromTMOArray:(id)arg2 ;
-(void)ensurePlaybackQueueImmed;
-(id)outputQTESFilePath;
-(void)logPerformanceDataForCurrentItem;
-(void)currentItemWillChangeToItem:(id)arg1 oldItemCurrentTime:(double)arg2 ;
-(void)rateDidChangeToRate:(float)arg1 ;
-(void)currentItemHasChanged:(id)arg1 ;
-(void)fpItemNotification:(id)arg1 sender:(id)arg2 ;
-(void)itemHasFinishedPlayingNotification:(id)arg1 ;
-(BOOL)beginRepeatGap;
-(void)fmpEffectiveVolumeDidChange;
-(void)safeSubtitleCommandPosted:(void*)arg1 ;
-(void)setAVItemClass:(Class)arg1 ;
-(id)initForStreaming;
-(AVControllerPrivate*)privateStorage;
-(BOOL)isNewImageAvailableForTime:(const SCD_Struct_BW2*)arg1 willNeverBeAvailable:(BOOL*)arg2 ;
-(int)copyImageForTime:(_CVBuffer*)arg1 time:(const SCD_Struct_BW2*)arg2 ;
-(void)setQueueFeeder:(id)arg1 ;
-(BOOL)havePlayedCurrentItem;
-(unsigned long long)indexOfCurrentQueueFeederItem;
-(BOOL)setIndexOfCurrentQueueFeederItem:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)resumePlayback:(double)arg1 error:(id*)arg2 ;
-(BOOL)beginInterruption:(id*)arg1 ;
-(BOOL)canBeginInterruption;
-(void)endInterruptionWithStatus:(id)arg1 ;
-(OpaqueFigVisualContextRef)visualContext;
-(void)requestAsyncCGImagesAtTimes:(id)arg1 withTimeOptions:(long long)arg2 withImageOptions:(id)arg3 ;
-(void)cancelAllCGImageRequests;
-(void)registerTimeMarkerObserver:(id)arg1 forItem:(id)arg2 times:(id)arg3 context:(id)arg4 ;
-(void)unregisterTimeMarkerObserver:(id)arg1 forItem:(id)arg2 ;
-(id)bookmarkGroupIDForAVItem:(id)arg1 ;
-(double)bookmarkTimeForAVItem:(id)arg1 ;
-(OpaqueFigPlaybackItemRef)createItemWithURL:(id)arg1 flags:(unsigned)arg2 error:(int*)arg3 ;
-(BOOL)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2 ;
-(void)dequeueDeadItem;
-(void)figPlayerNotificationHandler:(id)arg1 ;
-(id)vibrationPattern;
-(void)setVibrationPattern:(id)arg1 ;
-(void)stepByCount:(int)arg1 ;
-(long long)repeatMode;
-(BOOL)setRepeatMode:(long long)arg1 ;
-(void)setCurrentTime:(double)arg1 options:(long long)arg2 ;
-(void)setCurrentTime:(double)arg1 ;
-(BOOL)muted;
-(float)volume;
-(BOOL)isCurrentItemReady;
-(void)setVolume:(float)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(void)seekToDate:(id)arg1 ;
-(float)rate;
-(id)initWithError:(id*)arg1 ;
-(BOOL)activate:(id*)arg1 ;
-(BOOL)play:(id*)arg1 ;
@end

