/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServerFormatTokenTimeStampValue.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSTimeZone, NSString;

@interface GEOTimestampData : PBCodable <GEOServerFormatTokenTimeStampValue, NSCopying> {

	unsigned _timestampVal;
	NSString* _timezone;
	BOOL _displayTimezone;
	SCD_Struct_GE45 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double timeStamp; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) BOOL displayTimeZone; 
@property (assign,nonatomic) BOOL hasTimestampVal; 
@property (assign,nonatomic) unsigned timestampVal;                 //@synthesize timestampVal=_timestampVal - In the implementation block
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) NSString * timezone;                   //@synthesize timezone=_timezone - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayTimezone; 
@property (assign,nonatomic) BOOL displayTimezone;                  //@synthesize displayTimezone=_displayTimezone - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSTimeZone *)timeZone;
-(double)timeStamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasTimezone;
-(NSString *)timezone;
-(void)setTimezone:(NSString *)arg1 ;
-(void)setTimestampVal:(unsigned)arg1 ;
-(void)setHasTimestampVal:(BOOL)arg1 ;
-(BOOL)hasTimestampVal;
-(void)setDisplayTimezone:(BOOL)arg1 ;
-(void)setHasDisplayTimezone:(BOOL)arg1 ;
-(BOOL)hasDisplayTimezone;
-(unsigned)timestampVal;
-(BOOL)displayTimezone;
-(BOOL)displayTimeZone;
@end

