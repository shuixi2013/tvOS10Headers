/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSArray, VSAccount, VSFailable, NSXPCConnection, VSIdentityProviderAvailabilityInfoCenter;

@interface VSViewServiceRequestPreparationOperation : VSAsyncOperation {

	BOOL _requestAllowsPrivacyUI;
	BOOL _requestRequiresPrivacyUI;
	int _hostProcessIdentifier;
	NSArray* _supportedIdentityProviderIdentifiers;
	VSAccount* _currentAccount;
	VSFailable* _result;
	NSXPCConnection* _privacyServiceConnection;
	VSIdentityProviderAvailabilityInfoCenter* _availabilityInfoCenter;
	SCD_Struct_VS3 _hostAuditToken;

}

@property (nonatomic,retain) VSFailable * result;                                                            //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSXPCConnection * privacyServiceConnection;                                     //@synthesize privacyServiceConnection=_privacyServiceConnection - In the implementation block
@property (nonatomic,retain) VSIdentityProviderAvailabilityInfoCenter * availabilityInfoCenter;              //@synthesize availabilityInfoCenter=_availabilityInfoCenter - In the implementation block
@property (assign,nonatomic) SCD_Struct_VS3 hostAuditToken;                                                  //@synthesize hostAuditToken=_hostAuditToken - In the implementation block
@property (assign,nonatomic) int hostProcessIdentifier;                                                      //@synthesize hostProcessIdentifier=_hostProcessIdentifier - In the implementation block
@property (assign,nonatomic) BOOL requestAllowsPrivacyUI;                                                    //@synthesize requestAllowsPrivacyUI=_requestAllowsPrivacyUI - In the implementation block
@property (assign,nonatomic) BOOL requestRequiresPrivacyUI;                                                  //@synthesize requestRequiresPrivacyUI=_requestRequiresPrivacyUI - In the implementation block
@property (nonatomic,copy) NSArray * supportedIdentityProviderIdentifiers;                                   //@synthesize supportedIdentityProviderIdentifiers=_supportedIdentityProviderIdentifiers - In the implementation block
@property (nonatomic,retain) VSAccount * currentAccount;                                                     //@synthesize currentAccount=_currentAccount - In the implementation block
-(void)cancel;
-(void)dealloc;
-(id)init;
-(VSFailable *)result;
-(void)_finishWithError:(id)arg1 ;
-(void)executionDidBegin;
-(void)setResult:(VSFailable *)arg1 ;
-(VSAccount *)currentAccount;
-(void)setCurrentAccount:(VSAccount *)arg1 ;
-(void)setHostAuditToken:(SCD_Struct_VS3)arg1 ;
-(void)setHostProcessIdentifier:(int)arg1 ;
-(void)setRequestAllowsPrivacyUI:(BOOL)arg1 ;
-(void)setRequestRequiresPrivacyUI:(BOOL)arg1 ;
-(NSArray *)supportedIdentityProviderIdentifiers;
-(void)setSupportedIdentityProviderIdentifiers:(NSArray *)arg1 ;
-(void)_checkEntitlement;
-(NSXPCConnection *)privacyServiceConnection;
-(SCD_Struct_VS3)hostAuditToken;
-(void)_checkPrivacy;
-(id)_privacyServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(int)hostProcessIdentifier;
-(BOOL)requestRequiresPrivacyUI;
-(void)_determineProviderDisplayName;
-(BOOL)requestAllowsPrivacyUI;
-(void)_checkAvailability;
-(VSIdentityProviderAvailabilityInfoCenter *)availabilityInfoCenter;
-(void)_checkSupportedProviders;
-(void)_promptForPrivacyWithDisplayName:(id)arg1 ;
-(void)setPrivacyServiceConnection:(NSXPCConnection *)arg1 ;
-(void)setAvailabilityInfoCenter:(VSIdentityProviderAvailabilityInfoCenter *)arg1 ;
@end

