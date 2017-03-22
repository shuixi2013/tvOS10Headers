/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOVConnectivity : PBCodable <NSCopying> {

	NSMutableArray* _junctions;

}

@property (nonatomic,retain) NSMutableArray * junctions;              //@synthesize junctions=_junctions - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)junctions;
-(unsigned long long)junctionsCount;
-(void)clearJunctions;
-(void)addJunction:(id)arg1 ;
-(id)junctionAtIndex:(unsigned long long)arg1 ;
-(void)setJunctions:(NSMutableArray *)arg1 ;
@end
