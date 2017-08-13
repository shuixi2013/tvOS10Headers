//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "IMMetricsDataSource.h"

@class MTPodcast, NSAttributedString, NSSet, NSString;

@interface MTEpisode : NSManagedObject <IMMetricsDataSource>
{
}

+ (void)parseAndPersistHTMLDescriptionIfNeededForEpisodeUuid:(id)arg1;	// IMP=0x000000010001830c
+ (_Bool)isSaveSupported;	// IMP=0x0000000100017a5c
+ (long long)downloadSizeLimitForEpisode:(id)arg1;	// IMP=0x0000000100017990
+ (id)timeRemainingStringForEpisode:(id)arg1 abbreviated:(_Bool)arg2;	// IMP=0x00000001000177b8
+ (id)timeRemainingStringForEpisode:(id)arg1;	// IMP=0x00000001000177a8
+ (id)friendlyPubDateStringForEpisode:(id)arg1 abbreviated:(_Bool)arg2;	// IMP=0x00000001000176f0
+ (id)friendlyPubDateStringForEpisode:(id)arg1;	// IMP=0x00000001000176e0
+ (id)dateLabelDescriptionForEpisode:(id)arg1 download:(id)arg2;	// IMP=0x0000000100016f74
+ (id)episodeWithEnclosureURL:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x0000000100016d90
+ (id)episodeWithMetadataIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x0000000100016bb8
+ (id)insertNewEpisodeInManagedObjectContext:(id)arg1;	// IMP=0x0000000100016a48
+ (id)formattedStringCache;	// IMP=0x00000001000169f0
+ (_Bool)isPlayhead:(double)arg1 resumableForDuration:(double)arg2;	// IMP=0x00000001000bf10c
+ (double)endOfTrackForDuration:(double)arg1;	// IMP=0x00000001000bf0ec
+ (id)predicateForPodcastIsHidden:(_Bool)arg1;	// IMP=0x00000001000bf05c
+ (id)predicateForEpisodesOnUnplayedTabOnPodcastUuid:(id)arg1 ctx:(id)arg2;	// IMP=0x0000000100141dc8
+ (id)predicateForUserEpisodesOnPodcastUuid:(id)arg1 ctx:(id)arg2;	// IMP=0x0000000100141b60
+ (id)predicateForEpisodeStoreTrackId:(long long)arg1;	// IMP=0x0000000100141a64
+ (id)predicateForNewEpisodesOnPodcastUuid:(id)arg1;	// IMP=0x00000001001419d4
+ (id)predicateForEpisodesPublishedThisMonth;	// IMP=0x00000001001417ac
+ (id)predicateForEpisodesPublishedThisWeek;	// IMP=0x0000000100141584
+ (id)predicateForEpisodesPublishedToday;	// IMP=0x00000001001413d0
+ (id)predicateForUserEpisodesOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(_Bool)arg3;	// IMP=0x00000001001412b0
+ (id)predicateForEpisodesOnSavedTabForPodcastUuid:(id)arg1;	// IMP=0x00000001001411c8
+ (id)predicateForEpisodesInFeedForPodcastUuid:(id)arg1;	// IMP=0x0000000100141138
+ (id)predicateForEpisodesOnUnplayedTabOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(_Bool)arg3;	// IMP=0x0000000100141004
+ (id)predicateForEpisodesFromiTunesOnPodcastUuid:(id)arg1;	// IMP=0x0000000100140f74
+ (id)predicateForRecentlyPlayedEpisodesToBeDeletedOnPodcastUuid:(id)arg1 deletePlayedEpisodes:(_Bool)arg2;	// IMP=0x0000000100140db8
+ (id)predicateForOtherEpisodesOnPodcastUuid:(id)arg1 limittedEpisodesPredicate:(id)arg2 deletePlayedEpisodes:(_Bool)arg3;	// IMP=0x0000000100140afc
+ (id)predicateForEpisodesImportedAfterDate:(id)arg1;	// IMP=0x0000000100140a94
+ (id)predicateForPersitentId:(id)arg1;	// IMP=0x0000000100140a54
+ (id)predicateForEpisodeGuid:(id)arg1;	// IMP=0x0000000100140a14
+ (id)predicateForEpisodeUuid:(id)arg1;	// IMP=0x00000001001409d4
+ (id)predicateForRecentlyPlayed;	// IMP=0x0000000100140880
+ (id)predicateForExternalType:(_Bool)arg1;	// IMP=0x00000001001407f0
+ (id)predicateForMetadataFirstSyncEligible:(_Bool)arg1;	// IMP=0x0000000100140760
+ (id)predicateForAudio:(_Bool)arg1;	// IMP=0x00000001001406d0
+ (id)predicateForVideo:(_Bool)arg1;	// IMP=0x0000000100140640
+ (id)predicateForFeedDeleted:(_Bool)arg1;	// IMP=0x00000001001405b0
+ (id)predicateForFromiTunes:(_Bool)arg1;	// IMP=0x0000000100140520
+ (id)predicateForDownloaded:(_Bool)arg1;	// IMP=0x00000001001404b8
+ (id)predicateForPlayStateManuallySet:(_Bool)arg1;	// IMP=0x0000000100140428
+ (id)predicateForEpisodesOnUnplayedTab;	// IMP=0x0000000100140394
+ (id)predicateForBacklog:(_Bool)arg1;	// IMP=0x0000000100140304
+ (id)predicateForSavedTab:(_Bool)arg1;	// IMP=0x0000000100140214
+ (id)predicateForUnplayedTabFlag:(_Bool)arg1;	// IMP=0x0000000100140184
+ (id)predicateForPlayed:(_Bool)arg1;	// IMP=0x0000000100140088
+ (id)predicateForExplicit:(_Bool)arg1;	// IMP=0x000000010013fff8
+ (id)predicateForSentNotification:(_Bool)arg1;	// IMP=0x000000010013ff68
+ (id)predicateForIsNew:(_Bool)arg1;	// IMP=0x000000010013fed8
+ (id)predicateForSuppressAutoDownload:(_Bool)arg1;	// IMP=0x000000010013fe48
+ (id)predicateForSaved:(_Bool)arg1;	// IMP=0x000000010013fdb8
+ (id)predicateForSavedEpisodesOnPodcastUuid:(id)arg1;	// IMP=0x000000010013fd28
+ (id)predicateForAllEpisodesOnPodcastUuid:(id)arg1;	// IMP=0x000000010013fce8
+ (id)predicateForLimittedEpisodesOnPodcastUuid:(id)arg1 determinedByLimit:(long long)arg2 deletePlayedEpisodes:(_Bool)arg3;	// IMP=0x000000010013fb10
+ (id)predicateForEpisodesDeterminedByLimitSettings:(long long)arg1;	// IMP=0x000000010013f918
+ (id)userDefaultPropertiesAffectingPredicates;	// IMP=0x000000010013f854
+ (id)artworkForEpisodeUuid:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x000000010015af8c
- (id)metricsContentIdentifier;	// IMP=0x0000000100019ab4
@property(nonatomic) long long storeTrackId; // @dynamic storeTrackId;
- (_Bool)isCurrentPlayerItem;	// IMP=0x0000000100019978
- (_Bool)isSaved;	// IMP=0x000000010001996c
@property(nonatomic) _Bool saved; // @dynamic saved;
- (void)setNew:(_Bool)arg1 source:(int)arg2;	// IMP=0x00000001000196b0
@property(nonatomic) double lastDatePlayed; // @dynamic lastDatePlayed;
@property(nonatomic) float playhead; // @dynamic playhead;
- (void)setPlayState:(long long)arg1 manually:(_Bool)arg2 source:(int)arg3;	// IMP=0x0000000100018fac
- (void)setPlayed:(_Bool)arg1 manually:(_Bool)arg2 source:(int)arg3;	// IMP=0x0000000100018f94
- (void)incremementPlayCount;	// IMP=0x0000000100018f5c
@property(nonatomic) long long playCount; // @dynamic playCount;
@property(retain, nonatomic) MTPodcast *podcast; // @dynamic podcast;
@property(nonatomic) _Bool metadataFirstSyncEligible; // @dynamic metadataFirstSyncEligible;
- (void)updateUPPTimestamp;	// IMP=0x0000000100018c80
- (void)updateUPPIdentifierIfNeeded;	// IMP=0x0000000100018b5c
@property(nonatomic) long long persistentID; // @dynamic persistentID;
@property(retain, nonatomic) NSString *assetURL; // @dynamic assetURL;
- (_Bool)isMedia;	// IMP=0x0000000100018870
@property(retain, nonatomic) NSString *uti; // @dynamic uti;
- (_Bool)isExternalType;	// IMP=0x0000000100018774
- (_Bool)isAudio;	// IMP=0x0000000100018768
- (_Bool)isVideo;	// IMP=0x000000010001875c
- (void)_setValue:(id)arg1 forKey:(id)arg2 asynchronously:(_Bool)arg3;	// IMP=0x00000001000184dc
- (id)lazyDescriptionWithHTML:(_Bool)arg1;	// IMP=0x00000001000181f8
@property(retain, nonatomic) NSString *itemDescription; // @dynamic itemDescription;
- (_Bool)isInPodcastDetailsUnplayedTab;	// IMP=0x0000000100017f54
- (_Bool)isUserEpisode;	// IMP=0x0000000100017e54
- (_Bool)isDownloadable;	// IMP=0x0000000100017d70
- (unsigned long long)reasonForNotPlayable;	// IMP=0x0000000100017d54
- (_Bool)isPlayable;	// IMP=0x0000000100017d30
- (_Bool)isRestricted;	// IMP=0x0000000100017ce0
@property(retain, nonatomic) NSString *author; // @dynamic author;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *guid; // @dynamic guid;
- (id)displayURL;	// IMP=0x00000001000bf560
- (id)playURL;	// IMP=0x00000001000bf470
- (_Bool)isExplicit;	// IMP=0x00000001000bf404
- (_Bool)isLatestEpisodeInPodcast;	// IMP=0x00000001000bf160
- (_Bool)hasValidDownloadManagerPath;	// IMP=0x00000001000bef40
- (id)bestUrl;	// IMP=0x00000001000bee5c
- (_Bool)isDownloaded;	// IMP=0x00000001000bedfc
- (_Bool)isPlayheadResumable;	// IMP=0x00000001000bed9c
- (double)endOfTrack;	// IMP=0x00000001000bed64
- (double)timeRemaining;	// IMP=0x00000001000bed18
- (double)playbackProgress;	// IMP=0x00000001000becb0
- (_Bool)isPartiallyPlayedBackCatalogItem;	// IMP=0x00000001000bec5c
- (_Bool)isBackCatalogItem;	// IMP=0x00000001000bec04
- (_Bool)isVisuallyPlayed;	// IMP=0x00000001000bebd0
- (_Bool)isUnplayed;	// IMP=0x00000001000bebac
- (_Bool)isPartiallyPlayed;	// IMP=0x00000001000beb88
- (_Bool)isPlayed;	// IMP=0x00000001000beb64
- (id)bestDescription;	// IMP=0x00000001000beafc
- (id)bestTitle;	// IMP=0x00000001000bea88
- (_Bool)isEpisodeVisited;	// IMP=0x00000001000e6318
- (id)playStatusImageForDarkBackground:(_Bool)arg1;	// IMP=0x000000010015b2d4
- (id)playStatusImageForTheme:(id)arg1;	// IMP=0x000000010015b1bc
- (id)playStatusImage;	// IMP=0x000000010015b1ac
- (id)artworkWithSize:(struct CGSize)arg1;	// IMP=0x000000010015b090

// Remaining properties
@property(nonatomic) _Bool audio; // @dynamic audio;
@property(nonatomic) _Bool backCatalog; // @dynamic backCatalog;
@property(nonatomic) long long byteSize; // @dynamic byteSize;
@property(retain, nonatomic) NSString *category; // @dynamic category;
@property(retain, nonatomic) NSString *cleanedTitle; // @dynamic cleanedTitle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) double downloadDate; // @dynamic downloadDate;
@property(retain, nonatomic) NSString *downloadManagerPath; // @dynamic downloadManagerPath;
@property(retain, nonatomic) NSString *downloadPath; // @dynamic downloadPath;
@property(nonatomic) double duration; // @dynamic duration;
@property(retain, nonatomic) NSString *enclosureURL; // @dynamic enclosureURL;
@property(nonatomic) long long episodeLevel; // @dynamic episodeLevel;
@property(nonatomic) _Bool explicit; // @dynamic explicit;
@property(nonatomic) _Bool externalType; // @dynamic externalType;
@property(nonatomic) _Bool feedDeleted; // @dynamic feedDeleted;
@property(nonatomic) long long flags; // @dynamic flags;
@property(nonatomic) _Bool fromiTunes; // @dynamic fromiTunes;
@property(nonatomic) _Bool hasBeenPlayed; // @dynamic hasBeenPlayed;
@property(readonly) unsigned long long hash;
@property(nonatomic) double importDate; // @dynamic importDate;
@property(nonatomic) int importSource; // @dynamic importSource;
@property(readonly, nonatomic) _Bool isNew; // @dynamic isNew;
@property(readonly, nonatomic) long long isNewSource; // @dynamic isNewSource;
@property(nonatomic) _Bool itemDescriptionHasHTML; // @dynamic itemDescriptionHasHTML;
@property(retain, nonatomic) NSAttributedString *itemDescriptionWithHTML; // @dynamic itemDescriptionWithHTML;
@property(retain, nonatomic) NSString *itemDescriptionWithoutHTML; // @dynamic itemDescriptionWithoutHTML;
@property(nonatomic) double lastUserMarkedAsPlayedDate; // @dynamic lastUserMarkedAsPlayedDate;
@property(nonatomic) _Bool manuallyAdded; // @dynamic manuallyAdded;
@property(retain, nonatomic) NSString *metadataIdentifier; // @dynamic metadataIdentifier;
@property(nonatomic) double metadataTimestamp; // @dynamic metadataTimestamp;
@property(retain, nonatomic) NSString *mimeType; // @dynamic mimeType;
@property(readonly, nonatomic) long long playState; // @dynamic playState;
@property(nonatomic) double playStateLastModifiedDate; // @dynamic playStateLastModifiedDate;
@property(readonly, nonatomic) _Bool playStateManuallySet; // @dynamic playStateManuallySet;
@property(readonly, nonatomic) long long playStateSource; // @dynamic playStateSource;
@property(retain, nonatomic) NSSet *playlists; // @dynamic playlists;
@property(retain, nonatomic) NSString *podcastUuid; // @dynamic podcastUuid;
@property(nonatomic) double pubDate; // @dynamic pubDate;
@property(nonatomic) _Bool sentNotification; // @dynamic sentNotification;
@property(retain, nonatomic) NSSet *settings; // @dynamic settings;
@property(readonly) Class superclass;
@property(nonatomic) _Bool suppressAutoDownload; // @dynamic suppressAutoDownload;
@property(nonatomic) long long trackNum; // @dynamic trackNum;
@property(nonatomic) _Bool unplayedTab; // @dynamic unplayedTab;
@property(nonatomic) _Bool userDeleted; // @dynamic userDeleted;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(nonatomic) _Bool video; // @dynamic video;
@property(nonatomic) _Bool visible; // @dynamic visible;

@end
