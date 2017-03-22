/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDBulletinIdentifiers.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, HMFMessageDispatcher, NSUUID, NSString, HMDAccessory, NSArray;

@interface HMDAccessoryProfile : NSObject <HMDBulletinIdentifiers, HMFMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	NSUUID* _uniqueIdentifier;
	NSString* _logID;
	HMDAccessory* _accessory;
	NSArray* _filteredServices;
	NSArray* _exposedServices;

}

@property (nonatomic,copy,readonly) NSString * contextID; 
@property (nonatomic,copy,readonly) NSUUID * contextSPIUniqueIdentifier; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * logID;                                              //@synthesize logID=_logID - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                               //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSArray * filteredServices;                                    //@synthesize filteredServices=_filteredServices - In the implementation block
@property (nonatomic,readonly) NSArray * exposedServices;                                     //@synthesize exposedServices=_exposedServices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)contextID;
-(NSUUID *)uniqueIdentifier;
-(HMFMessageDispatcher *)msgDispatcher;
-(id)dumpState;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSUUID *)contextSPIUniqueIdentifier;
-(HMDAccessory *)accessory;
-(id)logIdentifier;
-(NSString *)logID;
-(void)registerForMessages;
-(void)_encodeWithCoder:(id)arg1 ;
-(NSArray *)exposedServices;
-(id)initWithAccessory:(id)arg1 uuid:(id)arg2 filteredServices:(id)arg3 exposedServices:(id)arg4 msgDispatcher:(id)arg5 ;
-(NSArray *)filteredServices;
@end

