/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute, NSArray, GEOPBTransitStop;

@interface GEOComposedRouteLeg : NSObject {

	GEOComposedRoute* _composedRoute;
	long long _type;
	NSRange _pointRange;
	NSRange _stepRange;

}

@property (assign,nonatomic) GEOComposedRoute * composedRoute;                       //@synthesize composedRoute=_composedRoute - In the implementation block
@property (nonatomic,readonly) long long type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) NSRange pointRange;                                   //@synthesize pointRange=_pointRange - In the implementation block
@property (nonatomic,readonly) NSRange stepRange;                                    //@synthesize stepRange=_stepRange - In the implementation block
@property (nonatomic,readonly) NSRange transitStepRange; 
@property (nonatomic,readonly) unsigned startPointIndex; 
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) unsigned long long startStepIndex; 
@property (nonatomic,readonly) unsigned long long endStepIndex; 
@property (nonatomic,readonly) unsigned long long stepCount; 
@property (nonatomic,readonly) NSArray * steps; 
@property (nonatomic,readonly) double expectedTime; 
@property (nonatomic,readonly) unsigned long long numberOfTransitStops; 
@property (nonatomic,readonly) GEOPBTransitStop * startingTransitStop; 
@property (nonatomic,readonly) GEOPBTransitStop * endingTransitStop; 
@property (nonatomic,readonly) NSArray * enterTransitAccessPoints; 
@property (nonatomic,readonly) NSArray * exitTransitAccessPoints; 
-(id)description;
-(long long)type;
-(GEOPBTransitStop *)startingTransitStop;
-(GEOPBTransitStop *)endingTransitStop;
-(NSArray *)enterTransitAccessPoints;
-(NSArray *)exitTransitAccessPoints;
-(NSRange)transitStepRange;
-(int)transportType;
-(NSArray *)steps;
-(double)expectedTime;
-(unsigned long long)numberOfTransitStops;
-(unsigned)pointCount;
-(unsigned)endPointIndex;
-(unsigned)startPointIndex;
-(id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepRange:(NSRange)arg3 pointRange:(NSRange)arg4 ;
-(unsigned long long)startStepIndex;
-(unsigned long long)endStepIndex;
-(unsigned long long)stepCount;
-(BOOL)contains:(id)arg1 ;
-(double)remainingDistanceAlongLegFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(double)remainingTimeAlongLegFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(NSRange)stepRange;
-(NSRange)pointRange;
-(GEOComposedRoute *)composedRoute;
-(void)setComposedRoute:(GEOComposedRoute *)arg1 ;
@end

