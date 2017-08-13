//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPPhotoLibraryOneUpViewController.h"

#import "TVPSharedPSCommentsViewDataSource.h"
#import "TVPSharedPSCommentsViewDelegate.h"
#import "TVPSharedPSOneupViewDataSource.h"
#import "TVPSharedPSOneupViewDelegate.h"

@class NSArray, NSString, TVOneupView, TVPSharedAlbumsActivityFeedCache;

@interface TVPSharedPSOneUpViewController : TVPPhotoLibraryOneUpViewController <TVPSharedPSOneupViewDataSource, TVPSharedPSOneupViewDelegate, TVPSharedPSCommentsViewDataSource, TVPSharedPSCommentsViewDelegate>
{
    NSArray *_allowedModes;	// 8 = 0x8
    NSString *_dataItemPropertyID;	// 16 = 0x10
    TVOneupView *_oneUpView;	// 24 = 0x18
    TVPSharedAlbumsActivityFeedCache *_feedCache;	// 32 = 0x20
}

+ (long long)_adjustedFocusIndexForDataItemID:(id)arg1 dataItems:(id)arg2;	// IMP=0x0000000100057740
@property(retain, nonatomic) TVPSharedAlbumsActivityFeedCache *feedCache; // @synthesize feedCache=_feedCache;
@property(retain, nonatomic) TVOneupView *oneUpView; // @synthesize oneUpView=_oneUpView;
@property(copy, nonatomic) NSString *dataItemPropertyID; // @synthesize dataItemPropertyID=_dataItemPropertyID;
@property(copy, nonatomic) NSArray *allowedModes; // @synthesize allowedModes=_allowedModes;
- (void).cxx_destruct;	// IMP=0x00000001000580ac
- (void)_createActivityFeedsAndUpdateCache;	// IMP=0x0000000100057e14
- (void)_reloadCommentsView;	// IMP=0x0000000100057c7c
- (id)_getLikedUserNames;	// IMP=0x00000001000579f4
- (id)_getCurrentCommentMetadataForIndexPath:(id)arg1;	// IMP=0x00000001000578d0
- (unsigned long long)_allowedModesFromModes:(id)arg1;	// IMP=0x0000000100057848
- (id)_assetOwnerNameForAsset:(id)arg1;	// IMP=0x0000000100057684
- (id)_commenterNameForComment:(id)arg1;	// IMP=0x00000001000575a4
- (void)_updateVideoOverlayForItemView:(id)arg1;	// IMP=0x00000001000574bc
- (struct CGSize)commentsView:(id)arg1 sizeForHeaderView:(id)arg2;	// IMP=0x0000000100057160
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100056fa0
- (id)subHeaderViewInCommentsView:(id)arg1;	// IMP=0x0000000100056d48
- (id)headerViewForLikesInCommentsView:(id)arg1;	// IMP=0x0000000100056c10
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100056a30
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100056978
- (void)oneupView:(id)arg1 didTransitionToItemInCaptionModeWithIndex:(unsigned long long)arg2;	// IMP=0x0000000100056868
- (void)oneupView:(id)arg1 didPlayItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000010005679c
- (void)oneupView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000010005655c
- (id)oneupView:(id)arg1 getSecondaryViewForMode:(unsigned long long)arg2;	// IMP=0x0000000100056424
- (id)oneupView:(id)arg1 supplementaryViewForItemAtIndex:(unsigned long long)arg2;	// IMP=0x00000001000562b8
- (id)oneupView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;	// IMP=0x00000001000562a8
- (long long)numberOfItemsInOneupView:(id)arg1;	// IMP=0x0000000100056204
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x00000001000560d0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100055f24
- (void)loadView;	// IMP=0x0000000100055c20
- (id)init;	// IMP=0x0000000100055ba4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
