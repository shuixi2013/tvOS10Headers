/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKBBackgroundView, UIKeyboardPredictionBarGrabber, NSArray, NSMutableArray, UIKeyboardPredictionCell, NSString, UIView, UILabel, UIKBKeyView, UITouch, UITextSuggestion, NSTimer, TIKeyboardCandidate, NSDate;

@interface UIKeyboardPredictionView : UIView {

	UIKBBackgroundView* m_backgroundView;
	UIKeyboardPredictionBarGrabber* m_grabber;
	NSArray* m_predictionCells;
	NSMutableArray* m_threeTextCells;
	NSMutableArray* m_twoTextCells;
	NSMutableArray* m_oneTextCells;
	NSMutableArray* m_emojiCells;
	NSMutableArray* m_textAndEmojiCells;
	UIKeyboardPredictionCell* m_lastCell;
	unsigned long long m_activeIndex;
	double m_width;
	BOOL m_lightKeyboard;
	NSString* m_openQuote;
	NSString* m_closeQuote;
	UIView* m_message;
	UILabel* m_messageLabel;
	UIKBKeyView* m_messageKeyView;
	double m_messageShownTime;
	CGPoint m_initLocation;
	BOOL m_dragging;
	BOOL m_hasLongCandidates;
	BOOL m_currentInputModeEnablePrediction;
	unsigned long long m_autocorrectionCell;
	BOOL m_delayActive;
	BOOL m_isMinimized;
	UIKBKeyView* m_collapsedView;
	int _notifyBatterySaverToken;
	unsigned long long m_numberOfVisibleCells;
	int _state;
	UITouch* _activeTouch;
	UITextSuggestion* _currentFirstTextSuggestion;
	NSTimer* _updateTimer;
	NSArray* _scheduledPredictions;
	TIKeyboardCandidate* _scheduledAutocorrection;
	NSArray* _scheduledEmojiList;
	NSDate* _lastUpdateDate;
	NSDate* _lastTextSuggestionUpdateDate;
	long long _lastTextSuggestionUpdateOrientation;

}

@property (nonatomic,retain) NSTimer * updateTimer;                                      //@synthesize updateTimer=_updateTimer - In the implementation block
@property (nonatomic,retain) NSArray * scheduledPredictions;                             //@synthesize scheduledPredictions=_scheduledPredictions - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * scheduledAutocorrection;              //@synthesize scheduledAutocorrection=_scheduledAutocorrection - In the implementation block
@property (nonatomic,retain) NSArray * scheduledEmojiList;                               //@synthesize scheduledEmojiList=_scheduledEmojiList - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdateDate;                                    //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
@property (nonatomic,retain) NSDate * lastTextSuggestionUpdateDate;                      //@synthesize lastTextSuggestionUpdateDate=_lastTextSuggestionUpdateDate - In the implementation block
@property (assign,nonatomic) long long lastTextSuggestionUpdateOrientation;              //@synthesize lastTextSuggestionUpdateOrientation=_lastTextSuggestionUpdateOrientation - In the implementation block
@property (nonatomic,retain) UITouch * activeTouch;                                      //@synthesize activeTouch=_activeTouch - In the implementation block
@property (assign,nonatomic) BOOL show; 
@property (assign,nonatomic) int state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UITextSuggestion * currentFirstTextSuggestion;              //@synthesize currentFirstTextSuggestion=_currentFirstTextSuggestion - In the implementation block
+(id)sharedInstance;
+(id)activeInstance;
+(id)resultCountToSingleCellWidth;
+(double)predictionViewHeightForState:(int)arg1 orientation:(long long)arg2 ;
+(double)predictionViewHeightPaddingForOrientation:(long long)arg1 ;
+(unsigned long long)numberOfCandidates;
+(double)predictionViewWidthForOrientation:(long long)arg1 ;
+(double)overlapHeight;
-(BOOL)enabled;
-(BOOL)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(int)state;
-(void)dimKeys:(id)arg1 ;
-(void)setState:(int)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)suspend;
-(double)heightForInterfaceOrientation:(long long)arg1 ;
-(id)autocorrection;
-(void)setPredictionViewState:(int)arg1 animate:(BOOL)arg2 ;
-(int)stateForCurrentPreferences;
-(void)setPredictionViewState:(int)arg1 animate:(BOOL)arg2 notify:(BOOL)arg3 ;
-(void)setCurrentFirstTextSuggestion:(UITextSuggestion *)arg1 ;
-(void)setShow:(BOOL)arg1 ;
-(void)acceptPredictiveInput:(id)arg1 ;
-(void)updateBackgroundWithRenderConfig:(id)arg1 ;
-(NSTimer *)updateTimer;
-(id)createCells:(unsigned long long)arg1 ;
-(void)inputModeDidChange;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(void)setLastTextSuggestionUpdateDate:(NSDate *)arg1 ;
-(void)setLastTextSuggestionUpdateOrientation:(long long)arg1 ;
-(void)setActiveTouch:(UITouch *)arg1 ;
-(void)releaseMessage;
-(void)setFrameForCells:(id)arg1 start:(double)arg2 width:(double)arg3 height:(double)arg4 ;
-(void)setTouchedCellState:(int)arg1 ;
-(unsigned long long)indexForPoint:(CGPoint)arg1 ;
-(void)setActiveCellWithIndex:(unsigned long long)arg1 ;
-(UITouch *)activeTouch;
-(void)commitPrediction:(id)arg1 ;
-(void)delayActivateCellForPrediction:(id)arg1 ;
-(void)deactivateCandidate;
-(void)acceptCandidateAtCell:(id)arg1 ;
-(id)labelTextForPrediction:(id)arg1 typedString:(id)arg2 ;
-(TIKeyboardCandidate *)scheduledAutocorrection;
-(NSArray *)scheduledPredictions;
-(NSArray *)scheduledEmojiList;
-(void)_setPredictions:(id)arg1 autocorrection:(id)arg2 emojiList:(id)arg3 ;
-(void)setScheduledPredictions:(NSArray *)arg1 ;
-(void)setScheduledAutocorrection:(TIKeyboardCandidate *)arg1 ;
-(void)setScheduledEmojiList:(NSArray *)arg1 ;
-(void)updateTimerFired:(id)arg1 ;
-(void)setUpdateTimer:(NSTimer *)arg1 ;
-(NSDate *)lastUpdateDate;
-(UITextSuggestion *)currentFirstTextSuggestion;
-(NSDate *)lastTextSuggestionUpdateDate;
-(long long)lastTextSuggestionUpdateOrientation;
-(void)touchUpdateTimer;
-(int)messageCount;
-(int)maxMessageCount;
-(void)removeMessage;
-(void)initCells;
-(double)heightBeforeStateChangeForInterfaceOrientation:(long long)arg1 ;
-(void)suppressLayoutSubviewsForCellLabels:(BOOL)arg1 ;
-(unsigned long long)predictionCount;
-(void)acceptCandidate;
-(void)activateCandidateAtPoint:(CGPoint)arg1 ;
-(void)setPredictions:(id)arg1 autocorrection:(id)arg2 emojiList:(id)arg3 ;
-(void)showMessageWithSize:(CGSize)arg1 ;
-(BOOL)isTextSuggestion;
-(BOOL)hasPredictions;
@end

