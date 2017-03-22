/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTrafficIncidentAlertUpdaterDelegate;
@class MNLocation, MNTrafficIncidentAlert, NSTimer;

@interface MNTrafficIncidentAlertUpdater : NSObject {

	id<MNTrafficIncidentAlertUpdaterDelegate> _delegate;
	MNLocation* _lastLocation;
	MNTrafficIncidentAlert* _pendingAlert;
	MNTrafficIncidentAlert* _activeAlert;
	BOOL _isSpeakingAlert;
	int _trafficIncidentStatus;
	NSTimer* _alertRetryTimer;

}

@property (assign,nonatomic,__weak) id<MNTrafficIncidentAlertUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<MNTrafficIncidentAlertUpdaterDelegate>)arg1 ;
-(void)dealloc;
-(id<MNTrafficIncidentAlertUpdaterDelegate>)delegate;
-(void)updateForLocation:(id)arg1 ;
-(void)updateForReroute:(id)arg1 ;
-(void)updateRerouteProposalStatusForRequest:(id)arg1 ;
-(void)updateForAlertFromResponse:(id)arg1 ;
-(void)clearAlerts;
-(void)_removeActiveAlert;
-(void)_updateAlertDistanceAndETA:(id)arg1 ;
-(void)_activateAlertForLocation:(id)arg1 ;
-(void)_alertRetryTimerFired:(id)arg1 ;
@end
