/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSAccount, NSArray, NSDictionary, NSString, NSData, NSDate;

@interface IDSAccount : NSObject {

	_IDSAccount* _internal;

}

@property (nonatomic,retain,readonly) NSArray * aliases; 
@property (nonatomic,retain,readonly) NSArray * aliasStrings; 
@property (nonatomic,retain,readonly) NSArray * vettedAliases; 
@property (nonatomic,retain,readonly) NSDictionary * profileInfo; 
@property (nonatomic,retain) NSDictionary * accountInfo; 
@property (nonatomic,readonly) int accountType; 
@property (nonatomic,retain,readonly) NSString * uniqueID; 
@property (nonatomic,retain,readonly) NSString * displayName; 
@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) NSArray * registeredURIs; 
@property (nonatomic,readonly) NSData * registrationCertificate; 
@property (nonatomic,readonly) NSDate * dateRegistered; 
@property (nonatomic,readonly) NSDate * nextRegistrationDate; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (nonatomic,readonly) NSString * regionID; 
@property (nonatomic,readonly) NSString * regionBasePhoneNumber; 
@property (nonatomic,readonly) NSDictionary * regionServerContext; 
@property (nonatomic,readonly) NSString * profileID; 
@property (nonatomic,retain,readonly) NSString * primaryServiceName; 
@property (nonatomic,readonly) BOOL isUserDisabled; 
@property (nonatomic,retain) NSString * loginID; 
@property (nonatomic,retain,readonly) NSString * serviceName; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL canSend; 
@property (nonatomic,retain,readonly) NSArray * devices; 
@property (nonatomic,retain,readonly) NSArray * nearbyDevices; 
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(BOOL)_isEnabled;
-(NSString *)displayName;
-(id)_internal;
-(void)setAuthToken:(id)arg1 ;
-(NSArray *)registeredURIs;
-(NSArray *)aliasStrings;
-(id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(void)setAccountInfo:(NSDictionary *)arg1 ;
-(void)_setIsEnabled:(BOOL)arg1 ;
-(void)setLoginID:(NSString *)arg1 ;
-(NSString *)primaryServiceName;
-(BOOL)canSend;
-(NSArray *)nearbyDevices;
-(NSDate *)nextRegistrationDate;
-(NSDate *)dateRegistered;
-(NSString *)regionBasePhoneNumber;
-(NSDictionary *)regionServerContext;
-(NSString *)profileID;
-(void)deactivateAndPurgeIdentify;
-(void)_callNearbyDevicesChanged;
-(void)_reloadCachedDevices;
-(id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(NSString *)uniqueID;
-(NSDictionary *)accountInfo;
-(int)accountType;
-(BOOL)isUserDisabled;
-(int)registrationStatus;
-(NSString *)regionID;
-(void)removeDelegate:(id)arg1 ;
-(NSDictionary *)profileInfo;
-(NSArray *)aliases;
-(NSArray *)vettedAliases;
-(void)authenticateAccount;
-(void)addAliases:(id)arg1 ;
-(void)removeAliases:(id)arg1 ;
-(void)unvalidateAliases:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(void)registerAccount;
-(void)unregisterAccount;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)validateProfile;
-(NSString *)serviceName;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(NSArray *)devices;
-(NSString *)loginID;
-(void)setPassword:(id)arg1 ;
-(NSData *)pushToken;
-(void)updateAccountWithAccountInfo:(id)arg1 ;
-(void)addRegistrationDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeRegistrationDelegate:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(void)passwordUpdated;
-(NSData *)registrationCertificate;
-(void)_reregisterAndReidentify:(BOOL)arg1 ;
@end
