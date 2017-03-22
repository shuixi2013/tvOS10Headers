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

@class PBUnknownFields, _INPBCondition, NSMutableArray;

@interface _INPBStringList : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBCondition* _conditionType;
	NSMutableArray* _dataStrings;

}

@property (nonatomic,retain) NSMutableArray * dataStrings;                   //@synthesize dataStrings=_dataStrings - In the implementation block
@property (nonatomic,readonly) BOOL hasConditionType; 
@property (nonatomic,retain) _INPBCondition * conditionType;                 //@synthesize conditionType=_conditionType - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)dataStringType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addDataString:(id)arg1 ;
-(void)setConditionType:(_INPBCondition *)arg1 ;
-(void)clearDataStrings;
-(unsigned long long)dataStringsCount;
-(id)dataStringAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasConditionType;
-(NSMutableArray *)dataStrings;
-(void)setDataStrings:(NSMutableArray *)arg1 ;
-(_INPBCondition *)conditionType;
@end

