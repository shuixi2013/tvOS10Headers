/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEProfilePayloadHandlerDelegate.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, NEVPN, NEAOVPN, NEVPNApp, NEContentFilter, NEProfileIngestionPayloadInfo, NEPathController;

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying> {

	long long _grade;
	NSUUID* _identifier;
	NSString* _application;
	NSString* _name;
	NSString* _applicationName;
	NSString* _applicationIdentifier;
	NSString* _externalIdentifier;
	NEVPN* _VPN;
	NEAOVPN* _alwaysOnVPN;
	NEVPNApp* _appVPN;
	NEContentFilter* _contentFilter;
	NEProfileIngestionPayloadInfo* _payloadInfo;
	NEPathController* _pathController;

}

@property (readonly) NSString * pluginType; 
@property (readonly) long long grade;                                      //@synthesize grade=_grade - In the implementation block
@property (readonly) NSUUID * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * application;                                   //@synthesize application=_application - In the implementation block
@property (copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (copy) NSString * applicationName;                               //@synthesize applicationName=_applicationName - In the implementation block
@property (copy) NSString * applicationIdentifier;                         //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (copy) NSString * externalIdentifier;                            //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (copy) NEVPN * VPN;                                              //@synthesize VPN=_VPN - In the implementation block
@property (copy) NEAOVPN * alwaysOnVPN;                                    //@synthesize alwaysOnVPN=_alwaysOnVPN - In the implementation block
@property (copy) NEVPNApp * appVPN;                                        //@synthesize appVPN=_appVPN - In the implementation block
@property (copy) NEContentFilter * contentFilter;                          //@synthesize contentFilter=_contentFilter - In the implementation block
@property (copy) NEProfileIngestionPayloadInfo * payloadInfo;              //@synthesize payloadInfo=_payloadInfo - In the implementation block
@property (copy) NEPathController * pathController;                        //@synthesize pathController=_pathController - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)addError:(id)arg1 toList:(id)arg2 ;
+(BOOL)setConfiguration:(CFDictionaryRef)arg1 forProtocol:(CFStringRef)arg2 inService:(SCNetworkServiceRef)arg3 ;
+(CFDictionaryRef)copyConfigurationForProtocol:(CFStringRef)arg1 inService:(SCNetworkServiceRef)arg2 ;
+(BOOL)SCServiceWithIdentifier:(id)arg1 existsInPreferences:(SCPreferencesRef)arg2 ;
+(BOOL)removeSCServiceWithIdentifier:(id)arg1 fromPreferences:(SCPreferencesRef)arg2 ;
+(id)configurationWithProfilePayload:(id)arg1 grade:(long long)arg2 ;
+(id)configurationWithProfilePayload:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)application;
-(void)setApplication:(NSString *)arg1 ;
-(void)setApplicationName:(NSString *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(NSString *)externalIdentifier;
-(NSString *)applicationName;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(NSString *)pluginType;
-(BOOL)needToUpdateKeychain;
-(NEVPN *)VPN;
-(NEVPNApp *)appVPN;
-(long long)grade;
-(NEAOVPN *)alwaysOnVPN;
-(NEContentFilter *)contentFilter;
-(void)syncWithSystemKeychain;
-(id)generateSignature;
-(BOOL)isSupportedBySC;
-(BOOL)applyChangesToSCServiceInPreferences:(SCPreferencesRef)arg1 ;
-(void)clearSystemKeychain;
-(NEProfileIngestionPayloadInfo *)payloadInfo;
-(BOOL)updateFromSCService:(SCNetworkServiceRef)arg1 ;
-(id)initFromSCService:(SCNetworkServiceRef)arg1 ;
-(void)syncWithUserKeychain;
-(void)clearUserKeychain;
-(id)initWithName:(id)arg1 grade:(long long)arg2 ;
-(void)setContentFilter:(NEContentFilter *)arg1 ;
-(void)setVPN:(NEVPN *)arg1 ;
-(void)setAppVPN:(NEVPNApp *)arg1 ;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(void)setAlwaysOnVPN:(NEAOVPN *)arg1 ;
-(void)setPayloadInfo:(NEProfileIngestionPayloadInfo *)arg1 ;
-(NEPathController *)pathController;
-(void)setPathController:(NEPathController *)arg1 ;
-(id)initWithVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(id)initWithAlwaysOnVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(id)initWithAppLayerVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(id)initWithContentFilterPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(id)initWithPathControllerPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(id)descriptionWithOptions:(unsigned long long)arg1 ;
-(void)syncWithKeychainInDomain:(long long)arg1 ;
-(void)clearKeychainInDomain:(long long)arg1 ;
-(void)updateWithConfiguration:(id)arg1 ;
-(id)copyProfileDictionary;
-(void)copyPasswordsFromSystemKeychain;
-(BOOL)setConfigurationVPNPassword:(id)arg1 ;
-(BOOL)ingestDisconnectOptions:(id)arg1 ;
-(id)getConfigurationProtocol;
-(BOOL)ingestPPPDict:(id)arg1 ;
-(BOOL)configurePPPCommon:(id)arg1 ;
-(BOOL)configureVpnOnDemandRules:(id)arg1 ;
-(BOOL)configureL2TPWithPPPOptions:(id)arg1 ;
-(BOOL)configureIKE:(id)arg1 vpnType:(id)arg2 payloadBase:(id)arg3 vpn:(id)arg4 ;
-(BOOL)ingestPPPData:(id)arg1 vnpType:(id)arg2 ;
-(BOOL)configurePPPWithVPNOptions:(id)arg1 payloadBase:(id)arg2 ;
-(BOOL)ingestIPSecDict:(id)arg1 vpnType:(id)arg2 vpn:(id)arg3 ;
-(BOOL)configurePluginWithPayload:(id)arg1 pluginType:(id)arg2 payloadType:(id)arg3 ;
-(BOOL)configureVpnOnDemand:(id)arg1 vpnType:(id)arg2 ;
-(BOOL)ingestDNSOptions:(id)arg1 ;
-(BOOL)ingestProxyOptions:(id)arg1 ;
-(BOOL)setAppLayerVPNRuleSettings:(id)arg1 withAppIdentifier:(id)arg2 ;
-(id)configureAOVPNTunnelFromTunnelDict:(id)arg1 tunnelDict:(id)arg2 payloadBase:(id)arg3 interfaceType:(id)arg4 ;
-(BOOL)setCertificatesVPN:(id)arg1 ;
-(BOOL)setCertificatesAppVPN:(id)arg1 ;
-(BOOL)setCertificatesAOVpn:(id)arg1 ;
-(BOOL)setCertificateContentFilter:(id)arg1 ;
-(id)getPendingCertificateUUIDsInternal:(id)arg1 ;
-(id)getPendingCertificateUUIDsVPN:(id)arg1 ;
-(id)getPendingCertificateUUIDsAppVPN:(id)arg1 ;
-(id)getPendingCertificateUUIDsAOVpn:(id)arg1 ;
-(id)getPendingCertificateUUIDsContentFilter:(id)arg1 ;
-(BOOL)setConfigurationSharedSecret:(id)arg1 ;
-(BOOL)setPayloadInfoIdentityUserNameAndPassword:(id)arg1 ;
-(BOOL)setPayloadInfoIdentityProxy:(id)arg1 ;
-(BOOL)setPayloadInfoIdentityIPSecSharedSecret:(id)arg1 ;
-(BOOL)setPayloadInfoIdentityPIN:(id)arg1 ;
-(id)getCertificates;
-(id)getPendingCertificateUUIDs:(id)arg1 ;
-(id)getPendingCertificateInfo:(id)arg1 ;
-(id)getConfigurationIdentifier;
-(BOOL)setPayloadInfoIdentity:(id)arg1 ;
-(BOOL)setPayloadInfoCommon:(id)arg1 payloadOrganization:(id)arg2 ;
-(BOOL)setProfileInfo:(id)arg1 ;
-(BOOL)setAppLayerVPNUUID:(id)arg1 andSafariDomains:(id)arg2 ;
-(BOOL)setCertificates:(id)arg1 ;
@end

