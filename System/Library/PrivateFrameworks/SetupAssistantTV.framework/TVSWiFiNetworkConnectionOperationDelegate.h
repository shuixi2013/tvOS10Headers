/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantTV.framework/SetupAssistantTV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVSWiFiNetworkConnectionOperationDelegate <NSObject>
@required
-(void)operation:(id)arg1 stateDidChange:(unsigned long long)arg2;
-(void)operation:(id)arg1 didConnectToNetwork:(id)arg2;
-(void)operation:(id)arg1 didFailToFindNetworkWithName:(id)arg2 error:(id)arg3;
-(void)operation:(id)arg1 didFailToConnectToNetwork:(id)arg2 error:(id)arg3;
-(void)operation:(id)arg1 didRequestPasswordForNetwork:(id)arg2 completion:(/*^block*/id)arg3;

@end

