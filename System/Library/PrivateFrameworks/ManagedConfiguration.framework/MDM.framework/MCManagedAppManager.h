/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MDM/MCManagedAssetManager.h>
#import <libobjc.A.dylib/MCJobQueueObserver.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject, MCJobQueue;

@interface MCManagedAppManager : MCManagedAssetManager <MCJobQueueObserver> {

	NSString* _manifestPath;
	NSMutableDictionary* _manifest;
	NSObject*<OS_dispatch_queue> _manifestQueue;
	NSObject*<OS_dispatch_queue> _installQueue;
	MCJobQueue* _jobQueue;

}

@property (nonatomic,copy) NSString * manifestPath;                                   //@synthesize manifestPath=_manifestPath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * manifest;                          //@synthesize manifest=_manifest - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> manifestQueue;              //@synthesize manifestQueue=_manifestQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> installQueue;               //@synthesize installQueue=_installQueue - In the implementation block
@property (nonatomic,retain) MCJobQueue * jobQueue;                                   //@synthesize jobQueue=_jobQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)stringForAppState:(int)arg1 ;
-(id)doNotBackupAppIDs;
-(MCJobQueue *)jobQueue;
-(void)setJobQueue:(MCJobQueue *)arg1 ;
-(BOOL)isAppManaged:(id)arg1 ;
-(NSMutableDictionary *)manifest;
-(void)setManifest:(NSMutableDictionary *)arg1 ;
-(void)cleanUp;
-(id)managedAppMetadataByBundleID;
-(void)setMetadata:(id)arg1 forBundleID:(id)arg2 ;
-(void)updateApplicationInstallationStates;
-(void)installITunesStoreID:(id)arg1 appIdentifier:(id)arg2 purchaseMethod:(long long)arg3 managementFlags:(int)arg4 changeManagementState:(int)arg5 attributes:(id)arg6 configuration:(id)arg7 assertion:(id)arg8 completionBlock:(/*^block*/id)arg9 ;
-(void)installManifestURL:(id)arg1 managementFlags:(int)arg2 changeManagementState:(int)arg3 attributes:(id)arg4 configuration:(id)arg5 assertion:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(BOOL)applyRedemptionCode:(id)arg1 forBundleID:(id)arg2 assertion:(id)arg3 outError:(id*)arg4 ;
-(void)advanceTransientStates;
-(void)advanceTransientStatesForBundleID:(id)arg1 ;
-(BOOL)hasMetadataForBundleID:(id)arg1 ;
-(int)appStateForBundleID:(id)arg1 ;
-(void)removeBundleID:(id)arg1 ;
-(void)_uninstallApplication:(id)arg1 ;
-(id)initWithManifestPath:(id)arg1 ;
-(BOOL)manifestQueueHasMetadataForBundleID:(id)arg1 ;
-(void)manifestQueueCommitManifest;
-(id)manifestQueueManagedAppMetadataByBundleID;
-(int)manifestQueueAppStateForBundleID:(id)arg1 ;
-(void)manifestQueueSetManagedAppMetadataByBundleID:(id)arg1 ;
-(void)manifestQueueSetMetadata:(id)arg1 forBundleID:(id)arg2 ;
-(id)manifestQueueMetadataForBundleID:(id)arg1 ;
-(void)manifestQueueSetAppState:(int)arg1 forBundleID:(id)arg2 ;
-(void)cancelAppDownloadForBundleID:(id)arg1 ;
-(void)manifestQueueRemoveBundleID:(id)arg1 ;
-(BOOL)_isBundleID:(id)arg1 installedAsApplicationType:(unsigned long long)arg2 ;
-(BOOL)_isBundleIDInstalled:(id)arg1 ;
-(void)_displayAppInstallationAlertMessage:(id)arg1 isUpdate:(BOOL)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)_appBundleID:(id)arg1 wasInstalledOutIsManaged:(BOOL*)arg2 ;
-(void)_displayPromptForAppInstallationTitle:(id)arg1 bundleID:(id)arg2 isAppStore:(BOOL)arg3 isUpdate:(BOOL)arg4 assertion:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_displayPromptForStoreAppUpdateIfNeededPurchaserAccount:(id)arg1 purchase:(id)arg2 title:(id)arg3 bundleID:(id)arg4 assertion:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)downloadingAppIDs;
-(id)activeDownloadForAppID:(id)arg1 ;
-(id)_appAlreadyQueuedError:(id)arg1 ;
-(void)resumeDownloadForBundleID:(id)arg1 ;
-(id)_bundleIDAlreadyInstalledError:(id)arg1 ;
-(id)_bundleIDIsSystemAppError:(id)arg1 ;
-(id)_cannotValidateAppIDError;
-(void)_lookupItemWithAppIdentifier:(id)arg1 iTunesStoreID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_lookupItemWithAppIdentifier:(id)arg1 iTunesStoreID:(id)arg2 personalize:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_cannotValidateAppIDErrorUnderlyingError:(id)arg1 ;
-(void)_searchPurchaseHistoryForITunesStoreID:(id)arg1 appIdentifier:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_installOrPromptForManagementOfStoreAppWithMetadata:(id)arg1 purchaseMethod:(long long)arg2 managementFlags:(int)arg3 changeManagementState:(int)arg4 attributes:(id)arg5 configuration:(id)arg6 assertion:(id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)_SSVInstallVPPAppIfLicensedWithMetadata:(id)arg1 managementFlags:(int)arg2 changeManagementState:(int)arg3 attributes:(id)arg4 configuration:(id)arg5 assertion:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)_installITunesStoreIDIfLicensedToUserWithMetadata:(id)arg1 managementFlags:(int)arg2 changeManagementState:(int)arg3 attributes:(id)arg4 configuration:(id)arg5 assertion:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(BOOL)manifestQueueShouldQueueAppBundleID:(id)arg1 forDownloadManagementFlags:(int)arg2 resumeDownloadIfNeeded:(BOOL)arg3 outRejectionReason:(id*)arg4 outIsUpdate:(BOOL*)arg5 outError:(id*)arg6 ;
-(void)_displayManagementPromptForAppTitle:(id)arg1 bundleID:(id)arg2 isAppStore:(BOOL)arg3 assertion:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_SSVInstallVPPAppWithRetrievedMetadata:(id)arg1 managementFlags:(int)arg2 attributes:(id)arg3 configuration:(id)arg4 assertion:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)_licenseNotFoundErrorWithBundleID:(id)arg1 ;
-(id)_licenseNotFoundErrorWithiTunesStoreID:(id)arg1 ;
-(void)_installAppLicensedToUserWithStoreMetadata:(id)arg1 managementFlags:(int)arg2 attributes:(id)arg3 configuration:(id)arg4 assertion:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)_appAlreadyQueuedErrorWithiTunesStoreID:(id)arg1 ;
-(void)resumeDownloadForBundleID:(id)arg1 iTunesStoreID:(id)arg2 ;
-(void)_SSVRetrieveStoreLicenseMetadataWithStoreMetadata:(id)arg1 changeManagementState:(int)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_legacyRetrieveStoreAppMetadataWithiTunesStoreID:(id)arg1 appIdentifier:(id)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_lookupItemIfNeededPurchaseHistoryPurchase:(id)arg1 mustRedownload:(BOOL)arg2 iTunesStoreID:(id)arg3 appIdentifier:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)searchPurchaseHistoryForITunesStoreID:(id)arg1 appIdentifier:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_purchase:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_displayAppInstallationFailureAlertTitle:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_promptUserForStoreAppInstallationPurchase:(id)arg1 title:(id)arg2 bundleID:(id)arg3 requireAuthenticatedAccount:(BOOL)arg4 assertion:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_displayAppUpdateFailureAlertTitle:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_promptUserForStoreAppUpdatePurchase:(id)arg1 title:(id)arg2 bundleID:(id)arg3 assertion:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)_invalidManifestErrorWithURL:(id)arg1 underlyingError:(id)arg2 ;
-(void)manifestQueueAdvanceTransientStatesForBundleID:(id)arg1 ;
-(void)_installEnterpriseAppManifestURL:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_promptUserForEnterpriseAppUpdateManifestURL:(id)arg1 title:(id)arg2 bundleID:(id)arg3 assertion:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_promptUserForEnterpriseAppInstallationManifestURL:(id)arg1 title:(id)arg2 bundleID:(id)arg3 assertion:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)bundleIDsWithFlags:(int)arg1 ;
-(BOOL)_advanceTransientStateForBundleID:(id)arg1 params:(id)arg2 outNewParams:(id*)arg3 outSetChanged:(BOOL*)arg4 ;
-(id)metadataForBundleID:(id)arg1 ;
-(void)setAppState:(int)arg1 forBundleID:(id)arg2 ;
-(id)_notAnAppError;
-(void)uninstallManagedAppsAccordingToFlagsWithAssertion:(id)arg1 ;
-(NSString *)manifestPath;
-(void)setManifestPath:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)manifestQueue;
-(void)setManifestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)installQueue;
-(void)setInstallQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

