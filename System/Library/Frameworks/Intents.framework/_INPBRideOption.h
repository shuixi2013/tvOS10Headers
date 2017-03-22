/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, NSString, _INPBTimestamp, _INPBPriceRangeValue, _INPBImageValue, _INPBUserActivity;

@interface _INPBRideOption : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _availablePartySizeOptions;
	NSString* _availablePartySizeOptionsSelectionPrompt;
	NSString* _disclaimerMessage;
	_INPBTimestamp* _estimatedPickupDate;
	NSMutableArray* _fareLineItems;
	NSString* _name;
	_INPBPriceRangeValue* _priceRange;
	NSString* _specialPricing;
	_INPBImageValue* _specialPricingBadgeImage;
	NSString* _subtitle;
	_INPBUserActivity* _userActivityForBookingInApplication;
	BOOL _usesMeteredFare;
	SCD_Struct_IN1 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasEstimatedPickupDate; 
@property (nonatomic,retain) _INPBTimestamp * estimatedPickupDate;                                 //@synthesize estimatedPickupDate=_estimatedPickupDate - In the implementation block
@property (nonatomic,readonly) BOOL hasPriceRange; 
@property (nonatomic,retain) _INPBPriceRangeValue * priceRange;                                    //@synthesize priceRange=_priceRange - In the implementation block
@property (nonatomic,readonly) BOOL hasDisclaimerMessage; 
@property (nonatomic,retain) NSString * disclaimerMessage;                                         //@synthesize disclaimerMessage=_disclaimerMessage - In the implementation block
@property (nonatomic,retain) NSMutableArray * availablePartySizeOptions;                           //@synthesize availablePartySizeOptions=_availablePartySizeOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasAvailablePartySizeOptionsSelectionPrompt; 
@property (nonatomic,retain) NSString * availablePartySizeOptionsSelectionPrompt;                  //@synthesize availablePartySizeOptionsSelectionPrompt=_availablePartySizeOptionsSelectionPrompt - In the implementation block
@property (nonatomic,readonly) BOOL hasSpecialPricing; 
@property (nonatomic,retain) NSString * specialPricing;                                            //@synthesize specialPricing=_specialPricing - In the implementation block
@property (nonatomic,readonly) BOOL hasSpecialPricingBadgeImage; 
@property (nonatomic,retain) _INPBImageValue * specialPricingBadgeImage;                           //@synthesize specialPricingBadgeImage=_specialPricingBadgeImage - In the implementation block
@property (nonatomic,retain) NSMutableArray * fareLineItems;                                       //@synthesize fareLineItems=_fareLineItems - In the implementation block
@property (nonatomic,readonly) BOOL hasUserActivityForBookingInApplication; 
@property (nonatomic,retain) _INPBUserActivity * userActivityForBookingInApplication;              //@synthesize userActivityForBookingInApplication=_userActivityForBookingInApplication - In the implementation block
@property (assign,nonatomic) BOOL hasUsesMeteredFare; 
@property (assign,nonatomic) BOOL usesMeteredFare;                                                 //@synthesize usesMeteredFare=_usesMeteredFare - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)availablePartySizeOptionsType;
+(Class)fareLineItemsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasName;
-(BOOL)hasPriceRange;
-(_INPBPriceRangeValue *)priceRange;
-(void)setPriceRange:(_INPBPriceRangeValue *)arg1 ;
-(NSMutableArray *)availablePartySizeOptions;
-(_INPBTimestamp *)estimatedPickupDate;
-(void)setEstimatedPickupDate:(_INPBTimestamp *)arg1 ;
-(NSString *)specialPricing;
-(void)setSpecialPricing:(NSString *)arg1 ;
-(_INPBImageValue *)specialPricingBadgeImage;
-(_INPBUserActivity *)userActivityForBookingInApplication;
-(void)setDisclaimerMessage:(NSString *)arg1 ;
-(void)setAvailablePartySizeOptions:(NSMutableArray *)arg1 ;
-(void)setAvailablePartySizeOptionsSelectionPrompt:(NSString *)arg1 ;
-(void)setSpecialPricingBadgeImage:(_INPBImageValue *)arg1 ;
-(void)setFareLineItems:(NSMutableArray *)arg1 ;
-(void)setUserActivityForBookingInApplication:(_INPBUserActivity *)arg1 ;
-(void)setUsesMeteredFare:(BOOL)arg1 ;
-(NSString *)disclaimerMessage;
-(NSString *)availablePartySizeOptionsSelectionPrompt;
-(NSMutableArray *)fareLineItems;
-(BOOL)usesMeteredFare;
-(unsigned long long)availablePartySizeOptionsCount;
-(unsigned long long)fareLineItemsCount;
-(BOOL)hasUsesMeteredFare;
-(void)addAvailablePartySizeOptions:(id)arg1 ;
-(void)addFareLineItems:(id)arg1 ;
-(void)setHasUsesMeteredFare:(BOOL)arg1 ;
-(BOOL)hasEstimatedPickupDate;
-(BOOL)hasSubtitle;
-(BOOL)hasDisclaimerMessage;
-(void)clearAvailablePartySizeOptions;
-(id)availablePartySizeOptionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAvailablePartySizeOptionsSelectionPrompt;
-(BOOL)hasSpecialPricing;
-(BOOL)hasSpecialPricingBadgeImage;
-(void)clearFareLineItems;
-(id)fareLineItemsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasUserActivityForBookingInApplication;
@end

