/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDCameraPowerAssertionProtocol.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSString, HMDAccessory, HMDCameraSessionID, NSObject;

@interface HMDCameraSnapshotSender : NSObject <HMFLogging, HMDCameraPowerAssertionProtocol> {

	NSUUID* _uniqueIdentifier;
	NSString* _destinationID;
	HMDAccessory* _accessory;
	HMDCameraSessionID* _sessionID;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * destinationID;                                //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                         //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HMDCameraSessionID * sessionID;                          //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSUUID *)uniqueIdentifier;
-(HMDCameraSessionID *)sessionID;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDAccessory *)accessory;
-(NSString *)destinationID;
-(id)logIdentifier;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 destinationID:(id)arg3 accessory:(id)arg4 delegateQueue:(id)arg5 uniqueIdentifier:(id)arg6 ;
-(void)_sendImageSendFailure:(id)arg1 ;
@end

