/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDComponentFilter;

@interface GEOPDComponentInfo : PBCodable <NSCopying> {

	unsigned _count;
	GEOPDComponentFilter* _filter;
	unsigned _startIndex;
	int _type;
	int _urgency;
	BOOL _includeSource;
	SCD_Struct_GE94 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasStartIndex; 
@property (assign,nonatomic) unsigned startIndex;                        //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                             //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) BOOL hasFilter; 
@property (nonatomic,retain) GEOPDComponentFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeSource; 
@property (assign,nonatomic) BOOL includeSource;                         //@synthesize includeSource=_includeSource - In the implementation block
@property (assign,nonatomic) BOOL hasUrgency; 
@property (assign,nonatomic) int urgency;                                //@synthesize urgency=_urgency - In the implementation block
-(void)dealloc;
-(unsigned)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilter:(GEOPDComponentFilter *)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(BOOL)hasFilter;
-(GEOPDComponentFilter *)filter;
-(void)setStartIndex:(unsigned)arg1 ;
-(void)setHasStartIndex:(BOOL)arg1 ;
-(BOOL)hasStartIndex;
-(unsigned)startIndex;
-(void)setIncludeSource:(BOOL)arg1 ;
-(void)setHasIncludeSource:(BOOL)arg1 ;
-(BOOL)hasIncludeSource;
-(int)urgency;
-(void)setUrgency:(int)arg1 ;
-(void)setHasUrgency:(BOOL)arg1 ;
-(BOOL)hasUrgency;
-(id)urgencyAsString:(int)arg1 ;
-(int)StringAsUrgency:(id)arg1 ;
-(BOOL)includeSource;
-(id)initWithType:(int)arg1 count:(unsigned)arg2 ;
@end

