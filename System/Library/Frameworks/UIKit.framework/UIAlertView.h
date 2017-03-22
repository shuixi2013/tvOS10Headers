/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIAlertController, _UIAlertControllerShimPresenter, NSMutableArray, NSString, UIViewController;

@interface UIAlertView : UIView {

	UIAlertController* _alertController;
	_UIAlertControllerShimPresenter* _presenter;
	UIAlertView* _retainedSelf;
	NSMutableArray* _actions;
	long long _cancelIndex;
	long long _defaultButtonIndex;
	long long _firstOtherButtonIndex;
	NSString* _message;
	NSString* _subtitle;
	long long _alertViewStyle;
	BOOL _runsModal;
	id _context;
	BOOL _hasPreparedAlertActions;
	BOOL _isPresented;
	BOOL _alertControllerShouldDismiss;
	BOOL _handlingAlertActionShouldDismiss;
	BOOL _dismissingAlertController;
	BOOL __currentlyRunningModal;
	id _delegate;
	UIViewController* _externalViewControllerForPresentation;

}

@property (assign,setter=_setCurrentlyRunningModal:,nonatomic) BOOL _currentlyRunningModal;                                                                                                         //@synthesize _currentlyRunningModal=__currentlyRunningModal - In the implementation block
@property (assign,nonatomic) BOOL groupsTextFields; 
@property (assign,nonatomic) BOOL showsOverSpringBoardAlerts; 
@property (setter=_setExternalViewControllerForPresentation:,getter=_externalViewControllerForPresentation,nonatomic,retain) UIViewController * externalViewControllerForPresentation;              //@synthesize externalViewControllerForPresentation=_externalViewControllerForPresentation - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                                                                                                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,readonly) long long numberOfButtons; 
@property (assign,nonatomic) long long cancelButtonIndex; 
@property (nonatomic,readonly) long long firstOtherButtonIndex; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (assign,nonatomic) long long alertViewStyle; 
+(id)_alertWindow;
+(id)_alertViewForWindow:(id)arg1 ;
+(CGSize)minimumSize;
+(void)_setSpringBoardAlertDisplayingOverApplicationAlert:(BOOL)arg1 ;
+(BOOL)_springBoardAlertDisplayingOverApplicationAlert;
+(void)applyTransformToAllAlerts:(CGAffineTransform)arg1 ;
+(BOOL)_isAlertControllerShimClass;
+(id)_remoteAlertViewWithBlock:(/*^block*/id)arg1 ;
+(id)_alertViewForSessionWithRemoteViewController:(id)arg1 ;
-(void)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)window;
-(void)setTitle:(NSString *)arg1 ;
-(id)delegate;
-(long long)cancelButtonIndex;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(NSString *)title;
-(long long)addButtonWithTitle:(id)arg1 ;
-(void)setCancelButtonIndex:(long long)arg1 ;
-(void)_useUndoStyle:(BOOL)arg1 ;
-(id)context;
-(id)titleLabel;
-(long long)numberOfRows;
-(BOOL)_isAnimating;
-(id)tableView;
-(void)layout;
-(void)_setAccessoryView:(id)arg1 ;
-(BOOL)isVisible;
-(id)keyboard;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void)setMessage:(NSString *)arg1 ;
-(void)dismiss;
-(void)dismissAnimated:(BOOL)arg1 ;
-(NSString *)message;
-(void)_setTextFieldsHidden:(BOOL)arg1 ;
-(id)_alertController;
-(void)setDefaultButtonIndex:(long long)arg1 ;
-(void)setContext:(id)arg1 ;
-(long long)firstOtherButtonIndex;
-(void)_setFirstOtherButtonIndex:(long long)arg1 ;
-(void)_dismissForTappedIndex:(long long)arg1 ;
-(BOOL)_prepareToDismissForTappedIndex:(long long)arg1 ;
-(id)_preparedAlertActionAtIndex:(unsigned long long)arg1 ;
-(void)_updateMessageAndSubtitle;
-(id)addTextFieldWithValue:(id)arg1 label:(id)arg2 ;
-(void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_prepareAlertActions;
-(BOOL)runsModal;
-(void)_setCurrentlyRunningModal:(BOOL)arg1 ;
-(BOOL)_currentlyRunningModal;
-(long long)numberOfButtons;
-(long long)alertViewStyle;
-(int)textFieldCount;
-(long long)_maximumNumberOfTextFieldsForCurrentStyle;
-(void)_textDidChangeInTextField:(id)arg1 ;
-(id)_addTextFieldWithValue:(id)arg1 label:(id)arg2 ;
-(void)_updateFirstOtherButtonEnabledState;
-(void)_showAnimated:(BOOL)arg1 ;
-(void)_setIsPresented:(BOOL)arg1 ;
-(id)textField;
-(void)_beginRunningModallyIfNecessary;
-(void)_endRunningModallyIfNecessary;
-(id)bodyTextLabel;
-(void)_setAccessoryViewController:(id)arg1 ;
-(id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(void)_changeButtonTitleAtIndex:(long long)arg1 toTitle:(id)arg2 ;
-(void)setBodyText:(id)arg1 ;
-(id)bodyText;
-(void)setTaglineText:(id)arg1 ;
-(void)setAlertViewStyle:(long long)arg1 ;
-(id)_addButtonWithTitleText:(id)arg1 ;
-(id)_addButtonWithTitle:(id)arg1 ;
-(id)_addButtonWithTitle:(id)arg1 label:(id)arg2 buttonClass:(Class)arg3 ;
-(id)addButtonWithTitle:(id)arg1 label:(id)arg2 ;
-(id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2 ;
-(void)_setDefaultButton:(id)arg1 ;
-(id)_defaultButton;
-(void)_setDestructiveButton:(id)arg1 ;
-(id)_destructiveButton;
-(void)setDefaultButton:(id)arg1 ;
-(id)defaultButton;
-(long long)defaultButtonIndex;
-(id)buttonAtIndex:(long long)arg1 ;
-(void)_updateButtonTitles;
-(id)_buttonAtIndex:(long long)arg1 ;
-(id)buttonTitleAtIndex:(long long)arg1 ;
-(int)buttonCount;
-(id)textFieldAtIndex:(long long)arg1 ;
-(void)setGroupsTextFields:(BOOL)arg1 ;
-(BOOL)groupsTextFields;
-(void)popupAlertAnimated:(BOOL)arg1 atOffset:(double)arg2 ;
-(void)popupAlertAnimated:(BOOL)arg1 animationType:(int)arg2 ;
-(void)popupAlertAnimated:(BOOL)arg1 ;
-(void)_presentSheetFromView:(id)arg1 above:(BOOL)arg2 ;
-(void)presentSheetFromBehindView:(id)arg1 ;
-(void)presentSheetFromAboveView:(id)arg1 ;
-(void)presentSheetInView:(id)arg1 ;
-(void)presentSheetToAboveView:(id)arg1 ;
-(void)showWithAnimationType:(int)arg1 ;
-(void)_presentSheetStartingFromYCoordinate:(double)arg1 ;
-(void)presentSheetFromButtonBar:(id)arg1 ;
-(void)_performPopup:(BOOL)arg1 ;
-(BOOL)requiresPortraitOrientation;
-(long long)_currentOrientation;
-(void)layoutAnimated:(BOOL)arg1 ;
-(void)setSuspendTag:(int)arg1 ;
-(int)suspendTag;
-(void)setTitleMaxLineCount:(int)arg1 ;
-(int)titleMaxLineCount;
-(void)setBodyTextMaxLineCount:(int)arg1 ;
-(int)bodyMaxLineCount;
-(void)setTableShouldShowMinimumContent:(BOOL)arg1 ;
-(BOOL)tableShouldShowMinimumContent;
-(void)setShowsOverSpringBoardAlerts:(BOOL)arg1 ;
-(BOOL)showsOverSpringBoardAlerts;
-(BOOL)_canShowAlerts;
-(id)_titleLabel;
-(id)taglineTextLabel;
-(BOOL)isBodyTextTruncated;
-(void)setDimView:(id)arg1 ;
-(id)_dimView;
-(CGSize)backgroundSize;
-(void)setNumberOfRows:(long long)arg1 ;
-(void)setAlertSheetStyle:(int)arg1 ;
-(int)alertSheetStyle;
-(void)setForceHorizontalButtonsLayout:(BOOL)arg1 ;
-(BOOL)forceHorizontalButtonsLayout;
-(void)setDimsBackground:(BOOL)arg1 ;
-(BOOL)dimsBackground;
-(void)setRunsModal:(BOOL)arg1 ;
-(CGRect)titleRect;
-(double)_maxHeight;
-(double)_buttonHeight;
-(int)numberOfLinesInTitle;
-(void)_prepareForDisplay;
-(void)replaceAlert:(id)arg1 ;
-(void)_showByReplacingAlert:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldUseUndoStyle;
-(void)setKeyboardShowsOnPopup:(BOOL)arg1 ;
-(void)_prepareToBeReplaced;
-(void)_updateFrameForDisplay;
-(BOOL)_isSBAlert;
-(void)_useLegacyUI:(BOOL)arg1 ;
-(void)_showByReplacingPreviousAlertAnimated:(BOOL)arg1 ;
-(id)_externalViewControllerForPresentation;
-(void)_setExternalViewControllerForPresentation:(id)arg1 ;
@end
