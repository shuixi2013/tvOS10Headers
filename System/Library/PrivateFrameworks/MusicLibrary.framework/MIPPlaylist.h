/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, MIPMultiverseIdentifier, MIPSmartPlaylistInfo;

@interface MIPPlaylist : PBCodable <NSCopying> {

	long long _creationDateTime;
	long long _lastPlayedDateTime;
	long long _modificationDateTime;
	long long _storeId;
	NSMutableArray* _childIdentifiers;
	NSString* _cloudGlobalId;
	NSString* _cloudVersionHash;
	int _distinguishedKind;
	NSString* _externalVendorDisplayName;
	NSString* _externalVendorIdentifier;
	NSString* _externalVendorTag;
	MIPMultiverseIdentifier* _geniusSeedTrackIdentifier;
	NSMutableArray* _items;
	NSString* _name;
	MIPMultiverseIdentifier* _parentIdentifier;
	MIPSmartPlaylistInfo* _smartPlaylistInfo;
	int _sortType;
	int _type;
	BOOL _cloudIsCuratorPlaylist;
	BOOL _cloudIsSharingDisabled;
	BOOL _cloudIsSubscribed;
	BOOL _externalVendorPlaylist;
	BOOL _hidden;
	BOOL _reversedSorting;
	SCD_Struct_MI12 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasStoreId; 
@property (assign,nonatomic) long long storeId;                                                //@synthesize storeId=_storeId - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) BOOL hidden;                                                      //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) BOOL hasSmartPlaylistInfo; 
@property (nonatomic,retain) MIPSmartPlaylistInfo * smartPlaylistInfo;                         //@synthesize smartPlaylistInfo=_smartPlaylistInfo - In the implementation block
@property (assign,nonatomic) BOOL hasSortType; 
@property (assign,nonatomic) int sortType;                                                     //@synthesize sortType=_sortType - In the implementation block
@property (assign,nonatomic) BOOL hasReversedSorting; 
@property (assign,nonatomic) BOOL reversedSorting;                                             //@synthesize reversedSorting=_reversedSorting - In the implementation block
@property (nonatomic,readonly) BOOL hasParentIdentifier; 
@property (nonatomic,retain) MIPMultiverseIdentifier * parentIdentifier;                       //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasGeniusSeedTrackIdentifier; 
@property (nonatomic,retain) MIPMultiverseIdentifier * geniusSeedTrackIdentifier;              //@synthesize geniusSeedTrackIdentifier=_geniusSeedTrackIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDistinguishedKind; 
@property (assign,nonatomic) int distinguishedKind;                                            //@synthesize distinguishedKind=_distinguishedKind - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudGlobalId; 
@property (nonatomic,retain) NSString * cloudGlobalId;                                         //@synthesize cloudGlobalId=_cloudGlobalId - In the implementation block
@property (assign,nonatomic) BOOL hasCloudIsSubscribed; 
@property (assign,nonatomic) BOOL cloudIsSubscribed;                                           //@synthesize cloudIsSubscribed=_cloudIsSubscribed - In the implementation block
@property (assign,nonatomic) BOOL hasCloudIsCuratorPlaylist; 
@property (assign,nonatomic) BOOL cloudIsCuratorPlaylist;                                      //@synthesize cloudIsCuratorPlaylist=_cloudIsCuratorPlaylist - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalVendorIdentifier; 
@property (nonatomic,retain) NSString * externalVendorIdentifier;                              //@synthesize externalVendorIdentifier=_externalVendorIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalVendorDisplayName; 
@property (nonatomic,retain) NSString * externalVendorDisplayName;                             //@synthesize externalVendorDisplayName=_externalVendorDisplayName - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalVendorTag; 
@property (nonatomic,retain) NSString * externalVendorTag;                                     //@synthesize externalVendorTag=_externalVendorTag - In the implementation block
@property (assign,nonatomic) BOOL hasExternalVendorPlaylist; 
@property (assign,nonatomic) BOOL externalVendorPlaylist;                                      //@synthesize externalVendorPlaylist=_externalVendorPlaylist - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDateTime; 
@property (assign,nonatomic) long long creationDateTime;                                       //@synthesize creationDateTime=_creationDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasModificationDateTime; 
@property (assign,nonatomic) long long modificationDateTime;                                   //@synthesize modificationDateTime=_modificationDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasLastPlayedDateTime; 
@property (assign,nonatomic) long long lastPlayedDateTime;                                     //@synthesize lastPlayedDateTime=_lastPlayedDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasCloudIsSharingDisabled; 
@property (assign,nonatomic) BOOL cloudIsSharingDisabled;                                      //@synthesize cloudIsSharingDisabled=_cloudIsSharingDisabled - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudVersionHash; 
@property (nonatomic,retain) NSString * cloudVersionHash;                                      //@synthesize cloudVersionHash=_cloudVersionHash - In the implementation block
@property (nonatomic,retain) NSMutableArray * childIdentifiers;                                //@synthesize childIdentifiers=_childIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                                           //@synthesize items=_items - In the implementation block
+(Class)childIdentifiersType;
+(Class)itemsType;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSMutableArray *)items;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)addItems:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)itemsCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hidden;
-(void)setHasHidden:(BOOL)arg1 ;
-(BOOL)hasHidden;
-(BOOL)hasName;
-(void)clearItems;
-(void)setStoreId:(long long)arg1 ;
-(void)setHasStoreId:(BOOL)arg1 ;
-(BOOL)hasStoreId;
-(long long)storeId;
-(void)addChildIdentifiers:(id)arg1 ;
-(void)setSmartPlaylistInfo:(MIPSmartPlaylistInfo *)arg1 ;
-(void)setGeniusSeedTrackIdentifier:(MIPMultiverseIdentifier *)arg1 ;
-(void)setCloudGlobalId:(NSString *)arg1 ;
-(void)setExternalVendorIdentifier:(NSString *)arg1 ;
-(void)setExternalVendorDisplayName:(NSString *)arg1 ;
-(void)setExternalVendorTag:(NSString *)arg1 ;
-(unsigned long long)childIdentifiersCount;
-(void)clearChildIdentifiers;
-(id)childIdentifiersAtIndex:(unsigned long long)arg1 ;
-(id)itemsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSmartPlaylistInfo;
-(int)sortType;
-(void)setSortType:(int)arg1 ;
-(void)setHasSortType:(BOOL)arg1 ;
-(BOOL)hasSortType;
-(id)sortTypeAsString:(int)arg1 ;
-(int)StringAsSortType:(id)arg1 ;
-(void)setReversedSorting:(BOOL)arg1 ;
-(void)setHasReversedSorting:(BOOL)arg1 ;
-(BOOL)hasReversedSorting;
-(BOOL)hasParentIdentifier;
-(BOOL)hasGeniusSeedTrackIdentifier;
-(void)setDistinguishedKind:(int)arg1 ;
-(void)setHasDistinguishedKind:(BOOL)arg1 ;
-(BOOL)hasDistinguishedKind;
-(BOOL)hasCloudGlobalId;
-(void)setCloudIsSubscribed:(BOOL)arg1 ;
-(void)setHasCloudIsSubscribed:(BOOL)arg1 ;
-(BOOL)hasCloudIsSubscribed;
-(void)setCloudIsCuratorPlaylist:(BOOL)arg1 ;
-(void)setHasCloudIsCuratorPlaylist:(BOOL)arg1 ;
-(BOOL)hasCloudIsCuratorPlaylist;
-(BOOL)hasExternalVendorIdentifier;
-(BOOL)hasExternalVendorDisplayName;
-(BOOL)hasExternalVendorTag;
-(void)setExternalVendorPlaylist:(BOOL)arg1 ;
-(void)setHasExternalVendorPlaylist:(BOOL)arg1 ;
-(BOOL)hasExternalVendorPlaylist;
-(void)setCreationDateTime:(long long)arg1 ;
-(void)setHasCreationDateTime:(BOOL)arg1 ;
-(BOOL)hasCreationDateTime;
-(void)setModificationDateTime:(long long)arg1 ;
-(void)setHasModificationDateTime:(BOOL)arg1 ;
-(BOOL)hasModificationDateTime;
-(void)setLastPlayedDateTime:(long long)arg1 ;
-(void)setHasLastPlayedDateTime:(BOOL)arg1 ;
-(BOOL)hasLastPlayedDateTime;
-(void)setCloudIsSharingDisabled:(BOOL)arg1 ;
-(void)setHasCloudIsSharingDisabled:(BOOL)arg1 ;
-(BOOL)hasCloudIsSharingDisabled;
-(BOOL)hasCloudVersionHash;
-(MIPSmartPlaylistInfo *)smartPlaylistInfo;
-(BOOL)reversedSorting;
-(MIPMultiverseIdentifier *)geniusSeedTrackIdentifier;
-(int)distinguishedKind;
-(NSString *)cloudGlobalId;
-(BOOL)cloudIsSubscribed;
-(BOOL)cloudIsCuratorPlaylist;
-(NSString *)externalVendorIdentifier;
-(NSString *)externalVendorDisplayName;
-(NSString *)externalVendorTag;
-(BOOL)externalVendorPlaylist;
-(long long)creationDateTime;
-(long long)modificationDateTime;
-(long long)lastPlayedDateTime;
-(BOOL)cloudIsSharingDisabled;
-(NSMutableArray *)childIdentifiers;
-(void)setChildIdentifiers:(NSMutableArray *)arg1 ;
-(void)setCloudVersionHash:(NSString *)arg1 ;
-(NSString *)cloudVersionHash;
-(MIPMultiverseIdentifier *)parentIdentifier;
-(void)setParentIdentifier:(MIPMultiverseIdentifier *)arg1 ;
@end

