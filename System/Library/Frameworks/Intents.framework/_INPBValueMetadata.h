/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface _INPBValueMetadata : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_IN2* _requiredEntitlements;
	NSString* _canonicalValue;
	NSString* _input;
	NSString* _source;
	NSString* _uuid;
	BOOL _confirmed;
	SCD_Struct_IN1 _has;

}

@property (nonatomic,readonly) BOOL hasCanonicalValue; 
@property (nonatomic,retain) NSString * canonicalValue;                                   //@synthesize canonicalValue=_canonicalValue - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSString * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasConfirmed; 
@property (assign,nonatomic) BOOL confirmed;                                              //@synthesize confirmed=_confirmed - In the implementation block
@property (nonatomic,readonly) BOOL hasInput; 
@property (nonatomic,retain) NSString * input;                                            //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) NSString * source;                                           //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) unsigned long long requiredEntitlementsCount; 
@property (nonatomic,readonly) int* requiredEntitlements; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)input;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)source;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasSource;
-(BOOL)confirmed;
-(BOOL)hasUuid;
-(void)setConfirmed:(BOOL)arg1 ;
-(void)addRequiredEntitlement:(int)arg1 ;
-(void)setHasConfirmed:(BOOL)arg1 ;
-(BOOL)hasConfirmed;
-(void)clearRequiredEntitlements;
-(void)setRequiredEntitlements:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setCanonicalValue:(NSString *)arg1 ;
-(unsigned long long)requiredEntitlementsCount;
-(int)requiredEntitlementAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCanonicalValue;
-(BOOL)hasInput;
-(int*)requiredEntitlements;
-(NSString *)canonicalValue;
-(void)setInput:(NSString *)arg1 ;
@end

