/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXPineBoardServer.framework/AXPineBoardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXSystemAppServer <NSObject>
@required
+(id)server;
-(long long)activeInterfaceOrientation;
-(BOOL)isSiriVisible;
-(BOOL)isAppSwitcherVisible;
-(BOOL)isScreenSaverVisible;
-(BOOL)isNowPlayingUIVisible;
-(BOOL)isReceivingAirPlay;
-(BOOL)isSoftwareUpdateUIVisible;
-(BOOL)isSideSwitcherVisible;
-(void)pid:(/*^block*/id)arg1;
-(void)activeInterfaceOrientation:(/*^block*/id)arg1;
-(BOOL)openSiri;
-(BOOL)dismissSiri;
-(BOOL)isNotificationCenterVisible;
-(BOOL)isControlCenterVisible;
-(BOOL)isNotificationVisible;
-(BOOL)isSiriTalkingOrListening;
-(BOOL)isMediaPlaying;
-(void)wakeUpDeviceIfNecessary;
-(int)pid;

@end

