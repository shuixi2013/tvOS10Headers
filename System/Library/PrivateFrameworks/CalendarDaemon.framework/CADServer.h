/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ClientConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSXPCListener, BirthdayCalendarManager, LocalAttachmentCleanUpSupport, NSMutableSet, NSLock, NSArray, CDBDataProtectionObserver, NSString;

@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _backgroundTaskCount;
	NSXPCListener* _NSXPCListener;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	BirthdayCalendarManager* _birthdayManager;
	LocalAttachmentCleanUpSupport* _localAttachmentCleanupManager;
	NSMutableSet* _clientConnections;
	NSLock* _connectionLock;
	unsigned long long _birthdayManagerGeneration;
	NSArray* _signalSensors;
	BOOL _running;
	NSObject*<OS_dispatch_queue> _serverQueue;
	NSObject* _bbProvider;
	CDBDataProtectionObserver* _dataProtectionObserver;

}

@property (nonatomic,retain) CDBDataProtectionObserver * dataProtectionObserver;              //@synthesize dataProtectionObserver=_dataProtectionObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)shutDown;
-(void)dealloc;
-(id)init;
-(void)run;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_protectedDataDidBecomeAvailable;
-(void)clientConnectionDied:(id)arg1 ;
-(void)_setUpSignalHandlers;
-(void)_startBirthdayManager;
-(void)_handleXPCConnection:(id)arg1 ;
-(void)_registerMaintenanceActivities;
-(void)_tearDownSignalHandlers;
-(void)_exitWithStatus:(int)arg1 ;
-(void)_updateOccurrenceCacheTimeZone;
-(BOOL)_trimAndExtendOccurrenceCache;
-(void)_registerForIdentityOrphanCleanup;
-(void)_registerForIdleChangeTrackingClientCleanup;
-(void)identityOrphanCleanupDatabase:(CalDatabase*)arg1 ;
-(void)idleChangeTrackingClientCleanupDatabase:(CalDatabase*)arg1 ;
-(void)_stopBirthdayManager;
-(void)setDataProtectionObserver:(CDBDataProtectionObserver *)arg1 ;
-(CDBDataProtectionObserver *)dataProtectionObserver;
-(void)_registerForNotifications;
-(void)_dumpState;
@end

