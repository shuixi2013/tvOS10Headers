//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCacheDelegate.h"

@class NSArray, NSDictionary, NSString;

@interface TVSettingsRestrictionsFacade : NSObject <NSCacheDelegate>
{
}

+ (id)longDisplayNameForRestriction:(id)arg1;	// IMP=0x0000000100087958
+ (id)displayNameForRestriction:(id)arg1;	// IMP=0x0000000100087890
+ (id)sharedInstance;	// IMP=0x0000000100087810
- (id)_allDictionaryForDomain:(id)arg1;	// IMP=0x0000000100088bc8
- (id)_noneDictionaryForDomain:(id)arg1;	// IMP=0x0000000100088830
- (id)_dictionaryForDomain:(id)arg1 withRanking:(id)arg2;	// IMP=0x0000000100088454
- (id)_orderedRankingsInDomain:(id)arg1 countryCode:(id)arg2;	// IMP=0x0000000100088138
- (id)_purgableRatingsDictionary;	// IMP=0x0000000100087f94
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x0000000100087f90
@property(copy, nonatomic) NSDictionary *appRestriction;
@property(readonly, copy, nonatomic) NSArray *availableAppRestrictions;
@property(copy, nonatomic) NSDictionary *tvShowRestriction;
@property(readonly, copy, nonatomic) NSArray *availableTVShowRestrictions;
@property(copy, nonatomic) NSDictionary *movieRestriction;
@property(readonly, copy, nonatomic) NSArray *availableMovieRestrictions;
@property(readonly, copy, nonatomic) NSArray *availableContentRestrictionsCountryCodes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
