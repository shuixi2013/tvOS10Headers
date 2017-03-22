/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNDataMapper <NSObject>
@optional
-(id)contactIdentifiersForFetchRequest:(id)arg1 error:(id*)arg2;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
-(BOOL)registerClientForChangeHistory:(id)arg1 error:(id*)arg2;
-(BOOL)unregisterClientForChangeHistory:(id)arg1 error:(id*)arg2;
-(id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2;
-(BOOL)clearChangeHistoryForClient:(id)arg1 toSequenceNumber:(long long)arg2 error:(id*)arg3;
-(id)identifierWithError:(id*)arg1;
-(id)batchEnumeratorForFetchRequest:(id)arg1;
-(id)contactsWithIdentifiers:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
-(id)groupsWithIdentifiers:(id)arg1 error:(id*)arg2;
-(BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4;
-(id)descriptorForRequiredKeysForMatchingDictionary;
-(id)matchingDictionaryForContact:(id)arg1;
-(id)contactIdentifierWithMatchingDictionary:(id)arg1;
-(id)_allCustomProperties;
-(id)_createInfo;
-(id)_customPropertyValuesForRecordWithIdentifier:(id)arg1 error:(id*)arg2;
-(id)_groupsMatchingCoreDataPredicate:(id)arg1 error:(id*)arg2;
-(id)_infosForAccountsWithIdentifiers:(id)arg1 error:(id*)arg2;
-(id)_persistentStoreURLForRecordWithIdentifier:(id)arg1;
-(BOOL)_saveAddedCustomProperties:(id)arg1 deletedCustomProperties:(id)arg2 error:(id*)arg3;
-(BOOL)_saveCustomPropertyValuesForRemoteRecords:(id)arg1 error:(id*)arg2;
-(id)_smartGroupsForAccountsWithIdentifiers:(id)arg1 contactStore:(id)arg2;
-(id)_smartGroupsMatchingPredicate:(id)arg1 contactStore:(id)arg2;
-(id)userActivityUserInfoForContact:(id)arg1;
-(id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2;
-(id)unifiedContactCountWithError:(id*)arg1;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(void)setNotificationSource:(id)arg1;
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;

@required
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2;
-(id)meContactIdentifierWithError:(id*)arg1;
-(id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;
-(BOOL)requestAccessForEntityType:(long long)arg1 error:(id*)arg2;
-(id)contactsForFetchRequest:(id)arg1 matchInfos:(id*)arg2 error:(id*)arg3;
-(BOOL)executeSaveRequest:(id)arg1 response:(id*)arg2 error:(id*)arg3;
-(id)contactsForFetchRequest:(id)arg1 error:(id*)arg2;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
-(id)defaultContainerIdentifier;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
-(id)initWithContactsEnvironment:(id)arg1;
-(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2;

@end

