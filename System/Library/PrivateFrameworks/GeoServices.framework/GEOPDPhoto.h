/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOPDPhoto : PBCodable <NSCopying> {

	NSString* _photoId;
	NSMutableArray* _photoVersions;

}

@property (nonatomic,readonly) BOOL hasPhotoId; 
@property (nonatomic,retain) NSString * photoId;                          //@synthesize photoId=_photoId - In the implementation block
@property (nonatomic,retain) NSMutableArray * photoVersions;              //@synthesize photoVersions=_photoVersions - In the implementation block
+(Class)photoVersionType;
+(id)photosForPlaceData:(id)arg1 ;
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
-(BOOL)hasPhotoId;
-(void)clearPhotoVersions;
-(void)addPhotoVersion:(id)arg1 ;
-(unsigned long long)photoVersionsCount;
-(id)photoVersionAtIndex:(unsigned long long)arg1 ;
-(NSString *)photoId;
-(void)setPhotoId:(NSString *)arg1 ;
-(NSMutableArray *)photoVersions;
-(void)setPhotoVersions:(NSMutableArray *)arg1 ;
-(id)bestURL;
@end

