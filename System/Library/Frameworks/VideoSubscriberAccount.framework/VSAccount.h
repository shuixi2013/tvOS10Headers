/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSAuthenticationToken;
@class VSAccountStore, NSString, VSKeychainGenericPassword;

@interface VSAccount : NSObject {

	VSAccountStore* _accountStore;
	NSString* _accountTypeDescription;
	NSString* _accountDescription;
	NSString* _identityProviderDisplayName;
	NSString* _identityProviderID;
	NSString* _username;
	id<VSAuthenticationToken> _authenticationToken;

}

@property (nonatomic,retain) VSKeychainGenericPassword * keychainItem; 
@property (assign,nonatomic,__weak) VSAccountStore * accountStore;                       //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,copy) NSString * accountTypeDescription;                            //@synthesize accountTypeDescription=_accountTypeDescription - In the implementation block
@property (nonatomic,copy) NSString * accountDescription;                                //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,copy) NSString * identityProviderDisplayName;                       //@synthesize identityProviderDisplayName=_identityProviderDisplayName - In the implementation block
@property (nonatomic,copy) NSString * identityProviderID;                                //@synthesize identityProviderID=_identityProviderID - In the implementation block
@property (nonatomic,copy) NSString * username;                                          //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) id<VSAuthenticationToken> authenticationToken;              //@synthesize authenticationToken=_authenticationToken - In the implementation block
-(id)description;
-(NSString *)accountDescription;
-(NSString *)accountTypeDescription;
-(void)setAccountDescription:(NSString *)arg1 ;
-(void)setAccountStore:(VSAccountStore *)arg1 ;
-(NSString *)username;
-(VSAccountStore *)accountStore;
-(void)setAuthenticationToken:(id<VSAuthenticationToken>)arg1 ;
-(id<VSAuthenticationToken>)authenticationToken;
-(void)setUsername:(NSString *)arg1 ;
-(VSKeychainGenericPassword *)keychainItem;
-(void)setKeychainItem:(VSKeychainGenericPassword *)arg1 ;
-(void)setAccountTypeDescription:(NSString *)arg1 ;
-(void)setIdentityProviderDisplayName:(NSString *)arg1 ;
-(void)setIdentityProviderID:(NSString *)arg1 ;
-(NSString *)identityProviderDisplayName;
-(NSString *)identityProviderID;
@end

