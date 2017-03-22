/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IMRemoteObjectBroadcaster : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)defaultBroadcaster;
-(void)dealloc;
-(id)init;
-(id)_queue;
-(id)broadcastProxyForTargets:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 ;
-(void)flushProxy:(id)arg1 ;
-(id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 priority:(int)arg4 ;
-(void)blockUntilSendQueueIsEmpty;
-(id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 ;
@end

