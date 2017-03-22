/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol KCJoiningRequestSecretDelegate;
#import <KeychainCircle/KeychainCircle-Structs.h>
@class KCAESGCMDuplexSession, NSObject, KCSRPClientContext, NSData;

@interface KCJoiningRequestSecretSession : NSObject {

	int _state;
	KCAESGCMDuplexSession* _session;
	NSObject*<KCJoiningRequestSecretDelegate> _secretDelegate;
	KCSRPClientContext* _context;
	unsigned long long _dsid;
	NSData* _challenge;
	NSData* _salt;

}

@property (readonly) NSObject*<KCJoiningRequestSecretDelegate> secretDelegate;              //@synthesize secretDelegate=_secretDelegate - In the implementation block
@property (readonly) KCSRPClientContext * context;                                          //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long dsid;                                               //@synthesize dsid=_dsid - In the implementation block
@property (readonly) int state;                                                             //@synthesize state=_state - In the implementation block
@property (retain) NSData * challenge;                                                      //@synthesize challenge=_challenge - In the implementation block
@property (retain) NSData * salt;                                                           //@synthesize salt=_salt - In the implementation block
@property (readonly) KCAESGCMDuplexSession * session;                                       //@synthesize session=_session - In the implementation block
+(id)sessionWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)description;
-(int)state;
-(KCSRPClientContext *)context;
-(KCAESGCMDuplexSession *)session;
-(BOOL)isDone;
-(unsigned long long)dsid;
-(id)initialMessage:(id*)arg1 ;
-(id)processMessage:(id)arg1 error:(id*)arg2 ;
-(id)stateString;
-(NSData *)challenge;
-(void)setChallenge:(NSData *)arg1 ;
-(BOOL)setupSession:(id*)arg1 ;
-(void)setSalt:(NSData *)arg1 ;
-(NSData *)salt;
-(id)copyResponseForChallenge:(id)arg1 salt:(id)arg2 secret:(id)arg3 error:(id*)arg4 ;
-(id)handleChallengeData:(id)arg1 secret:(id)arg2 error:(id*)arg3 ;
-(NSObject*<KCJoiningRequestSecretDelegate>)secretDelegate;
-(id)handleChallenge:(id)arg1 secret:(id)arg2 error:(id*)arg3 ;
-(id)copyResponseForSecret:(id)arg1 error:(id*)arg2 ;
-(id)handleChallenge:(id)arg1 error:(id*)arg2 ;
-(id)handleVerification:(id)arg1 error:(id*)arg2 ;
-(id)initWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 rng:(ccrng_state*)arg3 error:(id*)arg4 ;
@end

