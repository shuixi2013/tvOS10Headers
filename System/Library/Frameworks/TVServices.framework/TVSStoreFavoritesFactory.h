/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVSStoreFavoritesFactoryDataSource;
@class TVSStorePlaybackProgressFactory;

@interface TVSStoreFavoritesFactory : NSObject {

	id<TVSStoreFavoritesFactoryDataSource> _dataSource;
	TVSStorePlaybackProgressFactory* _progressFactory;

}

@property (nonatomic,retain) TVSStorePlaybackProgressFactory * progressFactory;                     //@synthesize progressFactory=_progressFactory - In the implementation block
@property (assign,nonatomic,__weak) id<TVSStoreFavoritesFactoryDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(id)_itemIDsFromDictionaries:(id)arg1 allowingUnknownClasses:(BOOL)arg2 ;
+(id)_itemIDFromDictionary:(id)arg1 allowingUnknownClasses:(BOOL)arg2 ;
+(id)resolveConflictsBetweenOriginalDictionaries:(id)arg1 andUpdatedDictionaries:(id)arg2 ;
-(void)setDataSource:(id<TVSStoreFavoritesFactoryDataSource>)arg1 ;
-(id)init;
-(id<TVSStoreFavoritesFactoryDataSource>)dataSource;
-(id)initWithBookmarkService:(id)arg1 ;
-(void)_fetchLookupItemsForAdamIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)_contentCategoryForLookupItem:(id)arg1 ;
-(id)identifierForCategory:(unsigned long long)arg1 ;
-(double)_coverArtAspectRatioForCategory:(unsigned long long)arg1 ;
-(id)_itemIDFromDictionary:(id)arg1 ;
-(unsigned long long)_categoryFromDictionary:(id)arg1 ;
-(id)itemIDsFromDictionaries:(id)arg1 ;
-(id)_contentItemWithLookupItem:(id)arg1 ;
-(void)_updateShowDictionary:(id)arg1 withLookupItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(TVSStorePlaybackProgressFactory *)progressFactory;
-(void)_fetchLookupItemForAdamID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)constructLightWeightContentItemsFromDictionaries:(id)arg1 ;
-(void)constructContentItemsFromDictionaries:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateEpisodeDataForFavoriteShows:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)sortContentItems:(id)arg1 usingSortMode:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)highestUserOrderInDictionaries:(id)arg1 ;
-(id)dictionariesFromFavorites:(id)arg1 ;
-(id)showInfoForContentItem:(id)arg1 ;
-(void)constructContentItemForAdamID:(id)arg1 withUserOrder:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setProgressFactory:(TVSStorePlaybackProgressFactory *)arg1 ;
@end

