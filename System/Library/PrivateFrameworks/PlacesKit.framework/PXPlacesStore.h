/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/PXPlacesGeotaggedItemDataSource.h>

@protocol OS_dispatch_semaphore, PXPlacesGeotaggedItemDataSourceDelegate;
@class NSSet, NSObject, NSMutableSet, NSMutableArray, NSString;

@interface PXPlacesStore : NSObject <PXPlacesGeotaggedItemDataSource> {

	PXQuadTreeStoreNode* _rootNode;
	int _updateCount;
	opaque_pthread_rwlock_t _rwlock;
	NSObject*<OS_dispatch_semaphore> _itemChangeSemaphore;
	long long _numberOfItems;
	id<PXPlacesGeotaggedItemDataSourceDelegate> _delegate;
	unsigned long long _capacityPerNode;
	NSMutableSet* _itemsToAdd;
	NSMutableArray* _itemsToAddArray;
	NSMutableSet* _itemsToRemove;
	SCD_Struct_PX4 _rect;

}

@property (assign) SCD_Struct_PX4 rect;                                               //@synthesize rect=_rect - In the implementation block
@property (retain) NSMutableSet * itemsToAdd;                                         //@synthesize itemsToAdd=_itemsToAdd - In the implementation block
@property (retain) NSMutableArray * itemsToAddArray;                                  //@synthesize itemsToAddArray=_itemsToAddArray - In the implementation block
@property (retain) NSMutableSet * itemsToRemove;                                      //@synthesize itemsToRemove=_itemsToRemove - In the implementation block
@property (assign) id<PXPlacesGeotaggedItemDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long capacityPerNode;                              //@synthesize capacityPerNode=_capacityPerNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSSet * allItems; 
@property (nonatomic,readonly) long long numberOfItems;                               //@synthesize numberOfItems=_numberOfItems - In the implementation block
-(void)setDelegate:(id<PXPlacesGeotaggedItemDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PXPlacesGeotaggedItemDataSourceDelegate>)delegate;
-(long long)numberOfItems;
-(void)addItems:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(void)beginUpdates;
-(void)endUpdates;
-(SCD_Struct_PX4)rect;
-(void)setRect:(SCD_Struct_PX4)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)removeItems:(id)arg1 ;
-(NSSet *)allItems;
-(id)findItemsInMapRect:(SCD_Struct_PX4)arg1 ;
-(void)addItemsFromArray:(id)arg1 ;
-(SCD_Struct_PX4)minimalEncompassingMapRect;
-(id)initWithCapacityPerNode:(unsigned long long)arg1 ;
-(void)_commitChanges;
-(NSMutableSet *)itemsToAdd;
-(NSMutableArray *)itemsToAddArray;
-(NSMutableSet *)itemsToRemove;
-(id)_findItemsInMapRect:(SCD_Struct_PX4)arg1 ;
-(void)runNodeDebugCollector:(/*^block*/id)arg1 ;
-(unsigned long long)capacityPerNode;
-(void)setItemsToAdd:(NSMutableSet *)arg1 ;
-(void)setItemsToAddArray:(NSMutableArray *)arg1 ;
-(void)setItemsToRemove:(NSMutableSet *)arg1 ;
@end

