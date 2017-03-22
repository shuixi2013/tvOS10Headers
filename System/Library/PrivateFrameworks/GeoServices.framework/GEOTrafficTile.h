/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface GEOTrafficTile : PBCodable <NSCopying> {

	NSMutableArray* _trafficIncidents;
	NSMutableArray* _trafficSegments;
	NSData* _vertices;

}

@property (nonatomic,readonly) BOOL hasVertices; 
@property (nonatomic,retain) NSData * vertices;                              //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,retain) NSMutableArray * trafficSegments;               //@synthesize trafficSegments=_trafficSegments - In the implementation block
@property (nonatomic,retain) NSMutableArray * trafficIncidents;              //@synthesize trafficIncidents=_trafficIncidents - In the implementation block
+(Class)trafficSegmentType;
+(Class)trafficIncidentType;
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
-(NSMutableArray *)trafficIncidents;
-(void)setTrafficIncidents:(NSMutableArray *)arg1 ;
-(BOOL)hasVertices;
-(void)clearTrafficSegments;
-(void)addTrafficSegment:(id)arg1 ;
-(unsigned long long)trafficSegmentsCount;
-(id)trafficSegmentAtIndex:(unsigned long long)arg1 ;
-(void)clearTrafficIncidents;
-(void)addTrafficIncident:(id)arg1 ;
-(unsigned long long)trafficIncidentsCount;
-(id)trafficIncidentAtIndex:(unsigned long long)arg1 ;
-(NSData *)vertices;
-(void)setVertices:(NSData *)arg1 ;
-(NSMutableArray *)trafficSegments;
-(void)setTrafficSegments:(NSMutableArray *)arg1 ;
-(SCD_Struct_GE98*)createUnpackedVerticesWithGutterSize:(long long)arg1 ;
@end

