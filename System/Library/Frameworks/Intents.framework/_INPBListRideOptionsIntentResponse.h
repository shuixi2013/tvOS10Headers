/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBTimestamp, NSMutableArray;

@interface _INPBListRideOptionsIntentResponse : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBTimestamp* _expirationDate;
	NSMutableArray* _paymentMethods;
	NSMutableArray* _rideOptions;

}

@property (nonatomic,retain) NSMutableArray * rideOptions;                   //@synthesize rideOptions=_rideOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * paymentMethods;                //@synthesize paymentMethods=_paymentMethods - In the implementation block
@property (nonatomic,readonly) BOOL hasExpirationDate; 
@property (nonatomic,retain) _INPBTimestamp * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)paymentMethodsType;
+(Class)rideOptionsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setExpirationDate:(_INPBTimestamp *)arg1 ;
-(BOOL)hasExpirationDate;
-(_INPBTimestamp *)expirationDate;
-(unsigned long long)rideOptionsCount;
-(NSMutableArray *)rideOptions;
-(void)addPaymentMethods:(id)arg1 ;
-(void)clearPaymentMethods;
-(unsigned long long)paymentMethodsCount;
-(id)paymentMethodsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)paymentMethods;
-(void)setPaymentMethods:(NSMutableArray *)arg1 ;
-(void)setRideOptions:(NSMutableArray *)arg1 ;
-(void)addRideOptions:(id)arg1 ;
-(void)clearRideOptions;
-(id)rideOptionsAtIndex:(unsigned long long)arg1 ;
@end

