/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleAccount/AppleAccount-Structs.h>
@class NSString;

@interface AASigningSession : NSObject {

	NACContextOpaque_Ref _context;
	NSString* _certURL;
	NSString* _sessionURL;
	int _error;

}

@property (nonatomic,readonly) int error;              //@synthesize error=_error - In the implementation block
+(id)establishedSessionWithCertURL:(id)arg1 sessionURL:(id)arg2 error:(id*)arg3 ;
+(id)_badURLError;
-(void)dealloc;
-(int)error;
-(id)initWithCertURL:(id)arg1 sessionURL:(id)arg2 ;
-(void)establishSession;
-(id)signatureForData:(id)arg1 ;
@end

