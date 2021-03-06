//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString, NSURL, TVSImageProxy;

@interface TVMusicContextMenuSubject : NSObject
{
    _Bool _isInLibrary;	// 8 = 0x8
    _Bool _songHasStoreLyrics;	// 9 = 0x9
    NSString *_title;	// 16 = 0x10
    long long _sourceType;	// 24 = 0x18
    long long _mediaType;	// 32 = 0x20
    NSNumber *_identifier;	// 40 = 0x28
    long long _containerType;	// 48 = 0x30
    NSString *_containerStoreID;	// 56 = 0x38
    NSString *_containerCloudID;	// 64 = 0x40
    NSString *_artistOrCuratorName;	// 72 = 0x48
    NSString *_containerName;	// 80 = 0x50
    NSNumber *_artistPersistentID;	// 88 = 0x58
    NSNumber *_artistStoreID;	// 96 = 0x60
    NSString *_storeID;	// 104 = 0x68
    NSNumber *_albumIDForItem;	// 112 = 0x70
    NSString *_librarySongLyrics;	// 120 = 0x78
    NSURL *_artworkURL;	// 128 = 0x80
    NSDictionary *_storeArtworkDictionary;	// 136 = 0x88
    TVSImageProxy *_artworkImageProxy;	// 144 = 0x90
    id <TVSMediaItem> _songMediaItem;	// 152 = 0x98
}

@property(retain, nonatomic) id <TVSMediaItem> songMediaItem; // @synthesize songMediaItem=_songMediaItem;
@property(retain, nonatomic) TVSImageProxy *artworkImageProxy; // @synthesize artworkImageProxy=_artworkImageProxy;
@property(retain, nonatomic) NSDictionary *storeArtworkDictionary; // @synthesize storeArtworkDictionary=_storeArtworkDictionary;
@property(retain, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(retain, nonatomic) NSString *librarySongLyrics; // @synthesize librarySongLyrics=_librarySongLyrics;
@property(nonatomic) _Bool songHasStoreLyrics; // @synthesize songHasStoreLyrics=_songHasStoreLyrics;
@property(nonatomic) _Bool isInLibrary; // @synthesize isInLibrary=_isInLibrary;
@property(retain, nonatomic) NSNumber *albumIDForItem; // @synthesize albumIDForItem=_albumIDForItem;
@property(retain, nonatomic) NSString *storeID; // @synthesize storeID=_storeID;
@property(retain, nonatomic) NSNumber *artistStoreID; // @synthesize artistStoreID=_artistStoreID;
@property(retain, nonatomic) NSNumber *artistPersistentID; // @synthesize artistPersistentID=_artistPersistentID;
@property(retain, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property(retain, nonatomic) NSString *artistOrCuratorName; // @synthesize artistOrCuratorName=_artistOrCuratorName;
@property(retain, nonatomic) NSString *containerCloudID; // @synthesize containerCloudID=_containerCloudID;
@property(retain, nonatomic) NSString *containerStoreID; // @synthesize containerStoreID=_containerStoreID;
@property(nonatomic) long long containerType; // @synthesize containerType=_containerType;
@property(retain, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x000000010005d2a4
- (id)initWithTitle:(id)arg1 sourceType:(long long)arg2 mediaType:(long long)arg3 identifier:(id)arg4;	// IMP=0x000000010005cd04

@end

