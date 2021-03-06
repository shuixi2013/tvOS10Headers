/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTransitArrivalInfo : PBCodable <NSCopying> {

	int _destinationLocation;
	SCD_Struct_GE15 _has;

}

@property (assign,nonatomic) BOOL hasDestinationLocation; 
@property (assign,nonatomic) int destinationLocation;                  //@synthesize destinationLocation=_destinationLocation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDestinationLocation;
-(int)destinationLocation;
-(void)setDestinationLocation:(int)arg1 ;
-(void)setHasDestinationLocation:(BOOL)arg1 ;
-(id)destinationLocationAsString:(int)arg1 ;
-(int)StringAsDestinationLocation:(id)arg1 ;
@end

