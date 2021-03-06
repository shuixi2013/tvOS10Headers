//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHSPhotoThumbnailsGridViewController.h"

@class NSArray;

@interface TVHSPhotoItemsGridViewController : TVHSPhotoThumbnailsGridViewController
{
    NSArray *_photoDataItems;	// 8 = 0x8
    NSArray *_videoDataItems;	// 16 = 0x10
}

+ (Class)_collectionViewCellClass;	// IMP=0x000000010000f43c
+ (double)_collectionViewMinimumLineSpacing;	// IMP=0x000000010000f430
+ (struct CGSize)_collectionViewItemSize;	// IMP=0x000000010000f420
@property(copy, nonatomic) NSArray *videoDataItems; // @synthesize videoDataItems=_videoDataItems;
@property(copy, nonatomic) NSArray *photoDataItems; // @synthesize photoDataItems=_photoDataItems;
- (void).cxx_destruct;	// IMP=0x000000010000fe54
- (void)_onSelectSlideshowButton:(id)arg1;	// IMP=0x000000010000fd90
- (void)_onSelectScreenSaverButton:(id)arg1;	// IMP=0x000000010000fcc0
- (id)_dataItemAtIndexPath:(id)arg1;	// IMP=0x000000010000fc44
- (id)_defaultHeaderTitle;	// IMP=0x000000010000fb04
- (id)_headerTitle;	// IMP=0x000000010000faa0
- (id)_photoDataCollectionType;	// IMP=0x000000010000fa40
- (id)_photoDataCollectionName;	// IMP=0x000000010000f9e0
- (void)_configureHeaderView:(id)arg1;	// IMP=0x000000010000f5a4
- (void)_configureCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000010000f450
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;	// IMP=0x000000010000f328
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010000f1a0

@end

