/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, GEOStyleAttributes, NSMutableArray, NSData;

@interface GEOPDBrowseCategory : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _displayString;
	NSString* _popularDisplayToken;
	NSString* _shortDisplayString;
	GEOStyleAttributes* _styleAttributes;
	NSMutableArray* _subCategorys;
	NSData* _suggestionEntryMetadata;

}

@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;                  //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayString; 
@property (nonatomic,retain) NSString * displayString;                          //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * subCategorys;                     //@synthesize subCategorys=_subCategorys - In the implementation block
@property (nonatomic,readonly) BOOL hasShortDisplayString; 
@property (nonatomic,retain) NSString * shortDisplayString;                     //@synthesize shortDisplayString=_shortDisplayString - In the implementation block
@property (nonatomic,readonly) BOOL hasPopularDisplayToken; 
@property (nonatomic,retain) NSString * popularDisplayToken;                    //@synthesize popularDisplayToken=_popularDisplayToken - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)subCategoryType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setDisplayString:(NSString *)arg1 ;
-(NSString *)displayString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasStyleAttributes;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(NSString *)shortDisplayString;
-(BOOL)hasDisplayString;
-(void)clearSubCategorys;
-(void)addSubCategory:(id)arg1 ;
-(unsigned long long)subCategorysCount;
-(id)subCategoryAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasShortDisplayString;
-(BOOL)hasPopularDisplayToken;
-(NSMutableArray *)subCategorys;
-(void)setSubCategorys:(NSMutableArray *)arg1 ;
-(void)setShortDisplayString:(NSString *)arg1 ;
-(NSString *)popularDisplayToken;
-(void)setPopularDisplayToken:(NSString *)arg1 ;
@end
