/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLSDBCache;

@interface CLSArchiveRoom : NSObject {

	unsigned long long _policy;
	CLSDBCache* _databaseCache;

}

@property (nonatomic,retain) CLSDBCache * databaseCache;               //@synthesize databaseCache=_databaseCache - In the implementation block
@property (nonatomic,readonly) unsigned long long policy;              //@synthesize policy=_policy - In the implementation block
+(id)defaultArchiveRoom;
+(id)archiveRoomWithName:(id)arg1 ;
+(id)archiveRoomWithName:(id)arg1 andPolicy:(unsigned long long)arg2 ;
-(unsigned long long)policy;
-(void)invalidateMemoryCaches;
-(id)allContextURIsInArchiveRoom;
-(id)lightClueCollectionForArchiveFileContextURI:(id)arg1 ;
-(void)invalidateDiskCaches;
-(id)initWithDiskCacheName:(id)arg1 ;
-(CLSDBCache *)databaseCache;
-(id)relevantContextURIsBetweenDate:(id)arg1 andDate:(id)arg2 ;
-(id)contextURIsAndScoresBetweenDate:(id)arg1 andDate:(id)arg2 ;
-(id)contextURIsAndScoresForContextURIs:(id)arg1 ;
-(BOOL)isRelevantContextURI:(id)arg1 ;
-(id)contextURIsSortedByRelevance:(id)arg1 ;
-(void)enumeratePersonsByFrequencyWithBlock:(/*^block*/id)arg1 ;
-(id)contextURIsForPredicate:(id)arg1 ;
-(id)mealContextURIsWithoutRestaurant;
-(id)bestPeopleForRelationship:(id)arg1 ;
-(id)archiveFileForContextURI:(id)arg1 ;
-(id)_generateCluesForInvestigation:(id)arg1 ;
-(id)distancesToFixedLocationsForInvestigation:(id)arg1 ;
-(id)_archiveClueWithInputTimeClue:(id)arg1 ;
-(id)_archiveClueWithInputPeopleClue:(id)arg1 ;
-(id)_archiveClueWithInputLocationClue:(id)arg1 ;
-(id)_archiveClueWithOutputClue:(id)arg1 ;
-(id)_archiveClueWithMeaningClue:(id)arg1 ;
-(id)_archiveClueWithType:(short)arg1 key:(id)arg2 value:(id)arg3 confidence:(double)arg4 relevance:(double)arg5 data:(id)arg6 ;
-(id)_archivePrimitiveWithType:(short)arg1 name:(id)arg2 data:(id)arg3 ;
-(BOOL)hasArchiveFileForContextURI:(id)arg1 ;
-(id)_lightClueFromArchiveClue:(id)arg1 ;
-(id)clueCollectionForArchiveFile:(id)arg1 ;
-(id)contextURIsSortedByDateForPredicate:(id)arg1 ascending:(BOOL)arg2 ;
-(long long)_yearFromDate:(id)arg1 ;
-(BOOL)archiveInvestigation:(id)arg1 forContextURI:(id)arg2 ;
-(void)removeArchiveFileForContextURI:(id)arg1 ;
-(id)clueCollectionForArchiveFileContextURI:(id)arg1 ;
-(id)contextURIsWithClueKeys:(id)arg1 andValues:(id)arg2 ;
-(id)contextURIsSortedByDateWithClueKeys:(id)arg1 andValues:(id)arg2 ascending:(BOOL)arg3 ;
-(id)yearsToContextURIsWithClueKeys:(id)arg1 andValues:(id)arg2 ;
-(id)distancesToFixedLocationsForLocation:(id)arg1 ;
-(id)allContextURIsToLastModificationDatesInArchiveRoom;
-(id)diskCacheFilePath;
-(void)setDatabaseCache:(CLSDBCache *)arg1 ;
-(id)namesTocontextURIsForTimeEvent:(id)arg1 ;
-(id)birthdayContextURIsForName:(id)arg1 ;
-(id)_sortedCountsAndPersons;
-(id)_sortedCountsAndPersonsForRelationship:(id)arg1 ;
-(void)enumeratePersonsByFrequencyForRelationship:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned long long)_cluePeopleForRelationships:(id)arg1 ;
-(id)_namesAndRelationshipsAndURIs;
-(id)personNamesSortedByFrequency;
-(void)enumerateChildrenByFrequencyWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateParentsByFrequencyWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateSiblingsByFrequencyWithBlock:(/*^block*/id)arg1 ;
-(void)enumeratePersonGroupsByFrequencyWithBlock:(/*^block*/id)arg1 ;
-(void)enumeratePersonModelsByFrequencyForRelationship:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)namesToBirthdaysForNames:(id)arg1 ;
-(id)namesToContextURIsForROI:(id)arg1 ;
-(id)namesToContextURIsForPOI:(id)arg1 ;
-(id)nearbyContextURIsForLocation:(id)arg1 distance:(double)arg2 ;
-(id)hereContextURIsForClueCollection:(id)arg1 ;
-(id)countriesToFarAwayAbroadContextURIs;
-(id)citiesToFarAwayUrbanContextURIs;
-(id)contextURIsWithoutHomeAndWorkForROI:(id)arg1 ;
-(id)parkContextURIsWithoutWater;
-(id)yearsToContextURIsForSeason:(id)arg1 ;
-(id)personHomesToPetContextURIs;
@end
