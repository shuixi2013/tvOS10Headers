//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTGenericSettingsViewController.h"

@interface MTTVGenericSettingsViewController : MTGenericSettingsViewController
{
}

+ (id)cellClassForSettingType:(int)arg1 inGroupWithIdentifier:(id)arg2;	// IMP=0x00000001000fe4f0
+ (id)footerFont;	// IMP=0x00000001000fe1dc
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000001000fede0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000febe0
- (id)optionsTableViewControllerWithOption:(id)arg1;	// IMP=0x00000001000feb78
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 withDescription:(id)arg3 inGroupWithIdentifier:(id)arg4;	// IMP=0x00000001000fe73c
- (id)newCellForDescriptionType:(int)arg1 inGroupWithIdentifier:(id)arg2;	// IMP=0x00000001000fe5b8
- (void)viewWillLayoutSubviews;	// IMP=0x00000001000fe270
- (void)viewDidLoad;	// IMP=0x00000001000fe1fc

@end

