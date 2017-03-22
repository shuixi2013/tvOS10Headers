/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgEventTimeToLeaveInitialTravelTime : PBCodable <NSCopying> {

	int _travelTime;
	SCD_Struct_GE15 _has;

}

@property (assign,nonatomic) BOOL hasTravelTime; 
@property (assign,nonatomic) int travelTime;                  //@synthesize travelTime=_travelTime - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTravelTime:(int)arg1 ;
-(void)setHasTravelTime:(BOOL)arg1 ;
-(BOOL)hasTravelTime;
-(int)travelTime;
-(id)travelTimeAsString:(int)arg1 ;
-(int)StringAsTravelTime:(id)arg1 ;
@end

