/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDBounds, GEOLatLng;

@interface GEOPDSpatialLookupResult : PBCodable <NSCopying> {

	SCD_Struct_GE1* _mappedCategorys;
	GEOPDBounds* _bounds;
	GEOLatLng* _center;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                                     //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) BOOL hasBounds; 
@property (nonatomic,retain) GEOPDBounds * bounds;                                   //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) unsigned long long mappedCategorysCount; 
@property (nonatomic,readonly) int* mappedCategorys; 
+(id)spatialLookupResultForPlaceData:(id)arg1 ;
-(GEOPDBounds *)bounds;
-(void)dealloc;
-(void)setBounds:(GEOPDBounds *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOLatLng *)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCenter;
-(BOOL)hasBounds;
-(unsigned long long)mappedCategorysCount;
-(int*)mappedCategorys;
-(void)clearMappedCategorys;
-(void)addMappedCategory:(int)arg1 ;
-(int)mappedCategoryAtIndex:(unsigned long long)arg1 ;
-(void)setMappedCategorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)mappedCategorysAsString:(int)arg1 ;
-(int)StringAsMappedCategorys:(id)arg1 ;
@end

