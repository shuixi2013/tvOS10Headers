/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNLocationTrackerDelegate;
@class MNLocation, MNNavigationSession;

@interface MNLocationTracker : NSObject {

	id<MNLocationTrackerDelegate> _delegate;
	int _state;
	MNLocation* _lastMatchedLocation;
	MNNavigationSession* _navigationSession;

}

@property (assign,nonatomic) BOOL guidancePromptsEnabled; 
@property (nonatomic,readonly) MNNavigationSession * navigationSession;                  //@synthesize navigationSession=_navigationSession - In the implementation block
@property (assign,setter=_setState:,nonatomic) int state;                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<MNLocationTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) MNLocation * lastMatchedLocation;                         //@synthesize lastMatchedLocation=_lastMatchedLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasArrived; 
@property (nonatomic,readonly) BOOL shouldProjectAlongRoute; 
-(void)setDelegate:(id<MNLocationTrackerDelegate>)arg1 ;
-(id<MNLocationTrackerDelegate>)delegate;
-(int)state;
-(void)resume;
-(void)_setState:(int)arg1 ;
-(BOOL)paused;
-(void)pause;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(BOOL)guidancePromptsEnabled;
-(void)stopTracking;
-(int)transportType;
-(BOOL)hasArrived;
-(id)initWithNavigationSession:(id)arg1 ;
-(void)startTrackingWithGuidanceEnabled:(BOOL)arg1 midRoute:(BOOL)arg2 ;
-(BOOL)shouldProjectAlongRoute;
-(void)startTracking;
-(void)updateDestination:(id)arg1 finishedHandler:(/*^block*/id)arg2 ;
-(void)reroute:(id)arg1 reason:(unsigned long long)arg2 ;
-(id)matchedLocationForLocation:(id)arg1 ;
-(void)_switchedToStepAtIndex:(unsigned long long)arg1 ;
-(void)updateLocation:(id)arg1 ;
-(void)updateVehicleSpeed:(double)arg1 timestamp:(id)arg2 ;
-(void)updateVehicleHeading:(double)arg1 timestamp:(id)arg2 ;
-(BOOL)shouldAllowPause;
-(void)updateForTracePaused;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(void)_updateMatchedLocation:(id)arg1 ;
-(BOOL)_checkArrivalForLocation:(id)arg1 ;
-(MNLocation *)lastMatchedLocation;
-(MNNavigationSession *)navigationSession;
-(void)resetForTracePlayerAtLocation:(id)arg1 ;
-(void)traceForcedRerouteWithResponse:(id)arg1 request:(id)arg2 ;
-(void)traceForcedActiveTransportTypeChange:(int)arg1 ;
-(void)setVoiceGuidanceEnabled:(BOOL)arg1 ;
-(BOOL)repeatCurrentGuidance;
-(BOOL)repeatCurrentTrafficAlert;
-(id)routeRepresentation;
@end

