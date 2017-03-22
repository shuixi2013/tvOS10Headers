/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryDatabase : NSObject {

	SSSQLiteDatabase* _database;

}
+(void)_createDatabaseDirectory;
+(BOOL)_setupDatabase:(id)arg1 ;
+(id)accountUniqueIdentifierKey;
+(id)newDefaultInstance;
-(id)initWithDatabaseURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)readUsingTransactionBlock:(/*^block*/id)arg1 ;
-(BOOL)removeValueForDatabaseProperty:(id)arg1 ;
-(void)modifyUsingAppPurchaseHistoryTransactionBlock:(/*^block*/id)arg1 ;
-(void)readAsyncUsingTransactionBlock:(/*^block*/id)arg1 ;
-(id)currentAccountUniqueIdentifier;
-(BOOL)setCurrentAccountUniqueIdentifier:(id)arg1 ;
-(long long)localRevisionForAccountUniqueIdentifier:(id)arg1 ;
-(BOOL)setLocalRevision:(long long)arg1 forAccountUniqueIdentifier:(id)arg2 ;
-(BOOL)resetCacheForNewAccountID:(id)arg1 ;
-(id)allProperties:(id)arg1 accountID:(id)arg2 includingHidden:(BOOL)arg3 ;
-(void)dealloc;
-(id)init;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(id)database;
@end

