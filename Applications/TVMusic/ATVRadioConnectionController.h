//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface ATVRadioConnectionController : UIViewController
{
    _Bool _presentTermsOnly;	// 8 = 0x8
    int _state;	// 12 = 0xc
    CDUnknownBlockType _termsCompletionHandler;	// 16 = 0x10
    UIViewController *_activityIndicatorVC;	// 24 = 0x18
}

@property(retain, nonatomic) UIViewController *activityIndicatorVC; // @synthesize activityIndicatorVC=_activityIndicatorVC;
@property(copy, nonatomic) CDUnknownBlockType termsCompletionHandler; // @synthesize termsCompletionHandler=_termsCompletionHandler;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) _Bool presentTermsOnly; // @synthesize presentTermsOnly=_presentTermsOnly;
- (void).cxx_destruct;	// IMP=0x0000000100020470
- (void)_hideActivityIndicator;	// IMP=0x00000001000202fc
- (void)_showActivityIndicator;	// IMP=0x000000010002022c
- (void)_performFailureWithErrorCode:(long long)arg1;	// IMP=0x00000001000201f0
- (void)_performCompletionWithResult:(_Bool)arg1;	// IMP=0x0000000100020170
- (void)_dataClientConnectionHandler:(id)arg1;	// IMP=0x00000001000200d4
- (void)_connectRadioClient;	// IMP=0x0000000100020004
- (void)_handleTermsDisagreeSelection;	// IMP=0x000000010001fff4
- (void)_handleTermsAgreeSelectionWithVersion:(unsigned long long)arg1;	// IMP=0x000000010001fdc4
- (void)_handleTermsResponse:(id)arg1;	// IMP=0x000000010001fae8
- (void)_initiateRadioTermsCheck;	// IMP=0x000000010001edb0
- (void)_checkInitialState;	// IMP=0x000000010001ec90
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010001ebdc
- (void)viewDidLoad;	// IMP=0x000000010001eaf0
- (void)dealloc;	// IMP=0x000000010001ea28
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001e9b0

@end
