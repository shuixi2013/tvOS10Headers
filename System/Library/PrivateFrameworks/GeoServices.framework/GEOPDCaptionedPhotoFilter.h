/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDCaptionedPhotoFilter : PBCodable <NSCopying> {

	GEOPDPhotoSizeFilterValue* _photoSizeFilters;
	unsigned long long _photoSizeFiltersCount;
	unsigned long long _photoSizeFiltersSpace;

}

@property (nonatomic,readonly) unsigned long long photoSizeFiltersCount; 
@property (nonatomic,readonly) GEOPDPhotoSizeFilterValue* photoSizeFilters; 
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
-(unsigned long long)photoSizeFiltersCount;
-(GEOPDPhotoSizeFilterValue*)photoSizeFilters;
-(void)clearPhotoSizeFilters;
-(void)addPhotoSizeFilter:(GEOPDPhotoSizeFilterValue)arg1 ;
-(GEOPDPhotoSizeFilterValue)photoSizeFilterAtIndex:(unsigned long long)arg1 ;
-(void)setPhotoSizeFilters:(GEOPDPhotoSizeFilterValue*)arg1 count:(unsigned long long)arg2 ;
@end

