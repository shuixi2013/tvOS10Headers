/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPhotoSources/TVPhotoSourceServiceDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_source, OS_xpc_object;
@class NSObject, TVSPreferences, NSArray, NSMutableArray, NSDictionary, NSString, TVPhotoSourceService;

@interface TVPhotoScreenSaverCache : NSObject <TVPhotoSourceServiceDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_group> _group;
	NSObject*<OS_dispatch_source> _timerSource;
	TVSPreferences* _screenSaverPrefs;
	NSArray* _photoAssets;
	id _preferencesObserverToken;
	id _sessionIdentifier;
	double _refreshInterval;
	BOOL _isCachingSessionInProgress;
	BOOL _didFinishReceivingPhotoAssets;
	NSMutableArray* _imageProxies;
	NSDictionary* _currentScreenSaverInfo;
	NSMutableArray* _cachedAssets;
	NSString* _screenSaverPhotoSource;
	NSString* _screenSaverCollection;
	NSObject*<OS_xpc_object> _xpcActivity;
	BOOL _cachingEnabled;
	TVPhotoSourceService* _photoSourceService;
	/*^block*/id _photoCacheCompletionBlock;

}

@property (assign) BOOL cachingEnabled;                                              //@synthesize cachingEnabled=_cachingEnabled - In the implementation block
@property (nonatomic,retain) TVPhotoSourceService * photoSourceService;              //@synthesize photoSourceService=_photoSourceService - In the implementation block
@property (nonatomic,copy) id photoCacheCompletionBlock;                             //@synthesize photoCacheCompletionBlock=_photoCacheCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(long long)maxCachedSizeInMB;
-(id)init;
-(id)_init;
-(void)stop;
-(void)start;
-(void)didReceiveIncrementalPhotoAssets:(id)arg1 sessionID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didFinishPhotoAssetsFetchForSession:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)photoCacheCompletionBlock;
-(void)setPhotoCacheCompletionBlock:(id)arg1 ;
-(void)setCachingEnabled:(BOOL)arg1 ;
-(void)_initializeXPCActivity;
-(id)_cachedAssetsFilename;
-(BOOL)_shouldUseIdleScreen;
-(void)_cachingCompletedWithErrorCode:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_checkCollectionAndMaybeStartCaching:(BOOL)arg1 ;
-(void)_scheduleCacheRefresh;
-(void)_beginCachingPhotoAssets:(id)arg1 sessionID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_scheduleTimeoutTimerWithSessionID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(double)_refreshInterval;
-(void)_scheduleCacheRefreshWithInitialDelay:(double)arg1 ;
-(id)_loadCachedAssets;
-(void)_deleteCachedAssetsFile;
-(void)_removeCachedAssetsNotInPhotoAssets:(id)arg1 ;
-(void)_cacheFilesInPhotoAssets:(id)arg1 ;
-(void)_cacheNextAssetForSession:(id)arg1 startIndex:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_cancelTimerSource;
-(id)_photoSourceWithIdentifier:(id)arg1 ;
-(void)_cachePhotoCollection:(id)arg1 session:(id)arg2 shouldHandleFailureMode:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_cachingCompleted;
-(BOOL)_isInternalPhotoProviderForCollection:(id)arg1 ;
-(void)setPhotoSourceService:(TVPhotoSourceService *)arg1 ;
-(void)_saveCachedAssets;
-(BOOL)cachingEnabled;
-(TVPhotoSourceService *)photoSourceService;
-(void)_clearCache;
@end

