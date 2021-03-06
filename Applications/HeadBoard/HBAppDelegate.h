//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "TVAssetLibraryOverrideCacheDeleteUrgencyProtocol.h"
#import "UIApplicationDelegate.h"
#import "UIApplicationDelegatePrivate.h"

@class HBWindow, NSString;

@interface HBAppDelegate : UIResponder <UIApplicationDelegatePrivate, TVAssetLibraryOverrideCacheDeleteUrgencyProtocol, UIApplicationDelegate>
{
    HBWindow *_window;	// 8 = 0x8
}

+ (id)sharedApplicationDelegate;	// IMP=0x0000000100015c80
@property(retain, nonatomic) HBWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x0000000100018034
- (id)_findFirstViewOfClass:(Class)arg1 inViewHierarchy:(id)arg2 depth:(int)arg3;	// IMP=0x0000000100017e44
- (id)_findFirstViewOfClass:(Class)arg1 inViewHierarchy:(id)arg2;	// IMP=0x0000000100017e34
- (void)startAppGridMenuPressScrollTest:(id)arg1 options:(id)arg2;	// IMP=0x0000000100017898
- (void)startAppGridSwipeTest:(id)arg1 options:(id)arg2;	// IMP=0x00000001000177c4
- (void)startTopShelfSwipeTest:(id)arg1 options:(id)arg2;	// IMP=0x0000000100017330
- (void)startTopShelfFocusMoveTest:(id)arg1 options:(id)arg2;	// IMP=0x00000001000172dc
- (void)startFocusMoveTest:(id)arg1 options:(id)arg2;	// IMP=0x0000000100017288
- (void)_performFocusMoveTest:(id)arg1 options:(id)arg2 axis:(int)arg3;	// IMP=0x0000000100016c20
- (void)startScrollTestForCollectionViewClass:(Class)arg1 fromViewHierarchy:(id)arg2 testName:(id)arg3 axis:(int)arg4 options:(id)arg5;	// IMP=0x00000001000169a0
- (void)startLogTest:(id)arg1;	// IMP=0x0000000100016854
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x0000000100016464
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x000000010001630c
- (void)prepareForKioskAppTransitionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100016264
- (long long)overrideAssetLibraryCacheDeleteUrgency;	// IMP=0x000000010001625c
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100015cdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

