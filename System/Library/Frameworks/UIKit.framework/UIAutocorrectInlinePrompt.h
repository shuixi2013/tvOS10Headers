/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyboardCandidateList.h>

@class NSString, NSMutableArray, UIView, TIKeyboardCandidateResultSet;

@interface UIAutocorrectInlinePrompt : UIView <UIKeyboardCandidateList> {

	CGRect m_originalTypedTextRect;
	NSString* m_typedText;
	NSString* m_correction;
	NSMutableArray* m_typedTextViews;
	UIView* m_correctionView;
	UIView* m_correctionAnimationView;
	UIView* m_typedTextAnimationView;
	UIView* m_correctionShadowView;
	BOOL m_fits;
	BOOL m_mouseDown;
	id m_delegate;
	long long m_index;
	int m_promptTextType;
	double m_originalTypedTextRectCorrectionAmount;
	unsigned m_usageTrackingMask;
	TIKeyboardCandidateResultSet* _candidateResultSet;

}

@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateResultSet;              //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
@property (assign,nonatomic) unsigned usageTrackingMask; 
@property (nonatomic,readonly) TIKeyboardCandidateResultSet * candidates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(TIKeyboardCandidateResultSet *)candidates;
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
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(double)arg5 layout:(BOOL)arg6 ;
-(void)candidatesDidChange;
-(id)inlineText;
-(void)setSelectedItem:(unsigned long long)arg1 ;
-(int)textEffectsVisibilityLevel;
-(TIKeyboardCandidateResultSet *)candidateResultSet;
-(void)setCandidateResultSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(unsigned long long)index;
-(id)activeCandidateList;
-(unsigned)usageTrackingMask;
-(void)setUsageTrackingMask:(unsigned)arg1 ;
-(void)setCorrection:(id)arg1 typedText:(id)arg2 inRect:(CGRect)arg3 maxX:(double)arg4 ;
-(void)addTypedTextRect:(CGRect)arg1 ;
-(BOOL)prepareForAnimation:(CGRect)arg1 ;
-(id)typedTextView;
-(id)correctionView;
-(id)correctionAnimationView;
-(id)correctionShadowView;
-(id)correction;
-(void)removePromptSubviews;
-(void)setCandidateObject:(id)arg1 candidateSet:(id)arg2 type:(int)arg3 typedText:(id)arg4 inRect:(CGRect)arg5 maxX:(double)arg6 ;
-(unsigned long long)numberOfShownItems;
-(id)typedText;
-(double)maximumCandidateWidth;
-(void)_candidateSelected:(id)arg1 ;
-(CGRect)horizontallySquishedCorrectionFrame:(CGRect)arg1 ;
-(CGRect)correctionFrameFromDesiredFrame:(CGRect)arg1 textHeight:(int)arg2 withExtraGap:(double)arg3 ;
-(BOOL)isAcceptableTextEffectsFrame:(CGRect)arg1 afterScrollBy:(double)arg2 ;
-(void)dismiss;
-(int)textEffectsVisibilityLevelInKeyboardWindow;
-(CGRect)shadowFrameForFrame:(CGRect)arg1 ;
-(id)typedTextAnimationView;
@end

