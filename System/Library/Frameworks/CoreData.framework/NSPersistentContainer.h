/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSManagedObjectContext, NSPersistentStoreCoordinator, NSArray, NSManagedObjectModel;

@interface NSPersistentContainer : NSObject {

	NSString* _name;
	NSManagedObjectContext* _viewContext;
	NSPersistentStoreCoordinator* _storeCoordinator;
	NSArray* _storeDescriptions;

}

@property (copy,readonly) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (readonly) NSManagedObjectContext * viewContext;                                   //@synthesize viewContext=_viewContext - In the implementation block
@property (readonly) NSManagedObjectModel * managedObjectModel; 
@property (readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize storeCoordinator=_storeCoordinator - In the implementation block
@property (copy) NSArray * persistentStoreDescriptions;                                      //@synthesize storeDescriptions=_storeDescriptions - In the implementation block
+(id)_newModelForName:(id)arg1 ;
+(id)defaultDirectoryURL;
+(id)persistentContainerWithName:(id)arg1 ;
+(id)persistentContainerWithName:(id)arg1 managedObjectModel:(id)arg2 ;
+(id)persistentContainerWithPath:(id)arg1 managedObjectModel:(id)arg2 ;
+(id)persistentContainerWithPath:(id)arg1 ;
+(id)persistentContainerWithPath:(id)arg1 modelNamed:(id)arg2 ;
-(id)initWithName:(id)arg1 managedObjectModel:(id)arg2 ;
-(NSArray *)persistentStoreDescriptions;
-(id)newBackgroundContext;
-(void)loadPersistentStoresWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performBackgroundTask:(/*^block*/id)arg1 ;
-(NSManagedObjectContext *)viewContext;
-(void)setPersistentStoreDescriptions:(NSArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSManagedObjectModel *)managedObjectModel;
-(BOOL)load:(id*)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
@end

