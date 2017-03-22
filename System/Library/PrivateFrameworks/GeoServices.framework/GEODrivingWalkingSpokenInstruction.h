/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOFormattedString, NSMutableArray;

@interface GEODrivingWalkingSpokenInstruction : PBCodable <NSCopying> {

	GEOFormattedString* _continueStage;
	NSMutableArray* _executionStages;
	GEOFormattedString* _initialStage;
	GEOFormattedString* _preparationStage;
	GEOFormattedString* _proceedStage;
	unsigned _shortChainedInstructionIndex;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,readonly) BOOL hasProceedStage; 
@property (nonatomic,retain) GEOFormattedString * proceedStage;                  //@synthesize proceedStage=_proceedStage - In the implementation block
@property (nonatomic,readonly) BOOL hasContinueStage; 
@property (nonatomic,retain) GEOFormattedString * continueStage;                 //@synthesize continueStage=_continueStage - In the implementation block
@property (nonatomic,readonly) BOOL hasInitialStage; 
@property (nonatomic,retain) GEOFormattedString * initialStage;                  //@synthesize initialStage=_initialStage - In the implementation block
@property (nonatomic,readonly) BOOL hasPreparationStage; 
@property (nonatomic,retain) GEOFormattedString * preparationStage;              //@synthesize preparationStage=_preparationStage - In the implementation block
@property (nonatomic,retain) NSMutableArray * executionStages;                   //@synthesize executionStages=_executionStages - In the implementation block
@property (assign,nonatomic) BOOL hasShortChainedInstructionIndex; 
@property (assign,nonatomic) unsigned shortChainedInstructionIndex;              //@synthesize shortChainedInstructionIndex=_shortChainedInstructionIndex - In the implementation block
+(Class)executionStageType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasProceedStage;
-(BOOL)hasContinueStage;
-(BOOL)hasInitialStage;
-(BOOL)hasPreparationStage;
-(void)clearExecutionStages;
-(void)addExecutionStage:(id)arg1 ;
-(unsigned long long)executionStagesCount;
-(id)executionStageAtIndex:(unsigned long long)arg1 ;
-(void)setShortChainedInstructionIndex:(unsigned)arg1 ;
-(void)setHasShortChainedInstructionIndex:(BOOL)arg1 ;
-(BOOL)hasShortChainedInstructionIndex;
-(GEOFormattedString *)proceedStage;
-(void)setProceedStage:(GEOFormattedString *)arg1 ;
-(GEOFormattedString *)continueStage;
-(void)setContinueStage:(GEOFormattedString *)arg1 ;
-(GEOFormattedString *)initialStage;
-(void)setInitialStage:(GEOFormattedString *)arg1 ;
-(GEOFormattedString *)preparationStage;
-(void)setPreparationStage:(GEOFormattedString *)arg1 ;
-(NSMutableArray *)executionStages;
-(void)setExecutionStages:(NSMutableArray *)arg1 ;
-(unsigned)shortChainedInstructionIndex;
@end

