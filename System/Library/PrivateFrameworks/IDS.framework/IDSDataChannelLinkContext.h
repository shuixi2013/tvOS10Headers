/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSDataChannelLinkContext;

@interface IDSDataChannelLinkContext : NSObject {

	_IDSDataChannelLinkContext* _internal;
	unsigned _maxBitrate;

}

@property (readonly) char linkID; 
@property (readonly) unsigned char flags; 
@property (readonly) unsigned char networkType; 
@property (readonly) long long connectionType; 
@property (readonly) unsigned long long RATType; 
@property (readonly) unsigned short maxMTU; 
@property (readonly) unsigned char remoteNetworkType; 
@property (readonly) long long remoteConnectionType; 
@property (readonly) unsigned long long remoteRATType; 
@property (readonly) unsigned maxBitrate;                           //@synthesize maxBitrate=_maxBitrate - In the implementation block
-(id)description;
-(long long)connectionType;
-(id)initWithDummyInformation;
-(id)initWithLinkID:(char)arg1 flags:(unsigned char)arg2 networkType:(unsigned char)arg3 connectionType:(long long)arg4 RATType:(unsigned long long)arg5 MTU:(unsigned short)arg6 remoteNetworkType:(unsigned char)arg7 remoteConnectionType:(long long)arg8 remoteRATType:(unsigned long long)arg9 maxBitrate:(unsigned)arg10 ;
-(void)setRATType:(unsigned long long)arg1 ;
-(void)setMaxBitrate:(unsigned)arg1 ;
-(unsigned char)networkType;
-(long long)remoteConnectionType;
-(char)linkID;
-(unsigned)maxBitrate;
-(unsigned long long)RATType;
-(unsigned long long)remoteRATType;
-(unsigned char)remoteNetworkType;
-(void)setMTU:(unsigned short)arg1 ;
-(unsigned short)maxMTU;
-(unsigned char)flags;
@end

