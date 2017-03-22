/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDAccountRegistry, NSString;

@interface HMDRemoteMessageTransport : HMFMessageTransport <HMFLogging> {

	BOOL _secure;
	HMDAccountRegistry* _accountRegistry;
	long long _qualityOfService;

}

@property (nonatomic,readonly) HMDAccountRegistry * accountRegistry;              //@synthesize accountRegistry=_accountRegistry - In the implementation block
@property (getter=isSecure,nonatomic,readonly) BOOL secure;                       //@synthesize secure=_secure - In the implementation block
@property (nonatomic,readonly) long long qualityOfService;                        //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(unsigned long long)restriction;
+(id)remoteMessageFromMessage:(id)arg1 secure:(BOOL)arg2 accountRegistry:(id)arg3 ;
-(id)init;
-(BOOL)isSecure;
-(void)start;
-(long long)qualityOfService;
-(id)initWithAccountRegistry:(id)arg1 ;
-(HMDAccountRegistry *)accountRegistry;
-(id)remoteMessageFromMessage:(id)arg1 ;
-(BOOL)canSendMessage:(id)arg1 ;
-(id)matchResponse:(id)arg1 requestedCapabilities:(id)arg2 ;
-(BOOL)doesResponse:(id)arg1 matchAllCapabilities:(id)arg2 ;
-(void)postDidReceiveRemoteMessageWithNoListenerFromDevice:(id)arg1 ;
-(long long)compareCapability:(id)arg1 key:(id)arg2 withCapability:(id)arg3 ;
@end

