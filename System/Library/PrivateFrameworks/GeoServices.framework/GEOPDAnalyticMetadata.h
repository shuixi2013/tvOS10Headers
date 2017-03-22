/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray;

@interface GEOPDAnalyticMetadata : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOSessionID _sessionId;
	NSString* _appIdentifier;
	NSString* _appMajorVersion;
	NSString* _appMinorVersion;
	NSString* _hardwareModel;
	NSString* _loggedAbExperiment;
	NSString* _osVersion;
	NSString* _productName;
	int _requestSource;
	unsigned _sequenceNumber;
	NSMutableArray* _serviceTags;
	BOOL _isFromApi;
	BOOL _isInternalInstall;
	BOOL _isInternalTool;
	SCD_Struct_LO18 _has;

}

@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier;                       //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion;                     //@synthesize appMajorVersion=_appMajorVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion;                     //@synthesize appMinorVersion=_appMinorVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasHardwareModel; 
@property (nonatomic,retain) NSString * hardwareModel;                       //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (nonatomic,readonly) BOOL hasOsVersion; 
@property (nonatomic,retain) NSString * osVersion;                           //@synthesize osVersion=_osVersion - In the implementation block
@property (assign,nonatomic) BOOL hasIsInternalTool; 
@property (assign,nonatomic) BOOL isInternalTool;                            //@synthesize isInternalTool=_isInternalTool - In the implementation block
@property (assign,nonatomic) BOOL hasIsInternalInstall; 
@property (assign,nonatomic) BOOL isInternalInstall;                         //@synthesize isInternalInstall=_isInternalInstall - In the implementation block
@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) GEOSessionID sessionId;                         //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber;                        //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasRequestSource; 
@property (assign,nonatomic) int requestSource;                              //@synthesize requestSource=_requestSource - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromApi; 
@property (assign,nonatomic) BOOL isFromApi;                                 //@synthesize isFromApi=_isFromApi - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                   //@synthesize serviceTags=_serviceTags - In the implementation block
@property (nonatomic,readonly) BOOL hasProductName; 
@property (nonatomic,retain) NSString * productName;                         //@synthesize productName=_productName - In the implementation block
@property (nonatomic,readonly) BOOL hasLoggedAbExperiment; 
@property (nonatomic,retain) NSString * loggedAbExperiment;                  //@synthesize loggedAbExperiment=_loggedAbExperiment - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)serviceTagType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithTraits:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setSessionId:(GEOSessionID)arg1 ;
-(void)setHasSessionId:(BOOL)arg1 ;
-(BOOL)hasSessionId;
-(GEOSessionID)sessionId;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(BOOL)hasLoggedAbExperiment;
-(void)clearServiceTags;
-(void)addServiceTag:(id)arg1 ;
-(unsigned long long)serviceTagsCount;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(unsigned)sequenceNumber;
-(NSString *)loggedAbExperiment;
-(void)setLoggedAbExperiment:(NSString *)arg1 ;
-(NSMutableArray *)serviceTags;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(BOOL)hasOsVersion;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(BOOL)hasAppMajorVersion;
-(BOOL)hasAppMinorVersion;
-(BOOL)hasHardwareModel;
-(NSString *)appMajorVersion;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(NSString *)appMinorVersion;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(NSString *)hardwareModel;
-(void)setHardwareModel:(NSString *)arg1 ;
-(BOOL)isInternalInstall;
-(NSString *)productName;
-(BOOL)hasAppIdentifier;
-(NSString *)appIdentifier;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(void)setIsInternalTool:(BOOL)arg1 ;
-(void)setHasIsInternalTool:(BOOL)arg1 ;
-(BOOL)hasIsInternalTool;
-(void)setIsInternalInstall:(BOOL)arg1 ;
-(void)setHasIsInternalInstall:(BOOL)arg1 ;
-(BOOL)hasIsInternalInstall;
-(int)requestSource;
-(void)setRequestSource:(int)arg1 ;
-(void)setHasRequestSource:(BOOL)arg1 ;
-(BOOL)hasRequestSource;
-(id)requestSourceAsString:(int)arg1 ;
-(int)StringAsRequestSource:(id)arg1 ;
-(void)setIsFromApi:(BOOL)arg1 ;
-(void)setHasIsFromApi:(BOOL)arg1 ;
-(BOOL)hasIsFromApi;
-(BOOL)hasProductName;
-(BOOL)isInternalTool;
-(BOOL)isFromApi;
-(void)setProductName:(NSString *)arg1 ;
@end

