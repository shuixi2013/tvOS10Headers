/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateMapViewLocation : PBCodable <NSCopying> {

	int _locationBucket;
	BOOL _isCurrentLocationInViewport;
	SCD_Struct_GE45 _has;

}

@property (assign,nonatomic) BOOL hasLocationBucket; 
@property (assign,nonatomic) int locationBucket;                               //@synthesize locationBucket=_locationBucket - In the implementation block
@property (assign,nonatomic) BOOL hasIsCurrentLocationInViewport; 
@property (assign,nonatomic) BOOL isCurrentLocationInViewport;                 //@synthesize isCurrentLocationInViewport=_isCurrentLocationInViewport - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)locationBucket;
-(void)setLocationBucket:(int)arg1 ;
-(void)setHasLocationBucket:(BOOL)arg1 ;
-(BOOL)hasLocationBucket;
-(id)locationBucketAsString:(int)arg1 ;
-(int)StringAsLocationBucket:(id)arg1 ;
-(void)setIsCurrentLocationInViewport:(BOOL)arg1 ;
-(void)setHasIsCurrentLocationInViewport:(BOOL)arg1 ;
-(BOOL)hasIsCurrentLocationInViewport;
-(BOOL)isCurrentLocationInViewport;
@end

