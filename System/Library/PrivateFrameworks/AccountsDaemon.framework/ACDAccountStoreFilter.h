/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountStoreProtocol.h>

@class ACDAccountStore, NSString;

@interface ACDAccountStoreFilter : NSObject <ACDAccountStoreProtocol> {

	ACDAccountStore* _backingAccountStore;

}

@property (nonatomic,retain) ACDAccountStore * backingAccountStore;              //@synthesize backingAccountStore=_backingAccountStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_whiteList;
-(void)accountsWithAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)saveAccount:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setClientBundleID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)accountsWithHandler:(/*^block*/id)arg1 ;
-(void)accountTypesWithHandler:(/*^block*/id)arg1 ;
-(void)accountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountExistsWithDescription:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)accountsOnPairedDeviceWithAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountTypeWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)credentialForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)credentialForAccount:(id)arg1 serviceID:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)credentialItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)credentialItemForAccount:(id)arg1 serviceName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)insertCredentialItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveCredentialItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCredentialItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dataclassesWithHandler:(/*^block*/id)arg1 ;
-(void)supportedDataclassesForAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)syncableDataclassesForAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dataclassActionsForAccountSave:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dataclassActionsForAccountDeletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accessKeysForAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)canSaveAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)insertAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)removeAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)appPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)permissionForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)grantedPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)typeIdentifierForDomain:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isPushSupportedForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clientTokenForAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 ;
-(void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAccountsFromPairedDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)triggerKeychainMigrationIfNecessary:(/*^block*/id)arg1 ;
-(ACDAccountStore *)backingAccountStore;
-(void)setBackingAccountStore:(ACDAccountStore *)arg1 ;
-(BOOL)_accessGrantedForClient:(id)arg1 onAccountTypeID:(id)arg2 ;
-(BOOL)_wildCardAuthorizationMatchingForAccountTypeIdentifier:(id)arg1 ;
-(id)_appPermissionsForAccountTypeIdentifier:(id)arg1 ;
-(BOOL)_isClientPermittedToAccessAccountTypeWithIdentifier:(id)arg1 ;
-(BOOL)_accessGrantedForBundleID:(id)arg1 onAccountTypeID:(id)arg2 ;
-(BOOL)_isClientPermittedToAccessAccount:(id)arg1 ;
-(BOOL)_isClientPermittedToRemoveAccount:(id)arg1 ;
-(BOOL)_clientHasPermissionToAddAccount:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
@end

