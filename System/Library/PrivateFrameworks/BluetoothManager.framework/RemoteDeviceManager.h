/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface RemoteDeviceManager : NSObject {

	NSObject*<OS_xpc_object> _connection;

}
-(void)dealloc;
-(id)init;
-(void)sendMessage:(const char*)arg1 args:(id)arg2 ;
-(void)disconnectDevice:(id)arg1 ;
@end

