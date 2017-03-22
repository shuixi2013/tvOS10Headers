/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLocation, NSString, _INPBImageValue;

@interface _INPBRideVehicle : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLocation* _location;
	NSString* _manufacturer;
	_INPBImageValue* _mapAnnotationImage;
	NSString* _model;
	NSString* _registrationPlate;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location;                            //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasRegistrationPlate; 
@property (nonatomic,retain) NSString * registrationPlate;                      //@synthesize registrationPlate=_registrationPlate - In the implementation block
@property (nonatomic,readonly) BOOL hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer;                           //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model;                                  //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL hasMapAnnotationImage; 
@property (nonatomic,retain) _INPBImageValue * mapAnnotationImage;              //@synthesize mapAnnotationImage=_mapAnnotationImage - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)model;
-(id)dictionaryRepresentation;
-(GEOLocation *)location;
-(void)setLocation:(GEOLocation *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLocation;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasManufacturer;
-(BOOL)hasModel;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(_INPBImageValue *)mapAnnotationImage;
-(NSString *)registrationPlate;
-(void)setRegistrationPlate:(NSString *)arg1 ;
-(void)setMapAnnotationImage:(_INPBImageValue *)arg1 ;
-(BOOL)hasRegistrationPlate;
-(BOOL)hasMapAnnotationImage;
@end

