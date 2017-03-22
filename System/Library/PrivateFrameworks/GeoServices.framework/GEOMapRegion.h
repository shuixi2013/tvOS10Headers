/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOMapRegion : PBCodable <NSCopying> {

	double _eastLng;
	double _northLat;
	double _southLat;
	double _westLng;
	NSMutableArray* _vertexs;
	SCD_Struct_GE69 _has;

}

@property (nonatomic,readonly) double centerLat; 
@property (nonatomic,readonly) double centerLng; 
@property (nonatomic,readonly) double spanLat; 
@property (nonatomic,readonly) double spanLng; 
@property (assign,nonatomic) BOOL hasSouthLat; 
@property (assign,nonatomic) double southLat;                       //@synthesize southLat=_southLat - In the implementation block
@property (assign,nonatomic) BOOL hasWestLng; 
@property (assign,nonatomic) double westLng;                        //@synthesize westLng=_westLng - In the implementation block
@property (assign,nonatomic) BOOL hasNorthLat; 
@property (assign,nonatomic) double northLat;                       //@synthesize northLat=_northLat - In the implementation block
@property (assign,nonatomic) BOOL hasEastLng; 
@property (assign,nonatomic) double eastLng;                        //@synthesize eastLng=_eastLng - In the implementation block
@property (nonatomic,retain) NSMutableArray * vertexs;              //@synthesize vertexs=_vertexs - In the implementation block
+(id)_geo_mapRegionForGEOCoordinateRegion:(SCD_Struct_GE49)arg1 ;
+(Class)vertexType;
-(id)_initWithCLRegion:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMapRect:(SCD_Struct_GE49)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(id)initWithCoordinateRegion:(SCD_Struct_GE49)arg1 ;
-(id)initWithRadialPlace:(id)arg1 ;
-(double)centerLat;
-(double)centerLng;
-(double)spanLat;
-(double)spanLng;
-(BOOL)containsCoordinate:(SCD_Struct_GE26)arg1 ;
-(BOOL)containsMapRect:(SCD_Struct_GE49)arg1 ;
-(id)initWithMapRect:(SCD_Struct_GE49)arg1 ;
-(void)setSouthLat:(double)arg1 ;
-(void)setHasSouthLat:(BOOL)arg1 ;
-(BOOL)hasSouthLat;
-(void)setWestLng:(double)arg1 ;
-(void)setHasWestLng:(BOOL)arg1 ;
-(BOOL)hasWestLng;
-(void)setNorthLat:(double)arg1 ;
-(void)setHasNorthLat:(BOOL)arg1 ;
-(BOOL)hasNorthLat;
-(void)setEastLng:(double)arg1 ;
-(void)setHasEastLng:(BOOL)arg1 ;
-(BOOL)hasEastLng;
-(void)clearVertexs;
-(void)addVertex:(id)arg1 ;
-(unsigned long long)vertexsCount;
-(id)vertexAtIndex:(unsigned long long)arg1 ;
-(double)southLat;
-(double)westLng;
-(double)northLat;
-(double)eastLng;
-(NSMutableArray *)vertexs;
-(void)setVertexs:(NSMutableArray *)arg1 ;
@end

