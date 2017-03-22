/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNLocationProviderDelegate <NSObject>
@required
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
-(void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
-(void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
-(void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
-(BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1;
-(void)locationProviderDidPauseLocationUpdates:(id)arg1;
-(void)locationProviderDidResumeLocationUpdates:(id)arg1;
-(void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
-(void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;

@end

