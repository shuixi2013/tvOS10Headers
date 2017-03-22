/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEONavigationServerObserverXPCInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface GEONavigationListener : NSObject <GEONavigationServerObserverXPCInterface> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _routeSummaryUpdatedHandler;
	/*^block*/id _transitSummaryUpdatedHandler;
	/*^block*/id _guidanceStateUpdatedHandler;
	/*^block*/id _activeRouteDetailsDataUpdatedHandler;
	/*^block*/id _stepIndexUpdatedHandler;
	/*^block*/id _rideSelectionsUpdatedHandler;
	int _navigationStartedToken;
	int _navigationStoppedToken;

}

@property (nonatomic,copy) id routeSummaryUpdatedHandler;                        //@synthesize routeSummaryUpdatedHandler=_routeSummaryUpdatedHandler - In the implementation block
@property (nonatomic,copy) id transitSummaryUpdatedHandler;                      //@synthesize transitSummaryUpdatedHandler=_transitSummaryUpdatedHandler - In the implementation block
@property (nonatomic,copy) id guidanceStateUpdatedHandler;                       //@synthesize guidanceStateUpdatedHandler=_guidanceStateUpdatedHandler - In the implementation block
@property (nonatomic,copy) id activeRouteDetailsDataUpdatedHandler;              //@synthesize activeRouteDetailsDataUpdatedHandler=_activeRouteDetailsDataUpdatedHandler - In the implementation block
@property (nonatomic,copy) id stepIndexUpdatedHandler;                           //@synthesize stepIndexUpdatedHandler=_stepIndexUpdatedHandler - In the implementation block
@property (nonatomic,copy) id rideSelectionsUpdatedHandler;                      //@synthesize rideSelectionsUpdatedHandler=_rideSelectionsUpdatedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)arg1 ;
-(void)routeSummaryUpdatedWithTransitSummaryData:(id)arg1 ;
-(void)routeSummaryUpdatedWithGuidanceStateData:(id)arg1 ;
-(void)routeSummaryUpdatedWithActiveRouteDetailsData:(id)arg1 ;
-(void)routeSummaryUpdatedWithStepIndexData:(id)arg1 ;
-(void)routeSummaryUpdatedWithRideSelectionData:(id)arg1 ;
-(void)requestRouteSummary;
-(void)requestTransitSummary;
-(void)requestGuidanceState;
-(void)requestActiveRouteDetailsData;
-(void)requestStepIndex;
-(void)requestRideSelections;
-(void)_open;
-(void)_close;
-(void)_connectToDaemonIfNeeded;
-(id)routeSummaryUpdatedHandler;
-(void)setRouteSummaryUpdatedHandler:(id)arg1 ;
-(id)transitSummaryUpdatedHandler;
-(void)setTransitSummaryUpdatedHandler:(id)arg1 ;
-(id)guidanceStateUpdatedHandler;
-(void)setGuidanceStateUpdatedHandler:(id)arg1 ;
-(id)activeRouteDetailsDataUpdatedHandler;
-(void)setActiveRouteDetailsDataUpdatedHandler:(id)arg1 ;
-(id)stepIndexUpdatedHandler;
-(void)setStepIndexUpdatedHandler:(id)arg1 ;
-(id)rideSelectionsUpdatedHandler;
-(void)setRideSelectionsUpdatedHandler:(id)arg1 ;
@end

