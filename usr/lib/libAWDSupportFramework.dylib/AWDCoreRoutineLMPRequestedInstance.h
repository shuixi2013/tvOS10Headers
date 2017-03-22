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

@class NSString;

@interface AWDCoreRoutineLMPRequestedInstance : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _confidence;
	NSString* _eventId;
	int _occurrences;
	int _reason;
	BOOL _suggested;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasEventId; 
@property (nonatomic,retain) NSString * eventId;                        //@synthesize eventId=_eventId - In the implementation block
@property (assign,nonatomic) BOOL hasSuggested; 
@property (assign,nonatomic) BOOL suggested;                            //@synthesize suggested=_suggested - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) int confidence;                            //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) BOOL hasOccurrences; 
@property (assign,nonatomic) int occurrences;                           //@synthesize occurrences=_occurrences - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                                //@synthesize reason=_reason - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)reason;
-(int)confidence;
-(void)setConfidence:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(void)setHasReason:(BOOL)arg1 ;
-(BOOL)hasReason;
-(void)setEventId:(NSString *)arg1 ;
-(BOOL)hasEventId;
-(NSString *)eventId;
-(void)setSuggested:(BOOL)arg1 ;
-(void)setHasSuggested:(BOOL)arg1 ;
-(BOOL)hasSuggested;
-(void)setOccurrences:(int)arg1 ;
-(void)setHasOccurrences:(BOOL)arg1 ;
-(BOOL)hasOccurrences;
-(BOOL)suggested;
-(int)occurrences;
-(void)setReason:(int)arg1 ;
@end

