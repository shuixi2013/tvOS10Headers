/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSMutableOrderedSet, PLGenericAlbum, NSURL;

@interface PLPersistedAlbumMetadata : NSObject {

	BOOL _pinned;
	BOOL _inTrash;
	BOOL _customSortAscending;
	BOOL _allowsOverwite;
	BOOL _isFolder;
	int _customSortKey;
	NSString* _title;
	NSString* _uuid;
	NSString* _cloudGUID;
	NSNumber* _kind;
	NSString* _customKeyAssetUUID;
	NSMutableOrderedSet* _assetUUIDs;
	PLGenericAlbum* _genericAlbum;
	NSURL* _metadataURL;

}

@property (nonatomic,retain) PLGenericAlbum * genericAlbum;                 //@synthesize genericAlbum=_genericAlbum - In the implementation block
@property (nonatomic,retain) NSURL * metadataURL;                           //@synthesize metadataURL=_metadataURL - In the implementation block
@property (nonatomic,retain) NSString * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * cloudGUID;                          //@synthesize cloudGUID=_cloudGUID - In the implementation block
@property (nonatomic,retain) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSNumber * kind;                               //@synthesize kind=_kind - In the implementation block
@property (assign,getter=isPinned,nonatomic) BOOL pinned;                   //@synthesize pinned=_pinned - In the implementation block
@property (assign,getter=isInTrash,nonatomic) BOOL inTrash;                 //@synthesize inTrash=_inTrash - In the implementation block
@property (assign,nonatomic) BOOL customSortAscending;                      //@synthesize customSortAscending=_customSortAscending - In the implementation block
@property (assign,nonatomic) int customSortKey;                             //@synthesize customSortKey=_customSortKey - In the implementation block
@property (nonatomic,retain) NSString * customKeyAssetUUID;                 //@synthesize customKeyAssetUUID=_customKeyAssetUUID - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * assetUUIDs;              //@synthesize assetUUIDs=_assetUUIDs - In the implementation block
@property (nonatomic,readonly) BOOL isFolder;                               //@synthesize isFolder=_isFolder - In the implementation block
@property (assign,nonatomic) BOOL allowsOverwite;                           //@synthesize allowsOverwite=_allowsOverwite - In the implementation block
+(BOOL)isValidPath:(id)arg1 ;
+(BOOL)isFolderMetadataPath:(id)arg1 ;
+(BOOL)_isAlbumMetadataExtension:(id)arg1 ;
+(BOOL)_isFolderMetadataExtension:(id)arg1 ;
+(BOOL)isAlbumMetadataPath:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(BOOL)isPinned;
-(void)setPinned:(BOOL)arg1 ;
-(NSNumber *)kind;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)cloudGUID;
-(void)setCloudGUID:(NSString *)arg1 ;
-(BOOL)isFolder;
-(BOOL)isInTrash;
-(id)initWithPersistedDataAtURL:(id)arg1 ;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg1 ;
-(void)updateChildrenOrderingInAlbum:(id)arg1 includePendingAssetChanges:(BOOL)arg2 ;
-(void)setKind:(NSNumber *)arg1 ;
-(void)_readMetadata;
-(void)_saveMetadata;
-(NSURL *)metadataURL;
-(void)setMetadataURL:(NSURL *)arg1 ;
-(id)initWithPLGenericAlbum:(id)arg1 ;
-(void)persistAlbumData;
-(void)removePersistedAlbumData;
-(id)initWithTitle:(id)arg1 uuid:(id)arg2 cloudGUID:(id)arg3 kind:(id)arg4 assetUUIDs:(id)arg5 ;
-(void)setAllowsOverwite:(BOOL)arg1 ;
-(void)setCustomSortAscending:(BOOL)arg1 ;
-(BOOL)customSortAscending;
-(int)customSortKey;
-(void)setCustomSortKey:(int)arg1 ;
-(void)setInTrash:(BOOL)arg1 ;
-(void)setAssetUUIDs:(NSMutableOrderedSet *)arg1 ;
-(void)setCustomKeyAssetUUID:(NSString *)arg1 ;
-(void)setGenericAlbum:(PLGenericAlbum *)arg1 ;
-(id)extensionForKind:(id)arg1 ;
-(NSMutableOrderedSet *)assetUUIDs;
-(NSString *)customKeyAssetUUID;
-(BOOL)allowsOverwite;
-(PLGenericAlbum *)genericAlbum;
@end

