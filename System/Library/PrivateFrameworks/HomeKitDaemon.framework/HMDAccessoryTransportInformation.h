/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HAPAccessory, NSString, NSNumber;

@interface HMDAccessoryTransportInformation : NSObject <NSSecureCoding> {

	BOOL _reachable;
	HAPAccessory* _hapAccessory;
	NSString* _serverIdentifier;
	NSNumber* _instanceID;
	long long _linkType;

}

@property (nonatomic,retain) HAPAccessory * hapAccessory;              //@synthesize hapAccessory=_hapAccessory - In the implementation block
@property (nonatomic,retain) NSString * serverIdentifier;              //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * instanceID;                    //@synthesize instanceID=_instanceID - In the implementation block
@property (assign) long long linkType;                                 //@synthesize linkType=_linkType - In the implementation block
@property (assign) BOOL reachable;                                     //@synthesize reachable=_reachable - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSNumber *)instanceID;
-(void)setLinkType:(long long)arg1 ;
-(long long)linkType;
-(NSString *)serverIdentifier;
-(void)setReachable:(BOOL)arg1 ;
-(id)initWithServerIdentifier:(id)arg1 instanceID:(id)arg2 linkType:(long long)arg3 reachable:(BOOL)arg4 ;
-(BOOL)reachable;
-(id)initWithHAPAccessory:(id)arg1 ;
-(HAPAccessory *)hapAccessory;
-(void)setHapAccessory:(HAPAccessory *)arg1 ;
-(void)setServerIdentifier:(NSString *)arg1 ;
-(void)setInstanceID:(NSNumber *)arg1 ;
@end

