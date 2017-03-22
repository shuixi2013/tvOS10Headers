/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTLockScreenMonitor : VTEventMonitor {

	int _notifyToken;
	unsigned char _lockScreenState;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(unsigned char)lockScreenState;
-(unsigned char)_checkLockScreenState;
-(void)_didReceiveLockScreenStateChanged:(unsigned char)arg1 ;
-(id)lockScreenStateDescription:(unsigned char)arg1 ;
-(void)_notifyObserver:(id)arg1 withLockScreenState:(unsigned char)arg2 ;
-(void)_didReceiveLockScreenStateChangedInQueue:(unsigned char)arg1 ;
@end

