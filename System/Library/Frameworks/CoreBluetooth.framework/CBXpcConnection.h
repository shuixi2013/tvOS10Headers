/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBXpcConnectionDelegate, OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSMutableDictionary;

@interface CBXpcConnection : NSObject {

	id<CBXpcConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSMutableDictionary* _options;
	int _sessionType;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSObject*<OS_xpc_object> _xpcConnection;
	BOOL _uiAppIsBackgrounded;

}
-(void)disconnect;
-(id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)sendMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)_applicationDidEnterBackgroundNotification;
-(void)_applicationWillEnterForegroundNotification;
-(void)_handleConnectionEvent:(id)arg1 ;
-(void)_checkIn;
-(id)_allocXpcMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)_nameForMessage:(unsigned short)arg1 ;
-(void)_sendBarrier;
-(void)_checkOut;
-(void)_handleFinalized;
-(void)_handleMsg:(id)arg1 ;
-(void)_handleReset;
-(void)_handleInvalid;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4 ;
-(void)setTargetQueue:(id)arg1 ;
@end

