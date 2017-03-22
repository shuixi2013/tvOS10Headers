/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFNetMonitorDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol HMDRemoteDeviceMonitorDelegate, OS_dispatch_queue;
@class NSMapTable, HMDAccountRegistry, NSObject, IDSService, HMFNetMonitor, HMFTimer, NSArray, NSString;

@interface HMDRemoteDeviceMonitor : NSObject <HMFLogging, HMFNetMonitorDelegate, HMFTimerDelegate, IDSServiceDelegate> {

	NSMapTable* _devices;
	BOOL _reachable;
	id<HMDRemoteDeviceMonitorDelegate> _delegate;
	HMDAccountRegistry* _accountRegistry;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	IDSService* _service;
	HMFNetMonitor* _netMonitor;
	HMFTimer* _deviceHealthTimer;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) IDSService * service;                                    //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) HMFNetMonitor * netMonitor;                              //@synthesize netMonitor=_netMonitor - In the implementation block
@property (nonatomic,readonly) HMFTimer * deviceHealthTimer;                            //@synthesize deviceHealthTimer=_deviceHealthTimer - In the implementation block
@property (__weak) id<HMDRemoteDeviceMonitorDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMDAccountRegistry * accountRegistry;                    //@synthesize accountRegistry=_accountRegistry - In the implementation block
@property (getter=isReachable,readonly) BOOL reachable;                                 //@synthesize reachable=_reachable - In the implementation block
@property (readonly) NSArray * unreachableDevices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)pingMessageForDevice:(id)arg1 timeout:(double)arg2 restriction:(unsigned long long)arg3 ;
-(void)setDelegate:(id<HMDRemoteDeviceMonitorDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<HMDRemoteDeviceMonitorDelegate>)delegate;
-(void)start;
-(id)dumpState;
-(IDSService *)service;
-(id)initWithAccountRegistry:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(BOOL)isReachable;
-(HMDAccountRegistry *)accountRegistry;
-(id)devices;
-(void)setReachable:(BOOL)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6 ;
-(void)startMonitoringDevice:(id)arg1 ;
-(NSArray *)unreachableDevices;
-(void)networkMonitorIsReachable:(id)arg1 ;
-(void)networkMonitorIsUnreachable:(id)arg1 ;
-(HMFNetMonitor *)netMonitor;
-(void)confirmDevice:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(HMFTimer *)deviceHealthTimer;
-(void)handleCurrentDeviceUpdate:(id)arg1 ;
-(void)notifyDeviceReachabilityChange:(BOOL)arg1 forDevice:(id)arg2 ;
-(id)deviceInformationForDevice:(id)arg1 ;
-(void)handleAddedDeviceInformation:(id)arg1 ;
-(void)handleAccountRemoved:(id)arg1 ;
-(void)handleDeviceRemovedFromAccount:(id)arg1 ;
-(void)_sendPingToDevice:(id)arg1 ;
-(id)_deviceInformationForDevice:(id)arg1 ;
-(void)_startActivelyMonitoringDevice:(id)arg1 ;
-(void)stopMonitoringDevice:(id)arg1 ;
-(void)_handleGlobalReachabilityChange;
-(void)_stopActivelyMonitoringDevice:(id)arg1 ;
@end

