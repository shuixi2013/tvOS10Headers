//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface TVHSTVSeasonsBuilder : NSObject
{
    _Bool _allowSplitSeason;	// 8 = 0x8
    _Bool _haveDuplicateEpisodeNumbers;	// 9 = 0x9
    NSMutableArray *_episodes;	// 16 = 0x10
    NSMutableDictionary *_episodesByAlbumMetadataSeasonIdentifier;	// 24 = 0x18
    NSMutableDictionary *_episodesByEpisodeNumber;	// 32 = 0x20
}

@property(retain, nonatomic) NSMutableDictionary *episodesByEpisodeNumber; // @synthesize episodesByEpisodeNumber=_episodesByEpisodeNumber;
@property(retain, nonatomic) NSMutableDictionary *episodesByAlbumMetadataSeasonIdentifier; // @synthesize episodesByAlbumMetadataSeasonIdentifier=_episodesByAlbumMetadataSeasonIdentifier;
@property(retain, nonatomic) NSMutableArray *episodes; // @synthesize episodes=_episodes;
@property(nonatomic) _Bool haveDuplicateEpisodeNumbers; // @synthesize haveDuplicateEpisodeNumbers=_haveDuplicateEpisodeNumbers;
@property(nonatomic) _Bool allowSplitSeason; // @synthesize allowSplitSeason=_allowSplitSeason;
- (void).cxx_destruct;	// IMP=0x000000010002c4e0
@property(readonly, copy, nonatomic) NSArray *seasons;
- (void)addEpisode:(id)arg1;	// IMP=0x000000010002bbdc
- (id)init;	// IMP=0x000000010002bae4

@end
