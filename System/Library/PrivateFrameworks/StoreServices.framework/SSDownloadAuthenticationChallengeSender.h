/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLAuthenticationChallengeSender.h>

@protocol OS_dispatch_queue;
@class NSObject, SSDownloadAuthenticationSession, NSString;

@interface SSDownloadAuthenticationChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSDownloadAuthenticationSession* _session;

}

@property (readonly) SSDownloadAuthenticationSession * authenticationSession; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAuthenticationSession:(id)arg1 ;
-(SSDownloadAuthenticationSession *)authenticationSession;
-(void)dealloc;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
@end

