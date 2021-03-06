//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASAsset, ASAssetQuery, MSUUpdateBrainAssetLoader, NSTimer, TVSCacheDeletePurgeID, TVSStateMachine;

@interface PBOSSoftwareUpdateProcess : NSObject
{
    _Bool _needToCancelMSUOperation;	// 8 = 0x8
    _Bool _assetIsLarge;	// 9 = 0x9
    _Bool _isApplyingRecheckedUpdate;	// 10 = 0xa
    _Bool _sentDownloadFinishedCallback;	// 11 = 0xb
    _Bool _userConfirmedApplyAtCheckTime;	// 12 = 0xc
    unsigned long long _state;	// 16 = 0x10
    id <PBOSSoftwareUpdateProcessDelegate> _delegate;	// 24 = 0x18
    TVSStateMachine *_machine;	// 32 = 0x20
    unsigned long long _action;	// 40 = 0x28
    unsigned long long _deferredAction;	// 48 = 0x30
    ASAssetQuery *_assetQuery;	// 56 = 0x38
    ASAsset *_asset;	// 64 = 0x40
    MSUUpdateBrainAssetLoader *_brainLoader;	// 72 = 0x48
    NSTimer *_slowUpdateTimer;	// 80 = 0x50
    TVSCacheDeletePurgeID *_cacheDeletePurgeID;	// 88 = 0x58
}

+ (id)sharedProcess;	// IMP=0x0000000100014c70
@property(retain, nonatomic) TVSCacheDeletePurgeID *cacheDeletePurgeID; // @synthesize cacheDeletePurgeID=_cacheDeletePurgeID;
@property(nonatomic) _Bool userConfirmedApplyAtCheckTime; // @synthesize userConfirmedApplyAtCheckTime=_userConfirmedApplyAtCheckTime;
@property(nonatomic) _Bool sentDownloadFinishedCallback; // @synthesize sentDownloadFinishedCallback=_sentDownloadFinishedCallback;
@property(nonatomic) _Bool isApplyingRecheckedUpdate; // @synthesize isApplyingRecheckedUpdate=_isApplyingRecheckedUpdate;
@property(nonatomic) _Bool assetIsLarge; // @synthesize assetIsLarge=_assetIsLarge;
@property(nonatomic) _Bool needToCancelMSUOperation; // @synthesize needToCancelMSUOperation=_needToCancelMSUOperation;
@property(retain, nonatomic) NSTimer *slowUpdateTimer; // @synthesize slowUpdateTimer=_slowUpdateTimer;
@property(retain, nonatomic) MSUUpdateBrainAssetLoader *brainLoader; // @synthesize brainLoader=_brainLoader;
@property(retain, nonatomic) ASAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) ASAssetQuery *assetQuery; // @synthesize assetQuery=_assetQuery;
@property(nonatomic) unsigned long long deferredAction; // @synthesize deferredAction=_deferredAction;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(retain, nonatomic) TVSStateMachine *machine; // @synthesize machine=_machine;
@property(nonatomic) __weak id <PBOSSoftwareUpdateProcessDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;	// IMP=0x00000001000242bc
- (id)_spaceCheckOptions;	// IMP=0x0000000100023f08
- (void)_continueWithSufficientSpaceFor:(id)arg1;	// IMP=0x0000000100023e28
- (_Bool)_wasStartedByBackgroundCheck;	// IMP=0x0000000100023dd8
- (_Bool)_wasStartedForRestore;	// IMP=0x0000000100023db4
- (long long)compareOSVersion:(id)arg1 andBuild:(id)arg2 withOSVersion:(id)arg3 andBuild:(id)arg4;	// IMP=0x0000000100023ca8
- (id)_nameForAction:(unsigned long long)arg1;	// IMP=0x0000000100023c08
- (void)_storeURLBagLoaded:(id)arg1;	// IMP=0x0000000100023b7c
- (id)_resultUserInfoWithError:(id)arg1;	// IMP=0x0000000100023890
- (void)_slowUpdateTimerFired:(id)arg1;	// IMP=0x0000000100023790
- (void)_stopSlowUpdateTimer;	// IMP=0x00000001000236e8
- (void)_startSlowUpdateTimer;	// IMP=0x0000000100023620
- (void)_forceRebootAfterCancel;	// IMP=0x0000000100023494
- (void)_cancelAndRebootDuringApply;	// IMP=0x000000010002345c
- (void)_cancelAndRebootDuringVerifyUnarchive;	// IMP=0x00000001000232ac
- (void)_assetCleanupHandler:(id)arg1;	// IMP=0x00000001000230b4
- (void)_cleanUpAsset;	// IMP=0x0000000100022ef0
- (void)_cancelUpdateDuringApply;	// IMP=0x0000000100022e80
- (void)_cancelUpdateDuringDownload;	// IMP=0x0000000100022cf8
- (void)_cancelUpdatePreDownload;	// IMP=0x00000001000229cc
- (void)_updateProgressStatus:(id)arg1;	// IMP=0x0000000100022750
- (void)_handleBrainDownloadProgressCallbackWithState:(id)arg1 error:(id)arg2;	// IMP=0x0000000100021d44
- (void)_handleProgressCallbackVerifyExtractWithState:(id)arg1;	// IMP=0x0000000100021958
- (void)_handleProgressCallbackPausedWithState:(id)arg1;	// IMP=0x0000000100021768
- (void)_handleProgressCallbackDownloadingWithState:(id)arg1;	// IMP=0x000000010002141c
- (void)_handleProgressCallbackQueuedWithState:(id)arg1;	// IMP=0x0000000100021210
- (void)_handleProgressCallbackError:(id)arg1 inState:(id)arg2;	// IMP=0x0000000100020c44
- (void)_handleProgressCallbackWithState:(id)arg1 error:(id)arg2;	// IMP=0x000000010002099c
- (void)_prepareAndApplyUpdateThreadedWithImage:(id)arg1;	// IMP=0x000000010001f3e4
- (void)_prepareAndApplyUpdate;	// IMP=0x000000010001efe4
- (void)_processPrepareAndApplyForRequiredSpace:(unsigned long long)arg1 andError:(id)arg2;	// IMP=0x000000010001ece8
- (void)_clearPrepareAndApplySpaceWithInstallationSize:(unsigned long long)arg1 andPadding:(unsigned long long)arg2;	// IMP=0x000000010001ea10
- (void)_clearPrepareAndApplySpace;	// IMP=0x000000010001e95c
- (void)_verifyAndUnarchiveUpdate;	// IMP=0x000000010001e630
- (void)_processVerifyAndUnarchiveSpaceCheckForRequiredSpace:(unsigned long long)arg1 hasSpace:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000010001e32c
- (void)_clearVerifyAndUnarchiveSpace;	// IMP=0x000000010001df78
- (void)_downloadBrain;	// IMP=0x000000010001de30
- (void)_processBrainDownloadSpaceCheckForBrainSize:(long long)arg1 error:(id)arg2;	// IMP=0x000000010001dabc
- (void)_clearBrainDownloadSpace;	// IMP=0x000000010001d7a0
- (void)_downloadAsset;	// IMP=0x000000010001d618
- (void)_processDownloadSpaceCheckForRequiredSpace:(unsigned long long)arg1 hasSpace:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000010001d314
- (void)_checkAndClearAssetDownloadSpaceAttempt:(long long)arg1;	// IMP=0x000000010001ceb4
- (void)_clearAssetDownloadSpace;	// IMP=0x000000010001ce2c
- (_Bool)_goodTimeToDownloadUpdate;	// IMP=0x000000010001cca8
- (void)_determineAssetToApplyAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010001bac0
- (void)_recheckForNewerUpdate;	// IMP=0x000000010001b6f0
- (void)_performCheck;	// IMP=0x000000010001acc4
- (void)_purgePreviousAssets;	// IMP=0x000000010001a7b0
- (void)_registerHandlers;	// IMP=0x0000000100015778
- (void)_processEvent:(id)arg1;	// IMP=0x0000000100015708
- (void)rebootDueToSlowUpdate;	// IMP=0x00000001000156f4
- (void)cancelForReason:(unsigned long long)arg1;	// IMP=0x00000001000156e0
- (void)resumeAfterDownload;	// IMP=0x00000001000156cc
- (void)resumeAfterUpdateCheck;	// IMP=0x00000001000156b8
- (_Bool)isRunning;	// IMP=0x0000000100015650
- (void)start;	// IMP=0x0000000100015368
- (_Bool)configureForAction:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000100015220
- (void)dealloc;	// IMP=0x00000001000150f8
- (id)init;	// IMP=0x0000000100014d0c

@end

