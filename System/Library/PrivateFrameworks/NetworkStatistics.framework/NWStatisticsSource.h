/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NWStatisticsSourceDelegate;
#import <NetworkStatistics/NetworkStatistics-Structs.h>
@class NSDictionary, NWStatisticsManager;

@interface NWStatisticsSource : NSObject {

	unsigned _filter;
	nstat_counts _last_counts;
	NSDictionary* _counts;
	BOOL _removed;
	BOOL _removing;
	BOOL _hasCounts;
	BOOL _hasDescriptor;
	BOOL _hasNewKernelInfo;
	unsigned long long _rxWiFiBytes;
	unsigned long long _txWiFiBytes;
	id<NWStatisticsSourceDelegate> _delegate;
	NWStatisticsManager* _manager;
	unsigned long long _reference;

}

@property (retain) id<NWStatisticsSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NWStatisticsManager * manager;                      //@synthesize manager=_manager - In the implementation block
@property (assign) unsigned long long reference;                         //@synthesize reference=_reference - In the implementation block
@property (getter=isRemoved) BOOL removed;                               //@synthesize removed=_removed - In the implementation block
@property (assign) BOOL removing;                                        //@synthesize removing=_removing - In the implementation block
@property (assign) BOOL hasCounts;                                       //@synthesize hasCounts=_hasCounts - In the implementation block
@property (assign) BOOL hasDescriptor;                                   //@synthesize hasDescriptor=_hasDescriptor - In the implementation block
@property (assign) BOOL hasNewKernelInfo;                                //@synthesize hasNewKernelInfo=_hasNewKernelInfo - In the implementation block
@property (readonly) const nstat_counts* _nstat_counts; 
@property (nonatomic,copy,readonly) NSDictionary * counts; 
@property (readonly) unsigned long long rxPackets; 
@property (readonly) unsigned long long rxBytes; 
@property (readonly) unsigned long long rxCellularBytes; 
@property (readonly) unsigned long long rxWiFiBytes;                     //@synthesize rxWiFiBytes=_rxWiFiBytes - In the implementation block
@property (readonly) unsigned long long rxWiredBytes; 
@property (readonly) long long rxDuplicateBytes; 
@property (readonly) long long rxOutOfOrderBytes; 
@property (readonly) unsigned long long txPackets; 
@property (readonly) unsigned long long txBytes; 
@property (readonly) unsigned long long txCellularBytes; 
@property (readonly) unsigned long long txWiFiBytes;                     //@synthesize txWiFiBytes=_txWiFiBytes - In the implementation block
@property (readonly) unsigned long long txWiredBytes; 
@property (readonly) long long txRetransmittedBytes; 
@property (readonly) long long connectAttempts; 
@property (readonly) long long connectSuccesses; 
@property (readonly) double rttMinimum; 
@property (readonly) double rttAverage; 
@property (readonly) double rttVariation; 
+(id)createSourceForProvider:(unsigned)arg1 srcRef:(unsigned long long)arg2 manager:(id)arg3 ;
-(void)setDelegate:(id<NWStatisticsSourceDelegate>)arg1 ;
-(id)init;
-(id<NWStatisticsSourceDelegate>)delegate;
-(unsigned long long)rxCellularBytes;
-(unsigned long long)txCellularBytes;
-(unsigned long long)rxWiFiBytes;
-(unsigned long long)txWiFiBytes;
-(unsigned long long)rxWiredBytes;
-(unsigned long long)txWiredBytes;
-(long long)rxDuplicateBytes;
-(long long)rxOutOfOrderBytes;
-(long long)txRetransmittedBytes;
-(long long)connectAttempts;
-(long long)connectSuccesses;
-(double)rttMinimum;
-(double)rttAverage;
-(double)rttVariation;
-(BOOL)removing;
-(void)discardCountsDir;
-(BOOL)handleMessage:(nstat_msg_hdr*)arg1 length:(long long)arg2 ;
-(void)setRemoving:(BOOL)arg1 ;
-(BOOL)hasCounts;
-(void)queryDescription;
-(void)queryCounts;
-(void)queryUpdate;
-(const nstat_counts*)_nstat_counts;
-(id)initWithManager:(id)arg1 source:(unsigned long long)arg2 ;
-(id)createCounts;
-(BOOL)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)hasNewKernelInfo;
-(void)setHasNewKernelInfo:(BOOL)arg1 ;
-(void)setHasCounts:(BOOL)arg1 ;
-(void)setHasDescriptor:(BOOL)arg1 ;
-(BOOL)_handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)handleCounts:(const nstat_counts*)arg1 ;
-(unsigned long long)rxWifiBytes;
-(unsigned long long)txWifiBytes;
-(BOOL)hasDescriptor;
-(unsigned long long)reference;
-(NSDictionary *)counts;
-(unsigned long long)txBytes;
-(unsigned long long)rxBytes;
-(unsigned long long)rxPackets;
-(unsigned long long)txPackets;
-(void)setReference:(unsigned long long)arg1 ;
-(NWStatisticsManager *)manager;
-(BOOL)isRemoved;
-(void)setRemoved:(BOOL)arg1 ;
@end

