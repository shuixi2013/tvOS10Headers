/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, ACAccountStore, IMUserNotificationCenter;

@interface FTPasswordManager : NSObject {

	NSMutableSet* _runningQueries;
	ACAccountStore* _accountStore;
	IMUserNotificationCenter* _userNotificationCenter;

}
+(id)sharedInstance;
+(id)_loginUserNotificationForService:(id)arg1 user:(id)arg2 isForBadPassword:(BOOL)arg3 showForgetPassword:(BOOL)arg4 shouldRememberPassword:(BOOL)arg5 ;
-(void)dealloc;
-(id)init;
-(id)acAccountWithProfileID:(id)arg1 username:(id)arg2 accountStore:(id)arg3 ;
-(id)initWithUserNotificationCenter:(id)arg1 ;
-(id)_findIDSAccountInStore:(id)arg1 withCriteria:(/*^block*/id)arg2 ;
-(id)_accountWithUsername:(id)arg1 inStore:(id)arg2 ;
-(id)_profileIDForUsername:(id)arg1 inStore:(id)arg2 ;
-(id)_accountWithProfileID:(id)arg1 username:(id)arg2 inStore:(id)arg3 ;
-(id)_accountWithUsernameAlias:(id)arg1 inStore:(id)arg2 ;
-(id)_accountWithProfileIDMatchingUser:(id)arg1 inStore:(id)arg2 ;
-(id)_accountBasedOnProfileID:(id)arg1 orUsername:(id)arg2 inStore:(id)arg3 ;
-(id)_keychainPasswordForUsername:(id)arg1 service:(id)arg2 ;
-(id)_keychainAuthTokenForUsername:(id)arg1 service:(id)arg2 ;
-(id)_accountOptionsDictForRenewCredentialsForService:(id)arg1 username:(id)arg2 ;
-(void)_setKeychainPassword:(id)arg1 forUsername:(id)arg2 service:(id)arg3 ;
-(void)setAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 authToken:(id)arg4 selfHandle:(id)arg5 accountStatus:(id)arg6 outRequestID:(id*)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)_setKeychainAuthToken:(id)arg1 forUsername:(id)arg2 service:(id)arg3 ;
-(id)_primaryAppleAccount;
-(BOOL)supportsAuthTokenRequests;
-(id)_findIDSAccountsInStore:(id)arg1 withCriteria:(/*^block*/id)arg2 ;
-(void)requestAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(BOOL)arg4 showForgotPassword:(BOOL)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)setHandlesForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 handles:(id)arg4 ;
-(id)profileIDForACAccount:(id)arg1 ;
-(BOOL)isiCloudSignedIn;
-(void)setPasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 password:(id)arg4 outRequestID:(id*)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)fetchPasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id*)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)fetchAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id*)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)setAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 authToken:(id)arg4 selfHandle:(id)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)cancelRequestID:(id)arg1 serviceIdentifier:(id)arg2 ;
-(void)requestPasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(BOOL)arg3 showForgotPassword:(BOOL)arg4 shouldRememberPassword:(BOOL)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7 ;
@end

