/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FPDaemon, OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface FPDaemonConnection : NSObject {

	NSXPCConnection*<FPDaemon> _connectionQueueConnection;
	NSObject*<OS_dispatch_queue> _connectionQueue;

}

@property (nonatomic,retain) NSXPCConnection*<FPDaemon> connectionQueueConnection;              //@synthesize connectionQueueConnection=_connectionQueueConnection - In the implementation block
@property (nonatomic,readonly) NSXPCConnection*<FPDaemon> connection; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                      //@synthesize connectionQueue=_connectionQueue - In the implementation block
+(id)sharedConnection;
-(id)init;
-(NSXPCConnection*<FPDaemon>)connection;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)wakeUpCompletion:(/*^block*/id)arg1 ;
-(void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)providePlaceholderForItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)stopProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)providersCompletionHandler:(/*^block*/id)arg1 ;
-(void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)bookmarkableStringFromDocumentURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)documentURLFromBookmarkableString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setConnectionQueueConnection:(NSXPCConnection*<FPDaemon>)arg1 ;
-(void)extendSandboxAndCreatePlaceholderForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSXPCConnection*<FPDaemon>)connectionQueueConnection;
@end

