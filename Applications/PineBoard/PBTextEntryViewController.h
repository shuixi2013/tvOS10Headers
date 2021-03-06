//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVTextEntryControllerDelegate.h"
#import "TextEntryButtonViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSArray, NSMutableArray, NSString, TVSStateMachine, UITapGestureRecognizer;

@interface PBTextEntryViewController : UIViewController <TextEntryButtonViewDelegate, TVTextEntryControllerDelegate, UIViewControllerTransitioningDelegate>
{
    id <PBTextEntryViewControllerDelegate> _delegate;	// 8 = 0x8
    NSString *_defaultTitle;	// 16 = 0x10
    NSString *_defaultMessage;	// 24 = 0x18
    long long _defaultButtonIndex;	// 32 = 0x20
    NSArray *_enteredValues;	// 40 = 0x28
    UIViewController *_childViewController;	// 48 = 0x30
    UITapGestureRecognizer *_menuRecognizer;	// 56 = 0x38
    TVSStateMachine *_stateMachine;	// 64 = 0x40
    long long _currentTextField;	// 72 = 0x48
    NSMutableArray *_textFieldValues;	// 80 = 0x50
    NSMutableArray *_buttonTitles;	// 88 = 0x58
    NSMutableArray *_userValues;	// 96 = 0x60
}

@property(retain, nonatomic) NSMutableArray *userValues; // @synthesize userValues=_userValues;
@property(retain, nonatomic) NSMutableArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
@property(retain, nonatomic) NSMutableArray *textFieldValues; // @synthesize textFieldValues=_textFieldValues;
@property(nonatomic) long long currentTextField; // @synthesize currentTextField=_currentTextField;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(retain, nonatomic) NSArray *enteredValues; // @synthesize enteredValues=_enteredValues;
@property(nonatomic) long long defaultButtonIndex; // @synthesize defaultButtonIndex=_defaultButtonIndex;
@property(copy, nonatomic) NSString *defaultMessage; // @synthesize defaultMessage=_defaultMessage;
@property(copy, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(nonatomic) __weak id <PBTextEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100068efc
- (id)_messageStringAttributes;	// IMP=0x0000000100068ad8
- (id)_titleStringAttributes;	// IMP=0x0000000100068958
- (void)_menuButtonPressed:(id)arg1;	// IMP=0x00000001000688f4
- (void)textEntryControllerDidFinish:(id)arg1;	// IMP=0x0000000100068834
- (void)buttonView:(id)arg1 didSelectButton:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0000000100068734
- (void)_synchronizeEnteredValues;	// IMP=0x00000001000686c8
- (id)textField;	// IMP=0x000000010006862c
- (void)_showChildViewController:(id)arg1;	// IMP=0x00000001000684ac
- (id)_buttonsForTextField:(long long)arg1 defaultButtonIndex:(long long *)arg2;	// IMP=0x0000000100068210
- (void)_showTextEntryViewControllerForTextField:(long long)arg1;	// IMP=0x0000000100067c90
- (void)_configureStateMachine;	// IMP=0x00000001000675bc
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0000000100067540
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000010006750c
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000001000674d8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100067448
- (void)viewDidLoad;	// IMP=0x00000001000673f8
- (void)loadView;	// IMP=0x0000000100067320
- (unsigned long long)addButtonWithTitle:(id)arg1;	// IMP=0x000000010006729c
- (void)setAlternateTitle:(id)arg1 message:(id)arg2 forTextFieldAtIndex:(unsigned long long)arg3;	// IMP=0x00000001000671dc
- (unsigned long long)addTextFieldWithInitialText:(id)arg1 placeholder:(id)arg2 keyboardType:(long long)arg3;	// IMP=0x0000000100067098
- (id)init;	// IMP=0x0000000100067084
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100066f44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

