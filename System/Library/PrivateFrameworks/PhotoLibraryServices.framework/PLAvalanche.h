/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLAssetContainer.h>
#import <libobjc.A.dylib/PLAssetChangeObserver.h>

@class NSString, NSOrderedSet, PLPhotoLibrary, NSIndexSet, NSMutableIndexSet, PLManagedAsset, NSArray, NSDate;

@interface PLAvalanche : NSObject <PLAssetContainer, PLAssetChangeObserver> {

	NSString* _uuid;
	NSOrderedSet* _assets;
	PLPhotoLibrary* _photoLibrary;
	NSIndexSet* __originalAutoPickIndexes;
	NSMutableIndexSet* __autoPickIndexes;
	NSIndexSet* __originalUserFavoriteIndexes;
	NSMutableIndexSet* __userFavoriteIndexes;
	unsigned long long __originalStackIndex;
	unsigned long long __stackIndex;
	PLManagedAsset* __aNewPick;
	PLManagedAsset* __anOldPick;
	/*^block*/id __completionHandler;

}

@property (nonatomic,retain) NSString * uuid;                                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSOrderedSet * assets;                                          //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;                                  //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) NSIndexSet * _originalAutoPickIndexes;                          //@synthesize _originalAutoPickIndexes=__originalAutoPickIndexes - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * _autoPickIndexes;                           //@synthesize _autoPickIndexes=__autoPickIndexes - In the implementation block
@property (nonatomic,retain) NSIndexSet * _originalUserFavoriteIndexes;                      //@synthesize _originalUserFavoriteIndexes=__originalUserFavoriteIndexes - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * _userFavoriteIndexes;                       //@synthesize _userFavoriteIndexes=__userFavoriteIndexes - In the implementation block
@property (assign,nonatomic) unsigned long long _originalStackIndex;                         //@synthesize _originalStackIndex=__originalStackIndex - In the implementation block
@property (assign,nonatomic) unsigned long long _stackIndex;                                 //@synthesize _stackIndex=__stackIndex - In the implementation block
@property (setter=_setANewPick:,nonatomic,retain) PLManagedAsset * _aNewPick;                //@synthesize _aNewPick=__aNewPick - In the implementation block
@property (setter=_setAnOldPick:,nonatomic,retain) PLManagedAsset * _anOldPick;              //@synthesize _anOldPick=__anOldPick - In the implementation block
@property (setter=_setCompletionHandler:,nonatomic,copy) id _completionHandler;              //@synthesize _completionHandler=__completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
+(id)assetsWithAvalancheUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(void)removeFavoriteStatus:(id)arg1 ;
+(void)revalidateAvalancheAssets:(id)arg1 inLibrary:(id)arg2 deleteNonPicks:(BOOL)arg3 allowDissolve:(BOOL)arg4 ;
+(BOOL)shouldOnlyShowAvalanchePicks;
+(BOOL)shouldHideAvalanchesFromPhotoStream;
+(id)_updatePropertiesForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 deleteNonPicks:(BOOL)arg5 setFirstPick:(BOOL)arg6 allowDissolve:(BOOL)arg7 ;
+(void)_updateMembershipForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 deleteNonPicks:(BOOL)arg5 allowDissolve:(BOOL)arg6 inLibrary:(id)arg7 ;
+(BOOL)isValidBurstWithAssets:(id)arg1 ;
+(void)_handleUpdatesForContextWillSave:(id)arg1 ;
+(void)disolveBurstForAssets:(id)arg1 ;
+(id)_visibleIndexesAmongAssets:(id)arg1 fromUserFavoriteIndexes:(id)arg2 stackIndex:(unsigned long long)arg3 ;
+(id)_assetAmongAssets:(id)arg1 fromIndexes:(id)arg2 excludingIndexes:(id)arg3 ;
+(unsigned long long)_calculateStackAssetForAssetCount:(unsigned long long)arg1 autoPicks:(id)arg2 userFavorites:(id)arg3 ;
+(unsigned long long)countForAvalancheUUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)avalancheStackForImage:(id)arg1 backgroundColor:(id)arg2 ;
+(id)partialAvalancheStackForImage:(id)arg1 backgroundColor:(id)arg2 ;
+(CGRect)frameOfTopImageInStackForStackFrame:(CGRect)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)title;
-(id)_completionHandler;
-(BOOL)isEmpty;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)localizedTitle;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(unsigned long long)photosCount;
-(NSOrderedSet *)assets;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(unsigned long long)approximateCount;
-(unsigned long long)assetsCount;
-(unsigned long long)videosCount;
-(PLManagedAsset *)keyAsset;
-(void)setKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(PLManagedAsset *)arg1 ;
-(BOOL)canShowComments;
-(BOOL)canShowAvalancheStacks;
-(NSArray *)localizedLocationNames;
-(PLPhotoLibrary *)photoLibrary;
-(id)initWithUUID:(id)arg1 photoLibrary:(id)arg2 ;
-(id)stackAsset;
-(void)applyTrashedState:(short)arg1 ;
-(id)userFavorites;
-(id)autoPicks;
-(void)applyChangesAndDeleteNonPicks:(BOOL)arg1 currentContainer:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)setAssets:(NSOrderedSet *)arg1 ;
-(void)assetsDidChange:(id)arg1 ;
-(void)_recalculateStackAsset;
-(NSMutableIndexSet *)_autoPickIndexes;
-(unsigned long long)_stackIndex;
-(NSMutableIndexSet *)_userFavoriteIndexes;
-(void)addUserFavorite:(id)arg1 ;
-(unsigned long long)_originalStackIndex;
-(NSIndexSet *)_originalUserFavoriteIndexes;
-(void)_setAnOldPick:(id)arg1 ;
-(void)_setANewPick:(id)arg1 ;
-(PLManagedAsset *)_anOldPick;
-(PLManagedAsset *)_aNewPick;
-(NSIndexSet *)_originalAutoPickIndexes;
-(void)removeUserFavorite:(id)arg1 ;
-(BOOL)isUserFavorite:(id)arg1 ;
-(BOOL)isAutoPick:(id)arg1 ;
-(id)proposedStackAssetAfterRemovingFavorite:(id)arg1 ;
-(void)set_originalAutoPickIndexes:(NSIndexSet *)arg1 ;
-(void)set_autoPickIndexes:(NSMutableIndexSet *)arg1 ;
-(void)set_originalUserFavoriteIndexes:(NSIndexSet *)arg1 ;
-(void)set_userFavoriteIndexes:(NSMutableIndexSet *)arg1 ;
-(void)set_originalStackIndex:(unsigned long long)arg1 ;
-(void)set_stackIndex:(unsigned long long)arg1 ;
@end

