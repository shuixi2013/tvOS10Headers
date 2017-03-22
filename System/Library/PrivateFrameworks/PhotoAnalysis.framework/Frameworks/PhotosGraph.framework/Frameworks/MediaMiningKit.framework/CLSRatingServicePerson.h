/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSRatingService.h>

@class NSArray;

@interface CLSRatingServicePerson : CLSRatingService {

	float _contactsWeight;
	float _meWeight;
	float _othersWeight;
	float _relationshipsWeight;
	float _birthdayCountWeight;
	float _homeAddressCountWeight;
	float _workAddressCountWeight;
	float _facebookCountWeight;
	float _linkedInCountWeight;
	float _companyNameCountWeight;
	float _anniversaryCountWeight;
	float _fullNameWeight;
	float _firstNameWeight;
	float _lastNameWeight;
	float _middleNameWeight;
	float _nicknameWeight;
	float _birthdayWeight;
	float _anniversaryWeight;
	float _companyNameWeight;
	float _homeAddressesWeight;
	float _workAddressesWeight;
	float _emailAddressesWeight;
	float _relationshipWeight;
	float _genderWeight;
	float _socialProfilesWeight;
	float _facebookWeight;
	float _linkedInWeight;
	float _familyWeight;
	float _coworkerWeight;
	float _contactsLimit;
	float _relationshipsLimit;
	float _emailAddressesLimit;
	float _familyLimit;
	float _coworkerLimit;
	NSArray* _mePersons;
	NSArray* _allPersons;

}
-(id)init;
-(id)_allPersons;
-(id)rateForProperties:(id)arg1 withWeight:(float)arg2 andOperation:(id)arg3 ;
-(id)initWithPlist:(id)arg1 ;
-(void)setWeightsAndLimits:(id)arg1 ;
-(id)absoluteRateWithWeight:(float)arg1 andOperation:(id)arg2 ;
-(id)_socialService;
-(void)_setThresholdsWithPlistDictionary:(id)arg1 ;
-(id)_mePersons;
-(void)_setWeightsAndLimitsWithPlistDictionary:(id)arg1 ;
-(id)_countingRatesForPersons:(id)arg1 withProperties:(id)arg2 andLimit:(float)arg3 ;
-(id)_rateForPerson:(id)arg1 forProperties:(id)arg2 withWeight:(float)arg3 ;
-(id)_countingRelationshipsRatesForPersons:(id)arg1 withProperties:(id)arg2 andLimit:(float)arg3 ;
-(id)_missingPropertiesForPerson:(id)arg1 ;
@end

