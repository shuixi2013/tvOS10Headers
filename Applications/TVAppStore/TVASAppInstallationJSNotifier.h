//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSApplicationWorkspaceObserverProtocol.h"

@class NSString, TVApplicationController;

@interface TVASAppInstallationJSNotifier : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    TVApplicationController *_appController;	// 8 = 0x8
}

@property(retain, nonatomic) TVApplicationController *appController; // @synthesize appController=_appController;
- (void).cxx_destruct;	// IMP=0x000000010000e1d0
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x000000010000e0dc
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000010000e030
- (void)_sendAppInstallChangedNotificationToTheJavaScript;	// IMP=0x000000010000df64
- (void)dealloc;	// IMP=0x000000010000dee8
- (id)initWithAppController:(id)arg1;	// IMP=0x000000010000de24
- (id)init;	// IMP=0x000000010000de0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

