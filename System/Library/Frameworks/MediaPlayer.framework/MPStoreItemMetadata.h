/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, NSString, MPStoreArtworkRequestToken, NSNumber, NSDate, NSURL;

@interface MPStoreItemMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _downloadAssetDictionary;
	NSDictionary* _downloadMetadataDictionary;
	BOOL _hasOverrideChildStorePlatformDictionaries;
	NSArray* _overrideChildStorePlatformDictionaries;
	NSDictionary* _storePlatformDictionary;
	MPStoreItemMetadata* _parentStoreItemMetadata;

}

@property (nonatomic,copy,readonly) MPStoreItemMetadata * parentStoreItemMetadata;                       //@synthesize parentStoreItemMetadata=_parentStoreItemMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * artistName; 
@property (nonatomic,readonly) MPStoreArtworkRequestToken * artworkRequestToken; 
@property (nonatomic,copy,readonly) id artistStoreID; 
@property (nonatomic,copy,readonly) NSArray * artworkTrackIDs; 
@property (nonatomic,copy,readonly) NSString * artistUploadedContentType; 
@property (getter=isBeats1,nonatomic,readonly) BOOL beats1; 
@property (nonatomic,copy,readonly) NSArray * childrenStoreIDs; 
@property (nonatomic,copy,readonly) NSArray * childStoreItemMetadatas; 
@property (nonatomic,copy,readonly) NSString * collectionName; 
@property (nonatomic,copy,readonly) id collectionStoreID; 
@property (getter=isCompilation,nonatomic,readonly) BOOL compilation; 
@property (nonatomic,copy,readonly) NSString * composerName; 
@property (nonatomic,copy,readonly) NSString * copyrightText; 
@property (nonatomic,copy,readonly) NSString * curatorName; 
@property (nonatomic,copy,readonly) id curatorID; 
@property (nonatomic,copy,readonly) NSString * descriptionText; 
@property (nonatomic,readonly) long long discCount; 
@property (nonatomic,readonly) long long discNumber; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,copy,readonly) NSString * editorNotes; 
@property (nonatomic,copy,readonly) NSString * shortEditorNotes; 
@property (nonatomic,copy,readonly) NSDictionary * effectiveStorePlatformDictionary; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,readonly) BOOL hasArtistBiography; 
@property (nonatomic,readonly) BOOL hasLyrics; 
@property (nonatomic,readonly) BOOL hasSocialPosts; 
@property (nonatomic,copy,readonly) NSArray * genreNames; 
@property (nonatomic,readonly) BOOL isPreorder; 
@property (nonatomic,copy,readonly) NSString * itemKind; 
@property (nonatomic,readonly) MPStoreArtworkRequestToken * latestAlbumArtworkRequestToken; 
@property (nonatomic,readonly) long long movementCount; 
@property (nonatomic,copy,readonly) NSString * movementName; 
@property (nonatomic,readonly) long long movementNumber; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * offers; 
@property (nonatomic,copy,readonly) NSArray * playlistIdentifiers; 
@property (nonatomic,copy,readonly) NSNumber * popularity; 
@property (nonatomic,copy,readonly) NSDate * releaseDate; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,copy,readonly) NSString * shortName; 
@property (nonatomic,readonly) BOOL shouldBookmarkPlayPosition; 
@property (nonatomic,copy,readonly) NSString * versionHash; 
@property (nonatomic,readonly) BOOL showComposer; 
@property (nonatomic,copy,readonly) id storeID; 
@property (nonatomic,readonly) long long trackCount; 
@property (nonatomic,readonly) long long trackNumber; 
@property (nonatomic,copy,readonly) NSURL * shortURL; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * workName; 
+(BOOL)supportsSecureCoding;
+(id)storeServerCalendar;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)duration;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(NSString *)descriptionText;
-(MPStoreItemMetadata *)parentStoreItemMetadata;
-(NSString *)itemKind;
-(id)storeID;
-(NSArray *)offers;
-(NSArray *)childrenStoreIDs;
-(id)artistStoreID;
-(long long)discNumber;
-(long long)discCount;
-(NSString *)copyrightText;
-(id)initWithStorePlatformDictionary:(id)arg1 ;
-(id)artworkRequestTokenForStorePlatformDictionary:(id)arg1 ;
-(MPStoreArtworkRequestToken *)artworkRequestToken;
-(id)childStorePlatformDictionaryForStoreID:(id)arg1 ;
-(id)initWithStorePlatformDictionary:(id)arg1 parentStoreItemMetadata:(id)arg2 ;
-(id)descriptionTextWithStyle:(id)arg1 ;
-(id)editorNotesWithStyle:(id)arg1 ;
-(NSString *)artistName;
-(id)collectionStoreID;
-(NSString *)composerName;
-(NSString *)curatorName;
-(BOOL)hasArtistBiography;
-(BOOL)hasSocialPosts;
-(NSArray *)genreNames;
-(BOOL)isExplicitContent;
-(BOOL)isCompilation;
-(BOOL)isMasteredForITunes;
-(BOOL)isPreorder;
-(NSString *)movementName;
-(long long)movementCount;
-(long long)movementNumber;
-(NSArray *)playlistIdentifiers;
-(NSNumber *)popularity;
-(NSDate *)releaseDate;
-(id)_storePlatformReleaseDateFormatter;
-(NSDate *)lastModifiedDate;
-(id)_storePlatformLastModifiedDateFormatter;
-(NSString *)shortName;
-(BOOL)showComposer;
-(long long)trackCount;
-(long long)trackNumber;
-(NSString *)versionHash;
-(NSString *)workName;
-(id)_artworkRequestTokenForStorePlatformDictionary:(id)arg1 artworkKey:(id)arg2 ;
-(id)artworkRequestTokenForEditorialArtworkKind:(id)arg1 ;
-(id)artworkRequestTokenForUberArtworkKind:(id)arg1 ;
-(id)initWithDownloadAssetDictionary:(id)arg1 ;
-(NSString *)artistUploadedContentType;
-(NSArray *)artworkTrackIDs;
-(BOOL)isBeats1;
-(NSArray *)childStoreItemMetadatas;
-(id)curatorID;
-(NSString *)editorNotes;
-(NSString *)shortEditorNotes;
-(NSDictionary *)effectiveStorePlatformDictionary;
-(BOOL)hasLyrics;
-(MPStoreArtworkRequestToken *)latestAlbumArtworkRequestToken;
-(BOOL)shouldBookmarkPlayPosition;
-(NSURL *)shortURL;
-(id)childStorePlatformDictionaryForArtworkTrackID:(id)arg1 ;
-(id)flowcaseEditorialArtworkRequestToken;
-(id)brickEditorialArtworkRequestToken;
-(id)metadataByAppendingMetadata:(id)arg1 ;
-(id)metadataWithChildStorePlatformDictionaries:(id)arg1 ;
-(id)metadataWithParentMetadata:(id)arg1 ;
-(NSString *)collectionName;
@end

