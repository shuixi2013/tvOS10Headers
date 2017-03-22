/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSManagedObjectModel, NSMutableDictionary, NSObject, _DKDataProtectionStateMonitor, NSFileManager, NSString, NSURL;

@interface _DKCoreDataStorage : NSObject {

	NSManagedObjectModel* _managedObjectModel;
	NSMutableDictionary* _paths;
	NSMutableDictionary* _managedObjectContexts;
	NSMutableDictionary* _persistentStoreCoordinators;
	NSObject*<OS_dispatch_queue> _queueMOC;
	NSObject*<OS_dispatch_queue> _queuePSC;
	_DKDataProtectionStateMonitor* _dataProtectionMonitor;
	NSFileManager* _fm;
	BOOL _readOnly;
	NSString* _directory;
	NSURL* _modelURL;
	NSString* _databaseName;

}

@property (readonly) NSString * directory;                 //@synthesize directory=_directory - In the implementation block
@property (readonly) BOOL readOnly;                        //@synthesize readOnly=_readOnly - In the implementation block
@property (readonly) NSURL * modelURL;                     //@synthesize modelURL=_modelURL - In the implementation block
@property (readonly) NSString * databaseName;              //@synthesize databaseName=_databaseName - In the implementation block
+(unsigned long long)countObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 includeSubentities:(BOOL)arg4 includePendingChanges:(BOOL)arg5 ;
+(unsigned long long)deleteObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 fetchLimit:(unsigned long long)arg5 includeSubentities:(BOOL)arg6 includePendingChanges:(BOOL)arg7 ;
+(unsigned long long)deleteObjectsIfNeededToLimitTotal:(unsigned long long)arg1 context:(id)arg2 entityName:(id)arg3 predicate:(id)arg4 sortDescriptors:(id)arg5 fetchLimit:(unsigned long long)arg6 includeSubentities:(BOOL)arg7 includePendingChanges:(BOOL)arg8 ;
+(unsigned long long)anonymizeObjectStringsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 batchFetchLimit:(unsigned long long)arg5 totalFetchLimit:(unsigned long long)arg6 includeSubentities:(BOOL)arg7 salt:(id)arg8 ;
+(unsigned long long)deleteObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 fetchOffset:(unsigned long long)arg5 fetchLimit:(unsigned long long)arg6 includeSubentities:(BOOL)arg7 includePendingChanges:(BOOL)arg8 ;
+(BOOL)forceCopyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
+(id)anonymizeString:(id)arg1 withSalt:(id)arg2 ;
+(unsigned long long)anonymizeStringAttributesOfManagedObject:(id)arg1 withSalt:(id)arg2 ;
+(unsigned long long)updateObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 batchFetchLimit:(unsigned long long)arg5 totalFetchLimit:(unsigned long long)arg6 includeSubentities:(BOOL)arg7 updateBlock:(/*^block*/id)arg8 ;
-(id)init;
-(BOOL)readOnly;
-(id)managedObjectModel;
-(id)initWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 readOnly:(BOOL)arg4 ;
-(id)managedObjectContextFor:(id)arg1 ;
-(void)closeStorageForProtectionClass:(id)arg1 ;
-(BOOL)deleteStorageFor:(id)arg1 ;
-(id)copyStorageFor:(id)arg1 toDirectory:(id)arg2 ;
-(void)handleDataProtectionChangeFor:(id)arg1 willBeAvailable:(BOOL)arg2 ;
-(void)invalidateManagedObjectContextFor:(id)arg1 ;
-(void)invalidatePersistentStoreCoordinatorFor:(id)arg1 ;
-(void)handleDatabaseErrors:(id)arg1 forProtectionClass:(id)arg2 ;
-(id)databasePathFor:(id)arg1 ;
-(BOOL)_deleteDatabaseFiles:(id)arg1 ;
-(id)persistentStoreCoordinatorFor:(id)arg1 ;
-(NSURL *)modelURL;
-(NSString *)databaseName;
-(NSString *)directory;
@end

