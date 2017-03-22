/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, SSPersistentCache, SSSQLiteDatabase;

@interface SSDatabaseCache : NSObject {

	unsigned long long _maximumInlineBlobSize;
	NSString* _identifier;
	NSString* _cacheName;
	NSString* _path;
	NSObject*<OS_dispatch_queue> _serialQueue;
	SSPersistentCache* _persistentCache;
	SSSQLiteDatabase* _database;
	Class _cacheEntryClass;

}

@property (assign,nonatomic) unsigned long long maximumInlineBlobSize;              //@synthesize maximumInlineBlobSize=_maximumInlineBlobSize - In the implementation block
-(BOOL)_setupDatabase;
-(id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 database:(id)arg3 cacheEntryClass:(Class)arg4 ;
-(id)cacheEntryForLookupKey:(id)arg1 ;
-(unsigned long long)maximumInlineBlobSize;
-(void)clearCacheForLookupKey:(id)arg1 ;
-(int)clearRetiredData;
-(id)setData:(id)arg1 expiring:(double)arg2 retiring:(double)arg3 lookupKey:(id)arg4 userInfo:(id)arg5 ;
-(id)cacheEntryProperties:(id)arg1 forLookupKeys:(id)arg2 ;
-(void)setMaximumInlineBlobSize:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(void)clear;
-(id)statistics;
@end

