//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "PBSystemServiceNowPlayingDelegate.h"
#import "UIApplicationDelegate.h"

@class NSObject<OS_dispatch_source>, NSString, TVNavigationController, TVSPlayer, UIWindow;

@interface TVHSAppDelegate : UIResponder <PBSystemServiceNowPlayingDelegate, UIApplicationDelegate>
{
    UIWindow *_window;	// 8 = 0x8
    TVSPlayer *_player;	// 16 = 0x10
    long long _playlistRepeatMode;	// 24 = 0x18
    TVNavigationController *_navigationController;	// 32 = 0x20
    long long _applicationUIMode;	// 40 = 0x28
    unsigned long long _homeSharingManagerContext;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_tickleTimer;	// 56 = 0x38
}

+ (long long)_playlistRepeatModeForMediaRepeatMode:(long long)arg1;	// IMP=0x0000000100007a58
+ (long long)_playlistRepeatModeFromPreferences;	// IMP=0x00000001000079ec
+ (id)theAppDelegate;	// IMP=0x000000010000695c
@property(retain, nonatomic) NSObject<OS_dispatch_source> *tickleTimer; // @synthesize tickleTimer=_tickleTimer;
@property(nonatomic) unsigned long long homeSharingManagerContext; // @synthesize homeSharingManagerContext=_homeSharingManagerContext;
@property(nonatomic) long long applicationUIMode; // @synthesize applicationUIMode=_applicationUIMode;
@property(retain, nonatomic) TVNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) long long playlistRepeatMode; // @synthesize playlistRepeatMode=_playlistRepeatMode;
@property(readonly, nonatomic) TVSPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x0000000100008bc4
- (void)_configureAudioSession;	// IMP=0x000000010000895c
- (void)_startHomeSharingManagementAndShowViewController:(id)arg1 applicationUIMode:(long long)arg2;	// IMP=0x00000001000087a0
- (void)_startHomeSharingManagementWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008444
- (void)_updateNavigationControllerWithViewController:(id)arg1;	// IMP=0x0000000100008370
- (id)_viewControllerWithDeepLinkOptions:(id)arg1 applicationUIMode:(long long *)arg2;	// IMP=0x00000001000082b4
- (id)_viewControllerForSelectScreenSaverWithDeepLinkOptions:(id)arg1;	// IMP=0x0000000100007fdc
- (id)_viewControllerForStandardAppLaunchWithDeepLinkOptions:(id)arg1;	// IMP=0x0000000100007ef4
- (id)_viewControllerForStandardAppLaunch;	// IMP=0x0000000100007ee4
- (void)_sendTickle;	// IMP=0x0000000100007dc8
- (void)_stopTickleTimer;	// IMP=0x0000000100007cb0
- (void)_startTickleTimer;	// IMP=0x0000000100007a64
- (void)systemServicePresentNowPlayingUI;	// IMP=0x000000010000793c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000078d8
- (void)_handlePlaybackStateDidChangeNotification:(id)arg1;	// IMP=0x0000000100007820
- (void)_handleConnectedDataClientStatusChangedNotification:(id)arg1;	// IMP=0x00000001000074a8
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x000000010000749c
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000100007414
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100006cac
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x00000001000069b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
