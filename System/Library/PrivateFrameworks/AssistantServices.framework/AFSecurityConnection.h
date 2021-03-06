/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSecurityService.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface AFSecurityConnection : NSObject <AFSecurityService> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)_connection;
-(void)_connectionInterrupted;
-(void)_invalidateConnection;
-(void)_dispatchCallbackForProcessedData:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processData:(id)arg1 usingProcedure:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_connectionInvalidated;
-(oneway void)processData:(id)arg1 usingProcedure:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

