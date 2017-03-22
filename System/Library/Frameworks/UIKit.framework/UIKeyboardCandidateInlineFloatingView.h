/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UIKeyboardCandidateListDelegate.h>
#import <UIKit/UIKeyboardCandidateGridCollectionViewControllerDelegate.h>

@protocol UIKeyboardCandidateListDelegate;
@class TIKeyboardCandidateResultSet, NSString, UIKeyboardCandidateGridCollectionViewController, UIKeyboardCandidateSortControl;

@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate> {

	BOOL _reducedWidth;
	int _position;
	TIKeyboardCandidateResultSet* _candidateSet;
	NSString* _inlineText;
	double _maxX;
	UIKeyboardCandidateGridCollectionViewController* _collectionViewController;
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	UIKeyboardCandidateSortControl* _sortSelectionBar;
	CGRect _inlineRect;
	CGRect _previousCollapsedFrame;

}

@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateSet;                                               //@synthesize candidateSet=_candidateSet - In the implementation block
@property (nonatomic,copy) NSString * inlineText;                                                                       //@synthesize inlineText=_inlineText - In the implementation block
@property (assign,nonatomic) CGRect inlineRect;                                                                         //@synthesize inlineRect=_inlineRect - In the implementation block
@property (assign,nonatomic) double maxX;                                                                               //@synthesize maxX=_maxX - In the implementation block
@property (getter=isReducedWidth,nonatomic,readonly) BOOL reducedWidth;                                                 //@synthesize reducedWidth=_reducedWidth - In the implementation block
@property (nonatomic,readonly) UIKeyboardCandidateGridCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (assign,nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;                                 //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (assign,nonatomic) int position;                                                                              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) CGRect previousCollapsedFrame;                                                             //@synthesize previousCollapsedFrame=_previousCollapsedFrame - In the implementation block
@property (nonatomic,readonly) UIKeyboardCandidateSortControl * sortSelectionBar;                                       //@synthesize sortSelectionBar=_sortSelectionBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(void)layout;
-(id)candidates;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(void)showNextCandidate;
-(id<UIKeyboardCandidateListDelegate>)candidateListDelegate;
-(void)candidateListAcceptCandidate:(id)arg1 ;
-(TIKeyboardCandidateResultSet *)candidateSet;
-(BOOL)hasCandidates;
-(void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5 ;
-(void)setCandidateListDelegate:(id<UIKeyboardCandidateListDelegate>)arg1 ;
-(id)statisticsIdentifier;
-(void)candidateListSelectionDidChange:(id)arg1 ;
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
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(double)arg5 layout:(BOOL)arg6 ;
-(void)setInlineText:(NSString *)arg1 ;
-(BOOL)handleNumberKey:(unsigned long long)arg1 ;
-(BOOL)handleTabKeyWithShift:(BOOL)arg1 ;
-(void)candidatesDidChange;
-(NSString *)inlineText;
-(id)_inheritedRenderConfig;
-(BOOL)padInlineFloatingViewIsExpanded:(id)arg1 ;
-(void)padInlineFloatingViewExpand:(id)arg1 ;
-(unsigned long long)gridCollectionViewNumberOfColumns:(id)arg1 ;
-(unsigned long long)gridCollectionViewSelectedSortMethodIndex:(id)arg1 ;
-(id)activeCandidateList;
-(void)candidateListShouldBeDismissed:(id)arg1 ;
-(UIKeyboardCandidateGridCollectionViewController *)collectionViewController;
-(BOOL)isReducedWidth;
-(CGRect)inlineRect;
-(void)updateLayerBorderWidth;
-(CGRect)convertFromInputDelegateRect:(CGRect)arg1 ;
-(BOOL)isAcceptableFrame:(CGRect)arg1 afterScrollBy:(double)arg2 ;
-(CGRect)adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(CGRect)arg2 ;
-(CGRect)adjustedFrameFromDesiredFrame:(CGRect)arg1 textHeight:(double)arg2 ;
-(void)setInlineRect:(CGRect)arg1 ;
-(void)setMaxX:(double)arg1 ;
-(double)maxX;
-(void)adjustFrameForInlineText:(id)arg1 inlineRect:(CGRect)arg2 maxX:(double)arg3 ;
-(UIKeyboardCandidateSortControl *)sortSelectionBar;
-(void)expand;
-(void)sortSelectionBarAction;
-(CGRect)previousCollapsedFrame;
-(void)setPreviousCollapsedFrame:(CGRect)arg1 ;
@end

