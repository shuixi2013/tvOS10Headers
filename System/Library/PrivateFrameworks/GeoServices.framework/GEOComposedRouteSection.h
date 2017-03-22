/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRouteLeg, GEOComposedRouteStep;

@interface GEOComposedRouteSection : NSObject {

	unsigned _startPointIndex;
	unsigned _pointCount;
	SCD_Struct_GE47* _points;
	int _transportType;
	GEOComposedRouteLeg* _composedRouteLeg;
	GEOComposedRouteStep* _composedRouteStep;
	unsigned long long _composedRouteLegIndex;
	SCD_Struct_GE49 _bounds;
	SCD_Struct_GE49 _overlayBounds;
	unsigned long long _finalStepIndex;
	double _startDistance;
	double _lengthScaleFactor;

}

@property (nonatomic,readonly) unsigned startPointIndex;                              //@synthesize startPointIndex=_startPointIndex - In the implementation block
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount;                                   //@synthesize pointCount=_pointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE47* points;                               //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE49 bounds;                                //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteLeg * composedRouteLeg;                //@synthesize composedRouteLeg=_composedRouteLeg - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteStep * composedRouteStep;              //@synthesize composedRouteStep=_composedRouteStep - In the implementation block
@property (nonatomic,readonly) unsigned long long composedRouteLegIndex;              //@synthesize composedRouteLegIndex=_composedRouteLegIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long finalStepIndex;                     //@synthesize finalStepIndex=_finalStepIndex - In the implementation block
@property (nonatomic,readonly) double startDistance;                                  //@synthesize startDistance=_startDistance - In the implementation block
@property (assign,nonatomic) double lengthScaleFactor;                                //@synthesize lengthScaleFactor=_lengthScaleFactor - In the implementation block
@property (nonatomic,readonly) int transportType;                                     //@synthesize transportType=_transportType - In the implementation block
-(SCD_Struct_GE49)bounds;
-(void)dealloc;
-(id)description;
-(int)transportType;
-(unsigned)pointCount;
-(SCD_Struct_GE47*)points;
-(id)initWithRoute:(id)arg1 startPoint:(unsigned)arg2 pointCount:(unsigned)arg3 bounds:(SCD_Struct_GE49)arg4 transportType:(int)arg5 finalStepIndex:(unsigned long long)arg6 startDistance:(double)arg7 lengthScaleFactor:(double)arg8 ;
-(id)initWithRoute:(id)arg1 startPoint:(unsigned)arg2 pointCount:(unsigned)arg3 transportType:(int)arg4 finalStepIndex:(unsigned long long)arg5 fallbackStartCoordinate:(SCD_Struct_GE26)arg6 fallbackEndCoordinate:(SCD_Struct_GE26)arg7 startDistance:(double)arg8 lengthScaleFactor:(double)arg9 ;
-(void)_initStepForRoute:(id)arg1 ;
-(unsigned)endPointIndex;
-(BOOL)isTransfer;
-(unsigned)startPointIndex;
-(GEOComposedRouteLeg *)composedRouteLeg;
-(GEOComposedRouteStep *)composedRouteStep;
-(unsigned long long)composedRouteLegIndex;
-(unsigned long long)finalStepIndex;
-(double)startDistance;
-(double)lengthScaleFactor;
-(void)setLengthScaleFactor:(double)arg1 ;
@end

