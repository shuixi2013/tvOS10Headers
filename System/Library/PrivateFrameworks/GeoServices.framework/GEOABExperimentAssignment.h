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

@class PBUnknownFields, GEOABDebugPanelExperimentBranch, NSString;

@interface GEOABExperimentAssignment : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOABDebugPanelExperimentBranch* _debugExperimentBranch;
	int _placeRequestType;
	NSString* _querySubstring;
	int _serviceType;
	SCD_Struct_GE45 _has;

}

@property (assign,nonatomic) BOOL hasServiceType; 
@property (assign,nonatomic) int serviceType;                                                      //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceRequestType; 
@property (assign,nonatomic) int placeRequestType;                                                 //@synthesize placeRequestType=_placeRequestType - In the implementation block
@property (nonatomic,readonly) BOOL hasQuerySubstring; 
@property (nonatomic,retain) NSString * querySubstring;                                            //@synthesize querySubstring=_querySubstring - In the implementation block
@property (nonatomic,readonly) BOOL hasDebugExperimentBranch; 
@property (nonatomic,retain) GEOABDebugPanelExperimentBranch * debugExperimentBranch;              //@synthesize debugExperimentBranch=_debugExperimentBranch - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(PBUnknownFields *)unknownFields;
-(BOOL)hasDebugExperimentBranch;
-(GEOABDebugPanelExperimentBranch *)debugExperimentBranch;
-(void)setDebugExperimentBranch:(GEOABDebugPanelExperimentBranch *)arg1 ;
-(int)placeRequestType;
-(void)setPlaceRequestType:(int)arg1 ;
-(void)setHasPlaceRequestType:(BOOL)arg1 ;
-(BOOL)hasPlaceRequestType;
-(id)placeRequestTypeAsString:(int)arg1 ;
-(int)StringAsPlaceRequestType:(id)arg1 ;
-(int)serviceType;
-(void)setServiceType:(int)arg1 ;
-(void)setHasServiceType:(BOOL)arg1 ;
-(BOOL)hasServiceType;
-(id)serviceTypeAsString:(int)arg1 ;
-(int)StringAsServiceType:(id)arg1 ;
-(BOOL)hasQuerySubstring;
-(NSString *)querySubstring;
-(void)setQuerySubstring:(NSString *)arg1 ;
@end

