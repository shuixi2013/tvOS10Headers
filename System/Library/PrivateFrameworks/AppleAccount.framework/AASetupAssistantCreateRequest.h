/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSDictionary, AASigningSession, ACAccount;

@interface AASetupAssistantCreateRequest : AARequest {

	NSDictionary* appleIDParameters;
	AASigningSession* signingSession;
	ACAccount* _account;

}
+(Class)responseClass;
-(id)bodyDictionary;
-(id)initWithAccount:(id)arg1 withAppleIDParameters:(id)arg2 signingSession:(id)arg3 ;
-(id)urlRequest;
-(id)urlString;
@end

