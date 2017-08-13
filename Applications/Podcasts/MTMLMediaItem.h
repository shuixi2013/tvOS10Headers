//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSNumber, NSString;

@interface MTMLMediaItem : NSObject
{
    _Bool _isItunesU;	// 8 = 0x8
    _Bool _hasBeenPlayed;	// 9 = 0x9
    _Bool _isExplicit;	// 10 = 0xa
    _Bool _fromiTunes;	// 11 = 0xb
    _Bool _isMissingAsset;	// 12 = 0xc
    NSString *_artist;	// 16 = 0x10
    NSNumber *_persistentId;	// 24 = 0x18
    NSNumber *_storeTrackId;	// 32 = 0x20
    NSNumber *_storeCollectionId;	// 40 = 0x28
    NSNumber *_byteSize;	// 48 = 0x30
    NSString *_category;	// 56 = 0x38
    NSNumber *_duration;	// 64 = 0x40
    NSString *_title;	// 72 = 0x48
    NSString *_assetUrl;	// 80 = 0x50
    NSString *_uti;	// 88 = 0x58
    NSString *_guid;	// 96 = 0x60
    NSDate *_pubDate;	// 104 = 0x68
    NSNumber *_playhead;	// 112 = 0x70
    NSNumber *_playCount;	// 120 = 0x78
    NSString *_feedUrl;	// 128 = 0x80
    NSString *_podcastTitle;	// 136 = 0x88
    NSNumber *_downloadIdentifier;	// 144 = 0x90
    NSDate *_lastPlayedDate;	// 152 = 0x98
}

+ (_Bool)isMediaItemSyncedFromiTunes:(id)arg1;	// IMP=0x0000000100092fcc
+ (id)propertiesForMediaItem;	// IMP=0x0000000100092e10
+ (_Bool)isMissingAssetForItem:(id)arg1;	// IMP=0x0000000100092c94
+ (_Bool)isMissingFilePathForItem:(id)arg1;	// IMP=0x0000000100092c30
+ (id)itemWithMPMediaItem:(id)arg1;	// IMP=0x0000000100092460
@property(retain, nonatomic) NSDate *lastPlayedDate; // @synthesize lastPlayedDate=_lastPlayedDate;
@property(nonatomic) _Bool isMissingAsset; // @synthesize isMissingAsset=_isMissingAsset;
@property(nonatomic) _Bool fromiTunes; // @synthesize fromiTunes=_fromiTunes;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(retain, nonatomic) NSNumber *downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
@property(retain, nonatomic) NSString *podcastTitle; // @synthesize podcastTitle=_podcastTitle;
@property(retain, nonatomic) NSString *feedUrl; // @synthesize feedUrl=_feedUrl;
@property(retain, nonatomic) NSNumber *playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) NSNumber *playhead; // @synthesize playhead=_playhead;
@property(nonatomic) _Bool hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;
@property(retain, nonatomic) NSDate *pubDate; // @synthesize pubDate=_pubDate;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic) NSString *uti; // @synthesize uti=_uti;
@property(nonatomic) _Bool isItunesU; // @synthesize isItunesU=_isItunesU;
@property(retain, nonatomic) NSString *assetUrl; // @synthesize assetUrl=_assetUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSNumber *byteSize; // @synthesize byteSize=_byteSize;
@property(retain, nonatomic) NSNumber *storeCollectionId; // @synthesize storeCollectionId=_storeCollectionId;
@property(retain, nonatomic) NSNumber *storeTrackId; // @synthesize storeTrackId=_storeTrackId;
@property(retain, nonatomic) NSNumber *persistentId; // @synthesize persistentId=_persistentId;
@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
- (void).cxx_destruct;	// IMP=0x00000001000935e4
- (id)description;	// IMP=0x0000000100092d44

@end
