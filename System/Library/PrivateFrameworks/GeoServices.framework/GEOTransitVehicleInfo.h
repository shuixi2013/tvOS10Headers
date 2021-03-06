/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTransitVehicleTime, NSString;

@interface GEOTransitVehicleInfo : PBCodable <NSCopying> {

	SCD_Struct_GE19* _clusteredRouteLineArtworkIndexs;
	unsigned long long _tripMuid;
	GEOTransitVehicleTime* _arrivalTime;
	unsigned _departureFrequencyMax;
	unsigned _departureFrequencyMin;
	GEOTransitVehicleTime* _departureTime;
	unsigned _lineIndex;
	int _pickupDropoffType;
	unsigned _routeLineArtworkIndex;
	NSString* _vehicleNumber;
	SCD_Struct_LO18 _has;

}

@property (nonatomic,readonly) BOOL hasArrivalTime; 
@property (nonatomic,retain) GEOTransitVehicleTime * arrivalTime;                                    //@synthesize arrivalTime=_arrivalTime - In the implementation block
@property (nonatomic,readonly) BOOL hasDepartureTime; 
@property (nonatomic,retain) GEOTransitVehicleTime * departureTime;                                  //@synthesize departureTime=_departureTime - In the implementation block
@property (assign,nonatomic) BOOL hasLineIndex; 
@property (assign,nonatomic) unsigned lineIndex;                                                     //@synthesize lineIndex=_lineIndex - In the implementation block
@property (assign,nonatomic) BOOL hasRouteLineArtworkIndex; 
@property (assign,nonatomic) unsigned routeLineArtworkIndex;                                         //@synthesize routeLineArtworkIndex=_routeLineArtworkIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long clusteredRouteLineArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* clusteredRouteLineArtworkIndexs; 
@property (assign,nonatomic) BOOL hasPickupDropoffType; 
@property (assign,nonatomic) int pickupDropoffType;                                                  //@synthesize pickupDropoffType=_pickupDropoffType - In the implementation block
@property (assign,nonatomic) BOOL hasDepartureFrequencyMin; 
@property (assign,nonatomic) unsigned departureFrequencyMin;                                         //@synthesize departureFrequencyMin=_departureFrequencyMin - In the implementation block
@property (assign,nonatomic) BOOL hasDepartureFrequencyMax; 
@property (assign,nonatomic) unsigned departureFrequencyMax;                                         //@synthesize departureFrequencyMax=_departureFrequencyMax - In the implementation block
@property (assign,nonatomic) BOOL hasTripMuid; 
@property (assign,nonatomic) unsigned long long tripMuid;                                            //@synthesize tripMuid=_tripMuid - In the implementation block
@property (nonatomic,readonly) BOOL hasVehicleNumber; 
@property (nonatomic,retain) NSString * vehicleNumber;                                               //@synthesize vehicleNumber=_vehicleNumber - In the implementation block
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
-(void)setDepartureTime:(GEOTransitVehicleTime *)arg1 ;
-(BOOL)hasDepartureTime;
-(GEOTransitVehicleTime *)departureTime;
-(void)setLineIndex:(unsigned)arg1 ;
-(void)setHasLineIndex:(BOOL)arg1 ;
-(BOOL)hasLineIndex;
-(unsigned)lineIndex;
-(GEOTransitVehicleTime *)arrivalTime;
-(BOOL)hasArrivalTime;
-(void)setRouteLineArtworkIndex:(unsigned)arg1 ;
-(void)setHasRouteLineArtworkIndex:(BOOL)arg1 ;
-(BOOL)hasRouteLineArtworkIndex;
-(unsigned long long)clusteredRouteLineArtworkIndexsCount;
-(unsigned*)clusteredRouteLineArtworkIndexs;
-(void)clearClusteredRouteLineArtworkIndexs;
-(void)addClusteredRouteLineArtworkIndex:(unsigned)arg1 ;
-(unsigned)clusteredRouteLineArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)setClusteredRouteLineArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(int)pickupDropoffType;
-(void)setPickupDropoffType:(int)arg1 ;
-(void)setHasPickupDropoffType:(BOOL)arg1 ;
-(BOOL)hasPickupDropoffType;
-(id)pickupDropoffTypeAsString:(int)arg1 ;
-(int)StringAsPickupDropoffType:(id)arg1 ;
-(void)setDepartureFrequencyMin:(unsigned)arg1 ;
-(void)setHasDepartureFrequencyMin:(BOOL)arg1 ;
-(BOOL)hasDepartureFrequencyMin;
-(void)setDepartureFrequencyMax:(unsigned)arg1 ;
-(void)setHasDepartureFrequencyMax:(BOOL)arg1 ;
-(BOOL)hasDepartureFrequencyMax;
-(void)setTripMuid:(unsigned long long)arg1 ;
-(void)setHasTripMuid:(BOOL)arg1 ;
-(BOOL)hasTripMuid;
-(BOOL)hasVehicleNumber;
-(void)setArrivalTime:(GEOTransitVehicleTime *)arg1 ;
-(unsigned)routeLineArtworkIndex;
-(unsigned)departureFrequencyMin;
-(unsigned)departureFrequencyMax;
-(unsigned long long)tripMuid;
-(NSString *)vehicleNumber;
-(void)setVehicleNumber:(NSString *)arg1 ;
@end

