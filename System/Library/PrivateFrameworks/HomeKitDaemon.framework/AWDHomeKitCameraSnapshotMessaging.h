/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraSnapshotMessaging : PBCodable <NSCopying> {

	unsigned long long _receivedSnapshotRequest;
	unsigned long long _sentSnapshotRequest;
	unsigned long long _sentSnapshotResponse;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasReceivedSnapshotRequest; 
@property (assign,nonatomic) unsigned long long receivedSnapshotRequest;              //@synthesize receivedSnapshotRequest=_receivedSnapshotRequest - In the implementation block
@property (assign,nonatomic) BOOL hasSentSnapshotRequest; 
@property (assign,nonatomic) unsigned long long sentSnapshotRequest;                  //@synthesize sentSnapshotRequest=_sentSnapshotRequest - In the implementation block
@property (assign,nonatomic) BOOL hasSentSnapshotResponse; 
@property (assign,nonatomic) unsigned long long sentSnapshotResponse;                 //@synthesize sentSnapshotResponse=_sentSnapshotResponse - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setReceivedSnapshotRequest:(unsigned long long)arg1 ;
-(void)setHasReceivedSnapshotRequest:(BOOL)arg1 ;
-(BOOL)hasReceivedSnapshotRequest;
-(void)setSentSnapshotRequest:(unsigned long long)arg1 ;
-(void)setHasSentSnapshotRequest:(BOOL)arg1 ;
-(BOOL)hasSentSnapshotRequest;
-(void)setSentSnapshotResponse:(unsigned long long)arg1 ;
-(void)setHasSentSnapshotResponse:(BOOL)arg1 ;
-(BOOL)hasSentSnapshotResponse;
-(unsigned long long)receivedSnapshotRequest;
-(unsigned long long)sentSnapshotRequest;
-(unsigned long long)sentSnapshotResponse;
@end

