/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SFXPCInterface.h>

@protocol OS_dispatch_queue;
@class SFSession, NSXPCConnection, NSObject, SFDevice, SDRemoteInteractionAgent;

@interface SFRemoteInteractionSession : NSObject <NSSecureCoding, SFXPCInterface> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	SFSession* _remoteSession;
	NSXPCConnection* _xpcCnx;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	SFDevice* _peerDevice;
	/*^block*/id _textSessionDidBegin;
	/*^block*/id _textSessionDidEnd;
	/*^block*/id _textSessionDidChange;
	SDRemoteInteractionAgent* _agent;

}

@property (nonatomic,retain) SDRemoteInteractionAgent * agent;                        //@synthesize agent=_agent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,copy) id textSessionDidBegin;                                    //@synthesize textSessionDidBegin=_textSessionDidBegin - In the implementation block
@property (nonatomic,copy) id textSessionDidEnd;                                      //@synthesize textSessionDidEnd=_textSessionDidEnd - In the implementation block
@property (nonatomic,copy) id textSessionDidChange;                                   //@synthesize textSessionDidChange=_textSessionDidChange - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)invalidate;
-(void)setText:(id)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)clearText;
-(void)_invalidate;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(SFDevice *)peerDevice;
-(void)_interrupted;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(void)_invalidated;
-(void)_ensureXPCStarted;
-(void)remoteInteractionSessionTextSessionDidBegin:(id)arg1 ;
-(void)remoteInteractionSessionTextSessionDidEnd:(id)arg1 ;
-(void)remoteInteractionSessionTextSessionDidChange:(id)arg1 ;
-(void)_sessionHandleEvent:(id)arg1 ;
-(void)_sessionStart;
-(void)_sessionClearText;
-(void)_sessionCommitText;
-(void)_sessionDeleteTextBackward;
-(void)_sessionInsertText:(id)arg1 ;
-(void)_sessionSetText:(id)arg1 ;
-(void)commitText;
-(void)deleteTextBackward;
-(id)textSessionDidBegin;
-(void)setTextSessionDidBegin:(id)arg1 ;
-(id)textSessionDidEnd;
-(void)setTextSessionDidEnd:(id)arg1 ;
-(id)textSessionDidChange;
-(void)setTextSessionDidChange:(id)arg1 ;
-(SDRemoteInteractionAgent *)agent;
-(void)setAgent:(SDRemoteInteractionAgent *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
@end

