/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOCacheHitLogMessage, GEOLogFrameworkMetricLogMessage, GEONetworkUsageLogMessage, NSString;

@interface GEOLongSessionUsageLogMessage : PBCodable <NSCopying> {

	GEOSessionID _sessionId;
	double _timestamp;
	GEOCacheHitLogMessage* _cacheHitLogMessage;
	GEOLogFrameworkMetricLogMessage* _logFrameworkMetricLogMessage;
	GEONetworkUsageLogMessage* _networkUsageLogMessage;
	NSString* _requestingAppIdentifier;
	SCD_Struct_GE45 _has;

}

@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) GEOSessionID sessionId;                                                      //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestingAppIdentifier; 
@property (nonatomic,retain) NSString * requestingAppIdentifier;                                          //@synthesize requestingAppIdentifier=_requestingAppIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkUsageLogMessage; 
@property (nonatomic,retain) GEONetworkUsageLogMessage * networkUsageLogMessage;                          //@synthesize networkUsageLogMessage=_networkUsageLogMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasLogFrameworkMetricLogMessage; 
@property (nonatomic,retain) GEOLogFrameworkMetricLogMessage * logFrameworkMetricLogMessage;              //@synthesize logFrameworkMetricLogMessage=_logFrameworkMetricLogMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasCacheHitLogMessage; 
@property (nonatomic,retain) GEOCacheHitLogMessage * cacheHitLogMessage;                                  //@synthesize cacheHitLogMessage=_cacheHitLogMessage - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setSessionId:(GEOSessionID)arg1 ;
-(void)setHasSessionId:(BOOL)arg1 ;
-(BOOL)hasSessionId;
-(GEOSessionID)sessionId;
-(BOOL)hasRequestingAppIdentifier;
-(BOOL)hasNetworkUsageLogMessage;
-(BOOL)hasLogFrameworkMetricLogMessage;
-(BOOL)hasCacheHitLogMessage;
-(NSString *)requestingAppIdentifier;
-(void)setRequestingAppIdentifier:(NSString *)arg1 ;
-(GEONetworkUsageLogMessage *)networkUsageLogMessage;
-(void)setNetworkUsageLogMessage:(GEONetworkUsageLogMessage *)arg1 ;
-(GEOLogFrameworkMetricLogMessage *)logFrameworkMetricLogMessage;
-(void)setLogFrameworkMetricLogMessage:(GEOLogFrameworkMetricLogMessage *)arg1 ;
-(GEOCacheHitLogMessage *)cacheHitLogMessage;
-(void)setCacheHitLogMessage:(GEOCacheHitLogMessage *)arg1 ;
@end

