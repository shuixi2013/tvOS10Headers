/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/DAEAS-Structs.h>
#import <DAEAS/ASTask.h>

@class NSString, NSMutableDictionary, NSError;

@interface ASAutodiscoverTask : ASTask {

	NSString* _serverURL;
	NSString* _emailAddress;
	NSString* _redirectEmail;
	NSString* _authUsername;
	NSMutableDictionary* _accountInfo;
	NSError* _discoveryError;

}
-(void)finishWithError:(id)arg1 ;
-(id)contentType;
-(double)timeoutInterval;
-(id)requestBody;
-(BOOL)processContext:(id)arg1 ;
-(void)_handleErrorNode:(xmlNode*)arg1 ;
-(void)_handleServerNode:(xmlNode*)arg1 ;
-(void)_handleActionNode:(xmlNode*)arg1 ;
-(void)_handleUserNode:(xmlNode*)arg1 ;
-(void)_setAccountInfoFromAutoDiscoveryXML:(id)arg1 ;
-(void)didProcessContext:(id)arg1 ;
-(id)initWithURL:(id)arg1 emailAddress:(id)arg2 authUsername:(id)arg3 ;
-(id)_url;
-(id)_easVersion;
-(id)_policyKey;
-(id)_HTTPMethodForRequest:(id)arg1 ;
-(BOOL)_shouldSendAuthForRequest:(id)arg1 ;
-(void)_addAuthToRequest:(id)arg1 ;
-(BOOL)_shouldRedirectToHTTPForRequest:(id)arg1 ;
-(id)localizedErrorStringForCertificateErrorCode:(int)arg1 host:(id)arg2 ;
-(BOOL)shouldHandlePasswordErrors;
-(BOOL)shouldStallAfterConnectionLost;
-(BOOL)requiresEASVersionInformaton;
-(BOOL)shouldLogIncomingData;
@end

