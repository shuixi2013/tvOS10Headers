/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDPlaceRequest, NSString;

@interface GEOPlaceDataCacheLogMessage : PBCodable <NSCopying> {

	GEOPDPlaceRequest* _placeDataRequest;
	NSString* _placeDataRequestingAppIdentifier;

}

@property (nonatomic,readonly) BOOL hasPlaceDataRequestingAppIdentifier; 
@property (nonatomic,retain) NSString * placeDataRequestingAppIdentifier;              //@synthesize placeDataRequestingAppIdentifier=_placeDataRequestingAppIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceDataRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * placeDataRequest;                     //@synthesize placeDataRequest=_placeDataRequest - In the implementation block
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
-(BOOL)hasPlaceDataRequestingAppIdentifier;
-(NSString *)placeDataRequestingAppIdentifier;
-(void)setPlaceDataRequestingAppIdentifier:(NSString *)arg1 ;
-(BOOL)hasPlaceDataRequest;
-(GEOPDPlaceRequest *)placeDataRequest;
-(void)setPlaceDataRequest:(GEOPDPlaceRequest *)arg1 ;
@end

