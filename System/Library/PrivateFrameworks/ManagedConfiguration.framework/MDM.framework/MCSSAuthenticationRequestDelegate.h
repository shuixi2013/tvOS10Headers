/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MDM/MCSSRequestDelegate.h>
#import <libobjc.A.dylib/SSAuthenticateRequestDelegate.h>

@class SSAccount, SSAuthenticateRequest, NSString;

@interface MCSSAuthenticationRequestDelegate : MCSSRequestDelegate <SSAuthenticateRequestDelegate> {

	SSAccount* _authenticatedAccount;

}

@property (nonatomic,retain,readonly) SSAuthenticateRequest * request; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithAuthenticationContext:(id)arg1 ;
-(void)authenticateRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)storeLoginFailedError;
@end

