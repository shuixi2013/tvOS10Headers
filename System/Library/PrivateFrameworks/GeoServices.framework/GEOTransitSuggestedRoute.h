/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTransitRouteDisplayStrings, NSData, NSMutableArray, GEOPBTransitRoutingIncidentMessage;

@interface GEOTransitSuggestedRoute : PBCodable <NSCopying> {

	SCD_Struct_GE1* _routeBadges;
	unsigned _absEndTime;
	unsigned _absStartTime;
	GEOTransitRouteDisplayStrings* _displayStrings;
	unsigned _rank;
	NSData* _routeHandle;
	NSMutableArray* _routePlanningArtworks;
	NSMutableArray* _sectionOptions;
	NSMutableArray* _sections;
	NSMutableArray* _steps;
	GEOPBTransitRoutingIncidentMessage* _transitIncidentMessage;
	unsigned _travelTimeAggressiveEstimate;
	unsigned _travelTimeConservativeEstimate;
	SCD_Struct_GE94 _has;

}

@property (getter=isWalkingOnlyRoute,nonatomic,readonly) BOOL walkingOnlyRoute; 
@property (assign,nonatomic) BOOL hasAbsStartTime; 
@property (assign,nonatomic) unsigned absStartTime;                                                    //@synthesize absStartTime=_absStartTime - In the implementation block
@property (assign,nonatomic) BOOL hasAbsEndTime; 
@property (assign,nonatomic) unsigned absEndTime;                                                      //@synthesize absEndTime=_absEndTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * steps;                                                   //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteHandle; 
@property (nonatomic,retain) NSData * routeHandle;                                                     //@synthesize routeHandle=_routeHandle - In the implementation block
@property (assign,nonatomic) BOOL hasRank; 
@property (assign,nonatomic) unsigned rank;                                                            //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitIncidentMessage; 
@property (nonatomic,retain) GEOPBTransitRoutingIncidentMessage * transitIncidentMessage;              //@synthesize transitIncidentMessage=_transitIncidentMessage - In the implementation block
@property (nonatomic,retain) NSMutableArray * routePlanningArtworks;                                   //@synthesize routePlanningArtworks=_routePlanningArtworks - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayStrings; 
@property (nonatomic,retain) GEOTransitRouteDisplayStrings * displayStrings;                           //@synthesize displayStrings=_displayStrings - In the implementation block
@property (nonatomic,readonly) unsigned long long routeBadgesCount; 
@property (nonatomic,readonly) int* routeBadges; 
@property (nonatomic,retain) NSMutableArray * sectionOptions;                                          //@synthesize sectionOptions=_sectionOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;                                                //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL hasTravelTimeAggressiveEstimate; 
@property (assign,nonatomic) unsigned travelTimeAggressiveEstimate;                                    //@synthesize travelTimeAggressiveEstimate=_travelTimeAggressiveEstimate - In the implementation block
@property (assign,nonatomic) BOOL hasTravelTimeConservativeEstimate; 
@property (assign,nonatomic) unsigned travelTimeConservativeEstimate;                                  //@synthesize travelTimeConservativeEstimate=_travelTimeConservativeEstimate - In the implementation block
+(Class)stepsType;
+(Class)routePlanningArtworkType;
+(Class)sectionOptionType;
+(Class)sectionType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sections;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearSections;
-(unsigned long long)sectionsCount;
-(BOOL)hasRouteHandle;
-(NSData *)routeHandle;
-(void)setRouteHandle:(NSData *)arg1 ;
-(BOOL)hasTransitIncidentMessage;
-(GEOPBTransitRoutingIncidentMessage *)transitIncidentMessage;
-(void)setTransitIncidentMessage:(GEOPBTransitRoutingIncidentMessage *)arg1 ;
-(void)clearSteps;
-(unsigned long long)stepsCount;
-(void)setTravelTimeAggressiveEstimate:(unsigned)arg1 ;
-(void)setHasTravelTimeAggressiveEstimate:(BOOL)arg1 ;
-(BOOL)hasTravelTimeAggressiveEstimate;
-(void)setTravelTimeConservativeEstimate:(unsigned)arg1 ;
-(void)setHasTravelTimeConservativeEstimate:(BOOL)arg1 ;
-(BOOL)hasTravelTimeConservativeEstimate;
-(NSMutableArray *)steps;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(unsigned)travelTimeAggressiveEstimate;
-(unsigned)travelTimeConservativeEstimate;
-(NSMutableArray *)routePlanningArtworks;
-(void)addSection:(id)arg1 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(void)setAbsStartTime:(unsigned)arg1 ;
-(void)setHasAbsStartTime:(BOOL)arg1 ;
-(BOOL)hasAbsStartTime;
-(void)setAbsEndTime:(unsigned)arg1 ;
-(void)setHasAbsEndTime:(BOOL)arg1 ;
-(BOOL)hasAbsEndTime;
-(unsigned)absStartTime;
-(unsigned)absEndTime;
-(BOOL)isWalkingOnlyRoute;
-(void)addSteps:(id)arg1 ;
-(id)stepsAtIndex:(unsigned long long)arg1 ;
-(void)setRank:(unsigned)arg1 ;
-(void)setHasRank:(BOOL)arg1 ;
-(BOOL)hasRank;
-(void)clearRoutePlanningArtworks;
-(void)addRoutePlanningArtwork:(id)arg1 ;
-(unsigned long long)routePlanningArtworksCount;
-(id)routePlanningArtworkAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDisplayStrings;
-(unsigned long long)routeBadgesCount;
-(int*)routeBadges;
-(void)clearRouteBadges;
-(void)addRouteBadge:(int)arg1 ;
-(int)routeBadgeAtIndex:(unsigned long long)arg1 ;
-(void)setRouteBadges:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)routeBadgesAsString:(int)arg1 ;
-(int)StringAsRouteBadges:(id)arg1 ;
-(void)clearSectionOptions;
-(void)addSectionOption:(id)arg1 ;
-(unsigned long long)sectionOptionsCount;
-(id)sectionOptionAtIndex:(unsigned long long)arg1 ;
-(unsigned)rank;
-(void)setRoutePlanningArtworks:(NSMutableArray *)arg1 ;
-(GEOTransitRouteDisplayStrings *)displayStrings;
-(void)setDisplayStrings:(GEOTransitRouteDisplayStrings *)arg1 ;
-(NSMutableArray *)sectionOptions;
-(void)setSectionOptions:(NSMutableArray *)arg1 ;
@end

