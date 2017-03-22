/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVServices-Structs.h>
#import <TVServices/TVSEthernetInterface.h>

@class NSOperationQueue, NSString, TVSWiFiNetwork, NSArray, _TVSWiFiNetworkAssociationContext;

@interface TVSWiFiInterface : TVSEthernetInterface {

	WiFiManagerClientRef _wifiManager;
	BOOL _observingSignalStrength;
	NSOperationQueue* _wifiQueue;
	BOOL _enabled;
	NSString* _networkName;
	TVSWiFiNetwork* _associatedNetwork;
	NSArray* _availableNetworks;
	_TVSWiFiNetworkAssociationContext* _associationContext;

}

@property (nonatomic,copy) NSString * networkName;                                                //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,copy) NSArray * availableNetworks;                                           //@synthesize availableNetworks=_availableNetworks - In the implementation block
@property (nonatomic,retain) TVSWiFiNetwork * associatedNetwork;                                  //@synthesize associatedNetwork=_associatedNetwork - In the implementation block
@property (nonatomic,retain) _TVSWiFiNetworkAssociationContext * associationContext;              //@synthesize associationContext=_associationContext - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                       //@synthesize enabled=_enabled - In the implementation block
+(BOOL)_supportsInterface:(SCNetworkInterfaceRef)arg1 ;
+(id)_interfaceType;
+(id)WiFiInterface;
+(void)enableNetworkManagement;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_updateWithServiceRef:(SCNetworkServiceRef)arg1 interfaceRef:(SCNetworkInterfaceRef)arg2 ;
-(NSString *)networkName;
-(void)setNetworkName:(NSString *)arg1 ;
-(void)disassociateNetwork:(id)arg1 ;
-(void)cancelDirectedScan:(id)arg1 ;
-(void)associateNetwork:(id)arg1 withPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)beginDirectedScanWithNetworkName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_profileManagedNetworks;
-(void)_setWiFiManagerEnabled:(BOOL)arg1 ;
-(WiFiDeviceClientRef)_wifiDeviceRef;
-(WiFiManagerClientRef)_wifiManagerRef;
-(void)_enableWiFiManagerIfNeeded;
-(void)_updateSignalStrengthObservation;
-(void)setAvailableNetworks:(NSArray *)arg1 ;
-(id)_wifiQueue;
-(void)setAssociationContext:(_TVSWiFiNetworkAssociationContext *)arg1 ;
-(TVSWiFiNetwork *)associatedNetwork;
-(void)_configureWiFiManager;
-(void)refreshAvailableNetworks;
-(void)setAssociatedNetwork:(TVSWiFiNetwork *)arg1 ;
-(NSArray *)availableNetworks;
-(_TVSWiFiNetworkAssociationContext *)associationContext;
@end

