/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDClientMetadata, NSString;

@interface GEOABAssignmentRequest : PBRequest <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDClientMetadata* _clientMetadata;
	NSString* _guid;
	int _requestType;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                                   //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType;                                   //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata;              //@synthesize clientMetadata=_clientMetadata - In the implementation block
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
-(int)requestType;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(id)requestTypeAsString:(int)arg1 ;
-(int)StringAsRequestType:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)hasClientMetadata;
-(GEOPDClientMetadata *)clientMetadata;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(BOOL)hasGuid;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
@end

