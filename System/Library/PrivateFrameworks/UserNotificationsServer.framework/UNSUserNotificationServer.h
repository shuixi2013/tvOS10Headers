/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/UNSDefaultDataProviderFactoryObserver.h>
#import <libobjc.A.dylib/UNSNotificationRepositoryDelegate.h>
#import <libobjc.A.dylib/UNSRemoteNotificationServerObserver.h>

@class UNSApplicationLauncher, UNSDefaultDataProviderFactory, UNSUserNotificationServerConnectionListener, UNSNotificationCategoryRepository, UNSNotificationSchedulingService, UNSNotificationSettingsService, UNSNotificationRepository, UNSPendingNotificationRepository, UNSRemoteNotificationServer, UNSAttachmentsService, UNSLocationMonitor, NSString;

@interface UNSUserNotificationServer : NSObject <LSApplicationWorkspaceObserverProtocol, UNSDefaultDataProviderFactoryObserver, UNSNotificationRepositoryDelegate, UNSRemoteNotificationServerObserver> {

	UNSApplicationLauncher* _applicationLauncher;
	UNSDefaultDataProviderFactory* _dataProviderFactory;
	UNSUserNotificationServerConnectionListener* _userNotificationServerConnectionListener;
	UNSNotificationCategoryRepository* _categoryRepository;
	UNSNotificationSchedulingService* _notificationSchedulingService;
	UNSNotificationSettingsService* _notificationSettingsService;
	UNSNotificationRepository* _notificationRepository;
	UNSPendingNotificationRepository* _pendingNotificationRepository;
	UNSRemoteNotificationServer* _remoteNotificationService;
	UNSAttachmentsService* _attachmentsService;
	UNSLocationMonitor* _locationMonitor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_localeDidChange;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)applicationsDidAuthorizeNotificationSettings:(id)arg1 ;
-(void)applicationsDidDenyNotificationSettings:(id)arg1 ;
-(id)initWithSystemStateProvider:(id)arg1 ;
-(void)_registerLoggers;
-(void)_migrateNotificationRepository;
-(void)_migratePendingNotificationRequests;
-(void)_migrateNotificationCategories;
-(void)_addObserverForApplicationStateRestore;
-(void)_addObserverForApplicationWorkspaceChanges;
-(void)_addObserverForBackgroundRefreshApplicationChanges;
-(void)_addObserverForDataProviderFactoryChanges;
-(void)_addObserverForLocaleChanges;
-(void)_addObserverForRemoteNotificationServiceChanges;
-(void)_addObserverForSignificantTimeChanges;
-(void)_ensureAttachmentsIntegrity;
-(void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_applicationStateDidRestore;
-(void)_backgroundRefreshApplicationsDidChange;
-(void)_timeDidChangeSignificantly;
-(void)_removeAllNotificationsForBundleIdentifier:(id)arg1 ;
-(BOOL)_isBundleIdentifierAuthorizedForRegionMonitoring:(id)arg1 ;
-(void)_triggerLocationArrowForBundleIdentifier:(id)arg1 ;
@end
