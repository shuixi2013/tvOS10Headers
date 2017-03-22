/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HAPMetadataCharacteristic, HMDHAPMetadataCharacteristicValue;

@interface HMDHAPMetadataCharacteristic : NSObject <NSSecureCoding> {

	HAPMetadataCharacteristic* _hapCharacteristicMetadata;
	HMDHAPMetadataCharacteristicValue* _valueMetadata;

}

@property (nonatomic,retain) HAPMetadataCharacteristic * hapCharacteristicMetadata;              //@synthesize hapCharacteristicMetadata=_hapCharacteristicMetadata - In the implementation block
@property (nonatomic,retain) HMDHAPMetadataCharacteristicValue * valueMetadata;                  //@synthesize valueMetadata=_valueMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setHapCharacteristicMetadata:(HAPMetadataCharacteristic *)arg1 ;
-(HMDHAPMetadataCharacteristicValue *)valueMetadata;
-(void)setValueMetadata:(HMDHAPMetadataCharacteristicValue *)arg1 ;
-(id)initWithHAPCharacteristic:(id)arg1 ;
-(HAPMetadataCharacteristic *)hapCharacteristicMetadata;
@end

