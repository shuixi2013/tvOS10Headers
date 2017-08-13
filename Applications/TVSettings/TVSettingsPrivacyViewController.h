//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@interface TVSettingsPrivacyViewController : TSKViewController
{
    _Bool _diagnosticIdentifierVisible;	// 8 = 0x8
}

@property(nonatomic) _Bool diagnosticIdentifierVisible; // @synthesize diagnosticIdentifierVisible=_diagnosticIdentifierVisible;
- (void)_updateLimitAdTrackingItem:(id)arg1 value:(id)arg2;	// IMP=0x000000010006e204
- (void)_updateSendDataItem:(id)arg1 value:(id)arg2;	// IMP=0x000000010006dfc4
- (id)_locationServicesViewController;	// IMP=0x000000010006de5c
- (void)_showResetConfirmation:(id)arg1;	// IMP=0x000000010006dbc8
- (void)showSendDataDialog:(id)arg1;	// IMP=0x000000010006d74c
- (void)showAppAnalyticsDialog:(id)arg1;	// IMP=0x000000010006d2d0
- (void)showProfileViewController:(id)arg1;	// IMP=0x000000010006d254
- (void)toggleShowDiagnosticIdentifier:(id)arg1;	// IMP=0x000000010006d234
- (void)internetAvailabilityChanged:(id)arg1;	// IMP=0x000000010006d228
- (id)loadSettingGroups;	// IMP=0x000000010006bea0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010006be30
- (void)dealloc;	// IMP=0x000000010006bdb4
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010006bd1c

@end
