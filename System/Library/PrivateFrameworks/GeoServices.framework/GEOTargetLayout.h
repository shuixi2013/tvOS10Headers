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

@interface GEOTargetLayout : PBCodable <NSCopying> {

	int _layoutInfo;
	int _layoutStyle;
	int _uiTarget;
	SCD_Struct_GE20 _has;

}

@property (assign,nonatomic) BOOL hasUiTarget; 
@property (assign,nonatomic) int uiTarget;                     //@synthesize uiTarget=_uiTarget - In the implementation block
@property (assign,nonatomic) BOOL hasLayoutInfo; 
@property (assign,nonatomic) int layoutInfo;                   //@synthesize layoutInfo=_layoutInfo - In the implementation block
@property (assign,nonatomic) BOOL hasLayoutStyle; 
@property (assign,nonatomic) int layoutStyle;                  //@synthesize layoutStyle=_layoutStyle - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)layoutInfo;
-(void)setLayoutInfo:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)uiTarget;
-(void)setUiTarget:(int)arg1 ;
-(void)setHasUiTarget:(BOOL)arg1 ;
-(BOOL)hasUiTarget;
-(id)uiTargetAsString:(int)arg1 ;
-(int)StringAsUiTarget:(id)arg1 ;
-(void)setHasLayoutInfo:(BOOL)arg1 ;
-(BOOL)hasLayoutInfo;
-(id)layoutInfoAsString:(int)arg1 ;
-(int)StringAsLayoutInfo:(id)arg1 ;
-(int)layoutStyle;
-(void)setLayoutStyle:(int)arg1 ;
-(void)setHasLayoutStyle:(BOOL)arg1 ;
-(BOOL)hasLayoutStyle;
-(id)layoutStyleAsString:(int)arg1 ;
-(int)StringAsLayoutStyle:(id)arg1 ;
@end

