/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse, NSMutableArray, NSString;

@interface GEORPSuggestionList : PBCodable <NSCopying> {

	GEOPDPlaceRequest* _autocompleteRequest;
	GEOPDPlaceResponse* _autocompleteResponse;
	NSMutableArray* _entrys;
	NSString* _query;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query;                                       //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSMutableArray * entrys;                                //@synthesize entrys=_entrys - In the implementation block
@property (nonatomic,readonly) BOOL hasAutocompleteRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * autocompleteRequest;                //@synthesize autocompleteRequest=_autocompleteRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasAutocompleteResponse; 
@property (nonatomic,retain) GEOPDPlaceResponse * autocompleteResponse;              //@synthesize autocompleteResponse=_autocompleteResponse - In the implementation block
+(Class)entryType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasQuery;
-(void)setQuery:(NSString *)arg1 ;
-(void)clearEntrys;
-(void)addEntry:(id)arg1 ;
-(unsigned long long)entrysCount;
-(id)entryAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAutocompleteRequest;
-(BOOL)hasAutocompleteResponse;
-(NSMutableArray *)entrys;
-(void)setEntrys:(NSMutableArray *)arg1 ;
-(GEOPDPlaceRequest *)autocompleteRequest;
-(void)setAutocompleteRequest:(GEOPDPlaceRequest *)arg1 ;
-(GEOPDPlaceResponse *)autocompleteResponse;
-(void)setAutocompleteResponse:(GEOPDPlaceResponse *)arg1 ;
@end

