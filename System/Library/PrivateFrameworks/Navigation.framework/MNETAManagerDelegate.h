/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNETAManagerDelegate <NSObject>
@required
-(void)etaManagerUpdatedETATime:(id)arg1;
-(void)etaManager:(id)arg1 willSendETARequest:(id)arg2;
-(void)etaManager:(id)arg1 receivedETAResponse:(id)arg2;
-(void)etaManager:(id)arg1 failedToReceiveETAResponse:(id)arg2;
-(void)etaManager:(id)arg1 updatedIncidentsForRoute:(id)arg2 etaRoute:(id)arg3 incidentsOffset:(unsigned)arg4;
-(void)etaManagerUpdatedTrafficIncidents:(id)arg1;
-(void)etaManager:(id)arg1 receivedTrafficIncidentAlert:(id)arg2;
-(void)etaManager:(id)arg1 updatedTrafficForETARoute:(id)arg2 from:(unsigned)arg3 to:(unsigned)arg4;

@end

