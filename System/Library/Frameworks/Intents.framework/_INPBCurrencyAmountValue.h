/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBDecimalNumberValue, NSString, _INPBValueMetadata;

@interface _INPBCurrencyAmountValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBDecimalNumberValue* _amount;
	NSString* _currencyCode;
	_INPBValueMetadata* _valueMetadata;

}

@property (nonatomic,readonly) BOOL hasValueMetadata; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata;              //@synthesize valueMetadata=_valueMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasAmount; 
@property (nonatomic,retain) _INPBDecimalNumberValue * amount;                //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrencyCode; 
@property (nonatomic,retain) NSString * currencyCode;                         //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAmount:(_INPBDecimalNumberValue *)arg1 ;
-(_INPBDecimalNumberValue *)amount;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasAmount;
-(BOOL)hasCurrencyCode;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(_INPBValueMetadata *)valueMetadata;
-(void)setValueMetadata:(_INPBValueMetadata *)arg1 ;
-(BOOL)hasValueMetadata;
@end

