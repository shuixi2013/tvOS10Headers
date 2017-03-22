/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MPCRadioAVItem.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@class _MPCRadioStreamMetadata, NSArray, NSData, NSString;

@interface MPCRadioStreamTrackAVItem : MPCRadioAVItem <AVAssetResourceLoaderDelegate> {

	_MPCRadioStreamMetadata* _adamIDMetadata;
	long long _albumStoreID;
	NSArray* _buyOffers;
	_MPCRadioStreamMetadata* _effectiveMetadata;
	NSData* _jingleTimedMetadata;
	double _playStartDateTimeSinceReferenceDate;
	NSData* _previousAdamIDBlob;
	_MPCRadioStreamMetadata* _radioStreamTrackMetadata;
	long long _storeID;
	_MPCRadioStreamMetadata* _timedMetadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPlayerItem:(id)arg1 ;
-(long long)_expectedPlaybackMode;
-(void)loadAssetAndPlayerItem;
-(long long)storeItemInt64ID;
-(id)artist;
-(BOOL)isExplicitTrack;
-(BOOL)isAlwaysLive;
-(id)mainTitle;
-(long long)albumStoreID;
-(id)buyOffers;
-(BOOL)isLikedStateEnabled;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(id)album;
-(id)_artworkCollection;
-(double)_expectedDuration;
-(BOOL)_hasLyrics;
-(long long)albumBuyButtonType;
-(id)albumBuyButtonText;
-(BOOL)supportsRadioTrackActions;
-(id)_createMetadataForRadioStreamTrack;
-(void)_reloadMetadataAndPostNotificationsIfNeeded:(BOOL)arg1 ;
-(id)streamTrack;
-(float)_maximumBitRateForNetworkType:(long long)arg1 ;
-(id)effectiveArtworkCollection;
-(void)_getCurrentTimedMetadata:(id*)arg1 pings:(id*)arg2 adamIDBlob:(id*)arg3 jingleTimedMetadata:(id*)arg4 ;
-(void)_handleStoreIDDidChange;
-(void)_updateEffectiveMetadataAndPostNotifications:(BOOL)arg1 ;
-(id)initWithStreamTrack:(id)arg1 ;
-(id)mpcReporting_jingleTimedMetadata;
-(BOOL)mpcReporting_shouldUseRelativeTimePositions;
@end

