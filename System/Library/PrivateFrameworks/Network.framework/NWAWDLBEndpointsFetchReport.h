/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NWAWDLBEndpointsFetchReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _connectionCellularFallbackCount;
	int _endpointsFetchTaskBadReplyCount;
	int _endpointsFetchTaskCount;
	int _endpointsFetchTaskFailureCount;
	int _endpointsFetchTaskSuccessCount;
	SCD_Struct_NW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEndpointsFetchTaskCount; 
@property (assign,nonatomic) int endpointsFetchTaskCount;                          //@synthesize endpointsFetchTaskCount=_endpointsFetchTaskCount - In the implementation block
@property (assign,nonatomic) BOOL hasEndpointsFetchTaskSuccessCount; 
@property (assign,nonatomic) int endpointsFetchTaskSuccessCount;                   //@synthesize endpointsFetchTaskSuccessCount=_endpointsFetchTaskSuccessCount - In the implementation block
@property (assign,nonatomic) BOOL hasEndpointsFetchTaskFailureCount; 
@property (assign,nonatomic) int endpointsFetchTaskFailureCount;                   //@synthesize endpointsFetchTaskFailureCount=_endpointsFetchTaskFailureCount - In the implementation block
@property (assign,nonatomic) BOOL hasEndpointsFetchTaskBadReplyCount; 
@property (assign,nonatomic) int endpointsFetchTaskBadReplyCount;                  //@synthesize endpointsFetchTaskBadReplyCount=_endpointsFetchTaskBadReplyCount - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionCellularFallbackCount; 
@property (assign,nonatomic) int connectionCellularFallbackCount;                  //@synthesize connectionCellularFallbackCount=_connectionCellularFallbackCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setConnectionCellularFallbackCount:(int)arg1 ;
-(void)setHasConnectionCellularFallbackCount:(BOOL)arg1 ;
-(BOOL)hasConnectionCellularFallbackCount;
-(int)connectionCellularFallbackCount;
-(void)setEndpointsFetchTaskCount:(int)arg1 ;
-(void)setHasEndpointsFetchTaskCount:(BOOL)arg1 ;
-(BOOL)hasEndpointsFetchTaskCount;
-(void)setEndpointsFetchTaskSuccessCount:(int)arg1 ;
-(void)setHasEndpointsFetchTaskSuccessCount:(BOOL)arg1 ;
-(BOOL)hasEndpointsFetchTaskSuccessCount;
-(void)setEndpointsFetchTaskFailureCount:(int)arg1 ;
-(void)setHasEndpointsFetchTaskFailureCount:(BOOL)arg1 ;
-(BOOL)hasEndpointsFetchTaskFailureCount;
-(void)setEndpointsFetchTaskBadReplyCount:(int)arg1 ;
-(void)setHasEndpointsFetchTaskBadReplyCount:(BOOL)arg1 ;
-(BOOL)hasEndpointsFetchTaskBadReplyCount;
-(int)endpointsFetchTaskCount;
-(int)endpointsFetchTaskSuccessCount;
-(int)endpointsFetchTaskFailureCount;
-(int)endpointsFetchTaskBadReplyCount;
@end
