/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABPredicateDelegate.h>
#import <libobjc.A.dylib/BBDataProviderManagerDelegate.h>
#import <libobjc.A.dylib/BBNotificationBehaviorUtilitiesServerProtocol.h>
#import <libobjc.A.dylib/BBServerConduitServerInterface.h>
#import <libobjc.A.dylib/BBSettingsGatewayServerInterface.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/BBSyncServiceDelegate.h>

@protocol OS_dispatch_source;
@class NSMutableDictionary, BBDataProviderManager, NSMutableSet, BBMaskedSet, NSMutableArray, NSArray, NSDate, NSObject, NSString, NSDateComponents, BBSyncService, NSXPCListener, BBDismissalSyncCache, ABFavoritesListManager;

@interface BBServer : NSObject <ABPredicateDelegate, BBDataProviderManagerDelegate, BBNotificationBehaviorUtilitiesServerProtocol, BBServerConduitServerInterface, BBSettingsGatewayServerInterface, NSXPCListenerDelegate, BBSyncServiceDelegate> {

	NSMutableDictionary* _bulletinRequestsByID;
	NSMutableDictionary* _sectionInfoByID;
	unsigned long long _currentSystemState;
	int _privilegedAddressBookGroupRecordID;
	NSMutableDictionary* _lastContactTimeForSender;
	unsigned long long _activeBehaviorOverrides;
	unsigned long long _privilegedSenderTypes;
	unsigned long long _globalCounter;
	BOOL _isRunning;
	BBDataProviderManager* _dataProviderManager;
	NSMutableSet* _observers;
	BBMaskedSet* _observerFeedSet;
	NSMutableArray* _observerGateways;
	NSMutableDictionary* _observerGatewaysByName;
	NSMutableDictionary* _observerGatewayEnumerators;
	NSMutableDictionary* _pendingUpdatesByBulletinID;
	NSMutableSet* _settingsGatewayConnections;
	NSMutableDictionary* _activeSectionIDsByCategory;
	NSMutableDictionary* _sortedSectionIDsByCategory;
	long long _sectionOrderRule;
	NSMutableDictionary* _bulletinsByID;
	NSMutableDictionary* _bulletinIDsBySectionID;
	NSMutableDictionary* _noticeBulletinIDsBySectionID;
	NSArray* _behaviorOverrides;
	NSDate* _behaviorOverrideStatusEffectiveTime;
	NSObject*<OS_dispatch_source> _behaviorOverridesTimer;
	NSDate* _behaviorOverridesWakeTime;
	NSMutableArray* _behaviorOverridesChangeClients;
	NSMutableArray* _behaviorOverridesEffectiveWhileUnlockedChangeClients;
	NSMutableArray* _behaviorOverrideStatusChangeClients;
	NSMutableArray* _activeBehaviorOverrideTypesChangeSettingsGateways;
	NSMutableArray* _activeBehaviorOverrideTypesChangeAssertionCountSettingsGateways;
	NSMutableArray* _activeBehaviorOverrideTypesChangeClients;
	BOOL _behaviorOverridesEffectiveWhileUnlocked;
	unsigned long long _activeObserverBehaviorOverrideTypes;
	unsigned long long _activeSettingsGatewayBehaviorOverrideTypes;
	unsigned long long _behaviorOverrideState;
	NSString* _privilegedAddressBookGroupName;
	NSMutableArray* _privilegedSenderFilteringStateChangeClients;
	BOOL _privilegedSenderFilteringNecessary;
	NSMutableArray* _privilegedSenderChangeSettingsGateways;
	NSMutableArray* _privilegedSenderTypesChangeSettingsGateways;
	NSMutableArray* _expiringBulletinIDs;
	NSObject*<OS_dispatch_source> _expirationTimer;
	NSMutableArray* _eventBasedExpiringBulletinIDs;
	NSDate* _nextScheduledExpirationTimerFireDate;
	NSDateComponents* _defaultExpirationComponents;
	NSDateComponents* _expirationReferenceComponents;
	NSMutableDictionary* _clearedSections;
	int _serverIsRunningToken;
	int _demo_lockscreen_token;
	BBSyncService* _syncService;
	NSXPCListener* _observerListener;
	NSMutableSet* _utilitiesConnections;
	NSXPCListener* _utilitiesListener;
	NSXPCListener* _conduitListener;
	NSMutableSet* _systemStateConnections;
	NSXPCListener* _systemStateListener;
	NSXPCListener* _settingsListener;
	NSMutableSet* _suspendedConnections;
	BBDismissalSyncCache* _dismissalSyncCache;
	long long _behaviorManualOverrideStatus;
	long long _behaviorOverrideStatus;
	NSMutableArray* _quietModeOverrideAssertions;
	unsigned long long _activeQuietModeAssertionCount;
	unsigned long long _activeQuietModeAssertionGatewayCount;
	void* _addressBook;
	ABFavoritesListManager* _favoritesListManager;
	BOOL _entryFound;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)behaviorUtilitiesServerInterface;
+(id)_sectionOrderPath;
+(id)_sectionInfoPath;
+(BOOL)_removeSavedChronologicalSectionInfos:(id)arg1 ;
+(void)_writeSectionInfo:(id)arg1 ;
+(id)_sectionIdentifiersForNonDefaultSectionCategoriesFromSectionInfos:(id)arg1 ;
+(id)_sectionIdentifiersForWeeAppsFromSectionInfos:(id)arg1 ;
+(id)savedChronologicalSectionOrder;
+(id)savedSectionInfo;
+(void)removeSavedChronologicalSectionInfo:(id)arg1 ;
+(id)_dataDirectoryPath;
-(void)dealloc;
-(id)init;
-(BOOL)isRunning;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setBehaviorOverrides:(id)arg1 source:(unsigned long long)arg2 ;
-(BOOL)predicateShouldContinue:(id)arg1 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(void*)_addressBook;
-(void)_addObserver:(id)arg1 ;
-(void)_removeObserver:(id)arg1 ;
-(void)ping:(/*^block*/id)arg1 ;
-(id)dataProviderForSectionID:(id)arg1 ;
-(void)getSectionOrderRuleWithHandler:(/*^block*/id)arg1 ;
-(void)getSectionInfoWithHandler:(/*^block*/id)arg1 ;
-(void)getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg1 ;
-(void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getPrivilegedSenderTypesWithHandler:(/*^block*/id)arg1 ;
-(void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getBulletinsWithHandler:(/*^block*/id)arg1 ;
-(void)getBulletinsPublishedAfterDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)getSectionParametersForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getDataForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)getPNGDataForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(BOOL)arg3 sizeConstraints:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)getAspectRatioForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)getShouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setNotificationPresentationFilteringStateChangeUpdatesEnabled:(BOOL)arg1 ;
-(void)setActiveBehaviorOverrideChangeUpdatesEnabled:(BOOL)arg1 ;
-(void)demo_lockscreen:(unsigned long long)arg1 ;
-(void)_observeManagedProfileChanges;
-(void)_clearExpirationTimer;
-(void)_clearBehaviorOverridesTimer;
-(void)_unobserveManagedProfileChanges;
-(void)_addSuspendedConnection:(id)arg1 ;
-(unsigned long long)_activeBehaviorOverrideTypesConsideringSystemState:(BOOL)arg1 ;
-(unsigned long long)_behaviorOverrideState;
-(void)_removeUtilityConnection:(id)arg1 ;
-(void)_addUtilityConnection:(id)arg1 ;
-(void)_removeSuspendedConnection:(id)arg1 ;
-(void)_removeSystemStateConnection:(id)arg1 ;
-(void)_addSystemStateConnection:(id)arg1 ;
-(void)_removeSettingsGatewayConnection:(id)arg1 ;
-(void)_addSettingsGatewayConnection:(id)arg1 ;
-(unsigned long long)_feedsForBulletin:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(BOOL)arg3 ;
-(void)_addBulletin:(id)arg1 ;
-(void)_sendAddBulletin:(id)arg1 toFeeds:(unsigned long long)arg2 ;
-(void)noteFinishedWithBulletinID:(id)arg1 ;
-(void)_modifyBulletin:(id)arg1 ;
-(void)_sendModifyBulletin:(id)arg1 toFeeds:(unsigned long long)arg2 ;
-(void)_scheduleExpirationForBulletin:(id)arg1 ;
-(void)_removeBulletin:(id)arg1 shouldSync:(BOOL)arg2 ;
-(id)_mapForFeed:(unsigned long long)arg1 ;
-(void)_sendRemoveBulletin:(id)arg1 toFeeds:(unsigned long long)arg2 shouldSync:(BOOL)arg3 ;
-(void)removeBulletinID:(id)arg1 fromSection:(id)arg2 inFeed:(unsigned long long)arg3 ;
-(id)bulletinIDsForSectionID:(id)arg1 inFeed:(unsigned long long)arg2 ;
-(id)_effectiveSectionInfoForSectionInfo:(id)arg1 ;
-(id)_sectionInfoForSectionID:(id)arg1 effective:(BOOL)arg2 ;
-(id)_observersForNoticesFeed;
-(id)_sortedSectionIDs;
-(id)_observerGatewaysForFeeds:(unsigned long long)arg1 ;
-(void)_performPendingBulletinUpdatesForBulletinID:(id)arg1 ;
-(void)_sendBulletinUpdate:(id)arg1 ;
-(void)_enqueueBulletinUpdate:(id)arg1 ;
-(void)_sendRemoveBulletins:(id)arg1 toFeeds:(unsigned long long)arg2 shouldSync:(BOOL)arg3 ;
-(void)_clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(BOOL)arg2 ;
-(void)_removeBulletin:(id)arg1 rescheduleTimerIfAffected:(BOOL)arg2 shouldSync:(BOOL)arg3 ;
-(void)_setClearedInfo:(id)arg1 forSectionID:(id)arg2 ;
-(void)_updateAllBulletinsForDataProvider:(id)arg1 ;
-(id)_bulletinsForIDs:(id)arg1 ;
-(void)_removeBulletins:(id)arg1 forSectionID:(id)arg2 shouldSync:(BOOL)arg3 ;
-(void)_dataProviderDidClearInfo:(id)arg1 forSection:(id)arg2 ;
-(id)_allBulletinsForSectionID:(id)arg1 ;
-(void)_writeSectionInfo;
-(void)_writeClearedSections;
-(void)_sendRemoveSection:(id)arg1 ;
-(void)_sendUpdateSectionOrder;
-(id)_applicableSectionInfosForBulletin:(id)arg1 inSection:(id)arg2 ;
-(id)allBulletinIDsForSectionID:(id)arg1 ;
-(void)_sortSectionIDs:(id)arg1 usingGuideArray:(id)arg2 ;
-(id)_activeSectionIDs;
-(id)_sectionInfoArrayForSectionIDs:(id)arg1 effective:(BOOL)arg2 ;
-(id)noticesBulletinIDsForSectionID:(id)arg1 ;
-(void)_expireBulletinsAndRescheduleTimerIfNecessary;
-(void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2 ;
-(BOOL)_didNotificationCenterSettingsChangeWithSectionInfo:(id)arg1 replacingSectionInfo:(id)arg2 ;
-(void)_sendUpdateSectionInfo:(id)arg1 ;
-(void)_updateDataProviderForSectionInfo:(id)arg1 sectionID:(id)arg2 ;
-(void)_updateAllBulletinsForDataProviderIfSectionIsEnabled:(id)arg1 ;
-(void)_updateBehaviorOverridesFromSource:(unsigned long long)arg1 ;
-(void)_expireBulletins;
-(id)_nextExpireBulletinsDate;
-(void)_scheduleTimerForDate:(id)arg1 ;
-(void)deliverResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_bulletinIDsInSortedArray:(id)arg1 withDateForKey:(id)arg2 beforeCutoff:(id)arg3 ;
-(id)_newValidatedDefaultExpirationComponentsFromComponents:(id)arg1 ;
-(id)_newDateCompontentsByInvertingInterestingPartsOfComponents:(id)arg1 ;
-(void)_setDefaultExpirationComponents:(id)arg1 ;
-(id)_bulletinDefaultExpirationDateFromDate:(id)arg1 ;
-(unsigned long long)_indexForNewDate:(id)arg1 inBulletinIDArray:(id)arg2 sortedAscendingByDateForKey:(id)arg3 ;
-(id)sortDescriptorsForSectionID:(id)arg1 ;
-(void)_storeObserver:(id)arg1 forFeed:(unsigned long long)arg2 ;
-(id)_openApplicationOptionsForResponse:(id)arg1 ;
-(void)_didReceiveResponseForBulletin:(id)arg1 ;
-(void)_clearSection:(id)arg1 ;
-(void)_clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 forSection:(id)arg3 ;
-(void)_clearBulletinIDs:(id)arg1 forSectionID:(id)arg2 shouldSync:(BOOL)arg3 ;
-(id)_sectionInfoArray:(BOOL)arg1 ;
-(id)_sectionInfoArrayForActiveSections:(BOOL)arg1 ;
-(void)_sendObserver:(id)arg1 noticesBulletinsForSectionID:(id)arg2 ;
-(unsigned long long)privilegedSenderTypes;
-(id)universalSectionIDForSectionID:(id)arg1 ;
-(id)bulletinsRequestsForBulletinIDs:(id)arg1 ;
-(id)bulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 ;
-(void)_writeSectionOrder;
-(void)_sendUpdateSectionOrderRule;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(unsigned long long)effectivePushSettingsForSectionInfo:(id)arg1 ;
-(void)_setSectionInfoNoteSettingsChanged:(id)arg1 forSectionID:(id)arg2 ;
-(void)_behaviorOverrideTypesChangedFromSource:(unsigned long long)arg1 ;
-(unsigned long long)_adjustedBehaviorOverrideTypes:(unsigned long long)arg1 basedOnSystemState:(unsigned long long)arg2 ;
-(void)_sendUtilitiesActiveOverrideTypes:(unsigned long long)arg1 fromSource:(unsigned long long)arg2 ;
-(void)_sendObseversActiveOverrideTypes:(unsigned long long)arg1 state:(unsigned long long)arg2 ;
-(void)_sendSettingsGatewaysActiveOverrideTypes:(unsigned long long)arg1 fromSource:(unsigned long long)arg2 ;
-(void)_sendSettingsGatewaysActiveOverrideTypes:(unsigned long long)arg1 fromSource:(unsigned long long)arg2 activeQuietModeAssertionCount:(unsigned long long)arg3 ;
-(void)_checkPrivilegedSenderFilteringState;
-(void)_sendPrivilegedSenderTypesChangedFromSource:(unsigned long long)arg1 ;
-(void)_sendPrivilegedSenderAddressBookGroupRecordIDChangedFromSource:(unsigned long long)arg1 ;
-(BOOL)isPrivilegedSenderFilteringNecessaryForActiveBehaviorOverrides:(unsigned long long)arg1 privilegedSenderTypes:(unsigned long long)arg2 ;
-(BOOL)_isQuietModeAssertActive;
-(void)_behaviorOverrideStatusChangedFromSource:(unsigned long long)arg1 ;
-(unsigned long long)_activeQuietModeAssertionCount;
-(void)_setBehaviorOverridesTimer;
-(void)_writeBehaviorOverrides;
-(void)_invalidateAllQuietModeAssertions;
-(void)_queue_setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2 ;
-(void)_privilegedSenderTypesChangedFromSource:(unsigned long long)arg1 ;
-(void)_privilegedSenderAddressBookGroupRecordIDChangedFromSource:(unsigned long long)arg1 ;
-(BOOL)shouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(id)arg2 ;
-(void)_updateBulletinsInFeed:(unsigned long long)arg1 ifSectionIsEnabled:(id)arg2 ;
-(void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned long long)arg3 alwaysToLockScreen:(BOOL)arg4 ;
-(void)withdrawBulletinRequestsWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(void)withdrawBulletinRequestsWithPublisherBulletinID:(id)arg1 forSectionID:(id)arg2 ;
-(void)_reloadSectionParametersForSectionID:(id)arg1 ;
-(void)_reloadReloadSectionInfoForSectionID:(id)arg1 ;
-(void)_updateClearedInfoForSectionID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_updateSectionInfoForSectionID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_clearedInfoForSectionID:(id)arg1 ;
-(void)_saveUpdatedClearedInfo:(id)arg1 forSectionID:(id)arg2 ;
-(void)_saveUpdatedSectionInfo:(id)arg1 forSectionID:(id)arg2 ;
-(void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(id)_sectionIDsToMigrate;
-(void)setSectionOrderRule:(long long)arg1 ;
-(void)_migrateSectionOrder;
-(id)_defaultSectionOrders;
-(id)_defaultSectionOrderForTopLevelCollection:(id)arg1 ;
-(BOOL)_deviceSupportsFavorites;
-(void)_setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2 ;
-(void)_ensureDataDirectoryExists;
-(void)_loadBehaviorOverrides;
-(void)_loadSavedSectionInfo;
-(void)_loadClearedSections;
-(void)_loadSavedSectionOrderAndRule;
-(void)_removeVestigialSections;
-(void)_migrateLoadedData;
-(void)_migratePrivilegedSender;
-(void)_publishBulletinsForAllDataProviders;
-(void)_sortSectionIDs:(id)arg1 usingOrder:(id)arg2 ;
-(void)_resumeAllSuspendedConnections;
-(void)_updateSectionParametersForDataProvider:(id)arg1 ;
-(void)_updateBulletinsInFeed:(unsigned long long)arg1 forDataProviderIfSectionIsEnabled:(id)arg2 ;
-(id)_enabledSectionIDsForDataProvider:(id)arg1 ;
-(void)_updateBulletinsInFeed:(unsigned long long)arg1 forDataProvider:(id)arg2 enabledSectionIDs:(id)arg3 ;
-(id)_sinceDate;
-(BOOL)_verifyBulletinRequest:(id)arg1 forDataProvider:(id)arg2 ;
-(void)updateSection:(id)arg1 inFeed:(unsigned long long)arg2 withBulletinRequests:(id)arg3 ;
-(void)publishBulletinRequest:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(BOOL)arg3 ;
-(void)_addActiveSectionID:(id)arg1 ;
-(id)_bulletinsForSectionID:(id)arg1 inFeeds:(unsigned long long)arg2 ;
-(id)_clearedSectionsPath;
-(id)_behaviorOverridesPath;
-(unsigned long long)defaultPrivilegedSenderType;
-(id)_createQuietModeAssertion;
-(void)_didEffectiveSettingsChange:(id)arg1 ;
-(unsigned long long)_feedsForBulletin:(id)arg1 destinations:(unsigned long long)arg2 ;
-(id)sectionIDForUniversalSectionID:(id)arg1 ;
-(void)_loadDataProvidersAndSettings;
-(void)dpManager:(id)arg1 addDataProvider:(id)arg2 withSectionInfo:(id)arg3 ;
-(void)dpManager:(id)arg1 addParentSectionFactory:(id)arg2 ;
-(void)dpManager:(id)arg1 removeDataProviderSectionID:(id)arg2 ;
-(id)dpManager:(id)arg1 sectionInfoForSectionID:(id)arg2 ;
-(void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(BOOL)arg2 ;
-(void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(/*^block*/id)arg2 ;
-(void)getSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getBehaviorOverridesWithHandler:(/*^block*/id)arg1 ;
-(void)getBehaviorOverridesEnabledWithHandler:(/*^block*/id)arg1 ;
-(void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(/*^block*/id)arg1 ;
-(void)getBehaviorOverridesEffectiveWhileUnlockedWithHandler:(/*^block*/id)arg1 ;
-(void)getBehaviorOverridesEnabledAndEffectiveDateWithHandler:(/*^block*/id)arg1 ;
-(void)setOrderedSectionIDs:(id)arg1 ;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 ;
-(void)setBehaviorOverrideStatus:(long long)arg1 effectiveDate:(id)arg2 source:(unsigned long long)arg3 ;
-(void)setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2 ;
-(void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3 ;
-(void)setBehaviorOverridesChangeUpdatesEnabled:(BOOL)arg1 ;
-(void)setBehaviorOverridesEffectiveWhileUnlockedChangeUpdatesEnabled:(BOOL)arg1 ;
-(void)setBehaviorOverrideStatusChangeUpdatesEnabled:(BOOL)arg1 ;
-(void)setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(BOOL)arg1 ;
-(void)setActiveBehaviorOverrideTypesChangeAssertionCountUpdatesEnabled:(BOOL)arg1 ;
-(void)setPrivilegedSenderAddressBookGroupRecordIDChangeUpdatesEnabled:(BOOL)arg1 ;
-(void)setPrivilegedSenderTypesChangeUpdatesEnabled:(BOOL)arg1 ;
-(void)setBehaviorOverridesEffectiveWhileUnlocked:(BOOL)arg1 source:(unsigned long long)arg2 ;
-(void)requestQuietModeOverrideAssertionWithCompletion:(/*^block*/id)arg1 ;
-(void)syncService:(id)arg1 receivedDismissalDictionaries:(id)arg2 dismissalIDs:(id)arg3 inSection:(id)arg4 forFeeds:(unsigned long long)arg5 ;
-(BOOL)syncService:(id)arg1 shouldAbortDelayedDismissalForBulletin:(id)arg2 ;
-(id)syncService:(id)arg1 universalSectionIdentifierForSectionIdentifier:(id)arg2 ;
-(id)syncService:(id)arg1 sectionIdentifierForUniversalSectionIdentifier:(id)arg2 ;
-(void)publishBulletin:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(BOOL)arg3 ;
-(void)withdrawBulletinID:(id)arg1 ;
-(void)removeBulletinID:(id)arg1 fromNoticesSection:(id)arg2 ;
-(id)carBulletinIDsForSectionID:(id)arg1 ;
-(void)clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(BOOL)arg2 ;
-(void)_handleSystemSleep;
-(void)_handleSystemWake;
-(void)_handleSignificantTimeChange;
-(void)_expireBulletinsDueToSystemEvent:(unsigned long long)arg1 ;
-(void)_validateExpirationDateForBulletinRequest:(id)arg1 ;
-(void)observer:(id)arg1 setObserverFeed:(unsigned long long)arg2 attachToLightsAndSirensGateway:(id)arg3 ;
-(void)observer:(id)arg1 setObserverFeed:(unsigned long long)arg2 asLightsAndSirensGateway:(id)arg3 priority:(unsigned long long)arg4 ;
-(void)observer:(id)arg1 handleResponse:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)observer:(id)arg1 finishedWithBulletinID:(id)arg2 transactionID:(unsigned long long)arg3 ;
-(void)observer:(id)arg1 clearSection:(id)arg2 ;
-(void)observer:(id)arg1 clearBulletinsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4 ;
-(void)observer:(id)arg1 clearBulletinIDs:(id)arg2 inSection:(id)arg3 ;
-(void)observer:(id)arg1 removeBulletins:(id)arg2 inSection:(id)arg3 fromFeeds:(unsigned long long)arg4 ;
-(void)observer:(id)arg1 getSectionInfoWithHandler:(/*^block*/id)arg2 ;
-(void)observer:(id)arg1 getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg2 ;
-(void)observer:(id)arg1 getSectionInfoForSectionIDs:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)observer:(id)arg1 requestNoticesBulletinsForSectionID:(id)arg2 ;
-(void)requestNoticesBulletinsForAllSections:(id)arg1 ;
-(void)observer:(id)arg1 getActiveAlertBehaviorOverridesWithHandler:(/*^block*/id)arg2 ;
-(void)_noteSystemStateChanged;
-(void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned long long)arg3 ;
-(unsigned long long)_filtersForSectionID:(id)arg1 ;
-(void)_removeActiveSectionID:(id)arg1 ;
-(id)_favoritesListManager;
-(id)_effectiveSectionFiltersForBulletin:(id)arg1 ;
-(void)_assignIDToBulletinRequest:(id)arg1 ;
-(void)_updateShowsMessagePreviewForBulletin:(id)arg1 ;
-(BOOL)_sectionFiltersAllowBulletin:(id)arg1 ;
-(id)_bulletinRequestsForIDs:(id)arg1 ;
-(void)_assignIDToBulletinRequest:(id)arg1 checkAgainstBulletins:(id)arg2 ;
-(void)publishBulletinRequest:(id)arg1 destinations:(unsigned long long)arg2 ;
-(id)_addressBookPredicateForDestinationID:(id)arg1 ;
-(BOOL)_isDestinationID:(id)arg1 inAddressBookGroupWithRecordID:(int)arg2 ;
-(BOOL)_checkPersistentSenderStatusForDestinationID:(id)arg1 notificationType:(int)arg2 ;
-(BOOL)_doesAddressBookContainDestinationID:(id)arg1 ;
-(BOOL)_doesPrivilegedAddressBookGroupContainDestinationID:(id)arg1 ;
-(BOOL)_doesFavoritesListContainDestinationID:(id)arg1 ;
-(BOOL)_doesAddressBookPersonContainCallIgnoreMuteForDestinationID:(id)arg1 ;
-(void)noteOccurrenceOfEvent:(unsigned long long)arg1 ;
-(void)noteChangeOfState:(unsigned long long)arg1 newValue:(BOOL)arg2 ;
-(void)_removeSection:(id)arg1 ;
@end

