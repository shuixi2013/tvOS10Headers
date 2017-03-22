/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, GEOTileCache;

@interface GEOTilePool : NSObject {

	NSObject*<OS_dispatch_source> _memoryNotificationEventSource;
	GEOGenericContainer<_GEOTileKey, id, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>* _pool;
	GEOTileCache* _cache;

}

@property (nonatomic,readonly) unsigned long long currentCount; 
@property (nonatomic,readonly) unsigned long long currentCost; 
@property (assign) unsigned long long maxCapacity; 
@property (assign) unsigned long long maxCost; 
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(void)_receivedMemoryNotification;
-(void)setMaxCapacity:(unsigned long long)arg1 ;
-(unsigned long long)maxCapacity;
-(unsigned long long)maxCost;
-(void)setMaxCost:(unsigned long long)arg1 ;
-(id)tileForKey:(const GEOTileKey*)arg1 ;
-(BOOL)containsKey:(const GEOTileKey*)arg1 cost:(unsigned long long*)arg2 ;
-(void)setTile:(id)arg1 forKey:(const GEOTileKey*)arg2 cost:(unsigned long long)arg3 ;
-(void)setNullForKey:(const GEOTileKey*)arg1 ;
-(void)removeTileForKey:(const GEOTileKey*)arg1 ;
-(void)removeTilesWithKeys:(id)arg1 ;
-(void)enumerate:(/*^block*/id)arg1 ;
-(void)removeTilesMatchingPredicate:(/*^block*/id)arg1 ;
-(void)_enteredBackground:(id)arg1 ;
-(unsigned long long)currentCount;
-(unsigned long long)currentCost;
-(id)initWithSideCacheEnabled:(BOOL)arg1 ;
@end

