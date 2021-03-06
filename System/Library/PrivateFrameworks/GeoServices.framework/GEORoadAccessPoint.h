/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng;

@interface GEORoadAccessPoint : PBCodable <NSCopying> {

	int _drivingDirection;
	GEOLatLng* _location;
	int _walkingDirection;
	BOOL _isApproximate;
	SCD_Struct_GE20 _has;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location;                  //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasIsApproximate; 
@property (assign,nonatomic) BOOL isApproximate;                    //@synthesize isApproximate=_isApproximate - In the implementation block
@property (assign,nonatomic) BOOL hasWalkingDirection; 
@property (assign,nonatomic) int walkingDirection;                  //@synthesize walkingDirection=_walkingDirection - In the implementation block
@property (assign,nonatomic) BOOL hasDrivingDirection; 
@property (assign,nonatomic) int drivingDirection;                  //@synthesize drivingDirection=_drivingDirection - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLatLng *)location;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLocation;
-(void)setIsApproximate:(BOOL)arg1 ;
-(void)setHasIsApproximate:(BOOL)arg1 ;
-(BOOL)hasIsApproximate;
-(int)walkingDirection;
-(void)setWalkingDirection:(int)arg1 ;
-(void)setHasWalkingDirection:(BOOL)arg1 ;
-(BOOL)hasWalkingDirection;
-(id)walkingDirectionAsString:(int)arg1 ;
-(int)StringAsWalkingDirection:(id)arg1 ;
-(int)drivingDirection;
-(void)setDrivingDirection:(int)arg1 ;
-(void)setHasDrivingDirection:(BOOL)arg1 ;
-(BOOL)hasDrivingDirection;
-(id)drivingDirectionAsString:(int)arg1 ;
-(int)StringAsDrivingDirection:(id)arg1 ;
-(BOOL)isApproximate;
@end

