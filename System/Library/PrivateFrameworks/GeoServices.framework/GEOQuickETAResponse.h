/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOLocation, NSString, GEOQuickETATransitDeparturesInfo, NSMutableArray;

@interface GEOQuickETAResponse : NSObject {

	GEOLocation* _sourceLocation;
	GEOLocation* _destinationLocation;
	unsigned _responseETASeconds;
	unsigned _baselineETASeconds;
	double _distance;
	NSString* _routeDescription;
	GEOQuickETATransitDeparturesInfo* _transitDeparturesInfo;
	double _distanceToDepartureStop;
	double _walkingDurationToDepartureStop;
	NSMutableArray* _sortedETAs;

}

@property (nonatomic,readonly) GEOLocation * sourceLocation;                                          //@synthesize sourceLocation=_sourceLocation - In the implementation block
@property (nonatomic,readonly) GEOLocation * destinationLocation;                                     //@synthesize destinationLocation=_destinationLocation - In the implementation block
@property (nonatomic,readonly) unsigned responseETASeconds;                                           //@synthesize responseETASeconds=_responseETASeconds - In the implementation block
@property (nonatomic,readonly) unsigned baselineETASeconds;                                           //@synthesize baselineETASeconds=_baselineETASeconds - In the implementation block
@property (nonatomic,readonly) double distance;                                                       //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) NSString * routeDescription;                                           //@synthesize routeDescription=_routeDescription - In the implementation block
@property (nonatomic,readonly) GEOQuickETATransitDeparturesInfo * transitDeparturesInfo;              //@synthesize transitDeparturesInfo=_transitDeparturesInfo - In the implementation block
@property (nonatomic,readonly) double distanceToDepartureStop;                                        //@synthesize distanceToDepartureStop=_distanceToDepartureStop - In the implementation block
@property (nonatomic,readonly) double walkingDurationToDepartureStop;                                 //@synthesize walkingDurationToDepartureStop=_walkingDurationToDepartureStop - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sortedETAs;                                           //@synthesize sortedETAs=_sortedETAs - In the implementation block
-(void)dealloc;
-(GEOLocation *)destinationLocation;
-(double)distance;
-(NSMutableArray *)sortedETAs;
-(id)initWithDirectionsResponse:(id)arg1 fromRequest:(id)arg2 ;
-(id)initWithETAResult:(id)arg1 fromRequest:(id)arg2 ;
-(GEOLocation *)sourceLocation;
-(unsigned)responseETASeconds;
-(unsigned)baselineETASeconds;
-(NSString *)routeDescription;
-(GEOQuickETATransitDeparturesInfo *)transitDeparturesInfo;
-(double)distanceToDepartureStop;
-(double)walkingDurationToDepartureStop;
@end

