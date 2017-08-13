//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SSDisplay, SSIndicatorLight;

@interface ATVHIDSystemClient : NSObject
{
    struct __IOHIDEventSystemClient *_hidSystemClient;	// 8 = 0x8
    NSArray *_normalEventRouters;	// 16 = 0x10
    SSDisplay *_systemState;	// 24 = 0x18
    SSIndicatorLight *_sil;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010004abf0
- (void).cxx_destruct;	// IMP=0x000000010004d280
- (void)_delayedInstallSleepTimeHIDEventRouters;	// IMP=0x000000010004cf88
- (void)_delayedInstallNormalHIDEventRouters;	// IMP=0x000000010004cd88
- (void)_handleWillWakeNotification:(id)arg1;	// IMP=0x000000010004ca14
- (void)_handleWillSleepNotification:(id)arg1;	// IMP=0x000000010004c5f0
- (void)_setSILForButtonDown:(_Bool)arg1;	// IMP=0x000000010004c5d4
- (void)setSILStateForHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010004c4a8
- (void)setSILState_On;	// IMP=0x000000010004c3bc
- (void)setSILState_Off;	// IMP=0x000000010004c2d0
- (void)wakeDisplay;	// IMP=0x000000010004bfd8
- (void)sleepDisplay;	// IMP=0x000000010004bce0
- (void)_processGenericDesktopEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010004bc20
- (void)_processConsumerEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010004bb98
- (void)_processBatterySystemEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010004bb88
- (void)_processAppleVendorDebugEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010004ba68
- (void)_processAppleVendorIRRemoteEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010004b9f0
- (void)_processHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010004b934
- (void)setupHIDEventRouters;	// IMP=0x000000010004afc0
- (void)dealloc;	// IMP=0x000000010004af30
- (int)_init;	// IMP=0x000000010004acbc
- (id)init;	// IMP=0x000000010004ac44

@end
