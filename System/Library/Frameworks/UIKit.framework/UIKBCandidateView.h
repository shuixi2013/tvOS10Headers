/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>
#import <UIKit/UIKeyboardCandidateGridCollectionViewControllerDelegate.h>

@class UIView, UIKeyboardCandidateGridCollectionViewController, UIKeyboardCandidateSortControl, TIKeyboardCandidateResultSet, NSString;

@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateGridCollectionViewControllerDelegate> {

	UIView* _clippingView;
	UIView* _topBorder;
	unsigned long long _selectedSortIndex;
	UIKeyboardCandidateGridCollectionViewController* _collectionViewController;
	UIKeyboardCandidateSortControl* _scrollViewSortControl;
	SCD_Struct_UI36 _visualStyling;

}

@property (nonatomic,readonly) TIKeyboardCandidateResultSet * candidateResultSet; 
@property (assign,nonatomic) unsigned long long selectedSortIndex;                                                    //@synthesize selectedSortIndex=_selectedSortIndex - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateGridCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateSortControl * scrollViewSortControl;                                  //@synthesize scrollViewSortControl=_scrollViewSortControl - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI36 visualStyling;                                                           //@synthesize visualStyling=_visualStyling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)addSubview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)setRenderConfig:(id)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(void)showNextCandidate;
-(BOOL)hasCandidates;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5 ;
-(id)statisticsIdentifier;
-(BOOL)isExtendedList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(BOOL)showCandidate:(id)arg1 ;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned long long)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1 ;
-(id)keyboardBehaviors;
-(unsigned long long)selectedSortIndex;
-(void)setVisualStyling:(SCD_Struct_UI36)arg1 ;
-(SCD_Struct_UI36)visualStyling;
-(TIKeyboardCandidateResultSet *)candidateResultSet;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id)candidateList;
-(unsigned long long)gridCollectionViewNumberOfColumns:(id)arg1 ;
-(id)headerViewForCandidateSet:(id)arg1 ;
-(unsigned long long)gridCollectionViewSelectedSortMethodIndex:(id)arg1 ;
-(BOOL)isTenKey;
-(void)updateCollectionViewController;
-(void)clearCollectionViewController;
-(UIKeyboardCandidateSortControl *)scrollViewSortControl;
-(UIKeyboardCandidateGridCollectionViewController *)collectionViewController;
-(void)updateCollectionViewController:(BOOL)arg1 ;
-(void)setCollectionViewController:(UIKeyboardCandidateGridCollectionViewController *)arg1 ;
-(void)setSelectedSortIndex:(unsigned long long)arg1 ;
-(void)sortSelectionBarAction:(id)arg1 ;
-(void)setScrollViewSortControl:(UIKeyboardCandidateSortControl *)arg1 ;
-(id)groupedCandidatesFromCandidateSet:(id)arg1 forSortIndex:(unsigned long long)arg2 ;
@end

