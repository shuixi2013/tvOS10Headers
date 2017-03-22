/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherServiceClientProtocol.h>

@protocol OS_dispatch_queue, WeatherServiceProtocol;
@class NSObject, NSXPCConnection, NSMutableDictionary, NSString;

@interface WFServiceConnection : NSObject <WeatherServiceClientProtocol> {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _internalStateQueue;
	NSXPCConnection* _xpcConnection;
	id<WeatherServiceProtocol> _serviceProxy;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _tasksPendingResponseForTaskIdentifier;
	NSMutableDictionary* _dispatchGroupForTaskIdentifier;
	NSMutableDictionary* _executionStartTimeForTaskIdentifier;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                       //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalStateQueue;                  //@synthesize internalStateQueue=_internalStateQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                  //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) id<WeatherServiceProtocol> serviceProxy;                          //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (readonly) NSMutableDictionary * tasksPendingResponseForTaskIdentifier;              //@synthesize tasksPendingResponseForTaskIdentifier=_tasksPendingResponseForTaskIdentifier - In the implementation block
@property (readonly) NSMutableDictionary * dispatchGroupForTaskIdentifier;                     //@synthesize dispatchGroupForTaskIdentifier=_dispatchGroupForTaskIdentifier - In the implementation block
@property (readonly) NSMutableDictionary * executionStartTimeForTaskIdentifier;                //@synthesize executionStartTimeForTaskIdentifier=_executionStartTimeForTaskIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allAllowedClasses;
+(id)weatherServiceInterface;
+(id)weatherServiceClientInterface;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)enqueueRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setServiceProxy:(id<WeatherServiceProtocol>)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id<WeatherServiceProtocol>)serviceProxy;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)taskIdentifier:(/*^block*/id)arg1 ;
-(void)serviceDidReceiveResponse:(id)arg1 ;
-(void)cancelRequestWithIdentifier:(id)arg1 ;
-(void)enqueueRequest:(id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)_onQueueInvalidateConnection:(id)arg1 ;
-(void)_onQueueOpenConnection;
-(void)accessServiceWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalStateQueue;
-(NSMutableDictionary *)tasksPendingResponseForTaskIdentifier;
-(NSMutableDictionary *)executionStartTimeForTaskIdentifier;
-(NSMutableDictionary *)dispatchGroupForTaskIdentifier;
-(void)_handleRemoteObjectProxyError:(id)arg1 ;
-(void)setInternalStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

