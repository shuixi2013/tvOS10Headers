/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@class APSConnection, NSData, NSLock, NSDictionary, NSOperationQueue, NSString;

@interface TVSPushNotificationServer : NSObject <APSConnectionDelegate> {

	APSConnection* _apsConnection;
	APSConnection* _devAPSConnection;
	BOOL _tokenDone;
	BOOL _devTokenDone;
	NSData* _token;
	NSData* _devToken;
	NSLock* _listenersLock;
	NSDictionary* _listenersForTopics;
	NSOperationQueue* _notificationTypeOperationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)stop;
-(BOOL)isConnected;
-(BOOL)isDevConnected;
-(id)publicToken;
-(id)devToken;
-(void)_registerDeviceWithToken:(id)arg1 ;
-(void)_registerDeviceWithDevToken:(id)arg1 ;
-(void)_touchAPSDKeepAliveFile;
-(id)_aggregatedTopics;
-(void)_removeAPSDKeepAliveFile;
-(void)_updateAggregateTopics;
-(void)_enqueuePushNotificationTypeRequestWithURL:(id)arg1 body:(id)arg2 debugStr:(id)arg3 ;
-(void)start:(BOOL)arg1 ;
-(void)addListener:(id)arg1 forTopic:(id)arg2 ;
-(void)removeListener:(id)arg1 forTopic:(id)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addPushNotificationType:(id)arg1 withParameters:(id)arg2 ;
-(void)removePushNotificationType:(id)arg1 ;
-(id)_allListeners;
-(void)_tellListenersATokenChanged;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(void)connectionDidReconnect:(id)arg1 ;
@end
