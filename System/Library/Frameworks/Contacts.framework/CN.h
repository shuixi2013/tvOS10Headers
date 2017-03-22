/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CN : NSObject
+(id)instantMessagAddressesDescription;
+(/*^block*/id)phoneNumberToStringTransform;
+(/*^block*/id)postalAddressToDictionaryTransform;
+(/*^block*/id)socialProfileToDictionaryTransform;
+(/*^block*/id)instantMessageAddressToDictionaryTransform;
+(/*^block*/id)relatedContactToStringTransform;
+(/*^block*/id)socialProfileFromDictionaryTransform;
+(/*^block*/id)instantMessageAddressFromDictionaryTransform;
+(/*^block*/id)postalAddressFromDictionaryTransform;
+(/*^block*/id)phoneNumberFromStringTransform;
+(/*^block*/id)relatedContactFromStringTransform;
+(id)containerIdentifierDescription;
+(id)containeriOSLegacyIdentifierDescription;
+(id)containerNameDescription;
+(id)containerTypeDescription;
+(id)containerEnabledDescription;
+(id)allContainerProperties;
+(id)writableContainerProperties;
+(id)unifyContacts:(id)arg1 includingMainStoreContacts:(BOOL)arg2 ;
+(id)unifyMultivalues:(id)arg1 forProperty:(id)arg2 ;
+(BOOL)areValidGregorianDayComponents:(id)arg1 error:(id*)arg2 ;
+(/*^block*/id)dateComponentsFromDictionaryTransform;
+(BOOL)areValidNonGregorianDayComponents:(id)arg1 error:(id*)arg2 ;
+(/*^block*/id)socialProfileToFoundationProfileTransform;
+(id)writableContactProperties;
+(BOOL)areValidKeyPaths:(id)arg1 forObject:(id)arg2 expectedClasses:(id)arg3 allowNil:(id)arg4 error:(id*)arg5 ;
+(unsigned long long)indexOfPreferredContactsForUnifying:(id)arg1 includingMainStoreContacts:(BOOL)arg2 ;
+(id)identifierMapForUnifiedContact:(id)arg1 backingContacts:(id)arg2 ;
+(id)identifierMapForUnifiedMultiValue:(id)arg1 backingMultiValues:(id)arg2 forProperty:(id)arg3 ;
+(unsigned long long)indexOfUnifiedIdentifier:(id)arg1 onNonUnifiedMultiValue:(id)arg2 withIdentifierMap:(id)arg3 ;
+(void)addLinkedIdentifier:(id)arg1 toLabeledValue:(id)arg2 ;
+(id)unifyContactMatchInfos:(id)arg1 linkedContacts:(id)arg2 ;
+(id)groupIdentifiersByLabeledValue:(id)arg1 forProperty:(id)arg2 ;
+(id)imageDataDescription;
+(id)cropRectDescription;
+(id)thumbnailImageDataDescription;
+(id)preferredLikenessSourceDescription;
+(id)preferredApplePersonaIdentifierDescription;
+(id)fullscreenImageDataDescription;
+(id)writableSingleValueContactProperties;
+(id)namePrefixDescription;
+(id)givenNameDescription;
+(id)middleNameDescription;
+(id)familyNameDescription;
+(id)nameSuffixDescription;
+(id)preferredForNameDescription;
+(id)preferredForImageDescription;
+(id)writableMultiValueContactProperties;
+(id)contactPropertiesByKey;
+(id)identifierDescription;
+(id)iOSLegacyIdentifierDescription;
+(Class)defaultDataMapperClass;
+(BOOL)isEmptyNameContact:(id)arg1 phonetic:(BOOL)arg2 includingPrefixAndSuffix:(BOOL)arg3 ;
+(id)localizedPhoneticNameDelimiterForContact:(id)arg1 ;
+(id)localizedNameDelimiterForContact:(id)arg1 ;
+(id)orderForContactPhoneticName:(id)arg1 ;
+(id)orderForContactName:(id)arg1 ;
+(id)phoneticOrganizationNameDescription;
+(id)organizationNameDescription;
+(id)nicknameDescription;
+(id)phoneticGivenNameDescription;
+(id)phoneticFamilyNameDescription;
+(id)phoneticMiddleNameDescription;
+(id)allContactProperties;
+(id)writableAlwaysFetchedProperties;
+(/*^block*/id)nullTransform;
+(id)alwaysFetchedProperties;
+(id)phoneNumbersDescription;
+(id)emailAddressesDescription;
+(id)allContactPropertyKeys;
+(id)requiredPropertiesForNameScriptDetection;
+(id)previousFamilyNameDescription;
+(id)pronunciationGivenNameDescription;
+(id)pronunciationFamilyNameDescription;
+(id)sectionForSortingByFamilyNameDescription;
+(id)sectionForSortingByGivenNameDescription;
+(id)departmentDescription;
+(id)jobTitleDescription;
+(id)birthdayDescription;
+(id)nonGregorianBirthdayDescription;
+(id)modificationDateDescription;
+(id)noteDescription;
+(id)imageDataAvailableDescription;
+(id)linkIdentifierDescription;
+(id)contactTypeDescription;
+(id)urlAddressesDescription;
+(id)datesDescription;
+(id)contactRelationsDescription;
+(id)socialProfilesDescription;
+(id)postalAddressesDescription;
+(id)phonemeDataDescription;
+(id)textAlertDescription;
+(id)callAlertDescription;
+(id)mapsDataDescription;
+(id)calendarURIsDescription;
+(id)allImageDataProperties;
+(id)allPhoneticNameComponentProperties;
+(id)allImageDataPropertyKeys;
+(id)allNameComponentRelatedProperties;
+(id)singleValueContactProperties;
+(id)multiValueContactProperties;
+(/*^block*/id)dateComponentsToDictionaryTransform;
+(BOOL)areValidDayComponents:(id)arg1 error:(id*)arg2 ;
+(id)joinNonEmptyContactProperties:(id)arg1 onContact:(id)arg2 withDelimiter:(id)arg3 ;
+(id)requiredPropertiesForPhoneticNameScriptDetection;
+(id)orderForContactName:(id)arg1 phonetic:(BOOL)arg2 ;
+(BOOL)hasContactChineseJapaneseKoreanPhoneticName:(id)arg1 ;
+(BOOL)hasContactChineseJapaneseKoreanName:(id)arg1 ;
+(id)joinNonEmptyContactProperties:(id)arg1 onContact:(id)arg2 ;
@end

