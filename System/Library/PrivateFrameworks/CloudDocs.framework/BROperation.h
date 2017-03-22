/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface BROperation : NSOperation {

	id _remoteOperation;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned char _uuid[16];
	id _executionTransation;
	BOOL _finished;

}

@property (getter=isExecuting,readonly) BOOL executing; 
@property (getter=isFinished,readonly) BOOL finished;                                   //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NSObject*<BRCancellable> remoteOperation;                  //@synthesize remoteOperation=_remoteOperation - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize queue=_queue - In the implementation block
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)description;
-(oneway void)invalidate;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)_setExecuting:(BOOL)arg1 ;
-(void)_setFinished:(BOOL)arg1 ;
-(id)remoteObject;
-(BOOL)_finishIfCancelled;
-(void)_setRemoteOperation:(id)arg1 ;
-(void)completedWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)finishIfCancelled;
-(oneway void)setRemoteOperationProxy:(id)arg1 userInfo:(id)arg2 ;
-(oneway void)progressCallbackWithTopic:(id)arg1 userInfo:(id)arg2 ;
-(NSObject*<BRCancellable>)remoteOperation;
-(void)setRemoteOperation:(NSObject*<BRCancellable>)arg1 ;
@end

