/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSData, GEOMapRegion, GEORoute;

@interface GEORouteBuilder : NSObject {

	BOOL _usesZilch;
	NSMutableArray* _steps;
	NSMutableArray* _legs;
	NSData* _pointsData;
	NSMutableArray* _pointSections;
	GEOMapRegion* _boundingMapRegion;
	GEORoute* _route;

}
-(void)dealloc;
-(id)initWithRoute:(id)arg1 ;
-(void)buildRoute:(id)arg1 ;
-(id)_composedRouteStepForStep:(id)arg1 route:(id)arg2 ;
-(id)_composedRouteLegForSteps:(id)arg1 route:(id)arg2 ;
-(void)_buildPointSectionsForRoute:(id)arg1 ;
@end

