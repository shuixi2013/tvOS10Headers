/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSProcessInternal <FBSProcessIdentity>
@required
-(void)_watchdogStarted:(id)arg1;
-(void)_watchdogStopped:(id)arg1;
-(BOOL)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id*)arg2;
-(id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;
-(void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;

@end

