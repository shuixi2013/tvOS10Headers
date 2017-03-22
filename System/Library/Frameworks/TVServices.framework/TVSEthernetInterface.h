/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVServices-Structs.h>
#import <TVServices/TVSNetworkInterface.h>

@class NSString, NSArray;

@interface TVSEthernetInterface : TVSNetworkInterface {

	BOOL _active;
	BOOL _shouldUseDHCP;
	BOOL _shouldUseDefaultDNS;
	NSString* _IPAddress;
	NSString* _subnetMask;
	NSString* _routerAddress;
	NSArray* _dnsAddresses;

}

@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
@property (nonatomic,copy) NSString * IPAddress;                       //@synthesize IPAddress=_IPAddress - In the implementation block
@property (assign,nonatomic) BOOL shouldUseDHCP;                       //@synthesize shouldUseDHCP=_shouldUseDHCP - In the implementation block
@property (assign,nonatomic) BOOL shouldUseDefaultDNS;                 //@synthesize shouldUseDefaultDNS=_shouldUseDefaultDNS - In the implementation block
@property (nonatomic,copy) NSString * subnetMask;                      //@synthesize subnetMask=_subnetMask - In the implementation block
@property (nonatomic,copy) NSString * routerAddress;                   //@synthesize routerAddress=_routerAddress - In the implementation block
@property (nonatomic,copy) NSString * primaryDNSAddress; 
@property (nonatomic,copy) NSArray * dnsAddresses;                     //@synthesize dnsAddresses=_dnsAddresses - In the implementation block
+(BOOL)_supportsInterface:(SCNetworkInterfaceRef)arg1 ;
+(id)_interfaceType;
+(id)RJ45EthernetInterface;
+(id)keyPathsForValuesAffectingPrimaryDNSAddress;
-(id)description;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)shouldUseDHCP;
-(NSString *)IPAddress;
-(NSString *)subnetMask;
-(NSString *)routerAddress;
-(NSArray *)dnsAddresses;
-(void)_updateWithServiceRef:(SCNetworkServiceRef)arg1 interfaceRef:(SCNetworkInterfaceRef)arg2 ;
-(void)setShouldUseDHCP:(BOOL)arg1 ;
-(id)_dnsAddressesForService:(CFStringRef)arg1 domain:(CFStringRef)arg2 ;
-(void)setShouldUseDefaultDNS:(BOOL)arg1 ;
-(void)setDnsAddresses:(NSArray *)arg1 ;
-(void)setIPAddress:(NSString *)arg1 ;
-(void)setSubnetMask:(NSString *)arg1 ;
-(void)setRouterAddress:(NSString *)arg1 ;
-(BOOL)_commitChangesWithServiceRef:(SCNetworkServiceRef)arg1 ;
-(BOOL)shouldUseDefaultDNS;
-(BOOL)_setDNSWithAddresses:(id)arg1 forServiceRef:(SCNetworkServiceRef)arg2 ;
-(NSString *)primaryDNSAddress;
-(void)setPrimaryDNSAddress:(NSString *)arg1 ;
@end

