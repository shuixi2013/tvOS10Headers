/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@protocol SSRequestDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, SSXPCConnection, NSString;

@interface SSRequest : NSObject <SSXPCCoding> {

	long long _backgroundTaskIdentifier;
	BOOL _cancelAfterTaskExpiration;
	id<SSRequestDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSXPCConnection* _requestConnection;
	SSXPCConnection* _responseConnection;
	unsigned _assertionID;
	NSObject*<OS_dispatch_source> _backgroundTaskExpirationTimer;
	long long _taskAssertionState;

}

@property (assign,nonatomic) BOOL shouldCancelAfterTaskExpiration; 
@property (assign,nonatomic) id<SSRequestDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL usesTaskCompletionAssertions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_shutdownRequest;
-(void)_startWithMessageID:(long long)arg1 messageBlock:(/*^block*/id)arg2 ;
-(id)_initSSRequest;
-(void)_shutdownRequestWithMessageID:(long long)arg1 ;
-(void)__beginBackgroundTask;
-(void)__endBackgroundTask;
-(void)_cancelBackgroundTaskExpirationTimer;
-(void)setUsesTaskCompletionAssertions:(BOOL)arg1 ;
-(BOOL)usesTaskCompletionAssertions;
-(void)setShouldCancelAfterTaskExpiration:(BOOL)arg1 ;
-(BOOL)shouldCancelAfterTaskExpiration;
-(void)_beginBackgroundTask;
-(void)_expireBackgroundTask;
-(void)cancel;
-(void)setDelegate:(id<SSRequestDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SSRequestDelegate>)delegate;
-(BOOL)start;
-(void)disconnect;
-(void)_endBackgroundTask;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
@end

