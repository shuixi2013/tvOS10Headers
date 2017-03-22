/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleAccount/AppleAccount-Structs.h>
@class NSOperationQueue, NSString, ACAccount, AASigningSession, NSDate;

@interface AASetupAssistantService : NSObject {

	NSOperationQueue* _requesterQueue;
	NSString* _appleID;
	NSString* _password;
	NSString* _emailChoice;
	ACAccount* _account;
	OpaqueCFHTTPCookieStorageRef _cookieStorage;
	AASigningSession* _signingSession;
	NSDate* _signingSessionCreationDate;

}

@property (nonatomic,copy) NSString * appleID;                  //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSString * password;                 //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * emailChoice;              //@synthesize emailChoice=_emailChoice - In the implementation block
+(void)resetURLConfiguration;
+(id)urlConfiguration;
-(void)dealloc;
-(id)init;
-(id)_signingSession;
-(void)_doHSADeviceProvisioningWithDSID:(id)arg1 data:(id)arg2 ;
-(void)_doHSADeviceProvisioningSynchronizationWithDSID:(id)arg1 data:(id)arg2 ;
-(void)_doHSADeviceReprovisioningWithDSID:(id)arg1 ;
-(NSString *)emailChoice;
-(void)upgradeiCloudTermsIfNecessaryWithCustomHeaders:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithAppleID:(id)arg1 password:(id)arg2 ;
-(void)authenticateWithHandler:(/*^block*/id)arg1 ;
-(void)updateAppleIDWithParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setupDelegateAccountsWithParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)loginDelegatesWithParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)upgradeiCloudTermsIfNecessaryWithHandler:(/*^block*/id)arg1 ;
-(void)shouldPresentUpgradeFlowWithCompletion:(/*^block*/id)arg1 ;
-(void)setEmailChoice:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(void)downloadURLConfiguration:(/*^block*/id)arg1 ;
-(void)createAppleIDWithParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithAccount:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
@end

