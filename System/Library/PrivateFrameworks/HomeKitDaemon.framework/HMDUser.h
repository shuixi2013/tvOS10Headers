/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, HMDHome, NSString, HAPPairingIdentity, NSUUID, NSObject;

@interface HMDUser : NSObject <HMFDumpState, NSSecureCoding> {

	NSMutableArray* _relayAccessTokens;
	BOOL _remoteAccessAllowed;
	BOOL _remoteGateway;
	unsigned long long _privilege;
	HMDHome* _home;
	NSString* _userID;
	NSString* _relayIdentifier;
	HAPPairingIdentity* _pairingIdentity;
	NSUUID* _uuid;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                       //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * encodingRemoteDisplayName; 
@property (assign,nonatomic,__weak) HMDHome * home;                                              //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) NSString * userID;                                                    //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * relayIdentifier;                                           //@synthesize relayIdentifier=_relayIdentifier - In the implementation block
@property (assign,getter=isRemoteAccessAllowed,nonatomic) BOOL remoteAccessAllowed;              //@synthesize remoteAccessAllowed=_remoteAccessAllowed - In the implementation block
@property (assign,getter=isRemoteGateway,nonatomic) BOOL remoteGateway;                          //@synthesize remoteGateway=_remoteGateway - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                                                        //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long privilege;                                       //@synthesize privilege=_privilege - In the implementation block
@property (nonatomic,retain) HAPPairingIdentity * pairingIdentity;                               //@synthesize pairingIdentity=_pairingIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (getter=isCurrentUser,nonatomic,readonly) BOOL currentUser; 
@property (getter=isValid,readonly) BOOL valid; 
@property (nonatomic,readonly) BOOL isAdministrator; 
@property (nonatomic,readonly) BOOL isOwner; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)currentUserWithPrivilege:(unsigned long long)arg1 ;
+(id)destinationWithUserID:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(BOOL)isValid;
-(NSString *)displayName;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(BOOL)isOwner;
-(NSString *)userID;
-(id)dumpState;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(BOOL)isCurrentUser;
-(BOOL)isRemoteGateway;
-(id)residentCopy;
-(id)userCopy;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)pairingUsername;
-(id)publicKey;
-(NSString *)relayIdentifier;
-(void)setRelayIdentifier:(NSString *)arg1 ;
-(BOOL)mergeFromUser:(id)arg1 dataVersion:(long long)arg2 ;
-(void)setUserID:(NSString *)arg1 ;
-(HAPPairingIdentity *)pairingIdentity;
-(void)configureWithHome:(id)arg1 ;
-(BOOL)isRemoteAccessAllowed;
-(unsigned long long)privilege;
-(BOOL)isAdministrator;
-(void)removeRelayAccessTokenForAccessory:(id)arg1 ;
-(id)initWithUserID:(id)arg1 pairingIdentity:(id)arg2 privilege:(unsigned long long)arg3 ;
-(void)setRemoteAccessAllowed:(BOOL)arg1 ;
-(BOOL)updateAdministrator:(BOOL)arg1 ;
-(BOOL)updateRemoteAccessAllowed:(BOOL)arg1 ;
-(id)relayAccessTokenForAccessory:(id)arg1 ;
-(void)addRelayAccessToken:(id)arg1 ;
-(void)setPairingIdentity:(HAPPairingIdentity *)arg1 ;
-(void)removeRelayAccessToken:(id)arg1 ;
-(void)setPrivilege:(unsigned long long)arg1 ;
-(id)relayAccessTokens;
-(void)setRemoteGateway:(BOOL)arg1 ;
-(unsigned long long)_compatiblePrivilege;
-(NSString *)encodingRemoteDisplayName;
-(BOOL)containsRelayAccessToken:(id)arg1 ;
@end

