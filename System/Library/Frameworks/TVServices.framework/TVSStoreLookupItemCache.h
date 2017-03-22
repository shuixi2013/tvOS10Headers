/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext;

@interface TVSStoreLookupItemCache : NSObject {

	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
+(id)defaultCache;
+(id)_managedObjectModel;
+(id)_persistentStoreURL;
+(id)_entryEntityName;
+(id)_fetchRequestForLookupItemCacheEntry;
+(id)_fetchRequestForEntriesWithExpirationDate:(id)arg1 operatorType:(unsigned long long)arg2 ;
+(id)_batchDeleteRequestWithExpirationDate:(id)arg1 ;
+(id)_fetchRequestForItemsExpiringAfterDate:(id)arg1 ;
+(id)_fetchRequestForEntriesWithAdamIDs:(id)arg1 ;
-(id)init;
-(NSManagedObjectContext *)managedObjectContext;
-(void)removeAllLookupItems;
-(id)allLookupItemsByAdamID;
-(void)updateBookmarks:(id)arg1 ;
-(id)lookupItemForAdamID:(id)arg1 ;
-(void)setLookupItem:(id)arg1 forAdamID:(id)arg2 ;
-(void)_deleteEntriesWithExpirationDate:(id)arg1 ;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
@end

