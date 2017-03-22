/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileLoader.h>
#import <libobjc.A.dylib/GEOTileServerProxyDelegate.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/GEOExperimentConfigurationObserver.h>

@protocol OS_dispatch_queue, GEOTileLoaderInternalDelegate;
@class NSObject, GEOTilePool, NSMutableSet, GEOTileServerProxy, NSMutableArray, GEOTileLoaderConfiguration, NSString;

@interface GEOTileLoaderInternal : GEOTileLoader <GEOTileServerProxyDelegate, GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver> {

	list<LoadItem, std::__1::allocator<LoadItem> >* _loadItems;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	GEOTilePool* _cache;
	GEOTilePool* _expiringCache;
	unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer> >* _timer;
	NSObject*<OS_dispatch_queue> _loadQ;
	NSMutableSet* _openers;
	SCD_Struct_GE26 _sortPoint;
	GEOTileServerProxy* _proxy;
	Ai _memoryHits;
	Ai _diskHits;
	Ai _networkHits;
	list<_CacheRequester<void ()(unsigned long long)>, std::__1::allocator<_CacheRequester<void ()(unsigned long long)> > >* _shrinkCacheRequesters;
	list<_CacheRequester<void ()(unsigned long long)>, std::__1::allocator<_CacheRequester<void ()(unsigned long long)> > >* _freeableSizeRequesters;
	NSMutableArray* _tileDecoders;
	BOOL _networkActive;
	id<GEOTileLoaderInternalDelegate> _internalDelegate;
	NSObject*<OS_dispatch_queue> _internalDelegateQ;
	GEOTileLoaderConfiguration* _config;
	NSObject*<OS_dispatch_queue> _usageIsolation;
	unordered_map<_GEOTileKey, UsageData, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<std::__1::pair<const _GEOTileKey, UsageData> > >* _usageData;
	unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer> >* _usageTimer;
	BOOL _isUsageTimerScheduled;
	int _rollingBatchId;
	deque<ErrorInfo, std::__1::allocator<ErrorInfo> >* _recentErrors;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)proxy;
-(void)clearAllCaches;
-(void)experimentConfigurationDidChange:(id)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)proxyDidDownloadRegionalResources:(id)arg1 ;
-(void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const GEOTileKey*)arg3 info:(id)arg4 ;
-(void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3 ;
-(void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2 ;
-(void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2 ;
-(void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2 ;
-(void)proxy:(id)arg1 didShrinkDiskCacheByAmount:(unsigned long long)arg2 ;
-(int)memoryHits;
-(int)diskHits;
-(int)networkHits;
-(id)initWithConfiguration:(id)arg1 ;
-(id)descriptionDictionaryRepresentation;
-(void)openForClient:(id)arg1 ;
-(void)closeForClient:(id)arg1 ;
-(void)_updateNetworkActive;
-(void)_cancel:(_list_iterator<LoadItem, void *>*)arg1 err:(id)arg2 ;
-(BOOL)_cancelIfNeeded:(_list_iterator<LoadItem, void *>*)arg1 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 proxyClient:(id)arg4 options:(unsigned long long)arg5 callbackQ:(id)arg6 beginNetwork:(/*^block*/id)arg7 callback:(/*^block*/id)arg8 ;
-(BOOL)reprioritizeKey:(const GEOTileKey*)arg1 forClient:(id)arg2 newPriority:(unsigned)arg3 ;
-(void)_usageTimerFired;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 callbackQ:(id)arg5 beginNetwork:(/*^block*/id)arg6 callback:(/*^block*/id)arg7 ;
-(void)_requestOnlineTiles;
-(void)_timerFired;
-(void)setSortPoint:(const SCD_Struct_GE26*)arg1 ;
-(void)cancelKey:(const GEOTileKey*)arg1 forClient:(id)arg2 ;
-(void)cancelAllForClient:(id)arg1 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 exclusive:(BOOL)arg3 ;
-(void)endPreloadSessionForClient:(id)arg1 ;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(/*^block*/id)arg3 ;
-(void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(/*^block*/id)arg2 ;
-(void)_activeTileGroupChanged:(id)arg1 ;
-(void)_tileEditionChanged:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)registerTileDecoder:(id)arg1 ;
-(void)registerTileLoader:(Class)arg1 ;
-(void)expireTilesWithPredicate:(/*^block*/id)arg1 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)_loadedTile:(id)arg1 forKey:(const GEOTileKey*)arg2 info:(id)arg3 ;
-(void)_loadedTileForLocalKey:(GEOTileKey)arg1 preliminary:(BOOL)arg2 quickly:(BOOL)arg3 tileDecoder:(id)arg4 data:(id)arg5 disburseTile:(/*^block*/id)arg6 ;
-(void)_loadedTile:(id)arg1 forKey:(const GEOTileKey*)arg2 fromOfflinePack:(id)arg3 ;
-(void)setInternalDelegate:(id)arg1 ;
-(id)internalDelegate;
-(void)setInternalDelegateQ:(id)arg1 ;
-(id)internalDelegateQ;
-(id)_findInCache:(const GEOTileKey*)arg1 ;
-(id)cachedTileForKey:(const GEOTileKey*)arg1 ;
@end

