/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKBXPCClient.h>

@class NSString, CKContainerID, CKRecordID, CKDatabase, NSXPCConnection, NSOperationQueue, CKOperationCallbackManager, CKOperationFlowControlManager, CKAccountInfo, ACAccountStore, NSMutableArray, CKContainerSetupInfo, NSMapTable, NSMutableDictionary;

@interface CKContainer : NSObject <CKBXPCClient> {

	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	BOOL _holdAllOperations;
	BOOL _hasValidConnection;
	BOOL _needsSandboxExtensions;
	BOOL _hasCachedSetupInfo;
	BOOL _captureResponseHTTPHeaders;
	BOOL _wantsSiloedContext;
	int _statusReportToken;
	int _killSwitchToken;
	int _accountChangeToken;
	CKContainerID* _containerID;
	CKRecordID* _containerScopedUserID;
	CKDatabase* _privateCloudDatabase;
	CKDatabase* _publicCloudDatabase;
	CKDatabase* _sharedCloudDatabase;
	NSXPCConnection* _xpcConnection;
	NSOperationQueue* _convenienceOperationQueue;
	NSOperationQueue* _throttlingOperationQueue;
	NSOperationQueue* _backgroundThrottlingOperationQueue;
	CKOperationCallbackManager* _callbackManager;
	CKOperationFlowControlManager* _flowControlManager;
	CKAccountInfo* _accountInfoOverride;
	ACAccountStore* _accountStore;
	NSMutableArray* _sandboxExtensionHandles;
	CKContainerSetupInfo* _cachedSetupInfo;
	NSMapTable* _assetsByUUID;
	NSMutableDictionary* _fakeEntitlements;
	unsigned long long _stateHandle;

}

@property (nonatomic,retain) CKContainerID * containerID;                                        //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) CKRecordID * containerScopedUserID;                                 //@synthesize containerScopedUserID=_containerScopedUserID - In the implementation block
@property (nonatomic,retain) CKDatabase * privateCloudDatabase;                                  //@synthesize privateCloudDatabase=_privateCloudDatabase - In the implementation block
@property (nonatomic,retain) CKDatabase * publicCloudDatabase;                                   //@synthesize publicCloudDatabase=_publicCloudDatabase - In the implementation block
@property (nonatomic,retain) CKDatabase * sharedCloudDatabase;                                   //@synthesize sharedCloudDatabase=_sharedCloudDatabase - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                    //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) BOOL hasValidConnection;                                            //@synthesize hasValidConnection=_hasValidConnection - In the implementation block
@property (nonatomic,retain) NSOperationQueue * convenienceOperationQueue;                       //@synthesize convenienceOperationQueue=_convenienceOperationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * throttlingOperationQueue;                        //@synthesize throttlingOperationQueue=_throttlingOperationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * backgroundThrottlingOperationQueue;              //@synthesize backgroundThrottlingOperationQueue=_backgroundThrottlingOperationQueue - In the implementation block
@property (nonatomic,retain) CKOperationCallbackManager * callbackManager;                       //@synthesize callbackManager=_callbackManager - In the implementation block
@property (nonatomic,retain) CKOperationFlowControlManager * flowControlManager;                 //@synthesize flowControlManager=_flowControlManager - In the implementation block
@property (nonatomic,copy) CKAccountInfo * accountInfoOverride;                                  //@synthesize accountInfoOverride=_accountInfoOverride - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                                      //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) int statusReportToken;                                              //@synthesize statusReportToken=_statusReportToken - In the implementation block
@property (assign,nonatomic) int killSwitchToken;                                                //@synthesize killSwitchToken=_killSwitchToken - In the implementation block
@property (assign,nonatomic) int accountChangeToken;                                             //@synthesize accountChangeToken=_accountChangeToken - In the implementation block
@property (nonatomic,retain) NSMutableArray * sandboxExtensionHandles;                           //@synthesize sandboxExtensionHandles=_sandboxExtensionHandles - In the implementation block
@property (assign,nonatomic) BOOL needsSandboxExtensions;                                        //@synthesize needsSandboxExtensions=_needsSandboxExtensions - In the implementation block
@property (nonatomic,retain) CKContainerSetupInfo * cachedSetupInfo;                             //@synthesize cachedSetupInfo=_cachedSetupInfo - In the implementation block
@property (assign,nonatomic) BOOL hasCachedSetupInfo;                                            //@synthesize hasCachedSetupInfo=_hasCachedSetupInfo - In the implementation block
@property (nonatomic,retain) NSMapTable * assetsByUUID;                                          //@synthesize assetsByUUID=_assetsByUUID - In the implementation block
@property (assign,nonatomic) BOOL captureResponseHTTPHeaders;                                    //@synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL wantsSiloedContext;                                            //@synthesize wantsSiloedContext=_wantsSiloedContext - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fakeEntitlements;                             //@synthesize fakeEntitlements=_fakeEntitlements - In the implementation block
@property (assign,nonatomic) unsigned long long stateHandle;                                     //@synthesize stateHandle=_stateHandle - In the implementation block
@property (nonatomic,readonly) NSString * containerIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedOutstandingOperations;
+(void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)defaultContainer;
+(void)registerOutstandingOperationWithID:(id)arg1 ;
+(void)unregisterOutstandingOperationWithID:(id)arg1 ;
+(id)containerWithIdentifier:(id)arg1 ;
-(CKContainerID *)containerID;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)connection;
-(void)addOperation:(id)arg1 ;
-(id)CKPropertiesDescription;
-(CKAccountInfo *)accountInfoOverride;
-(void)setAccountInfoOverride:(CKAccountInfo *)arg1 ;
-(BOOL)captureResponseHTTPHeaders;
-(void)setCaptureResponseHTTPHeaders:(BOOL)arg1 ;
-(BOOL)wantsSiloedContext;
-(void)setWantsSiloedContext:(BOOL)arg1 ;
-(NSMutableDictionary *)fakeEntitlements;
-(void)setFakeEntitlements:(NSMutableDictionary *)arg1 ;
-(BOOL)holdAllOperations;
-(void)setHoldAllOperations:(BOOL)arg1 ;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)openFileWithOpenInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 ;
-(id)_initWithContainerIdentifier:(id)arg1 ;
-(void)_checkSelfCloudServicesEntitlement;
-(CKDatabase *)publicCloudDatabase;
-(CKDatabase *)sharedCloudDatabase;
-(void)setContainerScopedUserID:(CKRecordID *)arg1 ;
-(id)CKStatusReportArray;
-(id)_checkSelfContainerIdentifier;
-(void)_setupWithContainerID:(id)arg1 accountInfoOverride:(id)arg2 ;
-(long long)_untrustedDatabaseEnvironment;
-(NSMutableArray *)sandboxExtensionHandles;
-(void)_cleanupSandboxExtensionHandles:(id)arg1 ;
-(id)sourceApplicationSecondaryIdentifier;
-(id)_untrustedEntitlementForKey:(id)arg1 ;
-(BOOL)needsSandboxExtensions;
-(BOOL)hasValidConnection;
-(void)_prepareForDaemonLaunch;
-(void)setHasValidConnection:(BOOL)arg1 ;
-(CKOperationCallbackManager *)callbackManager;
-(CKOperationFlowControlManager *)flowControlManager;
-(void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dumpDaemonStatusReportToFileHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2 ;
-(void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2 ;
-(void)accountsWillDeleteAccount:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)accountChangedWithID:(id)arg1 ;
-(void)wipeAllCachesAndDie;
-(void)clearContextFromMetadataCache;
-(void)updatePushTokens;
-(id)setupInfo;
-(void)_consumeSandboxExtensions:(id)arg1 ;
-(void)setNeedsSandboxExtensions:(BOOL)arg1 ;
-(id)findTrackedAssetByUUID:(id)arg1 ;
-(NSOperationQueue *)convenienceOperationQueue;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(NSOperationQueue *)throttlingOperationQueue;
-(NSMapTable *)assetsByUUID;
-(void)setAssetsByUUID:(NSMapTable *)arg1 ;
-(id)_allStatusReports;
-(id)_initWithContainerIdentifier:(id)arg1 environment:(long long)arg2 ;
-(id)initWithContainerID:(id)arg1 accountInfoOverride:(id)arg2 ;
-(id)databaseWithDatabaseScope:(long long)arg1 ;
-(void)_scheduleConvenienceOperation:(id)arg1 ;
-(void)statusGroupsForApplicationPermission:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)resetAllApplicationPermissionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)tossConfigWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 ;
-(void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 ;
-(void)setFakeEntitlement:(id)arg1 forKey:(id)arg2 ;
-(void)setSourceApplicationSecondaryIdentifier:(id)arg1 ;
-(void)purgeTmpDirectory;
-(void)dataclassEnabled:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchCurrentDeviceIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchFullNameAndPrimaryEmailOnAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dumpDaemonStatusReport;
-(void)trackAssets:(id)arg1 ;
-(CKRecordID *)containerScopedUserID;
-(void)setPrivateCloudDatabase:(CKDatabase *)arg1 ;
-(void)setPublicCloudDatabase:(CKDatabase *)arg1 ;
-(void)setSharedCloudDatabase:(CKDatabase *)arg1 ;
-(void)setConvenienceOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setThrottlingOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)backgroundThrottlingOperationQueue;
-(void)setBackgroundThrottlingOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setCallbackManager:(CKOperationCallbackManager *)arg1 ;
-(void)setFlowControlManager:(CKOperationFlowControlManager *)arg1 ;
-(int)statusReportToken;
-(void)setStatusReportToken:(int)arg1 ;
-(int)killSwitchToken;
-(void)setKillSwitchToken:(int)arg1 ;
-(int)accountChangeToken;
-(void)setAccountChangeToken:(int)arg1 ;
-(void)setSandboxExtensionHandles:(NSMutableArray *)arg1 ;
-(CKContainerSetupInfo *)cachedSetupInfo;
-(void)setCachedSetupInfo:(CKContainerSetupInfo *)arg1 ;
-(BOOL)hasCachedSetupInfo;
-(void)setHasCachedSetupInfo:(BOOL)arg1 ;
-(void)_discoverUserIdentityWithLookupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchUserRecordIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)discoverAllIdentitiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)discoverUserIdentityWithEmailAddress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)discoverUserIdentityWithPhoneNumber:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)discoverUserIdentityWithUserRecordID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)discoverAllContactUserInfosWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)discoverUserInfoWithEmailAddress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)discoverUserInfoWithUserRecordID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchShareParticipantWithLookupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchShareParticipantWithEmailAddress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchShareParticipantWithPhoneNumber:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchShareParticipantWithUserRecordID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchShareMetadataWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acceptShareMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)decryptPersonalInfoOnShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getNewWebSharingIdentity:(/*^block*/id)arg1 ;
-(void)_fetchLongLivedOperationsWithIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)statusForApplicationPermission:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestApplicationPermission:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchLongLivedOperationsWithIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAllLongLivedOperationIDsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchLongLivedOperationWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(id)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(NSString *)containerIdentifier;
-(NSXPCConnection *)xpcConnection;
-(ACAccountStore *)accountStore;
-(unsigned long long)stateHandle;
-(void)setStateHandle:(unsigned long long)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)initWithContainerID:(id)arg1 ;
-(CKDatabase *)privateCloudDatabase;
-(void)accountStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)serverPreferredPushEnvironmentWithCompletionHandler:(/*^block*/id)arg1 ;
@end
