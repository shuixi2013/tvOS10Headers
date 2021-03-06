//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class NSArray, TVSAudioRoute, TVSAudioRoutingController;

@interface TVSettingsAudioRouteViewController : TSKViewController
{
    TVSAudioRoutingController *_routingController;	// 8 = 0x8
    TVSAudioRoute *_recentlySelectedRoute;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010007cc8c
- (id)_identifierForRoute:(id)arg1;	// IMP=0x000000010007cb68
- (void)_selectRoute:(id)arg1;	// IMP=0x000000010007cb00
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x000000010007c7d0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010007c5b4
- (id)loadSettingGroups;	// IMP=0x000000010007c19c
- (void)viewDidLoad;	// IMP=0x000000010007c0d8
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010007c044

@end

