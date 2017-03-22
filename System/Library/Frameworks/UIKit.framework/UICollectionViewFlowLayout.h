/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class _UIFlowLayoutInfo, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface UICollectionViewFlowLayout : UICollectionViewLayout {

	struct {
		unsigned delegateSizeForItem : 1;
		unsigned delegateReferenceSizeForHeader : 1;
		unsigned delegateReferenceSizeForFooter : 1;
		unsigned delegateInsetForSection : 1;
		unsigned delegateInteritemSpacingForSection : 1;
		unsigned delegateLineSpacingForSection : 1;
		unsigned delegateAlignmentOptions : 1;
		unsigned layoutDataIsValid : 1;
		unsigned delegateInfoIsValid : 1;
		unsigned roundsToScreenScale : 1;
		unsigned delegateSizesForSection : 1;
		unsigned sectionHeadersFloat : 1;
		unsigned sectionFootersFloat : 1;
		unsigned headerFollowsSectionMargins : 1;
		unsigned footerFollowsSectionMargins : 1;
	}  _gridLayoutFlags;
	double _interitemSpacing;
	double _lineSpacing;
	CGSize _itemSize;
	CGSize _estimatedItemSize;
	CGSize _headerReferenceSize;
	CGSize _footerReferenceSize;
	UIEdgeInsets _sectionInset;
	_UIFlowLayoutInfo* _data;
	CGSize _currentLayoutSize;
	NSMutableDictionary* _insertedItemsAttributesDict;
	NSMutableDictionary* _insertedSectionHeadersAttributesDict;
	NSMutableDictionary* _insertedSectionFootersAttributesDict;
	NSMutableDictionary* _deletedItemsAttributesDict;
	NSMutableDictionary* _deletedSectionHeadersAttributesDict;
	NSMutableDictionary* _deletedSectionFootersAttributesDict;
	long long _scrollDirection;
	NSDictionary* _rowAlignmentsOptionsDictionary;
	CGPoint _contentOffsetAdjustment;
	CGSize _contentSizeAdjustment;
	NSMutableArray* _indexPathsToValidate;
	NSMutableDictionary* _cachedItemAttributes;
	NSMutableDictionary* _cachedItemFrames;

}

@property (getter=_estimatesSizes,nonatomic,readonly) BOOL estimatesSizes; 
@property (assign,nonatomic) double minimumLineSpacing;                                 //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) double minimumInteritemSpacing;                            //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                           //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) CGSize estimatedItemSize;                                  //@synthesize estimatedItemSize=_estimatedItemSize - In the implementation block
@property (assign,nonatomic) long long scrollDirection; 
@property (assign,nonatomic) CGSize headerReferenceSize;                                //@synthesize headerReferenceSize=_headerReferenceSize - In the implementation block
@property (assign,nonatomic) CGSize footerReferenceSize;                                //@synthesize footerReferenceSize=_footerReferenceSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;                                 //@synthesize sectionInset=_sectionInset - In the implementation block
@property (assign,nonatomic) BOOL sectionHeadersPinToVisibleBounds; 
@property (assign,nonatomic) BOOL sectionFootersPinToVisibleBounds; 
+(Class)invalidationContextClass;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setScrollDirection:(long long)arg1 ;
-(void)setItemSize:(CGSize)arg1 ;
-(void)setMinimumInteritemSpacing:(double)arg1 ;
-(void)setMinimumLineSpacing:(double)arg1 ;
-(double)minimumLineSpacing;
-(double)minimumInteritemSpacing;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)indexPathForItemAtPoint:(CGPoint)arg1 ;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)setEstimatedItemSize:(CGSize)arg1 ;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(CGSize)itemSize;
-(UIEdgeInsets)sectionInset;
-(void)_calculateAttributesForRect:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(BOOL)_estimatesSizes;
-(void)finalizeCollectionViewUpdates;
-(long long)scrollDirection;
-(BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
-(void)_resetCachedItems;
-(void)_getSizingInfosWithExistingSizingDictionary:(id)arg1 ;
-(void)_updateItemsLayoutForRect:(CGRect)arg1 allowsPartialUpdate:(BOOL)arg2 ;
-(void)_fetchItemsInfoForRect:(CGRect)arg1 ;
-(id)indexesForSectionHeadersInRect:(CGRect)arg1 usingData:(id)arg2 ;
-(id)indexesForSectionFootersInRect:(CGRect)arg1 usingData:(id)arg2 ;
-(CGRect)_frameForHeaderInSection:(long long)arg1 usingData:(id)arg2 ;
-(CGRect)_frameForFooterInSection:(long long)arg1 usingData:(id)arg2 ;
-(id)_existingLayoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGRect)_frameForItem:(long long)arg1 inSection:(long long)arg2 usingData:(id)arg3 ;
-(id)_fetchAndCacheNewLayoutAttributesForCellWithIndexPath:(id)arg1 frame:(CGRect)arg2 ;
-(id)layoutAttributesForHeaderInSection:(long long)arg1 usingData:(id)arg2 ;
-(id)layoutAttributesForFooterInSection:(long long)arg1 usingData:(id)arg2 ;
-(long long)_sectionArrayIndexForIndexPath:(id)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 usingData:(id)arg2 ;
-(BOOL)_boundsAndInsetsAreValidForReferenceDimension;
-(id)_layoutAttributesForItemsInRect:(CGRect)arg1 ;
-(double)_dimensionFromCollectionView;
-(CGSize)_effectiveEstimatedItemSize;
-(void)_updateDelegateFlags;
-(BOOL)_headerFollowsSectionMargins;
-(BOOL)_footerFollowsSectionMargins;
-(id)indexesForSectionHeadersInRect:(CGRect)arg1 ;
-(id)indexesForSectionFootersInRect:(CGRect)arg1 ;
-(id)layoutAttributesForHeaderInSection:(long long)arg1 ;
-(id)layoutAttributesForFooterInSection:(long long)arg1 ;
-(void)setHeaderReferenceSize:(CGSize)arg1 ;
-(void)setFooterReferenceSize:(CGSize)arg1 ;
-(void)_setNeedsLayoutComputationWithoutInvalidation;
-(id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForHeaderInInsertedSection:(long long)arg1 ;
-(id)initialLayoutAttributesForFooterInInsertedSection:(long long)arg1 ;
-(id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForHeaderInDeletedSection:(long long)arg1 ;
-(id)finalLayoutAttributesForFooterInDeletedSection:(long long)arg1 ;
-(CGSize)synchronizeLayout;
-(void)_invalidateButKeepDelegateInfo;
-(void)_invalidateButKeepAllInfo;
-(void)_setRowAlignmentsOptions:(id)arg1 ;
-(id)_rowAlignmentOptions;
-(void)_updateContentSizeScrollingDimensionWithDelta:(double)arg1 ;
-(void)_setRoundsToScreenScale:(BOOL)arg1 ;
-(BOOL)_roundsToScreenScale;
-(void)_setHeaderFollowsSectionMargins:(BOOL)arg1 ;
-(void)_setFooterFollowsSectionMargins:(BOOL)arg1 ;
-(void)setSectionHeadersPinToVisibleBounds:(BOOL)arg1 ;
-(BOOL)sectionHeadersPinToVisibleBounds;
-(void)setSectionFootersPinToVisibleBounds:(BOOL)arg1 ;
-(BOOL)sectionFootersPinToVisibleBounds;
-(CGSize)headerReferenceSize;
-(CGSize)footerReferenceSize;
-(CGSize)estimatedItemSize;
@end

