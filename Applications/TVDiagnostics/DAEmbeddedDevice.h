//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASTSessionDelegate.h"
#import "DADeviceProtocol.h"
#import "DKAssetResponder.h"
#import "DSHardwareButtonEventDelegate.h"

@class ASTSession, AXAssertion, DAComponentManager, DASystemComponent, DKHost, NSCondition, NSLock, NSMutableArray, NSObject<OS_dispatch_semaphore>, NSString;

@interface DAEmbeddedDevice : NSObject <DKAssetResponder, DSHardwareButtonEventDelegate, DADeviceProtocol, ASTSessionDelegate>
{
    _Bool _cancelAlertVisible;	// 8 = 0x8
    _Bool _endingClientStatusLoop;	// 9 = 0x9
    _Bool _displayedWiFiRequired;	// 10 = 0xa
    _Bool _displayedNetworkRequired;	// 11 = 0xb
    _Bool _diagnosticsCanBegin;	// 12 = 0xc
    float _originalScreenBrightness;	// 16 = 0x10
    id <DADisplayProtocol> _display;	// 24 = 0x18
    id <DKBrightnessResponder><DKVolumeHUDResponder> _responder;	// 32 = 0x20
    id <DADeviceProtocol> _parentDevice;	// 40 = 0x28
    NSMutableArray *_childDevices;	// 48 = 0x30
    CDUnknownBlockType _clientStatusLoopCompletionBlock;	// 56 = 0x38
    ASTSession *_session;	// 64 = 0x40
    DKHost *_diagnosticsHost;	// 72 = 0x48
    DAComponentManager *_componentManager;	// 80 = 0x50
    DASystemComponent *_systemComponent;	// 88 = 0x58
    NSLock *_cancelAlertVisibleLock;	// 96 = 0x60
    AXAssertion *_disableSystemGesturesAssertion;	// 104 = 0x68
    NSCondition *_diagnosticsCanBeginLock;	// 112 = 0x70
    id _userInterruptDelegateHandle;	// 120 = 0x78
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;	// 128 = 0x80
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *completionSemaphore; // @synthesize completionSemaphore=_completionSemaphore;
@property(nonatomic) __weak id userInterruptDelegateHandle; // @synthesize userInterruptDelegateHandle=_userInterruptDelegateHandle;
@property(retain, nonatomic) NSCondition *diagnosticsCanBeginLock; // @synthesize diagnosticsCanBeginLock=_diagnosticsCanBeginLock;
@property(nonatomic) _Bool diagnosticsCanBegin; // @synthesize diagnosticsCanBegin=_diagnosticsCanBegin;
@property(retain, nonatomic) AXAssertion *disableSystemGesturesAssertion; // @synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion;
@property(nonatomic) _Bool displayedNetworkRequired; // @synthesize displayedNetworkRequired=_displayedNetworkRequired;
@property(nonatomic) _Bool displayedWiFiRequired; // @synthesize displayedWiFiRequired=_displayedWiFiRequired;
@property(nonatomic) float originalScreenBrightness; // @synthesize originalScreenBrightness=_originalScreenBrightness;
@property(nonatomic) _Bool endingClientStatusLoop; // @synthesize endingClientStatusLoop=_endingClientStatusLoop;
@property(retain, nonatomic) NSLock *cancelAlertVisibleLock; // @synthesize cancelAlertVisibleLock=_cancelAlertVisibleLock;
@property(nonatomic, getter=isCancelAlertVisible) _Bool cancelAlertVisible; // @synthesize cancelAlertVisible=_cancelAlertVisible;
@property(retain, nonatomic) DASystemComponent *systemComponent; // @synthesize systemComponent=_systemComponent;
@property(retain, nonatomic) DAComponentManager *componentManager; // @synthesize componentManager=_componentManager;
@property(retain, nonatomic) DKHost *diagnosticsHost; // @synthesize diagnosticsHost=_diagnosticsHost;
@property(retain, nonatomic) ASTSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType clientStatusLoopCompletionBlock; // @synthesize clientStatusLoopCompletionBlock=_clientStatusLoopCompletionBlock;
@property(retain, nonatomic) NSMutableArray *childDevices; // @synthesize childDevices=_childDevices;
@property(nonatomic) __weak id <DADeviceProtocol> parentDevice; // @synthesize parentDevice=_parentDevice;
@property(nonatomic) __weak id <DKBrightnessResponder><DKVolumeHUDResponder> responder; // @synthesize responder=_responder;
@property(nonatomic) __weak id <DADisplayProtocol> display; // @synthesize display=_display;
- (void).cxx_destruct;	// IMP=0x000000010000c4cc
- (void)reset;	// IMP=0x000000010000bfe8
- (void)appBecameActive:(id)arg1;	// IMP=0x000000010000bf18
- (void)appResigning;	// IMP=0x000000010000be60
- (void)checkAndWaitForWhenDiagnosticsCanBegin;	// IMP=0x000000010000bc4c
- (void)session:(id)arg1 didUpdateSettings:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000bac8
- (void)session:(id)arg1 didResumeSendingResultForTest:(id)arg2;	// IMP=0x000000010000b954
- (void)session:(id)arg1 didPauseSendingResultForTest:(id)arg2 error:(id)arg3;	// IMP=0x000000010000b7bc
- (void)sessionDidResume:(id)arg1;	// IMP=0x000000010000b6d4
- (void)session:(id)arg1 didPauseWithError:(id)arg2;	// IMP=0x000000010000b5d0
- (void)session:(id)arg1 didUpdateTestSuiteImage:(id)arg2;	// IMP=0x000000010000b530
- (void)session:(id)arg1 didUpdateTestSuiteProgress:(id)arg2;	// IMP=0x000000010000b4c4
- (void)sessionDidCancelSuite:(id)arg1;	// IMP=0x000000010000b484
- (void)session:(id)arg1 didCompleteTestSuite:(id)arg2 description:(id)arg3;	// IMP=0x000000010000b3fc
- (void)session:(id)arg1 didStartTestSuite:(id)arg2 description:(id)arg3;	// IMP=0x000000010000b374
- (void)session:(id)arg1 didEndWithError:(id)arg2;	// IMP=0x000000010000b228
- (void)session:(id)arg1 queryAvailableTestsWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000afd4
- (void)session:(id)arg1 queryPropertiesFilteredByComponents:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ac6c
- (void)session:(id)arg1 cancelTest:(id)arg2;	// IMP=0x000000010000abf8
- (void)session:(id)arg1 startTest:(id)arg2 parameters:(id)arg3 testResult:(id)arg4;	// IMP=0x000000010000a730
- (void)didReceiveUserInterrupt;	// IMP=0x000000010000a288
- (void)didReceiveButtonEvent:(unsigned long long)arg1;	// IMP=0x000000010000a1d8
- (void)enableSystemGestures;	// IMP=0x000000010000a180
- (void)disableSystemGestures;	// IMP=0x000000010000a088
- (void)startInterceptingButtonEvents;	// IMP=0x000000010000a000
- (void)getAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009d70
- (void)waitUntilClientStatusLoopHasEnded;	// IMP=0x0000000100009d1c
- (void)endClientStatusLoop;	// IMP=0x0000000100009be0
- (_Bool)startClientStatusLoop;	// IMP=0x0000000100009948
@property(readonly, copy) NSString *description;
- (id)userAssignedName;	// IMP=0x000000010000975c
- (id)productClass;	// IMP=0x0000000100009708
- (id)serialNumber;	// IMP=0x00000001000096b4
- (id)initWithDisplay:(id)arg1;	// IMP=0x00000001000095d8
- (id)init;	// IMP=0x00000001000091f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

