/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDSearchLocationParameters, NSString, GEOPDSearchStructureIntentRequestType, GEOPDAutocompleteEntry, NSData, GEOPDViewportInfo;

@interface GEOPDSearchParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _maxResults;
	GEOPDSearchLocationParameters* _searchLocationParameters;
	NSString* _searchString;
	GEOPDSearchStructureIntentRequestType* _searchStructureIntentType;
	int _searchType;
	int _sortOrder;
	GEOPDAutocompleteEntry* _suggestionEntry;
	NSData* _suggestionEntryMetadata;
	NSData* _suggestionMetadata;
	GEOPDViewportInfo* _viewportInfo;
	SCD_Struct_GE20 _has;

}

@property (assign,nonatomic) BOOL hasSortOrder; 
@property (assign,nonatomic) int sortOrder;                                                                  //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults;                                                            //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                                                        //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo;                                               //@synthesize viewportInfo=_viewportInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata;                                                    //@synthesize suggestionMetadata=_suggestionMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;                                               //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * suggestionEntry;                                       //@synthesize suggestionEntry=_suggestionEntry - In the implementation block
@property (assign,nonatomic) BOOL hasSearchType; 
@property (assign,nonatomic) int searchType;                                                                 //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchStructureIntentType; 
@property (nonatomic,retain) GEOPDSearchStructureIntentRequestType * searchStructureIntentType;              //@synthesize searchStructureIntentType=_searchStructureIntentType - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchLocationParameters; 
@property (nonatomic,retain) GEOPDSearchLocationParameters * searchLocationParameters;                       //@synthesize searchLocationParameters=_searchLocationParameters - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(void)setSearchString:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasViewportInfo;
-(unsigned)maxResults;
-(void)setMaxResults:(unsigned)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(int)sortOrder;
-(void)setSortOrder:(int)arg1 ;
-(void)setHasSortOrder:(BOOL)arg1 ;
-(BOOL)hasSortOrder;
-(id)sortOrderAsString:(int)arg1 ;
-(int)StringAsSortOrder:(id)arg1 ;
-(BOOL)hasSearchString;
-(int)searchType;
-(void)setSearchType:(int)arg1 ;
-(void)setHasSearchType:(BOOL)arg1 ;
-(BOOL)hasSearchType;
-(id)searchTypeAsString:(int)arg1 ;
-(int)StringAsSearchType:(id)arg1 ;
-(BOOL)hasSuggestionMetadata;
-(NSData *)suggestionMetadata;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(BOOL)hasSuggestionEntry;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(GEOPDAutocompleteEntry *)suggestionEntry;
-(void)setSuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 maxResults:(unsigned)arg5 traits:(id)arg6 ;
-(BOOL)hasSearchStructureIntentType;
-(BOOL)hasSearchLocationParameters;
-(GEOPDSearchStructureIntentRequestType *)searchStructureIntentType;
-(void)setSearchStructureIntentType:(GEOPDSearchStructureIntentRequestType *)arg1 ;
-(GEOPDSearchLocationParameters *)searchLocationParameters;
-(void)setSearchLocationParameters:(GEOPDSearchLocationParameters *)arg1 ;
@end

