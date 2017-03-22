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

@class PBUnknownFields, _INPBDouble, _INPBIntentMetadata, _INPBDataString;

@interface _INPBStartWorkoutIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBDouble* _goalValue;
	_INPBIntentMetadata* _intentMetadata;
	int _workoutGoalUnitType;
	int _workoutLocationType;
	_INPBDataString* _workoutName;
	BOOL _isOpenEnded;
	SCD_Struct_IN4 _has;

}

@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;              //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasWorkoutName; 
@property (nonatomic,retain) _INPBDataString * workoutName;                     //@synthesize workoutName=_workoutName - In the implementation block
@property (nonatomic,readonly) BOOL hasGoalValue; 
@property (nonatomic,retain) _INPBDouble * goalValue;                           //@synthesize goalValue=_goalValue - In the implementation block
@property (assign,nonatomic) BOOL hasWorkoutGoalUnitType; 
@property (assign,nonatomic) int workoutGoalUnitType;                           //@synthesize workoutGoalUnitType=_workoutGoalUnitType - In the implementation block
@property (assign,nonatomic) BOOL hasWorkoutLocationType; 
@property (assign,nonatomic) int workoutLocationType;                           //@synthesize workoutLocationType=_workoutLocationType - In the implementation block
@property (assign,nonatomic) BOOL hasIsOpenEnded; 
@property (assign,nonatomic) BOOL isOpenEnded;                                  //@synthesize isOpenEnded=_isOpenEnded - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(_INPBDouble *)goalValue;
-(void)setGoalValue:(_INPBDouble *)arg1 ;
-(int)workoutGoalUnitType;
-(void)setWorkoutGoalUnitType:(int)arg1 ;
-(int)workoutLocationType;
-(void)setWorkoutLocationType:(int)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(void)setWorkoutName:(_INPBDataString *)arg1 ;
-(_INPBDataString *)workoutName;
-(BOOL)hasWorkoutName;
-(BOOL)hasGoalValue;
-(void)setHasWorkoutGoalUnitType:(BOOL)arg1 ;
-(BOOL)hasWorkoutGoalUnitType;
-(void)setHasWorkoutLocationType:(BOOL)arg1 ;
-(BOOL)hasWorkoutLocationType;
-(void)setIsOpenEnded:(BOOL)arg1 ;
-(void)setHasIsOpenEnded:(BOOL)arg1 ;
-(BOOL)hasIsOpenEnded;
-(BOOL)isOpenEnded;
@end

