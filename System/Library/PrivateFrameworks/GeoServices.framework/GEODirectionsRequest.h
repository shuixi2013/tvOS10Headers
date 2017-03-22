/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOCommonOptions, GEOMapRegion, GEOLocation, GEODirectionsRequestFeedback, NSString, NSData, GEOOriginalRoute, GEORouteAttributes, NSMutableArray, GEOTFTrafficSnapshot;

@interface GEODirectionsRequest : PBRequest <NSCopying> {

	GEOSessionID _sessionID;
	unsigned long long _maxDecoderVersion;
	unsigned long long _maxGraphVersion;
	double _requestTime;
	unsigned long long _sharedLibraryVersion;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOClientCapabilities* _clientCapabilities;
	GEOCommonOptions* _commonOptions;
	GEOMapRegion* _currentMapRegion;
	GEOLocation* _currentUserLocation;
	int _departureTime;
	GEODirectionsRequestFeedback* _feedback;
	GEOLocation* _lastKnownRoadLocation;
	NSString* _loggedAbExperiment;
	unsigned _mainTransportTypeMaxRouteCount;
	NSData* _originalDirectionsResponseID;
	GEOOriginalRoute* _originalRoute;
	NSData* _originalRouteID;
	int _originalRoutePurpose;
	NSData* _originalRouteZilchPoints;
	GEORouteAttributes* _routeAttributes;
	unsigned _sequenceNumber;
	NSMutableArray* _serviceTags;
	NSData* _sessionState;
	unsigned _timeSinceLastRerouteRequest;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	NSMutableArray* _waypointTypeds;
	BOOL _getRouteForZilchPoints;
	BOOL _isFromAPI;
	BOOL _needLatency;
	BOOL _useLiveTrafficAsFallback;
	SCD_Struct_GE80 _has;

}

@property (assign,nonatomic) BOOL hasNeedLatency; 
@property (assign,nonatomic) BOOL needLatency; 
@property (nonatomic,readonly) BOOL hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) BOOL hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL useLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL hasRequestTime; 
@property (assign,nonatomic) double requestTime; 
@property (nonatomic,readonly) BOOL hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                                //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (assign,nonatomic) BOOL hasMainTransportTypeMaxRouteCount; 
@property (assign,nonatomic) unsigned mainTransportTypeMaxRouteCount;                             //@synthesize mainTransportTypeMaxRouteCount=_mainTransportTypeMaxRouteCount - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation;                                   //@synthesize currentUserLocation=_currentUserLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentMapRegion; 
@property (nonatomic,retain) GEOMapRegion * currentMapRegion;                                     //@synthesize currentMapRegion=_currentMapRegion - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalRouteID; 
@property (nonatomic,retain) NSData * originalRouteID;                                            //@synthesize originalRouteID=_originalRouteID - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalRouteZilchPoints; 
@property (nonatomic,retain) NSData * originalRouteZilchPoints;                                   //@synthesize originalRouteZilchPoints=_originalRouteZilchPoints - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceLastRerouteRequest; 
@property (assign,nonatomic) unsigned timeSinceLastRerouteRequest;                                //@synthesize timeSinceLastRerouteRequest=_timeSinceLastRerouteRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities;                          //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalDirectionsResponseID; 
@property (nonatomic,retain) NSData * originalDirectionsResponseID;                               //@synthesize originalDirectionsResponseID=_originalDirectionsResponseID - In the implementation block
@property (assign,nonatomic) BOOL hasDepartureTime; 
@property (assign,nonatomic) int departureTime;                                                   //@synthesize departureTime=_departureTime - In the implementation block
@property (assign,nonatomic) BOOL hasGetRouteForZilchPoints; 
@property (assign,nonatomic) BOOL getRouteForZilchPoints;                                         //@synthesize getRouteForZilchPoints=_getRouteForZilchPoints - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID;                                              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedback; 
@property (nonatomic,retain) GEODirectionsRequestFeedback * feedback;                             //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets;              //@synthesize additionalEnabledMarkets=_additionalEnabledMarkets - In the implementation block
@property (nonatomic,retain) NSMutableArray * waypointTypeds;                                     //@synthesize waypointTypeds=_waypointTypeds - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalRoute; 
@property (nonatomic,retain) GEOOriginalRoute * originalRoute;                                    //@synthesize originalRoute=_originalRoute - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber;                                             //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState;                                               //@synthesize sessionState=_sessionState - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromAPI; 
@property (assign,nonatomic) BOOL isFromAPI;                                                      //@synthesize isFromAPI=_isFromAPI - In the implementation block
@property (nonatomic,readonly) BOOL hasCommonOptions; 
@property (nonatomic,retain) GEOCommonOptions * commonOptions;                                    //@synthesize commonOptions=_commonOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasLoggedAbExperiment; 
@property (nonatomic,retain) NSString * loggedAbExperiment;                                       //@synthesize loggedAbExperiment=_loggedAbExperiment - In the implementation block
@property (nonatomic,readonly) BOOL hasLastKnownRoadLocation; 
@property (nonatomic,retain) GEOLocation * lastKnownRoadLocation;                                 //@synthesize lastKnownRoadLocation=_lastKnownRoadLocation - In the implementation block
@property (assign,nonatomic) BOOL hasOriginalRoutePurpose; 
@property (assign,nonatomic) int originalRoutePurpose;                                            //@synthesize originalRoutePurpose=_originalRoutePurpose - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                                        //@synthesize serviceTags=_serviceTags - In the implementation block
@property (assign,nonatomic) BOOL hasMaxDecoderVersion; 
@property (assign,nonatomic) unsigned long long maxDecoderVersion;                                //@synthesize maxDecoderVersion=_maxDecoderVersion - In the implementation block
@property (assign,nonatomic) BOOL hasMaxGraphVersion; 
@property (assign,nonatomic) unsigned long long maxGraphVersion;                                  //@synthesize maxGraphVersion=_maxGraphVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSharedLibraryVersion; 
@property (assign,nonatomic) unsigned long long sharedLibraryVersion;                             //@synthesize sharedLibraryVersion=_sharedLibraryVersion - In the implementation block
+(Class)waypointTypedType;
+(Class)serviceTagType;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(GEOSessionID)sessionID;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(int)originalRoutePurpose;
-(void)setOriginalRoutePurpose:(int)arg1 ;
-(void)setHasOriginalRoutePurpose:(BOOL)arg1 ;
-(BOOL)hasOriginalRoutePurpose;
-(id)originalRoutePurposeAsString:(int)arg1 ;
-(int)StringAsOriginalRoutePurpose:(id)arg1 ;
-(BOOL)hasOriginalDirectionsResponseID;
-(NSData *)originalDirectionsResponseID;
-(void)setOriginalDirectionsResponseID:(NSData *)arg1 ;
-(BOOL)hasRouteAttributes;
-(unsigned)mainTransportTypeMaxRouteCount;
-(void)setMainTransportTypeMaxRouteCount:(unsigned)arg1 ;
-(void)setHasMainTransportTypeMaxRouteCount:(BOOL)arg1 ;
-(BOOL)hasMainTransportTypeMaxRouteCount;
-(BOOL)hasCurrentUserLocation;
-(BOOL)hasCurrentMapRegion;
-(BOOL)hasOriginalRouteID;
-(BOOL)hasOriginalRouteZilchPoints;
-(unsigned)timeSinceLastRerouteRequest;
-(void)setTimeSinceLastRerouteRequest:(unsigned)arg1 ;
-(void)setHasTimeSinceLastRerouteRequest:(BOOL)arg1 ;
-(BOOL)hasTimeSinceLastRerouteRequest;
-(BOOL)hasClientCapabilities;
-(void)setDepartureTime:(int)arg1 ;
-(void)setHasDepartureTime:(BOOL)arg1 ;
-(BOOL)hasDepartureTime;
-(BOOL)getRouteForZilchPoints;
-(void)setGetRouteForZilchPoints:(BOOL)arg1 ;
-(void)setHasGetRouteForZilchPoints:(BOOL)arg1 ;
-(BOOL)hasGetRouteForZilchPoints;
-(BOOL)hasFeedback;
-(BOOL)hasAdditionalEnabledMarkets;
-(void)clearWaypointTypeds;
-(void)addWaypointTyped:(id)arg1 ;
-(unsigned long long)waypointTypedsCount;
-(id)waypointTypedAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOriginalRoute;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(BOOL)hasSessionState;
-(void)setIsFromAPI:(BOOL)arg1 ;
-(void)setHasIsFromAPI:(BOOL)arg1 ;
-(BOOL)hasIsFromAPI;
-(BOOL)hasCommonOptions;
-(BOOL)hasLoggedAbExperiment;
-(BOOL)hasLastKnownRoadLocation;
-(void)clearServiceTags;
-(void)addServiceTag:(id)arg1 ;
-(unsigned long long)serviceTagsCount;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(void)setMaxDecoderVersion:(unsigned long long)arg1 ;
-(void)setHasMaxDecoderVersion:(BOOL)arg1 ;
-(BOOL)hasMaxDecoderVersion;
-(void)setMaxGraphVersion:(unsigned long long)arg1 ;
-(void)setHasMaxGraphVersion:(BOOL)arg1 ;
-(BOOL)hasMaxGraphVersion;
-(void)setSharedLibraryVersion:(unsigned long long)arg1 ;
-(void)setHasSharedLibraryVersion:(BOOL)arg1 ;
-(BOOL)hasSharedLibraryVersion;
-(GEORouteAttributes *)routeAttributes;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(GEOLocation *)currentUserLocation;
-(void)setCurrentUserLocation:(GEOLocation *)arg1 ;
-(GEOMapRegion *)currentMapRegion;
-(void)setCurrentMapRegion:(GEOMapRegion *)arg1 ;
-(NSData *)originalRouteID;
-(void)setOriginalRouteID:(NSData *)arg1 ;
-(NSData *)originalRouteZilchPoints;
-(void)setOriginalRouteZilchPoints:(NSData *)arg1 ;
-(GEOClientCapabilities *)clientCapabilities;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(int)departureTime;
-(GEODirectionsRequestFeedback *)feedback;
-(void)setFeedback:(GEODirectionsRequestFeedback *)arg1 ;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(NSMutableArray *)waypointTypeds;
-(void)setWaypointTypeds:(NSMutableArray *)arg1 ;
-(GEOOriginalRoute *)originalRoute;
-(void)setOriginalRoute:(GEOOriginalRoute *)arg1 ;
-(unsigned)sequenceNumber;
-(NSData *)sessionState;
-(void)setSessionState:(NSData *)arg1 ;
-(BOOL)isFromAPI;
-(GEOCommonOptions *)commonOptions;
-(void)setCommonOptions:(GEOCommonOptions *)arg1 ;
-(NSString *)loggedAbExperiment;
-(void)setLoggedAbExperiment:(NSString *)arg1 ;
-(GEOLocation *)lastKnownRoadLocation;
-(void)setLastKnownRoadLocation:(GEOLocation *)arg1 ;
-(NSMutableArray *)serviceTags;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(unsigned long long)maxDecoderVersion;
-(unsigned long long)maxGraphVersion;
-(unsigned long long)sharedLibraryVersion;
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(BOOL)needLatency;
-(void)setNeedLatency:(BOOL)arg1 ;
-(void)setHasNeedLatency:(BOOL)arg1 ;
-(BOOL)hasNeedLatency;
-(BOOL)hasTrafficSnapshot;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(BOOL)useLiveTrafficAsFallback;
-(void)setUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(void)setHasUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(BOOL)hasUseLiveTrafficAsFallback;
-(double)requestTime;
-(void)setRequestTime:(double)arg1 ;
-(void)setHasRequestTime:(BOOL)arg1 ;
-(BOOL)hasRequestTime;
-(id)initWithFeedback:(id)arg1 ;
-(id)initWithQuickETARequest:(id)arg1 withFeedback:(id)arg2 ;
@end

