/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardUIServices/SBUINumericPasscodeEntryFieldBase.h>

@class UIView, SBUIButton, UILabel, UIButton;

@interface SBUILongNumericPasscodeEntryField : SBUINumericPasscodeEntryFieldBase {

	UIView* _leftPaddingView;
	UIView* _rightPaddingView;
	SBUIButton* _okButton;
	BOOL _showsOkButton;
	UILabel* _promptLabel;
	BOOL _showsPromptLabel;
	BOOL _firstResponder;
	UIView* _springView;
	UIView* _springViewParent;

}

@property (nonatomic,readonly) UIButton * okButton;                //@synthesize okButton=_okButton - In the implementation block
@property (assign,nonatomic) BOOL showsOkButton;                   //@synthesize showsOkButton=_showsOkButton - In the implementation block
@property (nonatomic,readonly) UILabel * promptLabel;              //@synthesize promptLabel=_promptLabel - In the implementation block
@property (assign,nonatomic) BOOL showsPromptLabel;                //@synthesize showsPromptLabel=_showsPromptLabel - In the implementation block
+(BOOL)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;
+(BOOL)_usesTextFieldForFirstResponder;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)resignFirstResponder;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)canResignFirstResponder;
-(void)setBackgroundAlpha:(double)arg1 ;
-(UIButton *)okButton;
-(void)_resetForFailedPasscode:(BOOL)arg1 ;
-(void)_autofillForMesaWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg1 ;
-(void)_okButtonHit;
-(void)_getPasscodeFieldSize:(CGSize*)arg1 okButtonSize:(CGSize*)arg2 ;
-(void)setShowsOkButton:(BOOL)arg1 ;
-(void)setShowsPromptLabel:(BOOL)arg1 ;
-(BOOL)showsOkButton;
-(BOOL)showsPromptLabel;
-(UILabel *)promptLabel;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(CGSize)_viewSize;
@end

