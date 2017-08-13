//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBSBulletinServiceInterface.h"

@class NSMapTable, NSMutableDictionary, NSString, PBSystemServiceConnection;

@interface PBBulletinService : NSObject <PBSBulletinServiceInterface>
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
    NSMapTable *_viewControllersByBulletin;	// 16 = 0x10
    NSMutableDictionary *_pendingBulletinsByRequestID;	// 24 = 0x18
    id <PBSBulletinServiceDelegate> _delegateProxy;	// 32 = 0x20
}

+ (void)_setBulletinService:(id)arg1 forViewController:(id)arg2;	// IMP=0x0000000100046494
+ (id)_bulletinServiceForViewController:(id)arg1;	// IMP=0x00000001000463d0
+ (void)applicationTerminateBulletinViewController:(id)arg1;	// IMP=0x0000000100044328
+ (void)applicationRetireBulletinViewController:(id)arg1;	// IMP=0x000000010004423c
+ (void)applicationDismissBulletinViewController:(id)arg1;	// IMP=0x0000000100044150
+ (void)applicationActivateBulletinViewController:(id)arg1;	// IMP=0x0000000100044064
+ (void)windowManagerWillPresentBulletinViewController:(id)arg1;	// IMP=0x0000000100043f7c
+ (id)_bulletinServicesByViewController;	// IMP=0x0000000100043910
@property(retain, nonatomic) id <PBSBulletinServiceDelegate> delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(readonly, nonatomic) NSMutableDictionary *pendingBulletinsByRequestID; // @synthesize pendingBulletinsByRequestID=_pendingBulletinsByRequestID;
@property(readonly, nonatomic) NSMapTable *viewControllersByBulletin; // @synthesize viewControllersByBulletin=_viewControllersByBulletin;
@property(readonly, nonatomic) PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (void).cxx_destruct;	// IMP=0x00000001000465d4
- (void)_setViewController:(id)arg1 forBulletin:(id)arg2;	// IMP=0x00000001000462e4
- (id)_viewControllerForBulletin:(id)arg1;	// IMP=0x0000000100046220
- (id)_bulletinForViewController:(id)arg1;	// IMP=0x000000010004603c
- (_Bool)_bulletinIsPending:(id)arg1;	// IMP=0x0000000100045f58
- (void)_updateRequestForBulletin:(id)arg1 withBulletin:(id)arg2;	// IMP=0x0000000100045d1c
- (id)_bulletinForRequestID:(unsigned long long)arg1;	// IMP=0x0000000100045c38
- (void)_setBulletin:(id)arg1 forRequestID:(unsigned long long)arg2;	// IMP=0x0000000100045afc
- (void)_prepareToPresentViewController:(id)arg1;	// IMP=0x0000000100045a90
- (void)_handleApplicationDismissalForViewController:(id)arg1 withReason:(unsigned long long)arg2;	// IMP=0x0000000100045600
- (void)_completeWithBulletin:(id)arg1 success:(_Bool)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100045394
- (id)_reserveTableSpaceForBulletin:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100045230
- (void)setDelegate:(id)arg1;	// IMP=0x0000000100045224
- (void)dismissBulletin:(id)arg1;	// IMP=0x0000000100044f90
- (id)updateBulletin:(id)arg1 withMessage:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100044bf0
- (void)presentBulletin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100044414
- (void)invalidate;	// IMP=0x0000000100043abc
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x00000001000439b4
- (id)init;	// IMP=0x000000010004399c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
