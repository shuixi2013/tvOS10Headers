/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBDataProviderConnectionCheckinServer.h>
#import <libobjc.A.dylib/BBRemoteDataProviderStoreDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/BBDataProviderStore.h>

@protocol OS_dispatch_queue, BBDataProviderStoreDelegate;
@class NSXPCListener, NSObject, NSMutableDictionary, BKSApplicationStateMonitor, NSString;

@interface BBRemoteDataProviderConnectionResolver : NSObject <BBDataProviderConnectionCheckinServer, BBRemoteDataProviderStoreDelegate, NSXPCListenerDelegate, BBDataProviderStore> {

	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _registerQueue;
	NSMutableDictionary* _dataProviderConnectionsByService;
	NSMutableDictionary* _dataProviderConnectionsBySectionID;
	NSMutableDictionary* _dataProviderConnectionsByUniversalSectionID;
	NSMutableDictionary* _xpcConnectionsByService;
	id<BBDataProviderStoreDelegate> _delegate;
	int _listeningToken;
	BKSApplicationStateMonitor* _appStateMonitor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)xpcInterface;
+(id)resolverWithDelegate:(id)arg1 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)registerServiceName:(id)arg1 appBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)debugDescriptionWithChildren:(unsigned long long)arg1 ;
-(void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2 ;
-(id)dataProviderForSectionID:(id)arg1 ;
-(void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2 performMigration:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)remoteDataProviderNeedsToWakeClient:(id)arg1 ;
-(void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2 ;
-(id)dataProviderForUniversalSectionID:(id)arg1 ;
-(void)removeDataProvider:(id)arg1 ;
-(void)performBlockOnDataProviders:(/*^block*/id)arg1 ;
-(void)loadAllDataProviders;
-(void)_registerForPublicationNotification;
-(void)_registerServiceName:(id)arg1 appBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)wakeService:(id)arg1 bundleID:(id)arg2 ;
@end

