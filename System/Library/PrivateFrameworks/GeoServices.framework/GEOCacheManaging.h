/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOCacheManaging <NSObject>
@required
-(void)versionsForDomains:(id)arg1 handler:(/*^block*/id)arg2;
-(void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(/*^block*/id)arg2;
-(void)snapshotWithFilePathArray:(id)arg1 handler:(/*^block*/id)arg2;
-(long long)invalidationStateForPlace:(id)arg1;
-(long long)invalidationStateForComponent:(id)arg1;
-(void)refreshLOIAssociatedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 handler:(/*^block*/id)arg4;
-(void)refreshLOIReverseGeocodedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 handler:(/*^block*/id)arg4;

@end

