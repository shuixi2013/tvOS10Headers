/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, PLXPCTransaction, NSError;

@interface PLDaemonJob : NSObject {

	NSObject*<OS_xpc_object> _xpcReply;
	PLXPCTransaction* _transaction;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,readonly) BOOL clientWantsReply; 
@property (assign,nonatomic) NSObject*<OS_xpc_object> xpcReply; 
@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> connection; 
@property (nonatomic,readonly) BOOL replyIsError; 
@property (nonatomic,retain,readonly) NSError * replyError; 
@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
+(void)runDaemonSideWithXPCEvent:(id)arg1 connection:(id)arg2 ;
-(void)dealloc;
-(void)run;
-(NSObject*<OS_xpc_object>)connection;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(void)runDaemonSide;
-(void)sendToAssetsd;
-(long long)daemonOperation;
-(BOOL)shouldArchiveXPCToDisk;
-(NSObject*<OS_xpc_object>)xpcReply;
-(void)setXpcReply:(NSObject*<OS_xpc_object>)arg1 ;
-(void)handleReply;
-(void)sendToAssetsdWithReply;
-(BOOL)clientWantsReply;
-(BOOL)replyIsError;
-(NSError *)replyError;
-(void)archiveXPCToDisk:(id)arg1 ;
@end

