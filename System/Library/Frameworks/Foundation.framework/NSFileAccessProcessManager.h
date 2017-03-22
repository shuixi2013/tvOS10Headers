/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSArray, BKSApplicationStateMonitor, BKSProcessAssertion;

@interface NSFileAccessProcessManager : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _suspensionHandler;
	NSArray* _urls;
	BKSApplicationStateMonitor* _monitor;
	BKSProcessAssertion* _assertion;
	int _pendingMessageCount;

}

@property (copy) id suspensionHandler; 
@property (copy) NSArray * URLs; 
+(BOOL)needToManageConnection:(id)arg1 forURLs:(id)arg2 ;
-(void)killProcessWithMessage:(id)arg1 ;
-(void)_ensureMonitor;
-(void)setSuspensionHandler:(id)arg1 ;
-(id)initWithClient:(id)arg1 queue:(id)arg2 ;
-(id)suspensionHandler;
-(void)safelySendMessageWithReplyUsingBlock:(/*^block*/id)arg1 ;
-(void)preventSuspensionWithActivityName:(id)arg1 ;
-(void)allowSuspension;
-(void)dealloc;
-(void)invalidate;
-(NSArray *)URLs;
-(void)setURLs:(NSArray *)arg1 ;
@end

