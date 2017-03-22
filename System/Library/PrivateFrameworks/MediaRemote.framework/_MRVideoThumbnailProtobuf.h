/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _MRVideoThumbnailProtobuf : PBCodable <NSCopying> {

	double _time;
	NSData* _imageData;
	SCD_Struct_MR3 _has;

}

@property (nonatomic,readonly) BOOL hasImageData; 
@property (nonatomic,retain) NSData * imageData;               //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) BOOL hasTime; 
@property (assign,nonatomic) double time;                      //@synthesize time=_time - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setImageData:(NSData *)arg1 ;
-(double)time;
-(void)setTime:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTime:(BOOL)arg1 ;
-(BOOL)hasTime;
-(NSData *)imageData;
-(BOOL)hasImageData;
@end

