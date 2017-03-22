/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/ItemStylePickerDataSource.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface EffectDataSource : NSObject <ItemStylePickerDataSource> {

	BOOL _generatingThumbs;
	BOOL _generatingThumbsInterrupted;
	int _filterClientRefCount;
	NSMutableArray* _factoryFilterIDsArray;
	NSMutableDictionary* _factoryFilterNamesDict;
	NSMutableDictionary* _factoryFilterInternalNamesDict;
	NSMutableArray* _allFilterIDsArray;
	NSMutableDictionary* _allFilterNamesDict;
	NSMutableDictionary* _allFilterPreviewsDict;
	NSMutableDictionary* _allFilterDirtyPreviewsDict;
	NSMutableArray* _factoryTitleIDsArray;
	NSMutableDictionary* _factoryTitleNamesDict;
	NSMutableDictionary* _factoryTitleInternalNamesDict;
	NSMutableArray* _allTitleIDsArray;
	NSMutableDictionary* _allTitleNamesDict;
	NSMutableDictionary* _allTitlePreviewsDict;
	NSMutableDictionary* _allTitleDirtyPreviewsDict;
	NSMutableArray* _factoryGeneratorIDsArray;
	NSMutableDictionary* _factoryGeneratorNamesDict;
	NSMutableArray* _allGeneratorIDsArray;
	NSMutableDictionary* _allGeneratorNamesDict;
	NSMutableDictionary* _allGeneratorPreviewsDict;
	NSMutableDictionary* _allGeneratorDirtyPreviewsDict;
	NSMutableArray* _factoryTransitionIDsArray;
	NSMutableDictionary* _factoryTransitionNamesDict;
	NSMutableArray* _allTransitionIDsArray;
	NSMutableDictionary* _allTransitionNamesDict;
	NSMutableDictionary* _allTransitionPreviewsDict;
	NSMutableDictionary* _allTransitionDirtyPreviewsDict;

}

@property (nonatomic,retain) NSMutableArray * factoryFilterIDsArray;                                             //@synthesize factoryFilterIDsArray=_factoryFilterIDsArray - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * factoryFilterNamesDict;                                       //@synthesize factoryFilterNamesDict=_factoryFilterNamesDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * factoryFilterInternalNamesDict;                               //@synthesize factoryFilterInternalNamesDict=_factoryFilterInternalNamesDict - In the implementation block
@property (nonatomic,retain) NSMutableArray * allFilterIDsArray;                                                 //@synthesize allFilterIDsArray=_allFilterIDsArray - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allFilterNamesDict;                                           //@synthesize allFilterNamesDict=_allFilterNamesDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allFilterPreviewsDict;                                        //@synthesize allFilterPreviewsDict=_allFilterPreviewsDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allFilterDirtyPreviewsDict;                                   //@synthesize allFilterDirtyPreviewsDict=_allFilterDirtyPreviewsDict - In the implementation block
@property (assign) int filterClientRefCount;                                                                     //@synthesize filterClientRefCount=_filterClientRefCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * factoryTitleIDsArray;                                              //@synthesize factoryTitleIDsArray=_factoryTitleIDsArray - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * factoryTitleNamesDict;                                        //@synthesize factoryTitleNamesDict=_factoryTitleNamesDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * factoryTitleInternalNamesDict;                                //@synthesize factoryTitleInternalNamesDict=_factoryTitleInternalNamesDict - In the implementation block
@property (nonatomic,retain) NSMutableArray * allTitleIDsArray;                                                  //@synthesize allTitleIDsArray=_allTitleIDsArray - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allTitleNamesDict;                                            //@synthesize allTitleNamesDict=_allTitleNamesDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allTitlePreviewsDict;                                         //@synthesize allTitlePreviewsDict=_allTitlePreviewsDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allTitleDirtyPreviewsDict;                                    //@synthesize allTitleDirtyPreviewsDict=_allTitleDirtyPreviewsDict - In the implementation block
@property (nonatomic,retain) NSMutableArray * factoryGeneratorIDsArray;                                          //@synthesize factoryGeneratorIDsArray=_factoryGeneratorIDsArray - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * factoryGeneratorNamesDict;                                    //@synthesize factoryGeneratorNamesDict=_factoryGeneratorNamesDict - In the implementation block
@property (nonatomic,retain) NSMutableArray * allGeneratorIDsArray;                                              //@synthesize allGeneratorIDsArray=_allGeneratorIDsArray - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allGeneratorNamesDict;                                        //@synthesize allGeneratorNamesDict=_allGeneratorNamesDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allGeneratorPreviewsDict;                                     //@synthesize allGeneratorPreviewsDict=_allGeneratorPreviewsDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allGeneratorDirtyPreviewsDict;                                //@synthesize allGeneratorDirtyPreviewsDict=_allGeneratorDirtyPreviewsDict - In the implementation block
@property (nonatomic,retain) NSMutableArray * factoryTransitionIDsArray;                                         //@synthesize factoryTransitionIDsArray=_factoryTransitionIDsArray - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * factoryTransitionNamesDict;                                   //@synthesize factoryTransitionNamesDict=_factoryTransitionNamesDict - In the implementation block
@property (nonatomic,retain) NSMutableArray * allTransitionIDsArray;                                             //@synthesize allTransitionIDsArray=_allTransitionIDsArray - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allTransitionNamesDict;                                       //@synthesize allTransitionNamesDict=_allTransitionNamesDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allTransitionPreviewsDict;                                    //@synthesize allTransitionPreviewsDict=_allTransitionPreviewsDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allTransitionDirtyPreviewsDict;                               //@synthesize allTransitionDirtyPreviewsDict=_allTransitionDirtyPreviewsDict - In the implementation block
@property (assign,getter=isGeneratingThumbs,nonatomic) BOOL generatingThumbs;                                    //@synthesize generatingThumbs=_generatingThumbs - In the implementation block
@property (assign,getter=isGeneratingThumbsInterrupted,nonatomic) BOOL generatingThumbsInterrupted;              //@synthesize generatingThumbsInterrupted=_generatingThumbsInterrupted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDataSource;
-(id)init;
-(long long)numberOfItems;
-(id)getFactoryFilterIDs;
-(id)getAllFilterNames;
-(id)getFactoryFilterNames;
-(id)getAllFilterIDs;
-(id)getAllTitleIDs;
-(id)getAllTransitionIDs;
-(id)getAllGeneratorIDs;
-(void)initAllEffectPreviewsForImage:(id)arg1 effectType:(id)arg2 ;
-(void)dirtyAllFilterPreviewsIncludingNone:(BOOL)arg1 ;
-(void)dirtyAllTitlePreviewsIncludingNone:(BOOL)arg1 ;
-(void)generatePreviewImageForEffectID:(id)arg1 currentTime:(SCD_Struct_Mi1)arg2 effectRange:(SCD_Struct_Mi11)arg3 rawImage:(id)arg4 previewSize:(CGSize)arg5 completion:(/*^block*/id)arg6 ;
-(id)getFactoryTitleIDs;
-(id)getAllTitleNames;
-(id)getFactoryTitleNames;
-(id)getFactoryTransitionIDs;
-(id)getAllTransitionNames;
-(id)getFactoryTransitionNames;
-(id)getAllGeneratorNames;
-(id)getEffectIDsForType:(id)arg1 ;
-(id)getEffectNamesForType:(id)arg1 ;
-(id)itemIDAtIndexPath:(id)arg1 ;
-(id)itemNameAtIndexPath:(id)arg1 ;
-(id)indexPathOfItemName:(id)arg1 ;
-(id)indexPathOfItemID:(id)arg1 ;
-(id)getFactoryFilterInternalNames;
-(void)initAllFilterPreviewsForImage:(id)arg1 ;
-(void)releaseAllFilterPreviewsIncludingNone:(BOOL)arg1 ;
-(void)initAllTitlePreviewsForImage:(id)arg1 ;
-(void)releaseAllTitlePreviewsIncludingNone:(BOOL)arg1 ;
-(void)generateAllFilterPreviewsAtTime:(SCD_Struct_Mi1)arg1 effectRange:(SCD_Struct_Mi11)arg2 rawImage:(id)arg3 previewSize:(CGSize)arg4 ;
-(id)getPreviewImageForFilterID:(id)arg1 ;
-(id)getPreviewImageForTitleID:(id)arg1 ;
-(id)getFactoryTitleInternalNames;
-(id)getFactoryTransitionInternalNames;
-(id)effectsForType:(id)arg1 ;
-(BOOL)isGeneratingThumbs;
-(void)setGeneratingThumbs:(BOOL)arg1 ;
-(BOOL)isGeneratingThumbsInterrupted;
-(void)setGeneratingThumbsInterrupted:(BOOL)arg1 ;
-(NSMutableArray *)factoryFilterIDsArray;
-(void)setFactoryFilterIDsArray:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)factoryFilterNamesDict;
-(void)setFactoryFilterNamesDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)factoryFilterInternalNamesDict;
-(void)setFactoryFilterInternalNamesDict:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)allFilterIDsArray;
-(void)setAllFilterIDsArray:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)allFilterNamesDict;
-(void)setAllFilterNamesDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)allFilterPreviewsDict;
-(void)setAllFilterPreviewsDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)allFilterDirtyPreviewsDict;
-(void)setAllFilterDirtyPreviewsDict:(NSMutableDictionary *)arg1 ;
-(int)filterClientRefCount;
-(void)setFilterClientRefCount:(int)arg1 ;
-(NSMutableArray *)factoryTitleIDsArray;
-(void)setFactoryTitleIDsArray:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)factoryTitleNamesDict;
-(void)setFactoryTitleNamesDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)factoryTitleInternalNamesDict;
-(void)setFactoryTitleInternalNamesDict:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)allTitleIDsArray;
-(void)setAllTitleIDsArray:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)allTitleNamesDict;
-(void)setAllTitleNamesDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)allTitlePreviewsDict;
-(void)setAllTitlePreviewsDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)allTitleDirtyPreviewsDict;
-(void)setAllTitleDirtyPreviewsDict:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)factoryGeneratorIDsArray;
-(void)setFactoryGeneratorIDsArray:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)factoryGeneratorNamesDict;
-(void)setFactoryGeneratorNamesDict:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)allGeneratorIDsArray;
-(void)setAllGeneratorIDsArray:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)allGeneratorNamesDict;
-(void)setAllGeneratorNamesDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)allGeneratorPreviewsDict;
-(void)setAllGeneratorPreviewsDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)allGeneratorDirtyPreviewsDict;
-(void)setAllGeneratorDirtyPreviewsDict:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)factoryTransitionIDsArray;
-(void)setFactoryTransitionIDsArray:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)factoryTransitionNamesDict;
-(void)setFactoryTransitionNamesDict:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)allTransitionIDsArray;
-(void)setAllTransitionIDsArray:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)allTransitionNamesDict;
-(void)setAllTransitionNamesDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)allTransitionPreviewsDict;
-(void)setAllTransitionPreviewsDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)allTransitionDirtyPreviewsDict;
-(void)setAllTransitionDirtyPreviewsDict:(NSMutableDictionary *)arg1 ;
@end

