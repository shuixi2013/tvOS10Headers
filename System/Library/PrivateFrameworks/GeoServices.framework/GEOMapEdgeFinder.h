/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder, NSMutableSet, GEOMapAccess;

@interface GEOMapEdgeFinder : GEOMapRequest {

	GEOMapTileFinder* _tileFinder;
	SCD_Struct_GE26 _centerPoint;
	double _mapRadius;
	/*^block*/id _edgeHandler;
	NSMutableSet* _edgeBuilders;

}

@property (nonatomic,copy) id edgeHandler;                      //@synthesize edgeHandler=_edgeHandler - In the implementation block
@property (nonatomic,readonly) GEOMapAccess * map; 
-(void)cancel;
-(void)dealloc;
-(id)initWithMap:(id)arg1 center:(SCD_Struct_GE26)arg2 radius:(double)arg3 ;
-(void)_buildersInTile:(id)arg1 localPoint:(const Matrix<float, 2, 1>*)arg2 localRadiusSqr:(float)arg3 localSearch:(const Box<float, 2>*)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)_checkEdgeForDuplicates:(const shared_ptr<geo::MapEdge>*)arg1 ;
-(GEOMapAccess *)map;
-(id)edgeHandler;
-(void)setEdgeHandler:(id)arg1 ;
-(void)findEdges:(/*^block*/id)arg1 ;
@end

