/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlaySupport/AirPlaySupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface APSAWDAirPlayVideoSessionStartedOnServer : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _audioOnly;
	unsigned _clientAuthMs;
	unsigned _clientBonjourMs;
	unsigned _clientConnectMs;
	unsigned _clientInfoMs;
	NSString* _clientModel;
	unsigned _clientPostAuthMs;
	unsigned _clientSecureConnectionMs;
	NSString* _clientVersion;
	NSString* _sessionUUID;
	int _status;
	unsigned _transportType;
	unsigned _type;
	SCD_Struct_AP7 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                         //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                         //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasClientModel; 
@property (nonatomic,retain) NSString * clientModel;                         //@synthesize clientModel=_clientModel - In the implementation block
@property (nonatomic,readonly) BOOL hasClientVersion; 
@property (nonatomic,retain) NSString * clientVersion;                       //@synthesize clientVersion=_clientVersion - In the implementation block
@property (assign,nonatomic) BOOL hasAudioOnly; 
@property (assign,nonatomic) unsigned audioOnly;                             //@synthesize audioOnly=_audioOnly - In the implementation block
@property (assign,nonatomic) BOOL hasClientBonjourMs; 
@property (assign,nonatomic) unsigned clientBonjourMs;                       //@synthesize clientBonjourMs=_clientBonjourMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientConnectMs; 
@property (assign,nonatomic) unsigned clientConnectMs;                       //@synthesize clientConnectMs=_clientConnectMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientInfoMs; 
@property (assign,nonatomic) unsigned clientInfoMs;                          //@synthesize clientInfoMs=_clientInfoMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientSecureConnectionMs; 
@property (assign,nonatomic) unsigned clientSecureConnectionMs;              //@synthesize clientSecureConnectionMs=_clientSecureConnectionMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientAuthMs; 
@property (assign,nonatomic) unsigned clientAuthMs;                          //@synthesize clientAuthMs=_clientAuthMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientPostAuthMs; 
@property (assign,nonatomic) unsigned clientPostAuthMs;                      //@synthesize clientPostAuthMs=_clientPostAuthMs - In the implementation block
-(NSString *)clientVersion;
-(void)setClientVersion:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setType:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned)transportType;
-(void)setTransportType:(unsigned)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setAudioOnly:(unsigned)arg1 ;
-(unsigned)audioOnly;
-(void)setHasAudioOnly:(BOOL)arg1 ;
-(BOOL)hasAudioOnly;
-(BOOL)hasClientModel;
-(BOOL)hasClientVersion;
-(NSString *)clientModel;
-(void)setClientModel:(NSString *)arg1 ;
-(void)setClientBonjourMs:(unsigned)arg1 ;
-(void)setHasClientBonjourMs:(BOOL)arg1 ;
-(BOOL)hasClientBonjourMs;
-(void)setClientConnectMs:(unsigned)arg1 ;
-(void)setHasClientConnectMs:(BOOL)arg1 ;
-(BOOL)hasClientConnectMs;
-(unsigned)clientBonjourMs;
-(unsigned)clientConnectMs;
-(void)setClientInfoMs:(unsigned)arg1 ;
-(void)setHasClientInfoMs:(BOOL)arg1 ;
-(BOOL)hasClientInfoMs;
-(void)setClientSecureConnectionMs:(unsigned)arg1 ;
-(void)setHasClientSecureConnectionMs:(BOOL)arg1 ;
-(BOOL)hasClientSecureConnectionMs;
-(void)setClientAuthMs:(unsigned)arg1 ;
-(void)setHasClientAuthMs:(BOOL)arg1 ;
-(BOOL)hasClientAuthMs;
-(void)setClientPostAuthMs:(unsigned)arg1 ;
-(void)setHasClientPostAuthMs:(BOOL)arg1 ;
-(BOOL)hasClientPostAuthMs;
-(unsigned)clientInfoMs;
-(unsigned)clientSecureConnectionMs;
-(unsigned)clientAuthMs;
-(unsigned)clientPostAuthMs;
-(void)setSessionUUID:(NSString *)arg1 ;
-(BOOL)hasSessionUUID;
-(NSString *)sessionUUID;
@end

