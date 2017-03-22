/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class ACAccountStore, NSObject;

@interface ACDKeychainCleanupActivity : NSObject {

	ACAccountStore* _accountStore;
	NSObject*<OS_xpc_object> _xpcActivity;
	NSObject*<OS_dispatch_queue> _activityQueue;

}
+(id)sharedActivity;
-(id)init;
-(void)queueNonPersistentCredentialRemoval:(id)arg1 ;
-(void)checkInIfNecessary;
-(void)_activityQueue_checkIn;
-(void)_activityQueue_queueCredentialItemWithAccount:(id)arg1 serviceName:(id)arg2 ;
-(void)_activityQueue_configureXPCActivityWithCriteria:(id)arg1 ;
-(void)_activityQueue_registerXPCActivityWithCriteria:(id)arg1 ;
-(void)_activityQueue_removeExpiredCredentials;
-(void)_activityQueue_removeCredentialItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_activityQueue_unregisterActivity;
@end

