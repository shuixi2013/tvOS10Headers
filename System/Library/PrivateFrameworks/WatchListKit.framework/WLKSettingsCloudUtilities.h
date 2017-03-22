/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WLKSettingsCloudUtilities : NSObject
+(BOOL)cloudSyncEnabled;
+(id)_syncDictionaryForLocalStore;
+(void)_postChangeDictionaryToCloud:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(BOOL)arg2 removeEntry:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(id)_syncDictionaryForAppSettings:(id)arg1 ;
+(void)updateCloudStoreAccountLevelSetting:(id)arg1 value:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_fetchSyncDictionary;
+(void)updateCloudStoreWithCompletion:(/*^block*/id)arg1 ;
+(void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)issueDeleteAllRequestWithCompletion:(/*^block*/id)arg1 ;
+(void)updateLocalStoreWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)synchronizeSettingsFromCloudIfNeeded;
@end

