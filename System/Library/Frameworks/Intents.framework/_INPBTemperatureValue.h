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

@class PBUnknownFields, _INPBValueMetadata;

@interface _INPBTemperatureValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _magnitude;
	int _unit;
	_INPBValueMetadata* _valueMetadata;
	SCD_Struct_IN3 _has;

}

@property (nonatomic,readonly) BOOL hasValueMetadata; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata;              //@synthesize valueMetadata=_valueMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasMagnitude; 
@property (assign,nonatomic) double magnitude;                                //@synthesize magnitude=_magnitude - In the implementation block
@property (assign,nonatomic) BOOL hasUnit; 
@property (assign,nonatomic) int unit;                                        //@synthesize unit=_unit - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(int)unit;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)magnitude;
-(void)setMagnitude:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setUnit:(int)arg1 ;
-(_INPBValueMetadata *)valueMetadata;
-(void)setValueMetadata:(_INPBValueMetadata *)arg1 ;
-(BOOL)hasUnit;
-(BOOL)hasValueMetadata;
-(void)setHasMagnitude:(BOOL)arg1 ;
-(BOOL)hasMagnitude;
-(void)setHasUnit:(BOOL)arg1 ;
@end

