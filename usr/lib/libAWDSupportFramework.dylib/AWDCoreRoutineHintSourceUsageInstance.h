/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineHintSourceUsageInstance : PBCodable <NSCopying> {

	int _hintSource;
	int _isLOI;
	int _isVisit;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasHintSource; 
@property (assign,nonatomic) int hintSource;                  //@synthesize hintSource=_hintSource - In the implementation block
@property (assign,nonatomic) BOOL hasIsLOI; 
@property (assign,nonatomic) int isLOI;                       //@synthesize isLOI=_isLOI - In the implementation block
@property (assign,nonatomic) BOOL hasIsVisit; 
@property (assign,nonatomic) int isVisit;                     //@synthesize isVisit=_isVisit - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHintSource:(int)arg1 ;
-(void)setHasHintSource:(BOOL)arg1 ;
-(BOOL)hasHintSource;
-(int)hintSource;
-(void)setIsLOI:(int)arg1 ;
-(void)setHasIsLOI:(BOOL)arg1 ;
-(BOOL)hasIsLOI;
-(void)setIsVisit:(int)arg1 ;
-(void)setHasIsVisit:(BOOL)arg1 ;
-(BOOL)hasIsVisit;
-(int)isLOI;
-(int)isVisit;
@end

