/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEORouteManagerDelegate;
@interface GEORouteManager : NSObject {

	id<GEORouteManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GEORouteManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)setShouldRequestServerLatencyInfo:(BOOL)arg1 ;
-(void)setDelegate:(id<GEORouteManagerDelegate>)arg1 ;
-(id<GEORouteManagerDelegate>)delegate;
-(void)handleResponse:(id)arg1 routeSet:(id)arg2 forTicket:(id)arg3 ;
-(void)handleError:(id)arg1 directionsError:(id)arg2 forTicket:(id)arg3 ;
-(void)addedRoutesToRouteSet:(id)arg1 ;
-(void)fetchDirectionsForTicket:(id)arg1 routeSet:(id)arg2 networkActivity:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

