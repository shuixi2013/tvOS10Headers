/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNGuidanceManagerDelegate.h>
#import <libobjc.A.dylib/MNLocationManagerHeadingObserver.h>
#import <libobjc.A.dylib/MNLocationManagerObserver.h>
#import <libobjc.A.dylib/MNLocationTrackerDelegate.h>
#import <libobjc.A.dylib/MNNavigationAudioSessionDelegate.h>
#import <libobjc.A.dylib/MNTimeAndDistanceUpdaterDelegate.h>
#import <libobjc.A.dylib/MNTracePlayerObserver.h>
#import <libobjc.A.dylib/MNVoiceControllerObserver.h>

@class MNRouteManager, GEOComposedWaypoint, MNLocationTracker, GEOMotionContext, MNNavigationAudioSession, MNGuidanceManager, MNTimeAndDistanceUpdater, NSString, MNNavigationTraceManager, MNGuidanceEventRecorder, MNTrafficIncidentAlert, GEONavigationGuidanceState, MNObserverHashTable, GEORouteAttributes, MNLocation;

@interface MNNavigationSession : NSObject <MNGuidanceManagerDelegate, MNLocationManagerHeadingObserver, MNLocationManagerObserver, MNLocationTrackerDelegate, MNNavigationAudioSessionDelegate, MNTimeAndDistanceUpdaterDelegate, MNTracePlayerObserver, MNVoiceControllerObserver> {

	int _navigationType;
	MNRouteManager* _routeManager;
	GEOComposedWaypoint* _destination;
	MNLocationTracker* _locationTracker;
	GEOMotionContext* _motionContext;
	MNNavigationAudioSession* _audioSession;
	MNGuidanceManager* _guidanceManager;
	MNTimeAndDistanceUpdater* _timeAndDistanceUpdater;
	NSString* _voiceLanguage;
	MNNavigationTraceManager* _traceManager;
	MNGuidanceEventRecorder* _guidanceEventRecorder;
	MNTrafficIncidentAlert* _activeTrafficIncidentAlert;
	BOOL _guidancePromptsEnabled;
	BOOL _isConnectedToCarplay;
	BOOL _isSpeakingTrafficIncidentAlert;
	GEONavigationGuidanceState* _guidanceState;
	MNObserverHashTable* _observers;
	NSString* _tileLoaderClient;
	BOOL _isAllowedToSwitchTransportTypes;

}

@property (nonatomic,readonly) GEOComposedWaypoint * destination;                    //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) GEORouteAttributes * routeAttributes; 
@property (nonatomic,readonly) MNRouteManager * routeManager;                        //@synthesize routeManager=_routeManager - In the implementation block
@property (nonatomic,readonly) MNGuidanceManager * guidanceManager;                  //@synthesize guidanceManager=_guidanceManager - In the implementation block
@property (nonatomic,readonly) GEOMotionContext * motionContext;                     //@synthesize motionContext=_motionContext - In the implementation block
@property (nonatomic,readonly) MNNavigationTraceManager * traceManager;              //@synthesize traceManager=_traceManager - In the implementation block
@property (nonatomic,readonly) BOOL isAllowedToSwitchTransportTypes;                 //@synthesize isAllowedToSwitchTransportTypes=_isAllowedToSwitchTransportTypes - In the implementation block
@property (nonatomic,readonly) int navigationType;                                   //@synthesize navigationType=_navigationType - In the implementation block
@property (nonatomic,readonly) MNLocation * lastMatchedLocation; 
@property (nonatomic,readonly) int navigationState; 
@property (nonatomic,readonly) double remainingTime; 
@property (nonatomic,readonly) double remainingDistance; 
@property (nonatomic,readonly) double distanceToManeuverStart; 
@property (nonatomic,readonly) double distanceToManeuverEnd; 
@property (assign,nonatomic) BOOL guidancePromptsEnabled;                            //@synthesize guidancePromptsEnabled=_guidancePromptsEnabled - In the implementation block
@property (assign,nonatomic) BOOL isConnectedToCarplay;                              //@synthesize isConnectedToCarplay=_isConnectedToCarplay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(GEOComposedWaypoint *)destination;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(BOOL)guidancePromptsEnabled;
-(double)distanceToManeuverStart;
-(double)distanceToManeuverEnd;
-(double)remainingTime;
-(int)navigationState;
-(GEORouteAttributes *)routeAttributes;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(BOOL)isConnectedToCarplay;
-(GEOMotionContext *)motionContext;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(int)navigationType;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerUpdatedHeading:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)_startLocationUpdates;
-(void)_stopLocationUpdates;
-(MNLocation *)lastMatchedLocation;
-(BOOL)repeatCurrentGuidance;
-(BOOL)repeatCurrentTrafficAlert;
-(void)updateDestination:(id)arg1 ;
-(void)resumeOriginalDestination;
-(void)stopCurrentGuidancePrompt;
-(void)tracePlayerDidStart:(id)arg1 ;
-(void)tracePlayerDidStop:(id)arg1 ;
-(void)tracePlayerDidPause:(id)arg1 ;
-(void)tracePlayerDidResume:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2 ;
-(void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 location:(id)arg3 ;
-(void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2 ;
-(void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 destination:(id)arg4 ;
-(void)tracePlayerDidStayOnRoute:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2 ;
-(void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2 ;
-(void)tracePlayerDidPauseLocationUpdates:(id)arg1 ;
-(void)tracePlayerDidResumeLocationUpdates:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4 ;
-(void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(BOOL)vibrateForPrompt:(unsigned long long)arg1 ;
-(void)guidanceManager:(id)arg1 updatePointOfInterest:(SCD_Struct_MN3)arg2 focusStyle:(int)arg3 ;
-(void)guidanceManagerProceedingToRoute:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4 ;
-(void)guidanceManagerDidUpdateProgress:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilSign:(double)arg3 timeUntilSign:(double)arg4 ;
-(void)guidanceManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8 ;
-(void)guidanceManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 ;
-(void)guidanceManagerHideSecondaryStep:(id)arg1 ;
-(void)guidanceManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3 ;
-(void)guidanceManager:(id)arg1 announce:(id)arg2 shortPromptType:(unsigned long long)arg3 stage:(unsigned long long)arg4 hasSecondaryManeuver:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)guidanceManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2 ;
-(BOOL)guidanceManagerIsOffRoute:(id)arg1 location:(id)arg2 stepIndex:(unsigned long long)arg3 ;
-(void)guidanceManagerHasArrived:(id)arg1 announce:(id)arg2 ;
-(void)_setVolumeFromDefaults;
-(double)remainingDistance;
-(void)voiceController:(id)arg1 didActivateAudioSession:(BOOL)arg2 ;
-(void)voiceController:(id)arg1 didStartSpeakingPrompt:(id)arg2 ;
-(void)timeAndDistanceUpdater:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3 ;
-(void)timeAndDistanceUpdater:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4 ;
-(void)audioSessionWillAnnounceArrival:(id)arg1 ;
-(void)audioSessionDidFinishAnnouncingArrival:(id)arg1 ;
-(void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)locationTracker:(id)arg1 ignoredLocation:(id)arg2 ;
-(void)locationTracker:(id)arg1 didChangeState:(int)arg2 ;
-(void)locationTracker:(id)arg1 failedWithErrorCode:(long long)arg2 ;
-(void)locationTracker:(id)arg1 startingStepIndex:(unsigned long long)arg2 ;
-(void)locationTrackerDidArrive:(id)arg1 ;
-(void)locationTrackerDetectedNewTransportType:(id)arg1 newTransportType:(int)arg2 ;
-(void)locationTracker:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 ;
-(void)locationTracker:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 closestStepIndex:(unsigned long long)arg6 ;
-(void)locationTracker:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3 ;
-(void)locationTracker:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilSign:(double)arg3 timeUntilManeuver:(double)arg4 ;
-(void)locationTracker:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(GEOJunctionElement*)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shieldType:(int)arg7 shieldText:(id)arg8 drivingSide:(int)arg9 maneuverStepIndex:(unsigned long long)arg10 isSynthetic:(BOOL)arg11 ;
-(void)locationTracker:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2 ;
-(void)locationTracker:(id)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(GEOJunctionElement*)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shieldType:(int)arg7 shieldText:(id)arg8 drivingSide:(int)arg9 ;
-(void)locationTrackerHideSecondaryStep:(id)arg1 ;
-(void)locationTracker:(id)arg1 didEnableGuidance:(BOOL)arg2 ;
-(void)locationTracker:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2 ;
-(void)locationTracker:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3 ;
-(void)locationTracker:(id)arg1 updatePointOfInterest:(SCD_Struct_MN3)arg2 focusStyle:(int)arg3 ;
-(void)locationTrackerWillReroute:(id)arg1 ;
-(void)locationTrackerDidCancelReroute:(id)arg1 ;
-(void)locationTracker:(id)arg1 didReroute:(id)arg2 rerouteReason:(unsigned long long)arg3 request:(id)arg4 response:(id)arg5 ;
-(void)locationTracker:(id)arg1 failedRerouteWithErrorCode:(long long)arg2 ;
-(void)locationTracker:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 request:(id)arg4 response:(id)arg5 ;
-(void)locationTracker:(id)arg1 receivedTrafficIncidentAlert:(id)arg2 responseCallback:(/*^block*/id)arg3 ;
-(void)locationTracker:(id)arg1 invalidatedTrafficIncidentAlert:(id)arg2 ;
-(void)locationTracker:(id)arg1 updatedTrafficIncidentAlert:(id)arg2 ;
-(void)locationTrackerWillPause:(id)arg1 ;
-(void)locationTrackerWillResumeFromPause:(id)arg1 ;
-(void)locationTracker:(id)arg1 didUpdateETA:(id)arg2 forRoute:(id)arg3 ;
-(void)locationTracker:(id)arg1 didUpdateTrafficForETARoute:(id)arg2 from:(unsigned)arg3 to:(unsigned)arg4 ;
-(id)initWithRouteManager:(id)arg1 traceManager:(id)arg2 ;
-(void)startNavigationSessionWithDetails:(id)arg1 guidanceLevel:(int)arg2 ;
-(void)stopNavigationSession;
-(void)_openTileLoader;
-(void)_closeTileLoader;
-(id)_locationTrackerForTransportType:(int)arg1 navigationType:(int)arg2 ;
-(void)_startLocationTracking;
-(void)_stopLocationTracking;
-(void)_startMotionUpdates;
-(void)_stopMotionUpdates;
-(void)_startETAUpdates;
-(void)_stopETAUpdates;
-(void)_startAudioSession;
-(void)_stopAudioSession;
-(void)_startGuidanceAllowMidRouteStart:(BOOL)arg1 ;
-(void)_stopGuidance;
-(void)_startTravelTimeUpdates;
-(void)_stopTravelTimeUpdates;
-(void)_announceArrival:(id)arg1 ;
-(void)_announceStart;
-(MNRouteManager *)routeManager;
-(MNGuidanceManager *)guidanceManager;
-(MNNavigationTraceManager *)traceManager;
-(BOOL)isAllowedToSwitchTransportTypes;
@end

