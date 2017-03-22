/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLLocationManagerDelegate;
#import <CoreLocation/CoreLocation-Structs.h>
@class NSString, NSMutableSet;

@interface CLLocationManagerInternal : NSObject {

	CLClientRef fClient;
	id<CLLocationManagerDelegate> fDelegate;
	double fDistanceFilter;
	double fDesiredAccuracy;
	BOOL fUpdatingLocation;
	SCD_Struct_CL2 fLocation;
	NSString* fLocationEventType;
	BOOL fRequestingLocation;
	CFRunLoopTimerRef fLocationRequestTimer;
	double fLocationRequestTimeout;
	BOOL fRequestingRanging;
	BOOL fUpdatingRanging;
	CFRunLoopTimerRef fRangingRequestTimer;
	double fRangingRequestTimeout;
	BOOL fCapabilitiesValid;
	SCD_Struct_CL4 fCapabilities;
	BOOL fUpdatingHeading;
	double fHeadingFilter;
	int fHeadingOrientation;
	BOOL fPersistentMonitoringEnabled;
	BOOL fAllowsLocationPrompts;
	BOOL fAllowsAlteredAccessoryLocations;
	BOOL fDynamicAccuracyReductionEnabled;
	BOOL fPreviousAuthorizationStatusValid;
	int fPreviousAuthorizationStatus;
	long long fActivityType;
	int fPausesLocationUpdatesAutomatically;
	BOOL fPaused;
	BOOL fAllowsBackgroundLocationUpdates;
	BOOL fAllowsMapCorrection;
	BOOL fBatchingLocation;
	BOOL fUpdatingVehicleSpeed;
	BOOL fUpdatingVehicleHeading;
	BOOL fMatchInfoEnabled;
	BOOL fCourtesyPromptNeeded;
	NSMutableSet* fRangedRegions;

}

@property (nonatomic,readonly) NSMutableSet * rangedRegions; 
-(void)dealloc;
-(id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3 ;
-(void)setPausesLocationUpdatesAutomatically:(int)arg1 ;
-(int)PausesLocationUpdatesAutomatically;
-(void)setAllowsBackgroundLocationUpdates:(BOOL)arg1 ;
-(BOOL)allowsBackgroundLocationUpdates;
-(void)stopUpdatingLocationAutoPaused;
-(void)cancelLocationRequest;
-(void)cancelRangingRequest;
-(void)performCourtesyPromptIfNeeded;
-(NSMutableSet *)rangedRegions;
@end

