//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPPhotoLibraryCollectionViewController.h"

#import "PHPhotoLibraryChangeObserver.h"
#import "TVPCollectionViewCachingManagerDataSource.h"
#import "TVPCollectionViewDelegateFlowLayout.h"
#import "TVPPhotoLibraryOneUpViewControllerDelegate.h"
#import "TVPPhotoLibraryTabbedViewController.h"

@class NSIndexPath, NSString, PHAssetCollection, TVPCollectionViewCachingManager, TVPFetchManager;

@interface TVPPhotoLibraryMomentsListController : TVPPhotoLibraryCollectionViewController <PHPhotoLibraryChangeObserver, TVPPhotoLibraryOneUpViewControllerDelegate, TVPCollectionViewCachingManagerDataSource, TVPCollectionViewDelegateFlowLayout, TVPPhotoLibraryTabbedViewController>
{
    _Bool _shouldSkipInvalidation;	// 8 = 0x8
    _Bool _needsReload;	// 9 = 0x9
    id <TVPPhotoLibraryMomentsListControllerDelegate> _delegate;	// 16 = 0x10
    NSIndexPath *_preferredFocusIndexPath;	// 24 = 0x18
    NSIndexPath *_previouslyFocusedIndexPath;	// 32 = 0x20
    TVPFetchManager *_fetchManager;	// 40 = 0x28
    TVPCollectionViewCachingManager *_cachingManager;	// 48 = 0x30
}

@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic) _Bool shouldSkipInvalidation; // @synthesize shouldSkipInvalidation=_shouldSkipInvalidation;
@property(retain, nonatomic) TVPCollectionViewCachingManager *cachingManager; // @synthesize cachingManager=_cachingManager;
@property(retain, nonatomic) TVPFetchManager *fetchManager; // @synthesize fetchManager=_fetchManager;
@property(retain, nonatomic) NSIndexPath *previouslyFocusedIndexPath; // @synthesize previouslyFocusedIndexPath=_previouslyFocusedIndexPath;
@property(retain, nonatomic) NSIndexPath *preferredFocusIndexPath; // @synthesize preferredFocusIndexPath=_preferredFocusIndexPath;
@property(nonatomic) __weak id <TVPPhotoLibraryMomentsListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010000e51c
@property(readonly, nonatomic) long long tabMode;
- (id)_momentForSection:(unsigned long long)arg1;	// IMP=0x000000010000e2b8
- (id)_assetsForSection:(unsigned long long)arg1;	// IMP=0x000000010000e248
- (id)_assetsForMoment:(id)arg1;	// IMP=0x000000010000e058
- (id)_assetAtIndexPath:(id)arg1;	// IMP=0x000000010000df88
- (void)_configureHeaderView:(id)arg1 inSection:(long long)arg2;	// IMP=0x000000010000dd70
- (void)_fetchMomentsCollectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000dac4
- (id)collectionViewCachingManager:(id)arg1 assetsForIndexPaths:(id)arg2;	// IMP=0x000000010000d8e4
- (Class)_collectionViewCellClass;	// IMP=0x000000010000d8d0
- (Class)_sectionHeaderViewClass;	// IMP=0x000000010000d8bc
- (Class)_collectionViewTitleViewClass;	// IMP=0x000000010000d8a8
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x000000010000ce98
- (void)photoLibraryOneUpControllerWillPop:(id)arg1;	// IMP=0x000000010000cc34
- (struct CGSize)collectionView:(id)arg1 referenceSizeForTitleInLayout:(id)arg2;	// IMP=0x000000010000cc24
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000010000cba4
- (struct CGSize)_referenceSizeForHeaderInSection:(long long)arg1;	// IMP=0x000000010000c92c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x000000010000c91c
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x000000010000c870
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010000c3c8
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010000c13c
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010000bf84
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010000bb90
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010000bb40
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010000bae8
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010000baa4
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000010000ba60
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010000b988
- (void)setSelectedIndexPath:(id)arg1;	// IMP=0x000000010000b8c4
@property(retain, nonatomic) PHAssetCollection *focusedMoment;
- (void)dealloc;	// IMP=0x000000010000b6e4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010000b65c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000b4b4
- (void)viewDidLoad;	// IMP=0x000000010000af9c
- (id)init;	// IMP=0x000000010000aed0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

