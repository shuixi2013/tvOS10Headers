/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@protocol OS_dispatch_queue;
@class CallHistoryDBHandle, NSObject;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable {

	CallHistoryDBHandle* dbStoreHandle;
	id _observerCallRecordRef;
	id _observerCallTimersRef;
	NSObject*<OS_dispatch_queue> _recentCallQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> recentCallQueue;              //@synthesize recentCallQueue=_recentCallQueue - In the implementation block
@property (nonatomic,readonly) CallHistoryDBHandle * dbStoreHandle; 
+(id)createForClient;
+(id)createForServer;
-(id)init:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)deleteAll;
-(id)fetchObjectsWithPredicate:(id)arg1 ;
-(BOOL)deleteAll:(id*)arg1 ;
-(BOOL)moveCallRecordsFromDatabaseAtURL:(id)arg1 ;
-(id)fetchAllObjectsWithUniqueId:(id)arg1 ;
-(id)fetchObjectWithUniqueId:(id)arg1 ;
-(id)fetchObjectsWithUniqueIds:(id)arg1 ;
-(id)fetchAllNoLimit;
-(void)resetTimers;
-(BOOL)resetAllTimers;
-(void)unRegisterForNotifications;
-(id)fetchAll;
-(id)fetchWithCallTypes:(unsigned)arg1 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 ;
-(BOOL)deleteObjectsWithUniqueIds:(id)arg1 ;
-(id)timerIncoming;
-(id)timerOutgoing;
-(id)timerLifetime;
-(id)timerLastReset;
-(BOOL)createCallRecord:(id)arg1 ;
-(BOOL)createCallRecords:(id)arg1 ;
-(id)updateCallRecords:(id)arg1 ;
-(id)updateAllCallRecords:(id)arg1 ;
-(void)parseCallStatus_sync:(unsigned)arg1 isAnswered:(BOOL*)arg2 isOriginated:(BOOL*)arg3 ;
-(unsigned)getCallStatus_sync:(id)arg1 isOriginated:(id)arg2 isAnswered:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)recentCallQueue;
-(void)setClientObject_sync:(id)arg1 withStoreObject:(id)arg2 ;
-(void)handleCallRecordSave_sync:(id)arg1 ;
-(void)handleCallTimersSave_sync:(id)arg1 ;
-(id)convertToCHRecentCalls_sync:(id)arg1 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(BOOL)deleteObjectsWithUniqueIds:(id)arg1 error:(id*)arg2 ;
-(BOOL)createCallRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)createCallRecord:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(void)setStoreObject_sync:(id)arg1 withClientObject:(id)arg2 ;
-(BOOL)createCallRecords:(id)arg1 error:(id*)arg2 ;
-(id)updateCallRecords:(id)arg1 error:(id*)arg2 ;
-(id)updateCallRecords:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(id)updateCallRecords_sync:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(id)updateAllCallRecords:(id)arg1 error:(id*)arg2 ;
-(id)updateAllCallRecords_sync:(id)arg1 error:(id*)arg2 ;
-(BOOL)willHandleNotification_sync:(id)arg1 ;
-(BOOL)updateCallRecord_sync:(id)arg1 withChangeDict:(id)arg2 ;
-(BOOL)saveDatabase:(id*)arg1 ;
-(CallHistoryDBHandle *)dbStoreHandle;
-(void)setRecentCallQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)manager;
-(void)registerForNotifications;
@end

