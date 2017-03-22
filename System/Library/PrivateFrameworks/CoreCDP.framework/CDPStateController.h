/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDP/CDPController.h>

@interface CDPStateController : CDPController
-(void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleURLActionWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldPerformRepair:(id*)arg1 ;
-(void)handleURLActionWithInfo:(id)arg1 ;
-(void)handleCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)setStingrayState:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishOfflineLocalSecretChangeWithCompletion:(/*^block*/id)arg1 ;
-(void)getStringrayStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)repairCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)preflightStingrayDisableWithCompletion:(/*^block*/id)arg1 ;
-(void)getStingrayDisableEligibilityWithCompletion:(/*^block*/id)arg1 ;
@end

