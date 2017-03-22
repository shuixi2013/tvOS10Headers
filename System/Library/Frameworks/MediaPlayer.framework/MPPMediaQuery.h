/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface MPPMediaQuery : PBCodable <NSCopying> {

	int _entityOrder;
	NSMutableArray* _filterPredicates;
	int _groupingType;
	NSMutableArray* _staticEntityIdentifiers;
	int _staticEntityType;
	BOOL _filteringDisabled;
	SCD_Struct_MP45 _has;

}

@property (nonatomic,retain) NSMutableArray * filterPredicates;                     //@synthesize filterPredicates=_filterPredicates - In the implementation block
@property (assign,nonatomic) BOOL hasGroupingType; 
@property (assign,nonatomic) int groupingType;                                      //@synthesize groupingType=_groupingType - In the implementation block
@property (assign,nonatomic) BOOL hasFilteringDisabled; 
@property (assign,nonatomic) BOOL filteringDisabled;                                //@synthesize filteringDisabled=_filteringDisabled - In the implementation block
@property (assign,nonatomic) BOOL hasEntityOrder; 
@property (assign,nonatomic) int entityOrder;                                       //@synthesize entityOrder=_entityOrder - In the implementation block
@property (nonatomic,retain) NSMutableArray * staticEntityIdentifiers;              //@synthesize staticEntityIdentifiers=_staticEntityIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL hasStaticEntityType; 
@property (assign,nonatomic) int staticEntityType;                                  //@synthesize staticEntityType=_staticEntityType - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGroupingType:(int)arg1 ;
-(void)setFilterPredicates:(NSMutableArray *)arg1 ;
-(int)groupingType;
-(unsigned long long)filterPredicatesCount;
-(NSMutableArray *)filterPredicates;
-(int)entityOrder;
-(BOOL)filteringDisabled;
-(unsigned long long)staticEntityIdentifiersCount;
-(NSMutableArray *)staticEntityIdentifiers;
-(int)staticEntityType;
-(void)addFilterPredicates:(id)arg1 ;
-(void)setFilteringDisabled:(BOOL)arg1 ;
-(void)setEntityOrder:(int)arg1 ;
-(void)setStaticEntityType:(int)arg1 ;
-(void)addStaticEntityIdentifiers:(id)arg1 ;
-(void)setStaticEntityIdentifiers:(NSMutableArray *)arg1 ;
-(void)clearFilterPredicates;
-(id)filterPredicatesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasGroupingType;
-(BOOL)hasFilteringDisabled;
-(BOOL)hasEntityOrder;
-(void)clearStaticEntityIdentifiers;
-(id)staticEntityIdentifiersAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasStaticEntityType;
-(void)setHasGroupingType:(BOOL)arg1 ;
-(void)setHasFilteringDisabled:(BOOL)arg1 ;
-(void)setHasEntityOrder:(BOOL)arg1 ;
-(void)setHasStaticEntityType:(BOOL)arg1 ;
@end

