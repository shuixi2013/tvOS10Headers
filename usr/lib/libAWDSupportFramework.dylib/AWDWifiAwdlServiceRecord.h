/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDWifiAwdlServiceRecord : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned _opcode;
	unsigned _serviceId;
	NSData* _serviceKey;
	unsigned _type;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasOpcode; 
@property (assign,nonatomic) unsigned opcode;                          //@synthesize opcode=_opcode - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasServiceId; 
@property (assign,nonatomic) unsigned serviceId;                       //@synthesize serviceId=_serviceId - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceKey; 
@property (nonatomic,retain) NSData * serviceKey;                      //@synthesize serviceKey=_serviceKey - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setServiceKey:(NSData *)arg1 ;
-(void)setOpcode:(unsigned)arg1 ;
-(void)setHasOpcode:(BOOL)arg1 ;
-(BOOL)hasOpcode;
-(void)setServiceId:(unsigned)arg1 ;
-(void)setHasServiceId:(BOOL)arg1 ;
-(BOOL)hasServiceId;
-(BOOL)hasServiceKey;
-(unsigned)opcode;
-(unsigned)serviceId;
-(NSData *)serviceKey;
@end

