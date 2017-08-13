//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVDigitEntryViewControllerDelegate.h"

@class NSString, TVDigitEntryViewController;

@interface TVSettingsRestrictionsSetPasscodeViewController : UIViewController <TVDigitEntryViewControllerDelegate>
{
    _Bool _verificationPhase;	// 8 = 0x8
    TVDigitEntryViewController *_passcodeEntryViewController;	// 16 = 0x10
    NSString *_passcodeToConfirm;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool verificationPhase; // @synthesize verificationPhase=_verificationPhase;
@property(retain, nonatomic) NSString *passcodeToConfirm; // @synthesize passcodeToConfirm=_passcodeToConfirm;
@property(retain, nonatomic) TVDigitEntryViewController *passcodeEntryViewController; // @synthesize passcodeEntryViewController=_passcodeEntryViewController;
- (void).cxx_destruct;	// IMP=0x000000010009a410
- (void)digitEntryViewControllerDidFinish:(id)arg1;	// IMP=0x0000000100099c38
- (void)digitEntryViewControllerDidCancel:(id)arg1;	// IMP=0x0000000100099bc4
- (void)viewWillLayoutSubviews;	// IMP=0x0000000100099acc
- (void)viewDidLoad;	// IMP=0x00000001000999f8
- (id)preferredFocusEnvironments;	// IMP=0x00000001000999a4
- (id)initWithTitle:(id)arg1 prompt:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000996dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
