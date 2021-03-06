/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreCDPInternal/CoreCDPInternal-Structs.h>
@class NSLock, NSMutableDictionary, NSObject;

@interface CDPDNetworkObserver : NSObject {

	BOOL _networkIsReachable;
	NSLock* _clientsLock;
	NSMutableDictionary* _clientsByUUID;
	SCNetworkReachabilityRef _networkReach;
	NSObject*<OS_dispatch_queue> _eventQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)startObservingNetwork;
-(void)_networkReachabilityDidChangeWithFlags:(unsigned)arg1 ;
-(id)addNetworkObserverWithEventHandler:(/*^block*/id)arg1 ;
-(void)removeObserverWithToken:(id)arg1 ;
@end

