/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServiceGap.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, GEOFormattedString, NSString;

@interface GEOTransitServiceGap : PBCodable <GEOServiceGap, NSCopying> {

	unsigned _absEndTime;
	unsigned _absStartTime;
	unsigned _appearsBeforeSuggestedRouteIndex;
	GEOFormattedString* _displayMessage;
	SCD_Struct_GE20 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long routeListInsertBeforeIndex; 
@property (nonatomic,readonly) id<GEOServerFormattedString> displayMessagFormatString; 
@property (assign,nonatomic) BOOL hasAppearsBeforeSuggestedRouteIndex; 
@property (assign,nonatomic) unsigned appearsBeforeSuggestedRouteIndex;                             //@synthesize appearsBeforeSuggestedRouteIndex=_appearsBeforeSuggestedRouteIndex - In the implementation block
@property (assign,nonatomic) BOOL hasAbsStartTime; 
@property (assign,nonatomic) unsigned absStartTime;                                                 //@synthesize absStartTime=_absStartTime - In the implementation block
@property (assign,nonatomic) BOOL hasAbsEndTime; 
@property (assign,nonatomic) unsigned absEndTime;                                                   //@synthesize absEndTime=_absEndTime - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayMessage; 
@property (nonatomic,retain) GEOFormattedString * displayMessage;                                   //@synthesize displayMessage=_displayMessage - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSDate *)startDate;
-(void)setAppearsBeforeSuggestedRouteIndex:(unsigned)arg1 ;
-(void)setHasAppearsBeforeSuggestedRouteIndex:(BOOL)arg1 ;
-(BOOL)hasAppearsBeforeSuggestedRouteIndex;
-(void)setAbsStartTime:(unsigned)arg1 ;
-(void)setHasAbsStartTime:(BOOL)arg1 ;
-(BOOL)hasAbsStartTime;
-(void)setAbsEndTime:(unsigned)arg1 ;
-(void)setHasAbsEndTime:(BOOL)arg1 ;
-(BOOL)hasAbsEndTime;
-(BOOL)hasDisplayMessage;
-(unsigned)appearsBeforeSuggestedRouteIndex;
-(unsigned)absStartTime;
-(unsigned)absEndTime;
-(GEOFormattedString *)displayMessage;
-(void)setDisplayMessage:(GEOFormattedString *)arg1 ;
-(NSDate *)endDate;
-(unsigned long long)routeListInsertBeforeIndex;
-(id<GEOServerFormattedString>)displayMessagFormatString;
@end

