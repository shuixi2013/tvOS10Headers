/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitNamedItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPBTransitArtwork, GEOPBTransitLineDisplayHints, NSString, GEOStyleAttributes;

@interface GEOPBTransitLine : PBCodable <GEOTransitNamedItem, NSCopying> {

	unsigned long long _muid;
	GEOPBTransitTimeRange* _operatingHours;
	unsigned long long _operatingHoursCount;
	unsigned long long _operatingHoursSpace;
	GEOPBTransitArtwork* _artwork;
	GEOPBTransitLineDisplayHints* _displayHints;
	int _guidanceSnappingType;
	NSString* _lineColor;
	unsigned _lineIndex;
	GEOPBTransitArtwork* _modeArtwork;
	NSString* _nameDisplayString;
	int _placeDisplayStyle;
	int _preferredDepartureTimeStyle;
	GEOStyleAttributes* _styleAttributes;
	unsigned _systemIndex;
	int _transitType;
	SCD_Struct_GE73 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasLineIndex; 
@property (assign,nonatomic) unsigned lineIndex;                                       //@synthesize lineIndex=_lineIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * artwork;                            //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) BOOL hasModeArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * modeArtwork;                        //@synthesize modeArtwork=_modeArtwork - In the implementation block
@property (assign,nonatomic) unsigned long long muid;                                  //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) BOOL hasGuidanceSnappingType; 
@property (assign,nonatomic) int guidanceSnappingType;                                 //@synthesize guidanceSnappingType=_guidanceSnappingType - In the implementation block
@property (nonatomic,readonly) BOOL hasLineColor; 
@property (nonatomic,retain) NSString * lineColor;                                     //@synthesize lineColor=_lineColor - In the implementation block
@property (assign,nonatomic) BOOL hasSystemIndex; 
@property (assign,nonatomic) unsigned systemIndex;                                     //@synthesize systemIndex=_systemIndex - In the implementation block
@property (assign,nonatomic) BOOL hasTransitType; 
@property (assign,nonatomic) int transitType;                                          //@synthesize transitType=_transitType - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredDepartureTimeStyle; 
@property (assign,nonatomic) int preferredDepartureTimeStyle;                          //@synthesize preferredDepartureTimeStyle=_preferredDepartureTimeStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes;                     //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,readonly) unsigned long long operatingHoursCount; 
@property (nonatomic,readonly) GEOPBTransitTimeRange* operatingHours; 
@property (nonatomic,readonly) BOOL hasDisplayHints; 
@property (nonatomic,retain) GEOPBTransitLineDisplayHints * displayHints;              //@synthesize displayHints=_displayHints - In the implementation block
@property (nonatomic,readonly) BOOL hasNameDisplayString; 
@property (nonatomic,retain) NSString * nameDisplayString;                             //@synthesize nameDisplayString=_nameDisplayString - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceDisplayStyle; 
@property (assign,nonatomic) int placeDisplayStyle;                                    //@synthesize placeDisplayStyle=_placeDisplayStyle - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(BOOL)hasDisplayHints;
-(BOOL)hasStyleAttributes;
-(GEOPBTransitLineDisplayHints *)displayHints;
-(void)setDisplayHints:(GEOPBTransitLineDisplayHints *)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(unsigned long long)operatingHoursCount;
-(GEOPBTransitTimeRange*)operatingHours;
-(void)clearOperatingHours;
-(void)addOperatingHours:(GEOPBTransitTimeRange)arg1 ;
-(GEOPBTransitTimeRange)operatingHoursAtIndex:(unsigned long long)arg1 ;
-(void)setOperatingHours:(GEOPBTransitTimeRange*)arg1 count:(unsigned long long)arg2 ;
-(void)setLineIndex:(unsigned)arg1 ;
-(void)setHasLineIndex:(BOOL)arg1 ;
-(BOOL)hasLineIndex;
-(BOOL)hasArtwork;
-(BOOL)hasModeArtwork;
-(int)guidanceSnappingType;
-(void)setGuidanceSnappingType:(int)arg1 ;
-(void)setHasGuidanceSnappingType:(BOOL)arg1 ;
-(BOOL)hasGuidanceSnappingType;
-(id)guidanceSnappingTypeAsString:(int)arg1 ;
-(int)StringAsGuidanceSnappingType:(id)arg1 ;
-(BOOL)hasLineColor;
-(void)setSystemIndex:(unsigned)arg1 ;
-(void)setHasSystemIndex:(BOOL)arg1 ;
-(BOOL)hasSystemIndex;
-(void)setTransitType:(int)arg1 ;
-(void)setHasTransitType:(BOOL)arg1 ;
-(BOOL)hasTransitType;
-(int)preferredDepartureTimeStyle;
-(void)setPreferredDepartureTimeStyle:(int)arg1 ;
-(void)setHasPreferredDepartureTimeStyle:(BOOL)arg1 ;
-(BOOL)hasPreferredDepartureTimeStyle;
-(id)preferredDepartureTimeStyleAsString:(int)arg1 ;
-(int)StringAsPreferredDepartureTimeStyle:(id)arg1 ;
-(BOOL)hasNameDisplayString;
-(int)placeDisplayStyle;
-(void)setPlaceDisplayStyle:(int)arg1 ;
-(void)setHasPlaceDisplayStyle:(BOOL)arg1 ;
-(BOOL)hasPlaceDisplayStyle;
-(id)placeDisplayStyleAsString:(int)arg1 ;
-(int)StringAsPlaceDisplayStyle:(id)arg1 ;
-(unsigned)lineIndex;
-(GEOPBTransitArtwork *)artwork;
-(void)setArtwork:(GEOPBTransitArtwork *)arg1 ;
-(GEOPBTransitArtwork *)modeArtwork;
-(void)setModeArtwork:(GEOPBTransitArtwork *)arg1 ;
-(NSString *)lineColor;
-(void)setLineColor:(NSString *)arg1 ;
-(unsigned)systemIndex;
-(int)transitType;
-(NSString *)nameDisplayString;
-(void)setNameDisplayString:(NSString *)arg1 ;
-(id)bestName;
-(id)geoTransitLineWithSystem:(id)arg1 ;
@end

