/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/TPSimpleNumberPadDelegate.h>

@protocol TPSetPINViewControllerDelegate;
@class NSString, UIView, UILabel, TPPasscodeView, TPSimpleNumberPad;

@interface TPSetPINViewController : UIViewController <TPSimpleNumberPadDelegate> {

	BOOL _confirmPIN;
	int _initialState;
	int _state;
	unsigned _minPINLength;
	unsigned _maxPINLength;
	id<TPSetPINViewControllerDelegate> _delegate;
	NSString* _promptTextForOldPIN;
	NSString* _promptTextForNewPIN;
	NSString* _promptTextForConfirmingNewPIN;
	NSString* _promptTextForSavingPIN;
	UIView* _customBackgroundView;
	UILabel* _statusLabel;
	TPPasscodeView* _passcodeView;
	TPSimpleNumberPad* _numberPad;
	NSString* _oldPIN;
	NSString* _unconfirmedPIN;

}

@property (assign) int initialState;                                                //@synthesize initialState=_initialState - In the implementation block
@property (assign,nonatomic) int state;                                             //@synthesize state=_state - In the implementation block
@property (assign) unsigned minPINLength;                                           //@synthesize minPINLength=_minPINLength - In the implementation block
@property (assign) unsigned maxPINLength;                                           //@synthesize maxPINLength=_maxPINLength - In the implementation block
@property (assign) BOOL confirmPIN;                                                 //@synthesize confirmPIN=_confirmPIN - In the implementation block
@property (retain) UILabel * statusLabel;                                           //@synthesize statusLabel=_statusLabel - In the implementation block
@property (retain) TPPasscodeView * passcodeView;                                   //@synthesize passcodeView=_passcodeView - In the implementation block
@property (retain) TPSimpleNumberPad * numberPad;                                   //@synthesize numberPad=_numberPad - In the implementation block
@property (retain) NSString * oldPIN;                                               //@synthesize oldPIN=_oldPIN - In the implementation block
@property (retain) NSString * unconfirmedPIN;                                       //@synthesize unconfirmedPIN=_unconfirmedPIN - In the implementation block
@property (assign) id<TPSetPINViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * promptTextForOldPIN;                        //@synthesize promptTextForOldPIN=_promptTextForOldPIN - In the implementation block
@property (nonatomic,retain) NSString * promptTextForNewPIN;                        //@synthesize promptTextForNewPIN=_promptTextForNewPIN - In the implementation block
@property (nonatomic,retain) NSString * promptTextForConfirmingNewPIN;              //@synthesize promptTextForConfirmingNewPIN=_promptTextForConfirmingNewPIN - In the implementation block
@property (nonatomic,retain) NSString * promptTextForSavingPIN;                     //@synthesize promptTextForSavingPIN=_promptTextForSavingPIN - In the implementation block
@property (retain) UIView * customBackgroundView;                                   //@synthesize customBackgroundView=_customBackgroundView - In the implementation block
-(void)setDelegate:(id<TPSetPINViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<TPSetPINViewControllerDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)loadView;
-(BOOL)wantsFullScreenLayout;
-(void)setCustomBackgroundView:(UIView *)arg1 ;
-(UIView *)customBackgroundView;
-(TPPasscodeView *)passcodeView;
-(void)_cancelButtonTapped;
-(void)setMinPINLength:(unsigned)arg1 ;
-(void)setMaxPINLength:(unsigned)arg1 ;
-(void)setConfirmPIN:(BOOL)arg1 ;
-(id)_initForMinLength:(unsigned)arg1 maxLength:(unsigned)arg2 confirmPIN:(BOOL)arg3 ;
-(void)setNumberPad:(TPSimpleNumberPad *)arg1 ;
-(void)setPasscodeView:(TPPasscodeView *)arg1 ;
-(void)_updateUIForStateChange;
-(void)resetWithErrorPrompt:(id)arg1 title:(id)arg2 ;
-(NSString *)promptTextForOldPIN;
-(void)_updateStatusLabel;
-(NSString *)promptTextForNewPIN;
-(NSString *)promptTextForConfirmingNewPIN;
-(NSString *)promptTextForSavingPIN;
-(void)setOldPIN:(NSString *)arg1 ;
-(BOOL)confirmPIN;
-(void)setUnconfirmedPIN:(NSString *)arg1 ;
-(NSString *)oldPIN;
-(NSString *)unconfirmedPIN;
-(unsigned)maxPINLength;
-(void)_updateDeleteAllowed;
-(void)_updateNavBarButtons;
-(TPSimpleNumberPad *)numberPad;
-(unsigned)minPINLength;
-(void)simpleNumberPad:(id)arg1 buttonPressedWithCharacter:(id)arg2 ;
-(void)simpleNumberPadDeletePressed:(id)arg1 ;
-(id)initForNewPINWithMinLength:(unsigned)arg1 maxLength:(unsigned)arg2 confirmPIN:(BOOL)arg3 ;
-(id)initForChangePINWithMinLength:(unsigned)arg1 maxLength:(unsigned)arg2 confirmPIN:(BOOL)arg3 ;
-(void)resetWithErrorPrompt:(id)arg1 ;
-(void)setPromptTextForOldPIN:(NSString *)arg1 ;
-(void)setPromptTextForNewPIN:(NSString *)arg1 ;
-(void)setPromptTextForConfirmingNewPIN:(NSString *)arg1 ;
-(void)setPromptTextForSavingPIN:(NSString *)arg1 ;
-(int)initialState;
-(void)setInitialState:(int)arg1 ;
-(void)_doneButtonTapped;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
@end

