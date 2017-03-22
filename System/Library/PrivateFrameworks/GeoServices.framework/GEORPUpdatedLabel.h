/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng, NSString;

@interface GEORPUpdatedLabel : PBCodable <NSCopying> {

	GEOLatLng* _center;
	NSString* _localizedText;

}

@property (nonatomic,readonly) BOOL hasLocalizedText; 
@property (nonatomic,retain) NSString * localizedText;              //@synthesize localizedText=_localizedText - In the implementation block
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                    //@synthesize center=_center - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOLatLng *)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCenter;
-(BOOL)hasLocalizedText;
-(NSString *)localizedText;
-(void)setLocalizedText:(NSString *)arg1 ;
@end

