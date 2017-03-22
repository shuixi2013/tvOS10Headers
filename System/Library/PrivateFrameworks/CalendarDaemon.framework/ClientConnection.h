/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ClientConnectionDelegate;
#import <CalendarDaemon/CalendarDaemon-Structs.h>
@class NSLock, NSSet, NSObject, NSOperationQueue, NSMutableDictionary, NSMutableSet, CADOperationProxy, ClientIdentity, NSXPCConnection, NSString;

@interface ClientConnection : NSObject {

	BOOL _allowedEntityTypesValid;
	long long _eventAccess;
	long long _reminderAccess;
	NSLock* _restrictionsLock;
	NSSet* _restrictedStoreRowIDs;
	NSSet* _restrictedCalendarRowIDs;
	int _sourceAccountManagement;
	CalDatabase* _database;
	NSObject*<OS_dispatch_queue> _dbQueue;
	NSOperationQueue* _operations;
	NSMutableDictionary* _insertedObjects;
	NSMutableSet* _canceledRequests;
	NSObject*<OS_dispatch_queue> _canceledRequestsLock;
	int _databaseInitializationOptions;
	CADOperationProxy* _cadOperationProxy;
	id<ClientConnectionDelegate> _delegate;
	ClientIdentity* _identity;
	NSXPCConnection* _xpcConnection;
	NSString* _databasePath;

}

@property (assign,nonatomic,__weak) id<ClientConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CalDatabase* database;                                     //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) ClientIdentity * identity;                               //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) CADOperationProxy * cadOperationProxy;                   //@synthesize cadOperationProxy=_cadOperationProxy - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                           //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) int databaseInitializationOptions;                         //@synthesize databaseInitializationOptions=_databaseInitializationOptions - In the implementation block
@property (nonatomic,copy) NSString * databasePath;                                     //@synthesize databasePath=_databasePath - In the implementation block
-(void)setDelegate:(id<ClientConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<ClientConnectionDelegate>)delegate;
-(void*)objectForKey:(id)arg1 ;
-(id)operations;
-(void)addOperation:(id)arg1 ;
-(ClientIdentity *)identity;
-(id)initWithXPCConnection:(id)arg1 ;
-(id)restrictedCalendarRowIDs;
-(BOOL)eventAccessGranted;
-(BOOL)reminderAccessGranted;
-(BOOL)hasTCCAccessToEntityWithObjectID:(SCD_Struct_CA1)arg1 ;
-(void)insertObject:(void*)arg1 key:(id)arg2 ;
-(void)setDatabaseInitializationOptions:(int)arg1 ;
-(BOOL)isCalendarRestricted:(void*)arg1 ;
-(void)clearInsertedObjects;
-(void)clearCachedAuthorizationStatus;
-(BOOL)isCalendarItemRestricted:(void*)arg1 ;
-(int)databaseInitializationOptions;
-(void)_loadAccessPermissionsIfNeeded;
-(BOOL)_hasTCCAccessToEntityWithObjectIDUsingDeepInspection:(SCD_Struct_CA1)arg1 ;
-(id)_restrictedStoreRowIDs;
-(BOOL)_shouldUseMCToBlacklist;
-(id)restrictedCalendarRowIDsWithValidator:(id)arg1 ;
-(id)restrictedStoreRowIDs;
-(BOOL)isStoreRestricted:(void*)arg1 ;
-(CADOperationProxy *)cadOperationProxy;
-(void)_databaseChanged;
-(void)setDatabasePath:(NSString *)arg1 ;
-(void)setSourceAccountManagement:(int)arg1 ;
-(NSString *)databasePath;
-(id)insertedObjects;
-(NSXPCConnection *)xpcConnection;
-(void)dumpState;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(CalDatabase*)database;
-(void)setDatabase:(CalDatabase*)arg1 ;
@end

