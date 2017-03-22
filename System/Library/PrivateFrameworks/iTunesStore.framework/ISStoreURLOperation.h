/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISURLOperation.h>
#import <libobjc.A.dylib/ISBiometricSessionDelegate.h>

@protocol ISBiometricSessionDelegate;
@class NSNumber, SSVFairPlaySAPSession, ISBiometricAuthenticationContext, SSURLBagContext, NSString;

@interface ISStoreURLOperation : ISURLOperation <ISBiometricSessionDelegate> {

	long long _activeMachineDataStyle;
	NSNumber* _authenticatedDSID;
	BOOL _canSendGUIDParameter;
	BOOL _ignorePreexistingSecureToken;
	BOOL _isURLBagRequest;
	long long _machineDataStyle;
	BOOL _needsAuthentication;
	BOOL _needsURLBag;
	SSVFairPlaySAPSession* _sapSession;
	BOOL _shouldSendXTokenHeader;
	BOOL _urlKnownToBeTrusted;
	BOOL _useUserSpecificURLBag;
	BOOL _needsTermsAndConditionsAcceptance;
	ISBiometricAuthenticationContext* _biometricAuthenticationContext;
	id<ISBiometricSessionDelegate> _biometricSessionDelegate;

}

@property (retain) NSNumber * authenticatedDSID;                                                   //@synthesize authenticatedDSID=_authenticatedDSID - In the implementation block
@property (assign,nonatomic) BOOL ignorePreexistingSecureToken; 
@property (assign,getter=isURLBagRequest,nonatomic) BOOL URLBagRequest;                            //@synthesize isURLBagRequest=_isURLBagRequest - In the implementation block
@property (assign) id<ISStoreURLOperationDelegate> delegate; 
@property (assign) id<ISBiometricSessionDelegate> biometricSessionDelegate;                        //@synthesize biometricSessionDelegate=_biometricSessionDelegate - In the implementation block
@property (assign) BOOL canSendGUIDParameter; 
@property (assign) long long machineDataStyle;                                                     //@synthesize machineDataStyle=_machineDataStyle - In the implementation block
@property (assign) BOOL needsURLBag;                                                               //@synthesize needsURLBag=_needsURLBag - In the implementation block
@property (assign) BOOL needsAuthentication;                                                       //@synthesize needsAuthentication=_needsAuthentication - In the implementation block
@property (assign) BOOL needsTermsAndConditionsAcceptance;                                         //@synthesize needsTermsAndConditionsAcceptance=_needsTermsAndConditionsAcceptance - In the implementation block
@property (assign) BOOL performsMachineDataActions; 
@property (retain) SSVFairPlaySAPSession * SAPSession; 
@property (assign) BOOL shouldSendXTokenHeader; 
@property (retain) ISBiometricAuthenticationContext * biometricAuthenticationContext;              //@synthesize biometricAuthenticationContext=_biometricAuthenticationContext - In the implementation block
@property (assign) BOOL useUserSpecificURLBag;                                                     //@synthesize useUserSpecificURLBag=_useUserSpecificURLBag - In the implementation block
@property (assign) BOOL urlKnownToBeTrusted;                                                       //@synthesize urlKnownToBeTrusted=_urlKnownToBeTrusted - In the implementation block
@property (readonly) SSURLBagContext * URLBagContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pingOperationWithUrl:(id)arg1 ;
+(void)_addITunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 accountIdentifier:(id)arg3 clientBundleIdentifier:(id)arg4 ;
+(void)_addITunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 account:(id)arg3 clientBundleIdentifier:(id)arg4 ;
+(id)_restrictionsHeaderValue;
+(id)_authKitSession;
+(void)addITunesStoreHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2 ;
+(void)handleITunesStoreResponseHeaders:(id)arg1 request:(id)arg2 withAccountIdentifier:(id)arg3 shouldRetry:(BOOL*)arg4 ;
+(id)itemPingOperationWithIdentifier:(unsigned long long)arg1 urlBagKey:(id)arg2 ;
+(id)propertyListOperationWithURLBagKey:(id)arg1 ;
-(BOOL)needsAuthentication;
-(long long)machineDataStyle;
-(SSVFairPlaySAPSession *)SAPSession;
-(SSURLBagContext *)URLBagContext;
-(void)_setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2 ;
-(id)_account;
-(id)init;
-(void)run;
-(id)_copyAuthenticationContext;
-(id)newRequestWithURL:(id)arg1 ;
-(id)authenticatedAccountDSID;
-(BOOL)_processResponseData:(id)arg1 error:(id*)arg2 ;
-(BOOL)handleRedirectFromDataProvider:(id)arg1 error:(id*)arg2 ;
-(void)handleResponse:(id)arg1 ;
-(void)_willSendRequest:(id)arg1 ;
-(BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2 ;
-(void)setBiometricAuthenticationContext:(ISBiometricAuthenticationContext *)arg1 ;
-(ISBiometricAuthenticationContext *)biometricAuthenticationContext;
-(id<ISBiometricSessionDelegate>)biometricSessionDelegate;
-(void)setBiometricSessionDelegate:(id<ISBiometricSessionDelegate>)arg1 ;
-(void)setURLBagRequest:(BOOL)arg1 ;
-(BOOL)useUserSpecificURLBag;
-(NSNumber *)authenticatedDSID;
-(void)setAuthenticatedDSID:(NSNumber *)arg1 ;
-(BOOL)_canSendTokenToURL:(id)arg1 ;
-(id)_urlBagForContext:(id)arg1 ;
-(BOOL)canSendGUIDParameter;
-(BOOL)shouldSendXTokenHeader;
-(id)_loadURLBagInterpreterWithRequest:(id)arg1 requestProperties:(id)arg2 ;
-(BOOL)ignorePreexistingSecureToken;
-(id)_copyAuthenticationContextForAttemptNumber:(long long)arg1 ;
-(BOOL)_authenticateWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)needsTermsAndConditionsAcceptance;
-(void)_runURLOperation;
-(BOOL)_performMachineDataRequest:(id)arg1 ;
-(BOOL)_shouldRetryForTouchIDChallengeWithError:(id)arg1 ;
-(void)_continueTouchIDSession;
-(void)sender:(id)arg1 didFallbackToPassword:(BOOL)arg2 ;
-(BOOL)_isErrorTokenError:(id)arg1 ;
-(void)setIgnorePreexistingSecureToken:(BOOL)arg1 ;
-(BOOL)urlKnownToBeTrusted;
-(BOOL)needsURLBag;
-(id)_resolvedURLInBagContext:(id)arg1 URLBag:(id*)arg2 ;
-(void)_addStandardQueryParametersForURL:(id)arg1 ;
-(BOOL)isURLBagRequest;
-(BOOL)performsMachineDataActions;
-(void)setCanSendGUIDParameter:(BOOL)arg1 ;
-(void)setPerformsMachineDataActions:(BOOL)arg1 ;
-(void)setNeedsTermsAndConditionsAcceptance:(BOOL)arg1 ;
-(void)setUseUserSpecificURLBag:(BOOL)arg1 ;
-(void)setMachineDataStyle:(long long)arg1 ;
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
-(void)setNeedsURLBag:(BOOL)arg1 ;
-(void)setUrlKnownToBeTrusted:(BOOL)arg1 ;
-(void)setShouldSendXTokenHeader:(BOOL)arg1 ;
-(void)setNeedsAuthentication:(BOOL)arg1 ;
@end

