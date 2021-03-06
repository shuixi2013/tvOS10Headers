/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXSpeechAssetMonitorHelper : NSObject {

	double _lastVoiceAssetUpdateTime;

}
+(id)sharedInstance;
-(id)init;
-(id)_speechAssetUpdaterClient;
-(void)_monitorSpeechAssetChanges;
-(void)_clientUpdateAvailableSpeechAssets;
-(void)_checkClientForUpdates:(BOOL)arg1 ;
-(void)updateAvailableSpeechAssets;
-(void)_checkForAssetUpdatesNowAndNextWeek;
-(id)speechAssetUpdaterClient;
@end

