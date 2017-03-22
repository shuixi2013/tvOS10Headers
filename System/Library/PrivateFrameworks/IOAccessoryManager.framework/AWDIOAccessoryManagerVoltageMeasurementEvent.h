/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOAccessoryManager/IOAccessoryManager-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIOAccessoryManagerVoltageMeasurementEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _accOrientation;
	NSString* _accPowerMode;
	NSString* _digitalID;
	int _portID;
	int _vhi;
	int _voltageDN1;
	int _voltageDN2;
	int _voltageDP1;
	int _voltageDP2;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasDigitalID; 
@property (nonatomic,retain) NSString * digitalID;                      //@synthesize digitalID=_digitalID - In the implementation block
@property (assign,nonatomic) BOOL hasPortID; 
@property (assign,nonatomic) int portID;                                //@synthesize portID=_portID - In the implementation block
@property (assign,nonatomic) BOOL hasVoltageDP1; 
@property (assign,nonatomic) int voltageDP1;                            //@synthesize voltageDP1=_voltageDP1 - In the implementation block
@property (assign,nonatomic) BOOL hasVoltageDN1; 
@property (assign,nonatomic) int voltageDN1;                            //@synthesize voltageDN1=_voltageDN1 - In the implementation block
@property (assign,nonatomic) BOOL hasVoltageDP2; 
@property (assign,nonatomic) int voltageDP2;                            //@synthesize voltageDP2=_voltageDP2 - In the implementation block
@property (assign,nonatomic) BOOL hasVoltageDN2; 
@property (assign,nonatomic) int voltageDN2;                            //@synthesize voltageDN2=_voltageDN2 - In the implementation block
@property (nonatomic,readonly) BOOL hasAccPowerMode; 
@property (nonatomic,retain) NSString * accPowerMode;                   //@synthesize accPowerMode=_accPowerMode - In the implementation block
@property (assign,nonatomic) BOOL hasAccOrientation; 
@property (assign,nonatomic) int accOrientation;                        //@synthesize accOrientation=_accOrientation - In the implementation block
@property (assign,nonatomic) BOOL hasVhi; 
@property (assign,nonatomic) int vhi;                                   //@synthesize vhi=_vhi - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setDigitalID:(NSString *)arg1 ;
-(void)setAccPowerMode:(NSString *)arg1 ;
-(BOOL)hasDigitalID;
-(void)setPortID:(int)arg1 ;
-(void)setHasPortID:(BOOL)arg1 ;
-(BOOL)hasPortID;
-(void)setVoltageDP1:(int)arg1 ;
-(void)setHasVoltageDP1:(BOOL)arg1 ;
-(BOOL)hasVoltageDP1;
-(void)setVoltageDN1:(int)arg1 ;
-(void)setHasVoltageDN1:(BOOL)arg1 ;
-(BOOL)hasVoltageDN1;
-(void)setVoltageDP2:(int)arg1 ;
-(void)setHasVoltageDP2:(BOOL)arg1 ;
-(BOOL)hasVoltageDP2;
-(void)setVoltageDN2:(int)arg1 ;
-(void)setHasVoltageDN2:(BOOL)arg1 ;
-(BOOL)hasVoltageDN2;
-(BOOL)hasAccPowerMode;
-(void)setAccOrientation:(int)arg1 ;
-(void)setHasAccOrientation:(BOOL)arg1 ;
-(BOOL)hasAccOrientation;
-(NSString *)digitalID;
-(int)portID;
-(int)voltageDP1;
-(int)voltageDN1;
-(int)voltageDP2;
-(int)voltageDN2;
-(NSString *)accPowerMode;
-(int)accOrientation;
-(void)setVhi:(int)arg1 ;
-(void)setHasVhi:(BOOL)arg1 ;
-(BOOL)hasVhi;
-(int)vhi;
@end

