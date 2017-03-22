/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEORouteHypothesizerUpdaterDelegate;
@class GEODirectionsRequestFeedback, GEOComposedWaypoint, GEODirectionsRequest, GEORouteAttributes, GEOCommonOptions, GEOLocation, GEOComposedRoute, GEORouteMatch, GEOMapRegion, NSMutableArray, NSDate, NSLock;

@interface GEORouteHypothesizerUpdater : NSObject <NSSecureCoding> {

	id<GEORouteHypothesizerUpdaterDelegate> _delegate;
	GEODirectionsRequestFeedback* _feedback;
	GEOComposedWaypoint* _source;
	GEOComposedWaypoint* _destination;
	GEODirectionsRequest* _currentRequest;
	GEORouteAttributes* _routeAttributes;
	GEOCommonOptions* _commonOptions;
	GEOLocation* _originLocation;
	GEOLocation* _lastMatchedLocation;
	GEOComposedRoute* _route;
	GEORouteMatch* _routeMatch;
	BOOL _isTraveling;
	BOOL _hasArrived;
	GEOMapRegion* _arrivalMapRegion;
	double _score;
	NSMutableArray* _rerouteEntries;
	BOOL _shouldThrottleReroutes;
	NSDate* _lastRerouteDate;
	unsigned long long _numThrottledReroutes;
	NSLock* _requestLock;
	BOOL _isNavd;

}

@property (assign,nonatomic,__weak) id<GEORouteHypothesizerUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GEODirectionsRequestFeedback * feedback;                              //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) GEORouteAttributes * routeAttributes;                               //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * route;                                           //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) GEORouteMatch * routeMatch;                                         //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,readonly) double score;                                                       //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) BOOL isTraveling;                                                   //@synthesize isTraveling=_isTraveling - In the implementation block
@property (nonatomic,readonly) BOOL hasArrived;                                                    //@synthesize hasArrived=_hasArrived - In the implementation block
@property (assign,nonatomic) BOOL isNavd;                                                          //@synthesize isNavd=_isNavd - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<GEORouteHypothesizerUpdaterDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id<GEORouteHypothesizerUpdaterDelegate>)delegate;
-(GEOComposedRoute *)route;
-(GEORouteMatch *)routeMatch;
-(int)_transportType;
-(GEORouteAttributes *)routeAttributes;
-(GEODirectionsRequestFeedback *)feedback;
-(void)setFeedback:(GEODirectionsRequestFeedback *)arg1 ;
-(double)score;
-(id)initWithSource:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3 ;
-(void)startUpdatingFromLocation:(id)arg1 existingRoute:(id)arg2 usualRouteData:(id)arg3 ;
-(void)updateForLocation:(id)arg1 ;
-(void)cancelCurrentRequest;
-(void)_requestNewRouteFromLocation:(id)arg1 usualRouteData:(id)arg2 ;
-(id)routeMatchForLocation:(id)arg1 ;
-(BOOL)_checkForArrival:(id)arg1 routeMatch:(id)arg2 ;
-(void)_updateScoreForLocation:(id)arg1 ;
-(BOOL)isTraveling;
-(BOOL)hasArrived;
-(BOOL)isNavd;
-(void)setIsNavd:(BOOL)arg1 ;
@end

