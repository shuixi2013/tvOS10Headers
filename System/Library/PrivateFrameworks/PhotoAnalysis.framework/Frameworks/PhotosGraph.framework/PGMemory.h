/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class PGManager, NSDate, PHAssetCollection, PHAsset, NSString, CLLocation, NSSet, PGMemoryDebug, NSDictionary;

@interface PGMemory : NSObject <NSCoding> {

	PGManager* _manager;
	NSDate* _creationDate;
	PHAssetCollection* _assetCollection;
	PHAssetCollection* _curatedAssetCollection;
	PHAsset* _curatedKeyAsset;
	NSDate* _localStartDate;
	NSDate* _localEndDate;
	NSDate* _universalStartDate;
	NSDate* _universalEndDate;
	NSString* _title;
	NSString* _subtitle;
	long long _titleCategory;
	double _score;
	long long _sourceType;
	unsigned long long _duration;
	unsigned long long _category;
	long long _subcategory;
	unsigned long long _matchedTypes;
	NSDate* _matchedLocalDate;
	CLLocation* _matchedLocation;
	NSSet* _matchedPeople;
	NSString* _matchedEventName;
	unsigned long long _aggregatedVersions;
	NSString* _meUUID;
	PGMemoryDebug* _debug;
	NSSet* _momentIDs;
	NSDictionary* _numberOfAssetsByMomentIDs;

}

@property (nonatomic,retain) NSDate * creationDate;                                   //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) PHAssetCollection * curatedAssetCollection;              //@synthesize curatedAssetCollection=_curatedAssetCollection - In the implementation block
@property (nonatomic,retain) PHAsset * curatedKeyAsset;                               //@synthesize curatedKeyAsset=_curatedKeyAsset - In the implementation block
@property (nonatomic,retain) NSDate * localStartDate;                                 //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,retain) NSDate * localEndDate;                                   //@synthesize localEndDate=_localEndDate - In the implementation block
@property (nonatomic,retain) NSDate * universalStartDate;                             //@synthesize universalStartDate=_universalStartDate - In the implementation block
@property (nonatomic,retain) NSDate * universalEndDate;                               //@synthesize universalEndDate=_universalEndDate - In the implementation block
@property (nonatomic,retain) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                     //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) double score;                                            //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) long long sourceType;                                    //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) unsigned long long duration;                             //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long category;                             //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) long long subcategory;                                   //@synthesize subcategory=_subcategory - In the implementation block
@property (assign,nonatomic) unsigned long long matchedTypes;                         //@synthesize matchedTypes=_matchedTypes - In the implementation block
@property (nonatomic,retain) NSDate * matchedLocalDate;                               //@synthesize matchedLocalDate=_matchedLocalDate - In the implementation block
@property (nonatomic,retain) CLLocation * matchedLocation;                            //@synthesize matchedLocation=_matchedLocation - In the implementation block
@property (nonatomic,retain) NSSet * matchedPeople;                                   //@synthesize matchedPeople=_matchedPeople - In the implementation block
@property (nonatomic,retain) NSString * matchedEventName;                             //@synthesize matchedEventName=_matchedEventName - In the implementation block
@property (assign,nonatomic) unsigned short graphSchemaVersion; 
@property (assign,nonatomic) unsigned short curationAlgorithmsVersion; 
@property (assign,nonatomic) unsigned short relatedAlgorithmsVersion; 
@property (assign,nonatomic) unsigned short memoriesAlgorithmsVersion; 
@property (nonatomic,retain) NSString * meUUID;                                       //@synthesize meUUID=_meUUID - In the implementation block
@property (nonatomic,retain) NSSet * momentIDs;                                       //@synthesize momentIDs=_momentIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * numberOfAssetsByMomentIDs;                //@synthesize numberOfAssetsByMomentIDs=_numberOfAssetsByMomentIDs - In the implementation block
@property (assign,nonatomic) long long titleCategory;                                 //@synthesize titleCategory=_titleCategory - In the implementation block
@property (assign,nonatomic,__weak) PGManager * manager;                              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) unsigned long long aggregatedVersions;                 //@synthesize aggregatedVersions=_aggregatedVersions - In the implementation block
@property (nonatomic,retain) PGMemoryDebug * debug;                                   //@synthesize debug=_debug - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * assetCollection;                   //@synthesize assetCollection=_assetCollection - In the implementation block
+(id)stringForSourceType:(long long)arg1 ;
+(id)stringForCategory:(unsigned long long)arg1 ;
+(id)stringForSubcategory:(long long)arg1 ;
+(unsigned long long)pgCategoryFromPHCategory:(long long)arg1 ;
+(long long)pgSubcategoryFromPHSubcategory:(long long)arg1 ;
+(long long)phCategoryFromPGCategory:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)duration;
-(void)setCategory:(unsigned long long)arg1 ;
-(unsigned long long)category;
-(NSString *)title;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
-(PGMemoryDebug *)debug;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(void)setScore:(double)arg1 ;
-(double)score;
-(long long)subcategory;
-(void)setSubcategory:(long long)arg1 ;
-(id)initWithAssetCollection:(id)arg1 ;
-(PGManager *)manager;
-(void)setManager:(PGManager *)arg1 ;
-(PHAssetCollection *)assetCollection;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(void)setMatchedEventName:(NSString *)arg1 ;
-(void)setTitleCategory:(long long)arg1 ;
-(void)setCuratedAssetCollection:(PHAssetCollection *)arg1 ;
-(void)setLocalStartDate:(NSDate *)arg1 ;
-(void)setLocalEndDate:(NSDate *)arg1 ;
-(void)setGraphSchemaVersion:(unsigned short)arg1 ;
-(void)setRelatedAlgorithmsVersion:(unsigned short)arg1 ;
-(unsigned short)graphSchemaVersion;
-(unsigned short)relatedAlgorithmsVersion;
-(unsigned long long)aggregatedVersions;
-(void)setMatchedLocalDate:(NSDate *)arg1 ;
-(void)setMatchedLocation:(CLLocation *)arg1 ;
-(void)setMatchedPeople:(NSSet *)arg1 ;
-(void)setUniversalStartDate:(NSDate *)arg1 ;
-(void)setUniversalEndDate:(NSDate *)arg1 ;
-(void)setDebug:(PGMemoryDebug *)arg1 ;
-(void)setMeUUID:(NSString *)arg1 ;
-(NSSet *)momentIDs;
-(void)setMomentIDs:(NSSet *)arg1 ;
-(NSDictionary *)numberOfAssetsByMomentIDs;
-(void)setNumberOfAssetsByMomentIDs:(NSDictionary *)arg1 ;
-(void)setMatchedTypes:(unsigned long long)arg1 ;
-(NSSet *)matchedPeople;
-(NSString *)matchedEventName;
-(void)setCurationAlgorithmsVersion:(unsigned short)arg1 ;
-(void)setMemoriesAlgorithmsVersion:(unsigned short)arg1 ;
-(id)_localIdentifiersInAssetCollection:(id)arg1 ;
-(unsigned short)curationAlgorithmsVersion;
-(unsigned short)memoriesAlgorithmsVersion;
-(PHAssetCollection *)curatedAssetCollection;
-(PHAsset *)curatedKeyAsset;
-(void)setCuratedKeyAsset:(PHAsset *)arg1 ;
-(unsigned long long)matchedTypes;
-(NSDate *)matchedLocalDate;
-(CLLocation *)matchedLocation;
-(NSString *)meUUID;
-(long long)titleCategory;
@end

