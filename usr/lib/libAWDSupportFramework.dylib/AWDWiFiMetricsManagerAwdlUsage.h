/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDWiFiMetricsManagerAwdlUsage : PBCodable <NSCopying> {

	unsigned long long _noServiceIdleTime;
	unsigned long long _timestamp;
	unsigned _advertiseAddFilteredCount;
	unsigned _advertiseAddTotalCount;
	unsigned _advertiseDeleteFilteredCount;
	unsigned _advertiseDeleteTotalCount;
	unsigned _appRxBytes;
	unsigned _appTxBytes;
	unsigned _browseAddFilteredCount;
	unsigned _browseAddTotalCount;
	unsigned _browseDeleteFilteredCount;
	unsigned _browseDeleteTotalCount;
	unsigned _cachedPeersDifferentInfra;
	unsigned _cachedPeersNotAssociated;
	unsigned _cachedPeersOn24G;
	unsigned _cachedPeersOn5G;
	unsigned _cachedPeersOnDFS;
	unsigned _cachedPeersSameInfra;
	unsigned _flags;
	unsigned _ifPacketFailures;
	unsigned _ifRxBytes;
	unsigned _ifTxBytes;
	unsigned _numOfCachedPeers;
	unsigned _numOfPeers;
	unsigned _peerInfraChannel;
	unsigned _periodInMinutes;
	unsigned _selfInfraChannel;
	NSMutableArray* _services;
	NSMutableArray* _states;
	SCD_Struct_AW27 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSelfInfraChannel; 
@property (assign,nonatomic) unsigned selfInfraChannel;                          //@synthesize selfInfraChannel=_selfInfraChannel - In the implementation block
@property (assign,nonatomic) BOOL hasPeerInfraChannel; 
@property (assign,nonatomic) unsigned peerInfraChannel;                          //@synthesize peerInfraChannel=_peerInfraChannel - In the implementation block
@property (assign,nonatomic) BOOL hasNumOfPeers; 
@property (assign,nonatomic) unsigned numOfPeers;                                //@synthesize numOfPeers=_numOfPeers - In the implementation block
@property (assign,nonatomic) BOOL hasNumOfCachedPeers; 
@property (assign,nonatomic) unsigned numOfCachedPeers;                          //@synthesize numOfCachedPeers=_numOfCachedPeers - In the implementation block
@property (assign,nonatomic) BOOL hasCachedPeersOn24G; 
@property (assign,nonatomic) unsigned cachedPeersOn24G;                          //@synthesize cachedPeersOn24G=_cachedPeersOn24G - In the implementation block
@property (assign,nonatomic) BOOL hasCachedPeersOn5G; 
@property (assign,nonatomic) unsigned cachedPeersOn5G;                           //@synthesize cachedPeersOn5G=_cachedPeersOn5G - In the implementation block
@property (assign,nonatomic) BOOL hasCachedPeersOnDFS; 
@property (assign,nonatomic) unsigned cachedPeersOnDFS;                          //@synthesize cachedPeersOnDFS=_cachedPeersOnDFS - In the implementation block
@property (assign,nonatomic) BOOL hasCachedPeersNotAssociated; 
@property (assign,nonatomic) unsigned cachedPeersNotAssociated;                  //@synthesize cachedPeersNotAssociated=_cachedPeersNotAssociated - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) unsigned flags;                                     //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL hasIfPacketFailures; 
@property (assign,nonatomic) unsigned ifPacketFailures;                          //@synthesize ifPacketFailures=_ifPacketFailures - In the implementation block
@property (assign,nonatomic) BOOL hasIfRxBytes; 
@property (assign,nonatomic) unsigned ifRxBytes;                                 //@synthesize ifRxBytes=_ifRxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasIfTxBytes; 
@property (assign,nonatomic) unsigned ifTxBytes;                                 //@synthesize ifTxBytes=_ifTxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasAppRxBytes; 
@property (assign,nonatomic) unsigned appRxBytes;                                //@synthesize appRxBytes=_appRxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasAppTxBytes; 
@property (assign,nonatomic) unsigned appTxBytes;                                //@synthesize appTxBytes=_appTxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasPeriodInMinutes; 
@property (assign,nonatomic) unsigned periodInMinutes;                           //@synthesize periodInMinutes=_periodInMinutes - In the implementation block
@property (nonatomic,retain) NSMutableArray * states;                            //@synthesize states=_states - In the implementation block
@property (assign,nonatomic) BOOL hasNoServiceIdleTime; 
@property (assign,nonatomic) unsigned long long noServiceIdleTime;               //@synthesize noServiceIdleTime=_noServiceIdleTime - In the implementation block
@property (assign,nonatomic) BOOL hasBrowseAddTotalCount; 
@property (assign,nonatomic) unsigned browseAddTotalCount;                       //@synthesize browseAddTotalCount=_browseAddTotalCount - In the implementation block
@property (assign,nonatomic) BOOL hasBrowseAddFilteredCount; 
@property (assign,nonatomic) unsigned browseAddFilteredCount;                    //@synthesize browseAddFilteredCount=_browseAddFilteredCount - In the implementation block
@property (assign,nonatomic) BOOL hasBrowseDeleteTotalCount; 
@property (assign,nonatomic) unsigned browseDeleteTotalCount;                    //@synthesize browseDeleteTotalCount=_browseDeleteTotalCount - In the implementation block
@property (assign,nonatomic) BOOL hasBrowseDeleteFilteredCount; 
@property (assign,nonatomic) unsigned browseDeleteFilteredCount;                 //@synthesize browseDeleteFilteredCount=_browseDeleteFilteredCount - In the implementation block
@property (assign,nonatomic) BOOL hasAdvertiseAddTotalCount; 
@property (assign,nonatomic) unsigned advertiseAddTotalCount;                    //@synthesize advertiseAddTotalCount=_advertiseAddTotalCount - In the implementation block
@property (assign,nonatomic) BOOL hasAdvertiseAddFilteredCount; 
@property (assign,nonatomic) unsigned advertiseAddFilteredCount;                 //@synthesize advertiseAddFilteredCount=_advertiseAddFilteredCount - In the implementation block
@property (assign,nonatomic) BOOL hasAdvertiseDeleteTotalCount; 
@property (assign,nonatomic) unsigned advertiseDeleteTotalCount;                 //@synthesize advertiseDeleteTotalCount=_advertiseDeleteTotalCount - In the implementation block
@property (assign,nonatomic) BOOL hasAdvertiseDeleteFilteredCount; 
@property (assign,nonatomic) unsigned advertiseDeleteFilteredCount;              //@synthesize advertiseDeleteFilteredCount=_advertiseDeleteFilteredCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * services;                          //@synthesize services=_services - In the implementation block
@property (assign,nonatomic) BOOL hasCachedPeersSameInfra; 
@property (assign,nonatomic) unsigned cachedPeersSameInfra;                      //@synthesize cachedPeersSameInfra=_cachedPeersSameInfra - In the implementation block
@property (assign,nonatomic) BOOL hasCachedPeersDifferentInfra; 
@property (assign,nonatomic) unsigned cachedPeersDifferentInfra;                 //@synthesize cachedPeersDifferentInfra=_cachedPeersDifferentInfra - In the implementation block
+(Class)statesType;
+(Class)servicesType;
-(void)dealloc;
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
-(void)setHasFlags:(BOOL)arg1 ;
-(BOOL)hasFlags;
-(void)setStates:(NSMutableArray *)arg1 ;
-(void)addStates:(id)arg1 ;
-(void)addServices:(id)arg1 ;
-(unsigned long long)statesCount;
-(void)clearStates;
-(id)statesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)servicesCount;
-(void)clearServices;
-(id)servicesAtIndex:(unsigned long long)arg1 ;
-(void)setSelfInfraChannel:(unsigned)arg1 ;
-(void)setHasSelfInfraChannel:(BOOL)arg1 ;
-(BOOL)hasSelfInfraChannel;
-(void)setPeerInfraChannel:(unsigned)arg1 ;
-(void)setHasPeerInfraChannel:(BOOL)arg1 ;
-(BOOL)hasPeerInfraChannel;
-(void)setNumOfPeers:(unsigned)arg1 ;
-(void)setHasNumOfPeers:(BOOL)arg1 ;
-(BOOL)hasNumOfPeers;
-(void)setNumOfCachedPeers:(unsigned)arg1 ;
-(void)setHasNumOfCachedPeers:(BOOL)arg1 ;
-(BOOL)hasNumOfCachedPeers;
-(void)setCachedPeersOn24G:(unsigned)arg1 ;
-(void)setHasCachedPeersOn24G:(BOOL)arg1 ;
-(BOOL)hasCachedPeersOn24G;
-(void)setCachedPeersOn5G:(unsigned)arg1 ;
-(void)setHasCachedPeersOn5G:(BOOL)arg1 ;
-(BOOL)hasCachedPeersOn5G;
-(void)setCachedPeersOnDFS:(unsigned)arg1 ;
-(void)setHasCachedPeersOnDFS:(BOOL)arg1 ;
-(BOOL)hasCachedPeersOnDFS;
-(void)setCachedPeersNotAssociated:(unsigned)arg1 ;
-(void)setHasCachedPeersNotAssociated:(BOOL)arg1 ;
-(BOOL)hasCachedPeersNotAssociated;
-(void)setIfPacketFailures:(unsigned)arg1 ;
-(void)setHasIfPacketFailures:(BOOL)arg1 ;
-(BOOL)hasIfPacketFailures;
-(void)setIfRxBytes:(unsigned)arg1 ;
-(void)setHasIfRxBytes:(BOOL)arg1 ;
-(BOOL)hasIfRxBytes;
-(void)setIfTxBytes:(unsigned)arg1 ;
-(void)setHasIfTxBytes:(BOOL)arg1 ;
-(BOOL)hasIfTxBytes;
-(void)setAppRxBytes:(unsigned)arg1 ;
-(void)setHasAppRxBytes:(BOOL)arg1 ;
-(BOOL)hasAppRxBytes;
-(void)setAppTxBytes:(unsigned)arg1 ;
-(void)setHasAppTxBytes:(BOOL)arg1 ;
-(BOOL)hasAppTxBytes;
-(void)setPeriodInMinutes:(unsigned)arg1 ;
-(void)setHasPeriodInMinutes:(BOOL)arg1 ;
-(BOOL)hasPeriodInMinutes;
-(void)setNoServiceIdleTime:(unsigned long long)arg1 ;
-(void)setHasNoServiceIdleTime:(BOOL)arg1 ;
-(BOOL)hasNoServiceIdleTime;
-(void)setBrowseAddTotalCount:(unsigned)arg1 ;
-(void)setHasBrowseAddTotalCount:(BOOL)arg1 ;
-(BOOL)hasBrowseAddTotalCount;
-(void)setBrowseAddFilteredCount:(unsigned)arg1 ;
-(void)setHasBrowseAddFilteredCount:(BOOL)arg1 ;
-(BOOL)hasBrowseAddFilteredCount;
-(void)setBrowseDeleteTotalCount:(unsigned)arg1 ;
-(void)setHasBrowseDeleteTotalCount:(BOOL)arg1 ;
-(BOOL)hasBrowseDeleteTotalCount;
-(void)setBrowseDeleteFilteredCount:(unsigned)arg1 ;
-(void)setHasBrowseDeleteFilteredCount:(BOOL)arg1 ;
-(BOOL)hasBrowseDeleteFilteredCount;
-(void)setAdvertiseAddTotalCount:(unsigned)arg1 ;
-(void)setHasAdvertiseAddTotalCount:(BOOL)arg1 ;
-(BOOL)hasAdvertiseAddTotalCount;
-(void)setAdvertiseAddFilteredCount:(unsigned)arg1 ;
-(void)setHasAdvertiseAddFilteredCount:(BOOL)arg1 ;
-(BOOL)hasAdvertiseAddFilteredCount;
-(void)setAdvertiseDeleteTotalCount:(unsigned)arg1 ;
-(void)setHasAdvertiseDeleteTotalCount:(BOOL)arg1 ;
-(BOOL)hasAdvertiseDeleteTotalCount;
-(void)setAdvertiseDeleteFilteredCount:(unsigned)arg1 ;
-(void)setHasAdvertiseDeleteFilteredCount:(BOOL)arg1 ;
-(BOOL)hasAdvertiseDeleteFilteredCount;
-(void)setCachedPeersSameInfra:(unsigned)arg1 ;
-(void)setHasCachedPeersSameInfra:(BOOL)arg1 ;
-(BOOL)hasCachedPeersSameInfra;
-(void)setCachedPeersDifferentInfra:(unsigned)arg1 ;
-(void)setHasCachedPeersDifferentInfra:(BOOL)arg1 ;
-(BOOL)hasCachedPeersDifferentInfra;
-(unsigned)selfInfraChannel;
-(unsigned)peerInfraChannel;
-(unsigned)numOfPeers;
-(unsigned)numOfCachedPeers;
-(unsigned)cachedPeersOn24G;
-(unsigned)cachedPeersOn5G;
-(unsigned)cachedPeersOnDFS;
-(unsigned)cachedPeersNotAssociated;
-(unsigned)ifPacketFailures;
-(unsigned)ifRxBytes;
-(unsigned)ifTxBytes;
-(unsigned)appRxBytes;
-(unsigned)appTxBytes;
-(unsigned)periodInMinutes;
-(NSMutableArray *)states;
-(unsigned long long)noServiceIdleTime;
-(unsigned)browseAddTotalCount;
-(unsigned)browseAddFilteredCount;
-(unsigned)browseDeleteTotalCount;
-(unsigned)browseDeleteFilteredCount;
-(unsigned)advertiseAddTotalCount;
-(unsigned)advertiseAddFilteredCount;
-(unsigned)advertiseDeleteTotalCount;
-(unsigned)advertiseDeleteFilteredCount;
-(unsigned)cachedPeersSameInfra;
-(unsigned)cachedPeersDifferentInfra;
-(NSMutableArray *)services;
-(void)setServices:(NSMutableArray *)arg1 ;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
@end

