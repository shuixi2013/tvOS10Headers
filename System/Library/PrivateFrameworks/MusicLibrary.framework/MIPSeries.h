/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MIPSeries : PBCodable <NSCopying> {

	long long _storeId;
	NSString* _name;
	NSString* _sortName;
	SCD_Struct_MI3 _has;

}

@property (assign,nonatomic) BOOL hasStoreId; 
@property (assign,nonatomic) long long storeId;                //@synthesize storeId=_storeId - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasSortName; 
@property (nonatomic,retain) NSString * sortName;              //@synthesize sortName=_sortName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasName;
-(void)setStoreId:(long long)arg1 ;
-(void)setHasStoreId:(BOOL)arg1 ;
-(BOOL)hasStoreId;
-(long long)storeId;
-(void)setSortName:(NSString *)arg1 ;
-(BOOL)hasSortName;
-(NSString *)sortName;
@end

