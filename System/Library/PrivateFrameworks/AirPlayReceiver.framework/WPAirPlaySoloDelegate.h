/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WPAirPlaySoloDelegate <NSObject>
@optional
-(void)airPlaySoloStartedAdvertising:(id)arg1;
-(void)airPlaySoloStoppedAdvertising:(id)arg1;
-(void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
-(void)airPlaySoloAdvertisingPending:(id)arg1;
-(void)airPlaySoloStartedScanning:(id)arg1;
-(void)airPlaySoloStoppedScanning:(id)arg1;
-(void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;
-(void)airPlaySolo:(id)arg1 didStartTrackingPeer:(id)arg2 withData:(id)arg3 error:(id)arg4;
-(void)airPlaySolo:(id)arg1 didStopTrackingPeer:(id)arg2 withData:(id)arg3;
-(void)airPlaySolo:(id)arg1 didLosePeer:(id)arg2 withData:(id)arg3;
-(void)airplaySolo:(id)arg1 peerTrackingSlotsAvailable:(BOOL)arg2;

@required
-(void)airPlaySoloDidUpdateState:(id)arg1;
-(void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;

@end
