/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNNavigationServiceDaemonInterface <NSObject>
@property (assign,nonatomic) int headingOrientation; 
@property (assign,nonatomic) BOOL guidancePromptsEnabled; 
@required
-(void)setGuidancePromptsEnabled:(BOOL)arg1;
-(BOOL)guidancePromptsEnabled;
-(void)setDisplayedStepIndex:(unsigned long long)arg1;
-(void)setIsConnectedToCarplay:(BOOL)arg1;
-(void)setHeadingOrientation:(int)arg1;
-(int)headingOrientation;
-(void)setCurrentAudioOutputSetting:(id)arg1;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2;
-(void)prepareNavigationWithRouteDetails:(id)arg1;
-(void)startNavigationForRouteDetails:(id)arg1 handler:(/*^block*/id)arg2;
-(void)stopNavigation;
-(void)updateDestination:(id)arg1;
-(void)resumeOriginalDestination;
-(void)changeSettings:(id)arg1;
-(void)repeatCurrentGuidanceWithReply:(/*^block*/id)arg1;
-(void)repeatCurrentTrafficAlertWithReply:(/*^block*/id)arg1;
-(void)vibrateForPrompt:(unsigned long long)arg1 withReply:(/*^block*/id)arg2;
-(void)stopCurrentGuidancePrompt;
-(void)pauseGuidanceLevelUpdates;
-(void)resumeGuidanceLevelUpdates;
-(void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
-(void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlertDetails:(id)arg2;
-(void)setTraceIsPlaying:(BOOL)arg1;
-(void)setTracePlaybackSpeed:(double)arg1;
-(void)setTracePosition:(double)arg1;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;

@end

