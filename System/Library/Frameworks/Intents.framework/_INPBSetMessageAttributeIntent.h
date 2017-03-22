/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, _INPBIntentMetadata;

@interface _INPBSetMessageAttributeIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _attribute;
	NSMutableArray* _identifiers;
	_INPBIntentMetadata* _intentMetadata;
	SCD_Struct_IN1 _has;

}

@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;              //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * identifiers;                      //@synthesize identifiers=_identifiers - In the implementation block
@property (assign,nonatomic) BOOL hasAttribute; 
@property (assign,nonatomic) int attribute;                                     //@synthesize attribute=_attribute - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)identifierType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setAttribute:(int)arg1 ;
-(void)setIdentifiers:(NSMutableArray *)arg1 ;
-(id)identifierAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)identifiers;
-(int)attribute;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(BOOL)hasAttribute;
-(void)clearIdentifiers;
-(void)addIdentifier:(id)arg1 ;
-(void)setHasAttribute:(BOOL)arg1 ;
-(unsigned long long)identifiersCount;
@end

