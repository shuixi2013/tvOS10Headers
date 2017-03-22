/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDCoreRoutineTransitionMotionType;

@interface AWDCoreRoutineModelTransitionInstance : PBCodable <NSCopying> {

	unsigned _distance;
	unsigned _duration;
	AWDCoreRoutineTransitionMotionType* _transitionHistogram;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                                     //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitionHistogram; 
@property (nonatomic,retain) AWDCoreRoutineTransitionMotionType * transitionHistogram;              //@synthesize transitionHistogram=_transitionHistogram - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setDistance:(unsigned)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(unsigned)distance;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setTransitionHistogram:(AWDCoreRoutineTransitionMotionType *)arg1 ;
-(BOOL)hasTransitionHistogram;
-(AWDCoreRoutineTransitionMotionType *)transitionHistogram;
@end
