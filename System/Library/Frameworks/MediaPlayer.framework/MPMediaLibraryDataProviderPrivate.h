/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MPMediaLibraryDataProviderPrivate <MPMediaLibraryDataProvider>
@property (nonatomic,readonly) NSString * databasePath; 
@property (nonatomic,readonly) long long playbackHistoryPlaylistPersistentID; 
@property (nonatomic,readonly) BOOL isGeniusEnabled; 
@property (nonatomic,readonly) NSArray * preferredAudioLanguages; 
@property (nonatomic,readonly) NSArray * preferredSubtitleLanguages; 
@property (nonatomic,readonly) id<MPArtworkDataSource> completeMyCollectionArtworkDataSource; 
@property (nonatomic,readonly) NSArray * localizedSectionIndexTitles; 
@optional
-(id)lastModifiedDate;
-(NSArray *)preferredAudioLanguages;
-(NSArray *)preferredSubtitleLanguages;
-(id<MPArtworkDataSource>)completeMyCollectionArtworkDataSource;
-(BOOL)isGeniusEnabled;
-(BOOL)performTransactionWithBlock:(/*^block*/id)arg1;
-(void)addNonLibraryOwnedPlaylistWithGlobalID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)performStoreItemLibraryImport:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(BOOL)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long*)arg4;
-(BOOL)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
-(void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;
-(BOOL)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5;
-(void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(BOOL)itemExistsWithPersistentID:(unsigned long long)arg1;
-(BOOL)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
-(id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;
-(id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
-(void)sdk_addItemWithOpaqueID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(BOOL)hasMediaOfType:(unsigned long long)arg1;
-(BOOL)hasGeniusMixes;
-(BOOL)hasUbiquitousBookmarkableItems;
-(BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1;
-(long long)itemPersistentIDForStoreID:(long long)arg1;
-(id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
-(NSArray *)localizedSectionIndexTitles;
-(long long)playbackHistoryPlaylistPersistentID;
-(long long)addPlaylistWithValuesForProperties:(id)arg1;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
-(id)valueForDatabaseProperty:(id)arg1;
-(BOOL)deleteItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2;
-(BOOL)removeItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2;
-(BOOL)removePlaylistWithIdentifier:(long long)arg1;
-(void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3;
-(void)clearLocationPropertiesOfItemWithIdentifier:(long long)arg1;
-(void)geniusItemsForSeedItem:(id)arg1 completion:(/*^block*/id)arg2;
-(void)performReadTransactionWithBlock:(/*^block*/id)arg1;
-(BOOL)isCurrentThreadInTransaction;
-(BOOL)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
-(long long)sdk_addPlaylistWithValuesForProperties:(id)arg1;
-(void)addPlaylistStoreItemsForLookupItems:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addTracksToMyLibrary:(id)arg1;
-(BOOL)recordPlayEventForAlbumPersistentID:(long long)arg1;
-(BOOL)recordPlayEventForPlaylistPersistentID:(long long)arg1;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(long long)arg4 completionBlock:(/*^block*/id)arg5;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4;
-(void)setItemsWithIdentifiers:(id)arg1 forPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3;
-(void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3;
-(void)addItemsWithIdentifiers:(id)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3;
-(void)sdk_addItemWithOpaqueIdentifier:(id)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3;
-(void)removeItemsAtIndexes:(id)arg1 inPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3;
-(void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
-(void)removeFirstItemFromPlaylistWithIdentifier:(long long)arg1;
-(void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4;
-(void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3;
-(void)releaseGeniusClusterPlaylist:(void*)arg1;
-(void*)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 error:(id*)arg3;
-(long long*)generateItemIdentifiersForGeniusClusterPlaylist:(void*)arg1 count:(unsigned long long*)arg2 error:(id*)arg3;
-(void)updateEntitesToCurrentRevision;
-(BOOL)supportsEntityChangeTrackingForMediaEntityType:(long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class*)arg3;
-(NSString *)databasePath;

@end

