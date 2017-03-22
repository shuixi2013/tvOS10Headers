/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>
#import <UIKit/UICollectionViewTableLayoutSwipeActionPullViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UICollectionViewTableAttributes.h>
#import <UIKit/UITable_Internal.h>

@protocol UITableConstants;
@class UIColor, NSSet, UIGobblerGestureRecognizer, UIVisualEffect, UITableViewRowData, NSMutableArray, NSIndexPath, UIPanGestureRecognizer, UICollectionViewTableLayoutSwipeActionPullView, _UISwipableTableViewCellDeleteScanlineView, UICollectionViewTableCell, NSArray, NSString, UIScrollView, UIView;

@interface UICollectionViewTableLayout : UICollectionViewLayout <UICollectionViewTableLayoutSwipeActionPullViewDelegate, UIGestureRecognizerDelegate, UICollectionViewTableAttributes, UITable_Internal> {

	NSSet* _floatingElementKinds;
	BOOL _dontResetSwipedRow;
	UIGobblerGestureRecognizer* _swipeActionsGobblerGestureRecognizer;
	struct {
		unsigned navigationGestureWasEnabledBeforeSwipeActions : 1;
		unsigned didDisableNavigationGesture : 1;
		unsigned deleteCancelationAnimationInProgress : 1;
		unsigned editingForSwipeDelete : 1;
	}  _tableLayoutFlags;
	BOOL _usesVariableMargins;
	BOOL _overlapsSectionHeaderViews;
	BOOL _showingIndex;
	BOOL _sectionContentInsetFollowsLayoutMargins;
	BOOL _cellLayoutMarginsFollowReadableWidth;
	double _rowHeight;
	double _sectionHeaderHeight;
	double _sectionFooterHeight;
	double _estimatedRowHeight;
	double _estimatedSectionHeaderHeight;
	double _estimatedSectionFooterHeight;
	double _backgroundInset;
	double _topPadding;
	double _bottomPadding;
	double _sectionBorderWidth;
	double _sectionCornerRadius;
	UIColor* _accessoryBaseColor;
	UIColor* _multiselectCheckmarkColor;
	id<UITableConstants> _constants;
	double _rowSpacing;
	long long _separatorStyle;
	UIColor* _separatorColor;
	UIVisualEffect* _separatorEffect;
	UITableViewRowData* _rowData;
	NSMutableArray* _deleteIndexPaths;
	NSMutableArray* _insertIndexPaths;
	NSIndexPath* _swipedIndexPath;
	UIPanGestureRecognizer* _swipeActionPanRecognizer;
	double _initialTranslation;
	double _initialDistance;
	double _confirmationTranslationAdjustment;
	UICollectionViewTableLayoutSwipeActionPullView* _leftSwipeView;
	UICollectionViewTableLayoutSwipeActionPullView* _rightSwipeView;
	_UISwipableTableViewCellDeleteScanlineView* _deleteScanLineView;
	UICollectionViewTableCell* _swipeToDeleteCell;
	CGRect _indexFrame;
	UIEdgeInsets _sectionContentInset;
	UIEdgeInsets _separatorInset;

}

@property (getter=_constants,nonatomic,retain) id<UITableConstants> constants;                                                                   //@synthesize constants=_constants - In the implementation block
@property (nonatomic,retain) UITableViewRowData * rowData;                                                                                       //@synthesize rowData=_rowData - In the implementation block
@property (nonatomic,retain) NSMutableArray * deleteIndexPaths;                                                                                  //@synthesize deleteIndexPaths=_deleteIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * insertIndexPaths;                                                                                  //@synthesize insertIndexPaths=_insertIndexPaths - In the implementation block
@property (getter=_delegate,nonatomic,readonly) id<UICollectionViewDelegateTableLayout> delegate; 
@property (getter=_dataSource,nonatomic,readonly) id<UICollectionViewDataSourceTableLayout> dataSource; 
@property (nonatomic,retain) NSIndexPath * swipedIndexPath;                                                                                      //@synthesize swipedIndexPath=_swipedIndexPath - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * swipeActionPanRecognizer;                                                                  //@synthesize swipeActionPanRecognizer=_swipeActionPanRecognizer - In the implementation block
@property (assign,nonatomic) double initialTranslation;                                                                                          //@synthesize initialTranslation=_initialTranslation - In the implementation block
@property (assign,nonatomic) double initialDistance;                                                                                             //@synthesize initialDistance=_initialDistance - In the implementation block
@property (assign,nonatomic) double confirmationTranslationAdjustment;                                                                           //@synthesize confirmationTranslationAdjustment=_confirmationTranslationAdjustment - In the implementation block
@property (nonatomic,retain) UICollectionViewTableLayoutSwipeActionPullView * leftSwipeView;                                                     //@synthesize leftSwipeView=_leftSwipeView - In the implementation block
@property (nonatomic,retain) UICollectionViewTableLayoutSwipeActionPullView * rightSwipeView;                                                    //@synthesize rightSwipeView=_rightSwipeView - In the implementation block
@property (nonatomic,retain) _UISwipableTableViewCellDeleteScanlineView * deleteScanLineView;                                                    //@synthesize deleteScanLineView=_deleteScanLineView - In the implementation block
@property (setter=_setSwipeToDeleteCell:,getter=_swipeToDeleteCell,nonatomic,retain) UICollectionViewTableCell * swipeToDeleteCell;              //@synthesize swipeToDeleteCell=_swipeToDeleteCell - In the implementation block
@property (setter=_setFloatingElementKinds:,getter=_floatingElementKinds,nonatomic,retain) NSArray * floatingElementKinds; 
@property (assign,nonatomic) UIEdgeInsets separatorInset;                                                                                        //@synthesize separatorInset=_separatorInset - In the implementation block
@property (assign,nonatomic) double rowHeight;                                                                                                   //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double sectionHeaderHeight;                                                                                         //@synthesize sectionHeaderHeight=_sectionHeaderHeight - In the implementation block
@property (assign,nonatomic) double sectionFooterHeight;                                                                                         //@synthesize sectionFooterHeight=_sectionFooterHeight - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                                                                                           //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,copy) UIColor * separatorColor;                                                                                             //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,retain) UIVisualEffect * separatorEffect;                                                                                   //@synthesize separatorEffect=_separatorEffect - In the implementation block
@property (assign,nonatomic) BOOL cellLayoutMarginsFollowReadableWidth;                                                                          //@synthesize cellLayoutMarginsFollowReadableWidth=_cellLayoutMarginsFollowReadableWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (nonatomic,readonly) BOOL canBeEdited; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (getter=_style,nonatomic,readonly) long long style; 
@property (getter=_scrollView,nonatomic,readonly) UIScrollView * scrollView; 
@property (getter=_numberOfSections,nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) BOOL allowsMultipleSelection; 
@property (nonatomic,readonly) BOOL allowsMultipleSelectionDuringEditing; 
@property (nonatomic,readonly) double estimatedRowHeight;                                                                                        //@synthesize estimatedRowHeight=_estimatedRowHeight - In the implementation block
@property (nonatomic,readonly) double estimatedSectionHeaderHeight;                                                                              //@synthesize estimatedSectionHeaderHeight=_estimatedSectionHeaderHeight - In the implementation block
@property (nonatomic,readonly) double estimatedSectionFooterHeight;                                                                              //@synthesize estimatedSectionFooterHeight=_estimatedSectionFooterHeight - In the implementation block
@property (nonatomic,readonly) BOOL usesVariableMargins;                                                                                         //@synthesize usesVariableMargins=_usesVariableMargins - In the implementation block
@property (nonatomic,readonly) BOOL overlapsSectionHeaderViews;                                                                                  //@synthesize overlapsSectionHeaderViews=_overlapsSectionHeaderViews - In the implementation block
@property (getter=_backgroundInset,nonatomic,readonly) double backgroundInset;                                                                   //@synthesize backgroundInset=_backgroundInset - In the implementation block
@property (getter=_topPadding,nonatomic,readonly) double topPadding;                                                                             //@synthesize topPadding=_topPadding - In the implementation block
@property (getter=_bottomPadding,nonatomic,readonly) double bottomPadding;                                                                       //@synthesize bottomPadding=_bottomPadding - In the implementation block
@property (getter=_marginWidth,nonatomic,readonly) double marginWidth; 
@property (getter=_isShowingIndex,nonatomic,readonly) BOOL showingIndex;                                                                         //@synthesize showingIndex=_showingIndex - In the implementation block
@property (getter=_indexFrame,nonatomic,readonly) CGRect indexFrame;                                                                             //@synthesize indexFrame=_indexFrame - In the implementation block
@property (getter=_sectionContentInset,nonatomic,readonly) UIEdgeInsets sectionContentInset;                                                     //@synthesize sectionContentInset=_sectionContentInset - In the implementation block
@property (getter=_sectionBorderWidth,nonatomic,readonly) double sectionBorderWidth;                                                             //@synthesize sectionBorderWidth=_sectionBorderWidth - In the implementation block
@property (getter=_sectionCornerRadius,nonatomic,readonly) double sectionCornerRadius;                                                           //@synthesize sectionCornerRadius=_sectionCornerRadius - In the implementation block
@property (getter=_sectionContentInsetFollowsLayoutMargins,nonatomic,readonly) BOOL sectionContentInsetFollowsLayoutMargins;                     //@synthesize sectionContentInsetFollowsLayoutMargins=_sectionContentInsetFollowsLayoutMargins - In the implementation block
@property (getter=_accessoryBaseColor,nonatomic,readonly) UIColor * accessoryBaseColor;                                                          //@synthesize accessoryBaseColor=_accessoryBaseColor - In the implementation block
@property (nonatomic,readonly) UIColor * multiselectCheckmarkColor;                                                                              //@synthesize multiselectCheckmarkColor=_multiselectCheckmarkColor - In the implementation block
@property (getter=_headerMarginWidth,nonatomic,readonly) double headerMarginWidth; 
@property (getter=_footerMarginWidth,nonatomic,readonly) double footerMarginWidth; 
@property (getter=_headerRightMarginWidth,nonatomic,readonly) double headerRightMarginWidth; 
@property (getter=_footerRightMarginWidth,nonatomic,readonly) double footerRightMarginWidth; 
@property (getter=_defaultSectionHeaderHeight,nonatomic,readonly) double defaultSectionHeaderHeight; 
@property (getter=_defaultSectionFooterHeight,nonatomic,readonly) double defaultSectionFooterHeight; 
@property (getter=_sidePadding,nonatomic,readonly) double sidePadding; 
@property (getter=_contentInset,nonatomic,readonly) UIEdgeInsets _contentInset; 
@property (getter=_tableContentInset,nonatomic,readonly) UIEdgeInsets tableContentInset; 
@property (getter=_rowSpacing,nonatomic,readonly) double rowSpacing;                                                                             //@synthesize rowSpacing=_rowSpacing - In the implementation block
@property (getter=_isTableHeaderAutohiding,nonatomic,readonly) BOOL isTableHeaderAutohiding; 
@property (getter=_heightForTableHeader,nonatomic,readonly) double heightForTableHeader; 
@property (getter=_heightForTableFooter,nonatomic,readonly) double heightForTableFooter; 
@property (getter=_providesRowHeights,nonatomic,readonly) BOOL providesRowHeights; 
@property (getter=_estimatesRowHeights,nonatomic,readonly) BOOL estimatesRowHeights; 
@property (getter=_estimatesSectionHeaderHeights,nonatomic,readonly) BOOL estimatesSectionHeaderHeights; 
@property (getter=_estimatesSectionFooterHeights,nonatomic,readonly) BOOL estimatesSectionFooterHeights; 
@property (getter=_tableHeaderView,nonatomic,readonly) UIView * tableHeaderView; 
@property (getter=_tableFooterView,nonatomic,readonly) UIView * tableFooterView; 
@property (getter=_shouldUseSearchBarHeaderBehavior,nonatomic,readonly) BOOL shouldUseSearchBarHeaderBehavior; 
@property (getter=_shouldUseNewHeaderFooterBehavior,nonatomic,readonly) BOOL shouldUseNewHeaderFooterBehavior; 
@property (getter=_rawSeparatorInset,nonatomic,readonly) UIEdgeInsets rawSeparatorInset; 
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)init;
-(void)setRowHeight:(double)arg1 ;
-(double)rowHeight;
-(BOOL)allowsMultipleSelection;
-(id)_dataSource;
-(id)_delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(long long)_style;
-(UIEdgeInsets)_contentInset;
-(id)_swipeToDeleteCell;
-(void)_setSwipeToDeleteCell:(id)arg1 ;
-(UIColor *)separatorColor;
-(BOOL)_isShowingIndex;
-(void)_endSwipeToDeleteRowDidDelete:(BOOL)arg1 ;
-(BOOL)_shouldUseNewHeaderFooterBehavior;
-(UIEdgeInsets)_sectionContentInset;
-(BOOL)_estimatesRowHeights;
-(void)setSeparatorStyle:(long long)arg1 ;
-(BOOL)_shouldDisplayExtraSeparatorsAtOffset:(double*)arg1 ;
-(double)_spacingForExtraSeparators;
-(BOOL)cellLayoutMarginsFollowReadableWidth;
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(id)_constants;
-(double)_headerMarginWidth;
-(double)_headerRightMarginWidth;
-(double)_footerMarginWidth;
-(double)_footerRightMarginWidth;
-(BOOL)isEditing;
-(long long)_editingStyleForRowAtIndexPath:(id)arg1 ;
-(BOOL)_shouldIndentWhileEditingForRowAtIndexPath:(id)arg1 ;
-(BOOL)_canMoveRowAtIndexPath:(id)arg1 ;
-(void)_cleanupStateFromDeleteConfirmation;
-(id)deleteConfirmationIndexPath;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)setCellLayoutMarginsFollowReadableWidth:(BOOL)arg1 ;
-(double)_defaultSectionHeaderHeight;
-(double)_defaultSectionFooterHeight;
-(BOOL)_estimatesSectionHeaderHeights;
-(BOOL)_estimatesSectionFooterHeights;
-(CGRect)_indexFrame;
-(BOOL)_hasHeaderFooterBelowRowAtIndexPath:(id)arg1 ;
-(BOOL)allowsMultipleSelectionDuringEditing;
-(double)_sectionBorderWidth;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(id)_scrollView;
-(BOOL)_shouldStripHeaderTopPaddingForSection:(long long)arg1 ;
-(long long)_accessoryTypeForCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)_animateSwipeCancelation;
-(long long)separatorStyle;
-(double)_backgroundInset;
-(UIEdgeInsets)separatorInset;
-(UIEdgeInsets)_tableContentInset;
-(double)_heightForRowAtIndexPath:(id)arg1 ;
-(double)_heightForHeaderInSection:(long long)arg1 ;
-(double)_heightForFooterInSection:(long long)arg1 ;
-(double)_estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(double)_estimatedHeightForHeaderInSection:(long long)arg1 ;
-(double)_estimatedHeightForFooterInSection:(long long)arg1 ;
-(double)_dataSourceHeightForRowAtIndexPath:(id)arg1 ;
-(double)_dataSourceHeightForHeaderInSection:(long long)arg1 ;
-(double)_dataSourceHeightForFooterInSection:(long long)arg1 ;
-(void)_applyContentSizeDeltaForEstimatedHeightAdjustments:(double)arg1 ;
-(id)_titleForHeaderInSection:(long long)arg1 ;
-(id)_titleForFooterInSection:(long long)arg1 ;
-(id)_detailTextForHeaderInSection:(long long)arg1 ;
-(id)_viewForHeaderInSection:(long long)arg1 ;
-(id)_viewForFooterInSection:(long long)arg1 ;
-(long long)_titleAlignmentForHeaderInSection:(long long)arg1 ;
-(long long)_titleAlignmentForFooterInSection:(long long)arg1 ;
-(double)_maxTitleWidthForHeaderInSection:(long long)arg1 ;
-(double)_maxTitleWidthForFooterInSection:(long long)arg1 ;
-(double)_swipeToDeleteOffsetForRow:(long long)arg1 inSection:(long long)arg2 ;
-(double)_sidePadding;
-(double)_rowSpacing;
-(BOOL)_isTableHeaderAutohiding;
-(double)_heightForTableHeader;
-(double)_heightForTableFooter;
-(BOOL)_providesRowHeights;
-(id)_tableHeaderView;
-(id)_tableFooterView;
-(BOOL)_shouldUseSearchBarHeaderBehavior;
-(long long)_numberOfRowsInSection:(long long)arg1 ;
-(BOOL)_shouldHaveHeaderViewForSection:(long long)arg1 ;
-(BOOL)_shouldHaveFooterViewForSection:(long long)arg1 ;
-(long long)_numberOfSections;
-(double)sectionHeaderHeight;
-(double)sectionFooterHeight;
-(double)estimatedRowHeight;
-(double)estimatedSectionHeaderHeight;
-(double)estimatedSectionFooterHeight;
-(BOOL)usesVariableMargins;
-(BOOL)overlapsSectionHeaderViews;
-(double)_topPadding;
-(double)_bottomPadding;
-(double)_marginWidth;
-(double)_sectionCornerRadius;
-(BOOL)_sectionContentInsetFollowsLayoutMargins;
-(id)_accessoryBaseColor;
-(UIColor *)multiselectCheckmarkColor;
-(BOOL)canBeEdited;
-(void)setEditing:(BOOL)arg1 ;
-(UIEdgeInsets)_rawSeparatorInset;
-(void)setSectionHeaderHeight:(double)arg1 ;
-(void)setSectionFooterHeight:(double)arg1 ;
-(UIVisualEffect *)separatorEffect;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)resetSwipedRowWithCompletion:(/*^block*/id)arg1 ;
-(void)_installSwipeActionsGobblerWithExcludedView:(id)arg1 ;
-(void)_cellAccessoryButtonTappedAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(void)setInitialDistance:(double)arg1 ;
-(double)initialDistance;
-(double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)arg1 ;
-(void)swipeActionPullView:(id)arg1 tappedAction:(id)arg2 view:(id)arg3 ;
-(CGRect)_visibleRect;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(UIEdgeInsets)_preferredLayoutMargins;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(CGPoint)arg2 previousIndexPaths:(id)arg3 previousPosition:(CGPoint)arg4 ;
-(void)swipeRecognizerDidRecognize:(id)arg1 ;
-(void)_setFloatingElementKinds:(id)arg1 ;
-(NSRange)_sectionRangeForBounds:(CGRect)arg1 ;
-(BOOL)_shouldHaveViewForElementOfKind:(id)arg1 atSection:(long long)arg2 useRowData:(BOOL)arg3 ;
-(BOOL)_makePullViewActive:(id)arg1 atIndexPath:(id)arg2 ;
-(long long)_indentationLevelForRowAtIndexPath:(id)arg1 ;
-(BOOL)_shouldDrawSeparatorAtTop:(BOOL)arg1 ofSection:(long long)arg2 ;
-(id)_layoutAttributesForCellWithIndexPath:(id)arg1 ;
-(CGRect)_frameForSectionElementKind:(id)arg1 atSection:(long long)arg2 visibleRect:(CGRect)arg3 floating:(BOOL*)arg4 ;
-(id)_layoutAttributesForSectionElementKind:(id)arg1 atSection:(long long)arg2 ;
-(BOOL)_shouldHaveGlobalViewForElementOfKind:(id)arg1 ;
-(id)_layoutAttributesForViewElementKind:(id)arg1 ;
-(CGRect)_extraSeparatorFrameForIndexPath:(id)arg1 offset:(double)arg2 ;
-(id)_layoutAttributesForSeparatorWithIndexPath:(id)arg1 ;
-(void)setDeleteIndexPaths:(NSMutableArray *)arg1 ;
-(void)setInsertIndexPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)deleteIndexPaths;
-(NSMutableArray *)insertIndexPaths;
-(void)_cleanupStateFromDeleteConfirmationForPendingAnimatedDelete:(BOOL)arg1 ;
-(void)_notifyDelegateDidEndEditingRowAtIndexPath:(id)arg1 ;
-(void)_notifyDelegateWillBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)_removeSwipeActionsGobbler;
-(id)_activePullView;
-(NSIndexPath *)swipedIndexPath;
-(void)_swipeRecognizerBegan:(id)arg1 ;
-(void)_swipeRecognizerChanged:(id)arg1 ;
-(void)_swipeRecognizerEnded:(id)arg1 wasCancelled:(BOOL)arg2 ;
-(void)setSwipedIndexPath:(NSIndexPath *)arg1 ;
-(id)_swipedCell;
-(void)_resolveSwipeActionsForPullView:(id)arg1 atIndexPath:(id)arg2 ;
-(double)_destructiveConfirmationPoint;
-(double)_rubberBandOffsetForOffset:(double)arg1 usingSwipeView:(id)arg2 ;
-(void)_moveCell:(id)arg1 toSwipeOffset:(double)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_performAction:(id)arg1 atIndexPath:(id)arg2 triggeredBySwipe:(BOOL)arg3 view:(id)arg4 ;
-(void)_moveCell:(id)arg1 toSwipeOffset:(double)arg2 animated:(BOOL)arg3 usingSpringWithStiffnessFactor:(double)arg4 completion:(/*^block*/id)arg5 ;
-(void)_performDestructiveAction:(id)arg1 atIndexPath:(id)arg2 triggeredBySwipe:(BOOL)arg3 view:(id)arg4 ;
-(void)_resetSwipeViewPositionsImmediately;
-(void)_setSwipedIndexPath:(id)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_handleSwipeActionsGobbler:(id)arg1 ;
-(id)_floatingElementKinds;
-(double)_adjustedXOffsetForInputOffset:(double)arg1 ;
-(void)deleteRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)setConstants:(id<UITableConstants>)arg1 ;
-(UITableViewRowData *)rowData;
-(void)setRowData:(UITableViewRowData *)arg1 ;
-(UIPanGestureRecognizer *)swipeActionPanRecognizer;
-(void)setSwipeActionPanRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(double)initialTranslation;
-(void)setInitialTranslation:(double)arg1 ;
-(double)confirmationTranslationAdjustment;
-(void)setConfirmationTranslationAdjustment:(double)arg1 ;
-(UICollectionViewTableLayoutSwipeActionPullView *)leftSwipeView;
-(void)setLeftSwipeView:(UICollectionViewTableLayoutSwipeActionPullView *)arg1 ;
-(UICollectionViewTableLayoutSwipeActionPullView *)rightSwipeView;
-(void)setRightSwipeView:(UICollectionViewTableLayoutSwipeActionPullView *)arg1 ;
-(_UISwipableTableViewCellDeleteScanlineView *)deleteScanLineView;
-(void)setDeleteScanLineView:(_UISwipableTableViewCellDeleteScanlineView *)arg1 ;
@end

