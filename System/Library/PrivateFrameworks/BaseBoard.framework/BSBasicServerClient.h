/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCServerClient.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface BSBasicServerClient : NSObject <BSXPCServerClient> {

	NSObject*<OS_xpc_object> _connection;
	int _resumed;
	int _cancelled;
	BOOL _managingResumeState;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wrapperWithConnection:(id)arg1 ;
-(void)sendMessageWithPacker:(/*^block*/id)arg1 replyHandler:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)sendMessageWithPacker:(/*^block*/id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(void)suspend;
-(void)resume;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithConnection:(id)arg1 ;
@end

