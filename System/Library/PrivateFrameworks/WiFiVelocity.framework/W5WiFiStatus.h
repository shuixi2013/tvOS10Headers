/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, W5WiFiChannel, NSArray, W5WiFiScanResult, W5WiFiPreferredNetwork;

@interface W5WiFiStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _powerOn;
	int _opMode;
	unsigned _eapolControlMode;
	unsigned _eapolSupplicantState;
	int _phyMode;
	int _btcMode;
	NSString* _macAddress;
	NSString* _interfaceName;
	NSData* _power;
	NSString* _ssidString;
	NSData* _ssid;
	NSString* _bssid;
	long long _rssi;
	long long _noise;
	double _txRate;
	long long _security;
	long long _mcsIndex;
	long long _guardInterval;
	long long _numberOfSpacialStreams;
	W5WiFiChannel* _channel;
	NSArray* _linkQualityUpdates;
	NSArray* _supportedChannels;
	NSString* _countryCode;
	NSArray* _ipv4Addresses;
	NSArray* _ipv6Addresses;
	NSString* _ipv4RouterAddress;
	NSString* _ipv6RouterAddress;
	NSArray* _dnsAddresses;
	NSData* _chainAck;
	NSData* _txChainPower;
	NSData* _desense;
	NSData* _desenseLevel;
	NSData* _btcConfig;
	NSData* _btcProfiles2GHz;
	NSData* _btcProfiles5GHz;
	W5WiFiScanResult* _lastJoinedScanResult;
	W5WiFiPreferredNetwork* _lastJoinedPreferredNetwork;

}

@property (nonatomic,copy) NSString * macAddress;                                            //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                                         //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,nonatomic) BOOL powerOn;                                                   //@synthesize powerOn=_powerOn - In the implementation block
@property (nonatomic,copy) NSData * power;                                                   //@synthesize power=_power - In the implementation block
@property (assign,nonatomic) int opMode;                                                     //@synthesize opMode=_opMode - In the implementation block
@property (nonatomic,copy) NSString * ssidString;                                            //@synthesize ssidString=_ssidString - In the implementation block
@property (nonatomic,copy) NSData * ssid;                                                    //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,copy) NSString * bssid;                                                 //@synthesize bssid=_bssid - In the implementation block
@property (assign,nonatomic) long long rssi;                                                 //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) long long noise;                                                //@synthesize noise=_noise - In the implementation block
@property (assign,nonatomic) double txRate;                                                  //@synthesize txRate=_txRate - In the implementation block
@property (assign,nonatomic) long long security;                                             //@synthesize security=_security - In the implementation block
@property (assign,nonatomic) unsigned eapolControlMode;                                      //@synthesize eapolControlMode=_eapolControlMode - In the implementation block
@property (assign,nonatomic) unsigned eapolSupplicantState;                                  //@synthesize eapolSupplicantState=_eapolSupplicantState - In the implementation block
@property (assign,nonatomic) int phyMode;                                                    //@synthesize phyMode=_phyMode - In the implementation block
@property (assign,nonatomic) long long mcsIndex;                                             //@synthesize mcsIndex=_mcsIndex - In the implementation block
@property (assign,nonatomic) long long guardInterval;                                        //@synthesize guardInterval=_guardInterval - In the implementation block
@property (assign,nonatomic) long long numberOfSpacialStreams;                               //@synthesize numberOfSpacialStreams=_numberOfSpacialStreams - In the implementation block
@property (nonatomic,copy) W5WiFiChannel * channel;                                          //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSArray * linkQualityUpdates;                                     //@synthesize linkQualityUpdates=_linkQualityUpdates - In the implementation block
@property (nonatomic,copy) NSArray * supportedChannels;                                      //@synthesize supportedChannels=_supportedChannels - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                           //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSArray * ipv4Addresses;                                          //@synthesize ipv4Addresses=_ipv4Addresses - In the implementation block
@property (nonatomic,copy) NSArray * ipv6Addresses;                                          //@synthesize ipv6Addresses=_ipv6Addresses - In the implementation block
@property (nonatomic,copy) NSString * ipv4RouterAddress;                                     //@synthesize ipv4RouterAddress=_ipv4RouterAddress - In the implementation block
@property (nonatomic,copy) NSString * ipv6RouterAddress;                                     //@synthesize ipv6RouterAddress=_ipv6RouterAddress - In the implementation block
@property (nonatomic,copy) NSArray * dnsAddresses;                                           //@synthesize dnsAddresses=_dnsAddresses - In the implementation block
@property (assign,nonatomic) int btcMode;                                                    //@synthesize btcMode=_btcMode - In the implementation block
@property (nonatomic,copy) NSData * chainAck;                                                //@synthesize chainAck=_chainAck - In the implementation block
@property (nonatomic,copy) NSData * txChainPower;                                            //@synthesize txChainPower=_txChainPower - In the implementation block
@property (nonatomic,copy) NSData * desense;                                                 //@synthesize desense=_desense - In the implementation block
@property (nonatomic,copy) NSData * desenseLevel;                                            //@synthesize desenseLevel=_desenseLevel - In the implementation block
@property (nonatomic,copy) NSData * btcConfig;                                               //@synthesize btcConfig=_btcConfig - In the implementation block
@property (nonatomic,copy) NSData * btcProfiles2GHz;                                         //@synthesize btcProfiles2GHz=_btcProfiles2GHz - In the implementation block
@property (nonatomic,copy) NSData * btcProfiles5GHz;                                         //@synthesize btcProfiles5GHz=_btcProfiles5GHz - In the implementation block
@property (nonatomic,copy) W5WiFiScanResult * lastJoinedScanResult;                          //@synthesize lastJoinedScanResult=_lastJoinedScanResult - In the implementation block
@property (nonatomic,copy) W5WiFiPreferredNetwork * lastJoinedPreferredNetwork;              //@synthesize lastJoinedPreferredNetwork=_lastJoinedPreferredNetwork - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)ssid;
-(void)setSsid:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSArray *)dnsAddresses;
-(void)setDnsAddresses:(NSArray *)arg1 ;
-(NSString *)macAddress;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(void)setChannel:(W5WiFiChannel *)arg1 ;
-(void)setPhyMode:(int)arg1 ;
-(W5WiFiChannel *)channel;
-(int)phyMode;
-(void)setRssi:(long long)arg1 ;
-(long long)rssi;
-(void)setSecurity:(long long)arg1 ;
-(long long)security;
-(NSData *)power;
-(void)setPower:(NSData *)arg1 ;
-(BOOL)powerOn;
-(int)opMode;
-(NSString *)ssidString;
-(NSString *)bssid;
-(long long)noise;
-(double)txRate;
-(unsigned)eapolControlMode;
-(unsigned)eapolSupplicantState;
-(long long)mcsIndex;
-(long long)guardInterval;
-(long long)numberOfSpacialStreams;
-(NSArray *)supportedChannels;
-(NSArray *)ipv4Addresses;
-(NSArray *)ipv6Addresses;
-(NSString *)ipv4RouterAddress;
-(NSString *)ipv6RouterAddress;
-(NSData *)chainAck;
-(NSData *)txChainPower;
-(NSData *)desense;
-(NSData *)desenseLevel;
-(NSData *)btcConfig;
-(NSData *)btcProfiles2GHz;
-(NSData *)btcProfiles5GHz;
-(int)btcMode;
-(NSArray *)linkQualityUpdates;
-(W5WiFiScanResult *)lastJoinedScanResult;
-(W5WiFiPreferredNetwork *)lastJoinedPreferredNetwork;
-(BOOL)isEqualToWiFiStatus:(id)arg1 ;
-(void)setMacAddress:(NSString *)arg1 ;
-(void)setPowerOn:(BOOL)arg1 ;
-(void)setOpMode:(int)arg1 ;
-(void)setSsidString:(NSString *)arg1 ;
-(void)setBssid:(NSString *)arg1 ;
-(void)setNoise:(long long)arg1 ;
-(void)setTxRate:(double)arg1 ;
-(void)setMcsIndex:(long long)arg1 ;
-(void)setGuardInterval:(long long)arg1 ;
-(void)setNumberOfSpacialStreams:(long long)arg1 ;
-(void)setEapolControlMode:(unsigned)arg1 ;
-(void)setEapolSupplicantState:(unsigned)arg1 ;
-(void)setSupportedChannels:(NSArray *)arg1 ;
-(void)setIpv4Addresses:(NSArray *)arg1 ;
-(void)setIpv6Addresses:(NSArray *)arg1 ;
-(void)setIpv4RouterAddress:(NSString *)arg1 ;
-(void)setIpv6RouterAddress:(NSString *)arg1 ;
-(void)setChainAck:(NSData *)arg1 ;
-(void)setTxChainPower:(NSData *)arg1 ;
-(void)setDesense:(NSData *)arg1 ;
-(void)setDesenseLevel:(NSData *)arg1 ;
-(void)setBtcConfig:(NSData *)arg1 ;
-(void)setBtcMode:(int)arg1 ;
-(void)setBtcProfiles2GHz:(NSData *)arg1 ;
-(void)setBtcProfiles5GHz:(NSData *)arg1 ;
-(void)setLinkQualityUpdates:(NSArray *)arg1 ;
-(void)setLastJoinedScanResult:(W5WiFiScanResult *)arg1 ;
-(void)setLastJoinedPreferredNetwork:(W5WiFiPreferredNetwork *)arg1 ;
@end

