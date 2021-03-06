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

@class PBUnknownFields, _INPBString, _INPBIntentMetadata, NSMutableArray;

@interface _INPBOpenFileIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBString* _appId;
	_INPBString* _entityName;
	int _entityType;
	_INPBIntentMetadata* _intentMetadata;
	NSMutableArray* _properties;
	int _scope;
	_INPBString* _scopeEntityName;
	SCD_Struct_IN3 _has;

}

@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;              //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasEntityType; 
@property (assign,nonatomic) int entityType;                                    //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityName; 
@property (nonatomic,retain) _INPBString * entityName;                          //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) BOOL hasAppId; 
@property (nonatomic,retain) _INPBString * appId;                               //@synthesize appId=_appId - In the implementation block
@property (nonatomic,retain) NSMutableArray * properties;                       //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) BOOL hasScope; 
@property (assign,nonatomic) int scope;                                         //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) BOOL hasScopeEntityName; 
@property (nonatomic,retain) _INPBString * scopeEntityName;                     //@synthesize scopeEntityName=_scopeEntityName - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)propertiesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScope:(int)arg1 ;
-(int)scope;
-(id)dictionaryRepresentation;
-(void)setProperties:(NSMutableArray *)arg1 ;
-(NSMutableArray *)properties;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasAppId;
-(_INPBString *)appId;
-(void)setAppId:(_INPBString *)arg1 ;
-(void)addProperties:(id)arg1 ;
-(unsigned long long)propertiesCount;
-(void)clearProperties;
-(id)propertiesAtIndex:(unsigned long long)arg1 ;
-(int)entityType;
-(_INPBString *)entityName;
-(void)setEntityType:(int)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(void)setHasEntityType:(BOOL)arg1 ;
-(BOOL)hasEntityType;
-(void)setEntityName:(_INPBString *)arg1 ;
-(void)setScopeEntityName:(_INPBString *)arg1 ;
-(BOOL)hasEntityName;
-(void)setHasScope:(BOOL)arg1 ;
-(BOOL)hasScope;
-(BOOL)hasScopeEntityName;
-(_INPBString *)scopeEntityName;
@end

