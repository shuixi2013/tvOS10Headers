/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class MiroBlueprint, NSURL, NSDate, NSString, PHAsset, PHAssetCollection, MiroAssetClusteringVideoSegment, NSDictionary, NSObject, NSArray, NSSet, MiroPickList, PHFetchResult;

@interface MiroMemory : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasBuildingPosterImageBegun;
	BOOL _storedPosterExists;
	BOOL _isPregenerating;
	MiroBlueprint* _blueprint;
	MiroBlueprint* _customBlueprint;
	NSURL* _localPersistentFile;
	long long _durationRange;
	double _customDuration;
	long long _savedMaxDurationRange;
	long long _schema;
	NSDate* _viewedDate;
	NSString* _localizedTitle;
	NSString* _localizedSubTitle;
	NSString* _keyAssetID;
	PHAsset* _keyAsset;
	PHAssetCollection* _assetCollection;
	MiroAssetClusteringVideoSegment* _titleScene;
	NSDictionary* _freezeRanges;
	NSObject*<OS_dispatch_queue> _saveQueue;
	NSArray* _autoPickedAssetIDs;
	NSSet* _manuallyAddedAssetIDs;
	NSSet* _manuallyRemovedAssetIDs;
	NSDictionary* _assetsRanges;
	MiroPickList* _pickList;
	long long _pickedItemCount;
	double _savedDuration;
	double _maximumPossibleMemoryDuration;
	double _duration;
	NSDictionary* _loadedFreezeRanges;
	NSArray* _featuredPeople;
	long long _allAssetCount;
	Buckets _buckets;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> saveQueue;                    //@synthesize saveQueue=_saveQueue - In the implementation block
@property (retain) NSString * keyAssetID;                                               //@synthesize keyAssetID=_keyAssetID - In the implementation block
@property (nonatomic,retain) NSArray * autoPickedAssetIDs;                              //@synthesize autoPickedAssetIDs=_autoPickedAssetIDs - In the implementation block
@property (nonatomic,retain) NSSet * manuallyAddedAssetIDs;                             //@synthesize manuallyAddedAssetIDs=_manuallyAddedAssetIDs - In the implementation block
@property (nonatomic,retain) NSSet * manuallyRemovedAssetIDs;                           //@synthesize manuallyRemovedAssetIDs=_manuallyRemovedAssetIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * assetsRanges;                               //@synthesize assetsRanges=_assetsRanges - In the implementation block
@property (nonatomic,retain) MiroPickList * pickList;                                   //@synthesize pickList=_pickList - In the implementation block
@property (assign,nonatomic) long long pickedItemCount;                                 //@synthesize pickedItemCount=_pickedItemCount - In the implementation block
@property (assign,nonatomic) double savedDuration;                                      //@synthesize savedDuration=_savedDuration - In the implementation block
@property (assign,nonatomic) double maximumPossibleMemoryDuration;                      //@synthesize maximumPossibleMemoryDuration=_maximumPossibleMemoryDuration - In the implementation block
@property (assign,nonatomic) Buckets buckets;                                           //@synthesize buckets=_buckets - In the implementation block
@property (assign,nonatomic) double duration;                                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) MiroBlueprint * customBlueprint;                           //@synthesize customBlueprint=_customBlueprint - In the implementation block
@property (nonatomic,retain) NSDictionary * loadedFreezeRanges;                         //@synthesize loadedFreezeRanges=_loadedFreezeRanges - In the implementation block
@property (nonatomic,retain) NSArray * featuredPeople;                                  //@synthesize featuredPeople=_featuredPeople - In the implementation block
@property (nonatomic,retain) NSURL * localPersistentFile;                               //@synthesize localPersistentFile=_localPersistentFile - In the implementation block
@property (assign,nonatomic) long long allAssetCount;                                   //@synthesize allAssetCount=_allAssetCount - In the implementation block
@property (assign,nonatomic) long long schema;                                          //@synthesize schema=_schema - In the implementation block
@property (nonatomic,retain) NSDate * viewedDate;                                       //@synthesize viewedDate=_viewedDate - In the implementation block
@property (retain) NSString * localizedTitle;                                           //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (retain) NSString * localizedSubTitle;                                        //@synthesize localizedSubTitle=_localizedSubTitle - In the implementation block
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * displaySubtitle; 
@property (assign,nonatomic) double customDuration;                                     //@synthesize customDuration=_customDuration - In the implementation block
@property (assign,nonatomic) long long durationRange;                                   //@synthesize durationRange=_durationRange - In the implementation block
@property (nonatomic,readonly) long long maxDurationRange;                              //@synthesize savedMaxDurationRange=_savedMaxDurationRange - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset;                                        //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) PHAssetCollection * assetCollection;                       //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) double minimumPossibleMemoryDuration; 
@property (nonatomic,retain) MiroBlueprint * blueprint;                                 //@synthesize blueprint=_blueprint - In the implementation block
@property (assign,nonatomic) BOOL hasBuildingPosterImageBegun;                          //@synthesize hasBuildingPosterImageBegun=_hasBuildingPosterImageBegun - In the implementation block
@property (assign,nonatomic) BOOL storedPosterExists;                                   //@synthesize storedPosterExists=_storedPosterExists - In the implementation block
@property (assign,nonatomic) BOOL isPregenerating;                                      //@synthesize isPregenerating=_isPregenerating - In the implementation block
@property (nonatomic,readonly) BOOL needsTitleCard; 
@property (nonatomic,retain) MiroAssetClusteringVideoSegment * titleScene;              //@synthesize titleScene=_titleScene - In the implementation block
@property (nonatomic,retain) NSDictionary * freezeRanges;                               //@synthesize freezeRanges=_freezeRanges - In the implementation block
@property (nonatomic,readonly) PHFetchResult * allAssets; 
@property (nonatomic,readonly) NSArray * moodIDs; 
@property (nonatomic,readonly) NSString * currentMoodID; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)memoryWithPHAssetCollection:(id)arg1 ;
+(id)memoryWithPHAssetCollection:(id)arg1 keyAsset:(id)arg2 ;
+(id)_saveURL;
+(id)_assetCollectionUniqueLocalIdentifier:(id)arg1 ;
+(id)fileURLWithUuid:(id)arg1 ;
+(id)_displayableUuidWithUuid:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(PHAsset *)keyAsset;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(void)persist;
-(void)_saveMetadata;
-(PHFetchResult *)allAssets;
-(double)minimumPossibleMemoryDuration;
-(double)maximumPossibleMemoryDuration;
-(void)setCustomDuration:(double)arg1 ;
-(MiroBlueprint *)blueprint;
-(void)setBlueprint:(MiroBlueprint *)arg1 ;
-(MiroPickList *)pickList;
-(void)clearFreezeDataForPregenerate;
-(id)pickedAssets;
-(PHAssetCollection *)assetCollection;
-(NSDate *)viewedDate;
-(NSString *)currentMoodID;
-(void)setIsPregenerating:(BOOL)arg1 ;
-(void)unPersist;
-(long long)durationRange;
-(double)customDuration;
-(void)invalidateCustomDuration;
-(NSArray *)moodIDs;
-(void)setViewedDate:(NSDate *)arg1 ;
-(void)setDurationRange:(long long)arg1 ;
-(long long)maxDurationRange;
-(MiroBlueprint *)customBlueprint;
-(void)setHasBuildingPosterImageBegun:(BOOL)arg1 ;
-(NSString *)localizedSubTitle;
-(id)allAssetsAsArray;
-(NSDictionary *)loadedFreezeRanges;
-(NSURL *)localPersistentFile;
-(Buckets)buckets;
-(BOOL)needsTitleCard;
-(long long)pickedItemCount;
-(BOOL)wasManuallyRemoved:(id)arg1 ;
-(BOOL)wasManuallyAdded:(id)arg1 ;
-(NSString *)displaySubtitle;
-(void)setDisplaySubtitle:(NSString *)arg1 ;
-(id)pickedLocallyAvailableScenes;
-(BOOL)isPosterEqual:(id)arg1 ;
-(BOOL)isPersistable;
-(void)setAssetCollection:(PHAssetCollection *)arg1 ;
-(void)persistWithoutFreeze;
-(id)currentVideoFreezeRangeForAssetID:(id)arg1 index:(int)arg2 ;
-(NSDictionary *)freezeRanges;
-(id)trimRangesForAsset:(id)arg1 ;
-(void)setFreezeRanges:(NSDictionary *)arg1 ;
-(void)setSaveQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_persistentRangesChanged:(id)arg1 ;
-(NSArray *)autoPickedAssetIDs;
-(void)setAutoPickedAssetIDs:(NSArray *)arg1 ;
-(NSSet *)manuallyAddedAssetIDs;
-(void)setManuallyAddedAssetIDs:(NSSet *)arg1 ;
-(NSSet *)manuallyRemovedAssetIDs;
-(void)setManuallyRemovedAssetIDs:(NSSet *)arg1 ;
-(NSString *)keyAssetID;
-(void)setKeyAssetID:(NSString *)arg1 ;
-(void)setLoadedFreezeRanges:(NSDictionary *)arg1 ;
-(void)_initAllAssetMetadata;
-(id)freezeRangesToEncode;
-(void)_writeMetadata:(id)arg1 ;
-(void)setPickList:(MiroPickList *)arg1 ;
-(NSObject*<OS_dispatch_queue>)saveQueue;
-(void)_deleteMetadata;
-(void)setLocalizedSubTitle:(NSString *)arg1 ;
-(void)setLocalPersistentFile:(NSURL *)arg1 ;
-(void)setRanges:(id)arg1 replaceType:(unsigned long long)arg2 forAssetID:(id)arg3 ;
-(id)rangesWithType:(unsigned long long)arg1 forAssetID:(id)arg2 ;
-(double)titleCardDuration;
-(double)savedDuration;
-(BOOL)isPregenerating;
-(void)setCustomBlueprint:(MiroBlueprint *)arg1 ;
-(BOOL)memoryIsPeopleMemory;
-(void)setPickedItemCount:(long long)arg1 ;
-(void)_updateAddedRemovedLists;
-(MiroAssetClusteringVideoSegment *)titleScene;
-(void)setTitleScene:(MiroAssetClusteringVideoSegment *)arg1 ;
-(NSArray *)featuredPeople;
-(NSDictionary *)assetsRanges;
-(void)invalidateDuration;
-(void)manuallyModify:(id)arg1 changeInSegmentCount:(long long)arg2 ;
-(void)manuallyAdd:(id)arg1 remove:(id)arg2 ;
-(BOOL)assetHasFaces:(id)arg1 ;
-(BOOL)memoryFeaturesPersonInAsset:(id)arg1 ;
-(id)featuredPersonsInMemoryAsFaceRangesInAsset:(id)arg1 ;
-(long long)schema;
-(void)setSchema:(long long)arg1 ;
-(BOOL)hasBuildingPosterImageBegun;
-(BOOL)storedPosterExists;
-(void)setStoredPosterExists:(BOOL)arg1 ;
-(void)setAssetsRanges:(NSDictionary *)arg1 ;
-(void)setSavedDuration:(double)arg1 ;
-(void)setMaximumPossibleMemoryDuration:(double)arg1 ;
-(void)setBuckets:(Buckets)arg1 ;
-(void)setFeaturedPeople:(NSArray *)arg1 ;
-(long long)allAssetCount;
-(void)setAllAssetCount:(long long)arg1 ;
@end

