/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, VTPolicy;

@interface VTAssetManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	VTPolicy* _enablePolicy;

}
+(id)sharedInstance;
-(id)init;
-(void)_fetchRemoteMetaData;
-(BOOL)_isReadyToUse;
-(id)installedAssetForLanguage:(id)arg1 ;
-(void)_fetchRemoteAssetForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(id)_installedAssetForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(id)_assetQueryForLanguage:(id)arg1 supportPremium:(BOOL)arg2 localOnly:(BOOL)arg3 ;
-(id)_findLatestInstalledAsset:(id)arg1 ;
-(void)_runAssetQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateFromRemoteToLocalAssets:(id)arg1 ;
-(void)_downloadAsset:(id)arg1 withComplete:(/*^block*/id)arg2 ;
-(id)_createPredicateForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(void)_startDownloadingVoiceTriggerAsset:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_defaultDownloadOptions;
-(id)assetForLanguage:(id)arg1 ;
@end
