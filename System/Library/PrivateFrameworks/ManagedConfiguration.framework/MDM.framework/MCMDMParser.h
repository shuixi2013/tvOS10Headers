/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCTunnelParser.h>

@class MCMDMServer, NSString;

@interface MCMDMParser : MCTunnelParser {

	BOOL _isChaperoned;
	BOOL _isMDM;
	MCMDMServer* _server;
	NSString* _managingProfileIdentifier;

}

@property (nonatomic,retain) NSString * managingProfileIdentifier;              //@synthesize managingProfileIdentifier=_managingProfileIdentifier - In the implementation block
@property (assign,nonatomic,__weak) MCMDMServer * server;                       //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) BOOL isChaperoned;                               //@synthesize isChaperoned=_isChaperoned - In the implementation block
@property (assign,nonatomic) BOOL isMDM;                                        //@synthesize isMDM=_isMDM - In the implementation block
+(id)malformedRequestErrorResult;
+(id)errorChainFromError:(id)arg1 ;
-(BOOL)isChaperoned;
-(MCMDMServer *)server;
-(void)setServer:(MCMDMServer *)arg1 ;
-(id)_profileList:(id)arg1 filterFlags:(int)arg2 ;
-(id)_installProfile:(id)arg1 accessRights:(int)arg2 installationType:(long long)arg3 ;
-(id)_removeProfileWithIdentifier:(id)arg1 forInstalledProfilesWithFilterFlags:(int)arg2 ;
-(id)_restrictions:(id)arg1 withProfileFilterFlags:(int)arg2 ;
-(id)_allCommands;
-(id)_profileList:(id)arg1 ;
-(id)_installProfile:(id)arg1 accessRights:(int)arg2 ;
-(id)_removeProfile:(id)arg1 ;
-(id)_restrictions:(id)arg1 ;
-(id)_allowedDeviceQueriesForAccessRights:(int)arg1 ;
-(void)_performQuery:(id)arg1 withResultDictionary:(id)arg2 ;
-(id)_invalidRequestTypeError:(id)arg1 ;
-(id)_unavailableCommandsWhileLocked;
-(id)_unavailableCommandsBeforeFirstUnlock;
-(id)_unavailableCommandsWhileInAppWhitelistModes;
-(id)unavailableCommandsDuringBuddy;
-(id)unavailableCommandsWhileInMDMLostMode;
-(id)_invalidRequestTypeInMDMLostModeError:(id)arg1 ;
-(id)_deviceInformationWithRequest:(id)arg1 accessRights:(int)arg2 ;
-(void)_processRequest:(id)arg1 accessRights:(int)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_notAuthorizedError;
-(id)_deviceLock:(id)arg1 ;
-(void)_enableLostMode:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_disableLostMode:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_deviceLocation:(id)arg1 ;
-(id)_clearPasscode:(id)arg1 ;
-(id)_requestUnlockToken:(id)arg1 ;
-(id)_eraseDevice:(id)arg1 ;
-(id)_certificateList:(id)arg1 ;
-(id)_provisioningProfileList:(id)arg1 ;
-(id)_installProvisioningProfile:(id)arg1 ;
-(id)_removeProvisioningProfile:(id)arg1 ;
-(id)_installedApplicationList:(id)arg1 ;
-(id)_securityInfo:(id)arg1 ;
-(id)_settings:(id)arg1 accessRights:(int)arg2 ;
-(void)_installApplication:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_validateApplications:(id)arg1 ;
-(id)_applyRedemptionCode:(id)arg1 assertion:(id)arg2 ;
-(id)_managedApplicationList:(id)arg1 ;
-(id)_managedApplicationConfiguration:(id)arg1 ;
-(id)_managedApplicationAttributes:(id)arg1 ;
-(id)_managedApplicationFeedback:(id)arg1 ;
-(id)_removeApplication:(id)arg1 ;
-(void)_requestMirroringRequest:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_stopMirroringRequest:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_inviteToProgramRequest:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_activationLockBypassCodeRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_clearActivationLockBypassCodeRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_clearRestrictionsPasswordRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_installMedia:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_managedMediaList:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_removeMedia:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_deviceConfigured:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_scheduleOSUpdate:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_scheduleOSUpdateScan:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_availableOSUpdates:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_statusOfOSUpdates:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_userList:(id)arg1 ;
-(id)_logOutUser:(id)arg1 ;
-(id)_deleteUser:(id)arg1 ;
-(BOOL)_isProvisioningProfileUUIDManaged:(id)arg1 ;
-(BOOL)isMDM;
-(id)_removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 ;
-(BOOL)_isProfileIdentifierManaged:(id)arg1 ;
-(id)_allSettingsItems;
-(id)_notManagedErrorAppID:(id)arg1 ;
-(id)approvedAppAttributesFromAttributes:(id)arg1 ;
-(id)_performSetDeviceName:(id)arg1 ;
-(id)_performSetWallpaper:(id)arg1 ;
-(id)_performSetDataRoaming:(id)arg1 ;
-(id)_performSetVoiceRoaming:(id)arg1 ;
-(id)_performSetPersonalHotspot:(id)arg1 ;
-(id)_performSetAppConfig:(id)arg1 outAdditionalResponseKeys:(id*)arg2 ;
-(id)_performSetAppAttributes:(id)arg1 outAdditionalResponseKeys:(id*)arg2 ;
-(id)_performSetMaximumResidentUsers:(id)arg1 ;
-(id)_performSetDiagnosticSubmission:(id)arg1 ;
-(id)_performSetAppAnalytics:(id)arg1 ;
-(id)_performSetGracePeriod:(id)arg1 ;
-(id)_performSetOrganizationInfo:(id)arg1 ;
-(id)_performSetMDMOptions:(id)arg1 ;
-(BOOL)_validateSetting:(id)arg1 accessRights:(int)arg2 outError:(id*)arg3 ;
-(id)_performSetting:(id)arg1 outAdditionalResponseKeys:(id*)arg2 outRestartAppleTVApp:(BOOL*)arg3 ;
-(id)managedFeedbackDictionaryForBundleID:(id)arg1 delete:(BOOL)arg2 ;
-(void)_uninstallApplication:(id)arg1 ;
-(void)_scheduleOSUpdate:(id)arg1 tryDownload:(BOOL)arg2 tryInstall:(BOOL)arg3 assertion:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)shouldReportErrorCode:(long long)arg1 ;
-(id)statusStringForErrorCode:(long long)arg1 ;
-(id)_iosUpdateProductKey:(id)arg1 ;
-(id)initWithManagingProfileIdentifier:(id)arg1 ;
-(void)processRequest:(id)arg1 accessRights:(int)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_appStoreDisabledError;
-(id)_softwareUpdatesNotPermittedWithLoggedInUserError;
-(void)setIsMDM:(BOOL)arg1 ;
-(NSString *)managingProfileIdentifier;
-(void)setManagingProfileIdentifier:(NSString *)arg1 ;
@end

