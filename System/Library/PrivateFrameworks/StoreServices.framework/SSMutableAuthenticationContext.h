/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSAuthenticationContext.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSDictionary, NSNumber, NSArray;

@interface SSMutableAuthenticationContext : SSAuthenticationContext <SSXPCCoding, NSCopying, NSMutableCopying>

@property (assign,nonatomic) BOOL allowsBioAuthentication; 
@property (assign,nonatomic) BOOL allowsBootstrapCellularData; 
@property (nonatomic,copy) NSString * cancelButtonLabel; 
@property (nonatomic,copy) NSString * clientIdentifierHeader; 
@property (assign,getter=isDemoAccount,nonatomic) BOOL demoAccount; 
@property (assign,nonatomic) BOOL displaysOnLockScreen; 
@property (nonatomic,copy) NSString * okButtonLabel; 
@property (assign,nonatomic) BOOL persistsAcrossDeviceLock; 
@property (nonatomic,copy) NSString * promptTitle; 
@property (nonatomic,copy) NSString * reasonDescription; 
@property (assign,nonatomic) BOOL shouldIgnoreProtocol; 
@property (assign,nonatomic) long long tokenType; 
@property (nonatomic,copy) NSString * accountName; 
@property (assign) long long accountScope; 
@property (assign,getter=isAccountNameEditable,nonatomic) BOOL accountNameEditable; 
@property (assign,nonatomic) BOOL allowsRetry; 
@property (nonatomic,copy) NSString * altDSID; 
@property (assign,nonatomic) BOOL canCreateNewAccount; 
@property (assign,nonatomic) BOOL canSetActiveAccount; 
@property (nonatomic,copy) NSString * initialPassword; 
@property (assign,nonatomic) BOOL persistsPasswordFallback; 
@property (nonatomic,copy) NSString * preferredITunesStoreClient; 
@property (assign,nonatomic) long long promptStyle; 
@property (nonatomic,copy) NSDictionary * requestParameters; 
@property (assign,nonatomic) BOOL shouldCreateNewSession; 
@property (assign,nonatomic) BOOL shouldFollowAccountButtons; 
@property (assign,nonatomic) BOOL shouldSuppressDialogs; 
@property (nonatomic,copy) NSDictionary * signupRequestParameters; 
@property (nonatomic,retain) NSNumber * requiredUniqueIdentifier; 
@property (nonatomic,copy) NSArray * userAgentComponents; 
@property (nonatomic,copy) NSDictionary * HTTPHeaders; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDemoAccount:(BOOL)arg1 ;
-(void)setAccountScope:(long long)arg1 ;
-(void)setAllowsBootstrapCellularData:(BOOL)arg1 ;
-(void)setCanCreateNewAccount:(BOOL)arg1 ;
-(void)setRequiredUniqueIdentifier:(NSNumber *)arg1 ;
-(void)setPreferredITunesStoreClient:(NSString *)arg1 ;
-(void)setPersistsPasswordFallback:(BOOL)arg1 ;
-(void)setShouldCreateNewSession:(BOOL)arg1 ;
-(void)setShouldFollowAccountButtons:(BOOL)arg1 ;
-(void)setShouldIgnoreProtocol:(BOOL)arg1 ;
-(void)setShouldSuppressDialogs:(BOOL)arg1 ;
-(void)setSignupRequestParameters:(NSDictionary *)arg1 ;
-(void)setUserAgentComponents:(NSArray *)arg1 ;
-(void)setAllowsBioAuthentication:(BOOL)arg1 ;
-(void)setCancelButtonLabel:(NSString *)arg1 ;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(void)setOkButtonLabel:(NSString *)arg1 ;
-(void)setPersistsAcrossDeviceLock:(BOOL)arg1 ;
-(void)setPromptTitle:(NSString *)arg1 ;
-(void)setTokenType:(long long)arg1 ;
-(void)setValuesWithAccount:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setReasonDescription:(NSString *)arg1 ;
-(void)setRequestParameters:(NSDictionary *)arg1 ;
-(void)setAccountNameEditable:(BOOL)arg1 ;
-(void)setPromptStyle:(long long)arg1 ;
-(void)setDisplaysOnLockScreen:(BOOL)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setInitialPassword:(NSString *)arg1 ;
-(void)setCanSetActiveAccount:(BOOL)arg1 ;
-(void)setAllowsRetry:(BOOL)arg1 ;
-(void)setHTTPHeaders:(NSDictionary *)arg1 ;
-(void)setAltDSID:(NSString *)arg1 ;
@end

