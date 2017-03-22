/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATXPCInterfaceProtocol
@required
-(void)initiateAssetDownloadSessionsWithCompletion:(/*^block*/id)arg1;
-(void)requestSyncForPairedDeviceWithPriority:(int)arg1 withCompletion:(/*^block*/id)arg2;
-(void)prioritizeAsset:(id)arg1 forDataclass:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)openDeviceMessageLinkWithPriority:(int)arg1 withCompletion:(/*^block*/id)arg2;
-(void)syncChangesForDataClass:(id)arg1 withPriority:(int)arg2;
-(void)restoreFromDeviceWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)requestSyncForLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)requestKeybagSyncToPairedDeviceWithCompletion:(/*^block*/id)arg1;
-(void)registerForStatusOfDataclasses:(id)arg1 enabled:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)cancelSyncWithCompletion:(/*^block*/id)arg1;
-(void)purgePartialAsset:(id)arg1 forDataclass:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)clearSyncDataWithCompletion:(/*^block*/id)arg1;
-(void)lowBatteryNotificationWithCompletion:(/*^block*/id)arg1;
-(void)keepATCAlive:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(void)getSyncStateWithCompletion:(/*^block*/id)arg1;
-(void)getAssetMetricswithCompletion:(/*^block*/id)arg1;
-(void)getDataRestoreIsCompleteWithCompletion:(/*^block*/id)arg1;

@end

