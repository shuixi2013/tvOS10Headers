/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineFMCDailyAssessment : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _assistances;
	int _assistedParkingEvents;
	int _duration;
	int _engagedParkingEvents;
	int _engagements;
	int _locationType;
	int _parkingEvents;
	int _suppressedParkingEvents;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) int duration;                                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasParkingEvents; 
@property (assign,nonatomic) int parkingEvents;                            //@synthesize parkingEvents=_parkingEvents - In the implementation block
@property (assign,nonatomic) BOOL hasEngagedParkingEvents; 
@property (assign,nonatomic) int engagedParkingEvents;                     //@synthesize engagedParkingEvents=_engagedParkingEvents - In the implementation block
@property (assign,nonatomic) BOOL hasAssistedParkingEvents; 
@property (assign,nonatomic) int assistedParkingEvents;                    //@synthesize assistedParkingEvents=_assistedParkingEvents - In the implementation block
@property (assign,nonatomic) BOOL hasEngagements; 
@property (assign,nonatomic) int engagements;                              //@synthesize engagements=_engagements - In the implementation block
@property (assign,nonatomic) BOOL hasAssistances; 
@property (assign,nonatomic) int assistances;                              //@synthesize assistances=_assistances - In the implementation block
@property (assign,nonatomic) BOOL hasSuppressedParkingEvents; 
@property (assign,nonatomic) int suppressedParkingEvents;                  //@synthesize suppressedParkingEvents=_suppressedParkingEvents - In the implementation block
@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) int locationType;                             //@synthesize locationType=_locationType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(int)duration;
-(void)setDuration:(int)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(int)locationType;
-(void)setLocationType:(int)arg1 ;
-(void)setHasLocationType:(BOOL)arg1 ;
-(BOOL)hasLocationType;
-(void)setParkingEvents:(int)arg1 ;
-(void)setHasParkingEvents:(BOOL)arg1 ;
-(BOOL)hasParkingEvents;
-(void)setEngagedParkingEvents:(int)arg1 ;
-(void)setHasEngagedParkingEvents:(BOOL)arg1 ;
-(BOOL)hasEngagedParkingEvents;
-(void)setAssistedParkingEvents:(int)arg1 ;
-(void)setHasAssistedParkingEvents:(BOOL)arg1 ;
-(BOOL)hasAssistedParkingEvents;
-(void)setEngagements:(int)arg1 ;
-(void)setHasEngagements:(BOOL)arg1 ;
-(BOOL)hasEngagements;
-(void)setAssistances:(int)arg1 ;
-(void)setHasAssistances:(BOOL)arg1 ;
-(BOOL)hasAssistances;
-(void)setSuppressedParkingEvents:(int)arg1 ;
-(void)setHasSuppressedParkingEvents:(BOOL)arg1 ;
-(BOOL)hasSuppressedParkingEvents;
-(int)parkingEvents;
-(int)engagedParkingEvents;
-(int)assistedParkingEvents;
-(int)engagements;
-(int)assistances;
-(int)suppressedParkingEvents;
@end

