/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class ATXPCConnection, NSString, NSDictionary, NSObject;

@interface ATXPCMessage : NSObject {

	ATXPCConnection* _receivingConnection;
	NSString* _name;
	NSDictionary* _info;
	NSObject*<OS_xpc_object> _x_reply_connection;
	NSObject*<OS_xpc_object> _x_reply;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * info;              //@synthesize info=_info - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(NSDictionary *)info;
-(id)initWithName:(id)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(BOOL)needsReply;
-(void)sendReply:(id)arg1 ;
-(id)_createXPCMessage;
-(id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2 ;
@end

