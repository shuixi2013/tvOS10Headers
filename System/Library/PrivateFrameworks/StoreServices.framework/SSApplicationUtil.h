/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject;

@interface SSApplicationUtil : NSObject {

	SSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(void)restartApplication:(/*^block*/id)arg1 ;
-(id)init;
-(id)_connection;
@end

