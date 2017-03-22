/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPlaceDataAmendment : PBCodable <NSCopying> {

	BOOL _suppressSiriRating;
	SCD_Struct_GE15 _has;

}

@property (assign,nonatomic) BOOL hasSuppressSiriRating; 
@property (assign,nonatomic) BOOL suppressSiriRating;                 //@synthesize suppressSiriRating=_suppressSiriRating - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSuppressSiriRating:(BOOL)arg1 ;
-(void)setHasSuppressSiriRating:(BOOL)arg1 ;
-(BOOL)hasSuppressSiriRating;
-(BOOL)suppressSiriRating;
@end
