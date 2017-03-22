/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class HMDApplicationInfo, NSObject, NSHashTable;

@interface HMDProcessInfo : NSObject {

	BOOL _viewService;
	int _pid;
	unsigned long long _state;
	HMDApplicationInfo* _appInfo;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSHashTable* _connectionProxies;

}

@property (assign,nonatomic) unsigned long long state;                                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                                                 //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * connectionProxies;                                                          //@synthesize connectionProxies=_connectionProxies - In the implementation block
@property (nonatomic,readonly) int pid;                                                                                  //@synthesize pid=_pid - In the implementation block
@property (getter=isViewService,nonatomic,readonly) BOOL viewService;                                                    //@synthesize viewService=_viewService - In the implementation block
@property (getter=isForegrounded,nonatomic,readonly) BOOL foreground; 
@property (getter=isBackgroundUpgradedToForeground,nonatomic,readonly) BOOL backgroundUpgradedToForeground; 
@property (getter=isBackgrounded,nonatomic,readonly) BOOL background; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (getter=isTerminated,nonatomic,readonly) BOOL terminated; 
@property (nonatomic,__weak,readonly) HMDApplicationInfo * appInfo;                                                      //@synthesize appInfo=_appInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long proxyCount; 
-(BOOL)isSuspended;
-(id)init;
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)isBackgrounded;
-(void)deactivate;
-(void)activate;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(int)pid;
-(BOOL)isForegrounded;
-(void)initiateRefresh;
-(HMDApplicationInfo *)appInfo;
-(NSHashTable *)connectionProxies;
-(id)initWithConnectionProxy:(id)arg1 application:(id)arg2 processId:(int)arg3 ;
-(BOOL)isBackgroundUpgradedToForeground;
-(BOOL)isTerminated;
-(unsigned long long)proxyCount;
-(void)addConnectionProxy:(id)arg1 ;
-(void)removeConnectionProxy:(id)arg1 ;
-(id)activeRequestIdentifiers;
-(BOOL)isViewService;
@end

