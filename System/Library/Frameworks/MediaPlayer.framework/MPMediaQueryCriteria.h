/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSArray, NSSet, NSDictionary;

@interface MPMediaQueryCriteria : NSObject <NSCopying> {

	NSMutableSet* _filterPredicates;
	unsigned long long _entityOrder;
	long long _groupingType;
	unsigned long long _entityLimit;
	NSArray* _orderingProperties;
	NSSet* _itemPropertiesToFetch;
	NSSet* _collectionPropertiesToFetch;
	BOOL _useSections;
	BOOL _ignoreSystemFilterPredicates;
	BOOL _ignoreRestrictionsPredicates;
	BOOL _includeNonLibraryEntities;
	BOOL _includeEntitiesWithBlankNames;
	NSDictionary* _orderingDirectionMappings;

}

@property (nonatomic,readonly) BOOL specifiesPlaylistItems; 
@property (nonatomic,readonly) BOOL excludesEntitiesWithBlankNames; 
@property (nonatomic,copy) NSSet * filterPredicates;                              //@synthesize filterPredicates=_filterPredicates - In the implementation block
@property (nonatomic,copy) NSSet * itemPropertiesToFetch;                         //@synthesize itemPropertiesToFetch=_itemPropertiesToFetch - In the implementation block
@property (nonatomic,copy) NSSet * collectionPropertiesToFetch;                   //@synthesize collectionPropertiesToFetch=_collectionPropertiesToFetch - In the implementation block
@property (assign,nonatomic) long long groupingType;                              //@synthesize groupingType=_groupingType - In the implementation block
@property (assign,nonatomic) unsigned long long entityLimit;                      //@synthesize entityLimit=_entityLimit - In the implementation block
@property (assign,nonatomic) unsigned long long entityOrder;                      //@synthesize entityOrder=_entityOrder - In the implementation block
@property (nonatomic,copy) NSArray * orderingProperties;                          //@synthesize orderingProperties=_orderingProperties - In the implementation block
@property (assign,nonatomic) BOOL ignoreSystemFilterPredicates;                   //@synthesize ignoreSystemFilterPredicates=_ignoreSystemFilterPredicates - In the implementation block
@property (assign,nonatomic) BOOL ignoreRestrictionsPredicates;                   //@synthesize ignoreRestrictionsPredicates=_ignoreRestrictionsPredicates - In the implementation block
@property (assign,nonatomic) BOOL includeNonLibraryEntities;                      //@synthesize includeNonLibraryEntities=_includeNonLibraryEntities - In the implementation block
@property (assign,nonatomic) BOOL includeEntitiesWithBlankNames;                  //@synthesize includeEntitiesWithBlankNames=_includeEntitiesWithBlankNames - In the implementation block
@property (nonatomic,copy) NSDictionary * orderingDirectionMappings;              //@synthesize orderingDirectionMappings=_orderingDirectionMappings - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addFilterPredicate:(id)arg1 ;
-(void)setGroupingType:(long long)arg1 ;
-(void)setEntityLimit:(unsigned long long)arg1 ;
-(void)setIgnoreRestrictionsPredicates:(BOOL)arg1 ;
-(void)setFilterPredicates:(NSSet *)arg1 ;
-(long long)groupingType;
-(NSSet *)filterPredicates;
-(unsigned long long)entityOrder;
-(void)addFilterPredicates:(id)arg1 ;
-(void)setEntityOrder:(unsigned long long)arg1 ;
-(id)predicateForProperty:(id)arg1 ;
-(BOOL)excludesEntitiesWithBlankNames;
-(BOOL)specifiesPlaylistItems;
-(void)removeFilterPredicate:(id)arg1 ;
-(unsigned long long)entityLimit;
-(BOOL)includeEntitiesWithBlankNames;
-(void)setIncludeEntitiesWithBlankNames:(BOOL)arg1 ;
-(BOOL)ignoreSystemFilterPredicates;
-(void)setIgnoreSystemFilterPredicates:(BOOL)arg1 ;
-(BOOL)ignoreRestrictionsPredicates;
-(NSSet *)itemPropertiesToFetch;
-(void)setItemPropertiesToFetch:(NSSet *)arg1 ;
-(NSSet *)collectionPropertiesToFetch;
-(void)setCollectionPropertiesToFetch:(NSSet *)arg1 ;
-(void)setOrderingProperties:(NSArray *)arg1 ;
-(id)ML3ItemsQueryInLibrary:(id)arg1 ;
-(id)ML3CollectionsQueryInLibrary:(id)arg1 ;
-(NSArray *)orderingProperties;
-(NSDictionary *)orderingDirectionMappings;
-(id)ML3OrderingTermsForMPOrderingProperties:(id)arg1 directionalityMapping:(id)arg2 entityClass:(Class)arg3 ;
-(id)ML3ItemsQueryInLibrary:(id)arg1 orderingTerms:(id)arg2 nameBlankProperty:(id)arg3 ;
-(id)ML3OrderingTermsForGroupingType:(long long)arg1 ;
-(BOOL)includeNonLibraryEntities;
-(void)removePredicatesForProperty:(id)arg1 ;
-(void)setIncludeNonLibraryEntities:(BOOL)arg1 ;
-(void)setOrderingDirectionMappings:(NSDictionary *)arg1 ;
@end

