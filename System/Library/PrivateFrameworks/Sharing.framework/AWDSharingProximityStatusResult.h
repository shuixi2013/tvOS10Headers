/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSharingProximityStatusResult : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _dismissType;
	int _rssi;
	NSString* _sessionUUID;
	int _smoothedRSSI;
	unsigned _visibleMs;
	SCD_Struct_AW18 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                    //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                                  //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasSmoothedRSSI; 
@property (assign,nonatomic) int smoothedRSSI;                          //@synthesize smoothedRSSI=_smoothedRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasDismissType; 
@property (assign,nonatomic) unsigned dismissType;                      //@synthesize dismissType=_dismissType - In the implementation block
@property (assign,nonatomic) BOOL hasVisibleMs; 
@property (assign,nonatomic) unsigned visibleMs;                        //@synthesize visibleMs=_visibleMs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setRssi:(int)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(int)rssi;
-(void)setSessionUUID:(NSString *)arg1 ;
-(BOOL)hasSessionUUID;
-(NSString *)sessionUUID;
-(void)setSmoothedRSSI:(int)arg1 ;
-(void)setHasSmoothedRSSI:(BOOL)arg1 ;
-(BOOL)hasSmoothedRSSI;
-(int)smoothedRSSI;
-(void)setDismissType:(unsigned)arg1 ;
-(void)setHasDismissType:(BOOL)arg1 ;
-(BOOL)hasDismissType;
-(void)setVisibleMs:(unsigned)arg1 ;
-(void)setHasVisibleMs:(BOOL)arg1 ;
-(BOOL)hasVisibleMs;
-(unsigned)dismissType;
-(unsigned)visibleMs;
@end

