/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOCacheManaging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface GEOCacheManagerRemoteProxy : NSObject <GEOCacheManaging> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)versionsForDomains:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)snapshotWithFilePathArray:(id)arg1 handler:(/*^block*/id)arg2 ;
-(long long)invalidationStateForPlace:(id)arg1 ;
-(long long)invalidationStateForComponent:(id)arg1 ;
-(void)refreshLOIAssociatedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)refreshLOIReverseGeocodedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_refreshMapItems:(id)arg1 updatedCoordinates:(id)arg2 xpcMessageName:(id)arg3 traits:(id)arg4 handler:(/*^block*/id)arg5 ;
@end

