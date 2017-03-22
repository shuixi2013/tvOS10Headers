/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SBCPlaybackPositionSyncService, SBCPlaybackPositionDomain;

@interface MPUbiquitousPlaybackPositionController : NSObject {

	BOOL _databaseHasBookmarkableContents;
	BOOL _isServiceActive;
	BOOL _externallyActive;
	BOOL _beganUsingPlaybackPositionMetadata;
	BOOL _applicationBecomingActive;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _serviceQueue;
	SBCPlaybackPositionSyncService* _uppServiceProxy;
	SBCPlaybackPositionDomain* _uppDomain;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> serviceQueue;                          //@synthesize serviceQueue=_serviceQueue - In the implementation block
@property (nonatomic,retain) SBCPlaybackPositionSyncService * uppServiceProxy;                            //@synthesize uppServiceProxy=_uppServiceProxy - In the implementation block
@property (nonatomic,retain) SBCPlaybackPositionDomain * uppDomain;                                       //@synthesize uppDomain=_uppDomain - In the implementation block
@property (assign,getter=isServiceActive,nonatomic) BOOL serviceActive;                                   //@synthesize isServiceActive=_isServiceActive - In the implementation block
@property (assign,getter=isServiceActive,nonatomic) BOOL beganUsingPlaybackPositionMetadata;              //@synthesize beganUsingPlaybackPositionMetadata=_beganUsingPlaybackPositionMetadata - In the implementation block
@property (assign,nonatomic) BOOL databaseHasBookmarkableContents;                                        //@synthesize databaseHasBookmarkableContents=_databaseHasBookmarkableContents - In the implementation block
@property (nonatomic,readonly) BOOL applicationBecomingActive;                                            //@synthesize applicationBecomingActive=_applicationBecomingActive - In the implementation block
@property (assign,nonatomic) BOOL externallyActive;                                                       //@synthesize externallyActive=_externallyActive - In the implementation block
+(id)sharedUbiquitousPlaybackPositionController;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(long long)arg1 isCheckpoint:(BOOL)arg2 ;
-(void)_defaultMediaLibraryDidChangeNotification:(id)arg1 ;
-(void)_applicationDidEnterForegroundNotification:(id)arg1 ;
-(void)_onServiceQueue_updateBoomkarkabilityState;
-(id)_onServiceQueue_connectedUPPServiceProxy;
-(void)_onServiceQueue_resignActiveService;
-(void)_onServiceQueue_updateActiveServiceIfNeeded;
-(BOOL)_onQueue_shouldBeActive;
-(void)_onServiceQueue_becomeActiveService;
-(BOOL)_onQueue_isEnabled;
-(id)_playbackPositionEntityWithValuesFromMusicLibraryTrackPersistentID:(long long)arg1 ;
-(void)_onServiceQueue_setDatabaseHasBookmarkableContents:(BOOL)arg1 ;
-(SBCPlaybackPositionSyncService *)uppServiceProxy;
-(void)setDatabaseHasBookmarkableContents:(BOOL)arg1 ;
-(void)beginUsingPlaybackPositionMetadata;
-(void)setExternallyActive:(BOOL)arg1 ;
-(BOOL)externallyActive;
-(BOOL)databaseHasBookmarkableContents;
-(BOOL)isServiceActive;
-(BOOL)isServiceActive;
-(void)setServiceActive:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)serviceQueue;
-(void)setUppServiceProxy:(SBCPlaybackPositionSyncService *)arg1 ;
-(SBCPlaybackPositionDomain *)uppDomain;
-(void)setUppDomain:(SBCPlaybackPositionDomain *)arg1 ;
-(void)setBeganUsingPlaybackPositionMetadata:(BOOL)arg1 ;
-(BOOL)applicationBecomingActive;
@end

