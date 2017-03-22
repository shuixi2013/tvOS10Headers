/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, GEOStructuredAddress, GEOPDViewportInfo;

@interface GEOPDGeocodingParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _maxResults;
	NSString* _queryString;
	GEOStructuredAddress* _structuredAddress;
	GEOPDViewportInfo* _viewportInfo;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,readonly) BOOL hasQueryString; 
@property (nonatomic,retain) NSString * queryString;                                //@synthesize queryString=_queryString - In the implementation block
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults;                                   //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo;                      //@synthesize viewportInfo=_viewportInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasStructuredAddress; 
@property (nonatomic,retain) GEOStructuredAddress * structuredAddress;              //@synthesize structuredAddress=_structuredAddress - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasStructuredAddress;
-(GEOStructuredAddress *)structuredAddress;
-(void)setStructuredAddress:(GEOStructuredAddress *)arg1 ;
-(BOOL)hasViewportInfo;
-(unsigned)maxResults;
-(void)setMaxResults:(unsigned)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasQueryString;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(id)initWithForwardGeocodeAddress:(id)arg1 addressString:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
@end

