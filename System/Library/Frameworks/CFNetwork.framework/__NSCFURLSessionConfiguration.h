/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLSessionConfiguration.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSURLSessionAppleIDContext;
@class NSString, NSURL, NSData, NSURLCredentialStorage, NSURLCache, NSHTTPCookieStorage, NSDictionary, NSSet, NSArray;

@interface __NSCFURLSessionConfiguration : NSURLSessionConfiguration <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	unsigned long long _requestCachePolicy;
	double _timeoutIntervalForRequest;
	double _timeoutIntervalForResource;
	unsigned long long _networkServiceType;
	BOOL _allowsCellularAccess;
	BOOL _discretionary;
	NSString* _sharedContainerIdentifier;
	BOOL _sessionSendsLaunchEvents;
	id _connectionProxyDictionary;
	int _TLSMinimumSupportedProtocol;
	int _TLSMaximumSupportedProtocol;
	BOOL _HTTPShouldUsePipelining;
	BOOL _HTTPShouldSetCookies;
	unsigned long long _HTTPCookieAcceptPolicy;
	id _HTTPAdditionalHeaders;
	long long _HTTPMaximumConnectionsPerHost;
	BOOL _shouldUseExtendedBackgroundIdleMode;
	id _protocolClasses;
	BOOL _requiresPowerPluggedIn;
	NSURL* _directoryForDownloadedFiles;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSData* _sourceApplicationAuditTokenData;
	unsigned long long _TCPAdaptiveReadTimeout;
	unsigned long long _TCPAdaptiveWriteTimeout;
	BOOL _allowsExpensiveAccess;
	BOOL _allowsPowerNapScheduling;
	BOOL _preventsIdleSleepOnceConnected;
	BOOL _sessionSendsLaunchOnDemandEvents;
	BOOL _collectsTimingData;
	long long _timingDataOptions;
	BOOL _shouldSkipPreferredClientCertificateLookup;
	NSString* _ledBellyServiceIdentifier;
	id<NSURLSessionAppleIDContext> _appleIDContext;
	NSData* _atsContext;
	double _connectionCachePurgeTimeout;
	double _connectionCacheCellPurgeTimeout;
	double _longLivedConnectionCachePurgeTimeout;
	double _longLivedConnectionCacheCellPurgeTimeout;
	BOOL _allowsRetryForBackgroundDataTasks;
	BOOL _onBehalfOfPairedDevice;
	BOOL _respectsAllowsCellularAccessForDiscretionaryTasks;
	BOOL _overridesBackgroundSessionAutoRedirect;
	BOOL _performsEVCertCheck;
	BOOL _infersDiscretionaryFromOriginatingClient;
	NSString* _connectionPoolName;
	BOOL _prefersInfraWiFi;
	BOOL _allowsMultipathTCP;
	BOOL _allowsResponseMonitoringDuringBodyTranmission;
	BOOL _allowsIndefiniteConnections;
	NSString* _CTDataConnectionServiceType;
	BOOL _allowsTCPFastOpen;
	BOOL _allowsTLSSessionTickets;
	BOOL _preventsDirectWiFiAccess;
	BOOL _allowTCPIOConnectionStreamTask;
	unsigned long long _customReadBufferSize;
	double _customReadBufferTimeout;
	BOOL _backgroundSession;
	NSString* _disposition;
	NSURLCredentialStorage* _phskip_credStorage;
	BOOL _phskip_credStorageSet;
	NSURLCache* _phskip_urlCache;
	BOOL _phskip_urlCacheSet;
	NSHTTPCookieStorage* _phskip_cookieStorage;
	BOOL _phskip_cookieStorageSet;
	CFHSTSPolicyRef _phskip_hstsStorage;
	BOOL _phskip_hstsStorageSet;
	long long _pipeliningHighWatermark;
	long long _pipeliningLowWatermark;
	long long _numPriorityLevels;
	long long _numFastLanes;
	long long _minimumFastLanePriority;
	BOOL _skip_download_unlink;
	BOOL _requiresClientToOpenFiles;
	NSString* _tcpConnectionPoolName;
	BOOL _forcesNewConnections;
	NSDictionary* _socketStreamProperties;
	BOOL _supportsAVAssetDownloads;
	BOOL _proxySession;
	NSSet* _authenticatorStatusCodes;
	BOOL _disallowsSPDY;
	BOOL _preventsIdleSleep;
	BOOL _usePipeliningHeuristics;
	NSArray* _contentDispHeadEncFallback;
	BOOL _shouldPreserveBackgroundSessionDisposition;
	BOOL _disablesOutOfProcessDirectWiFiUsage;
	BOOL _disablesUseOfProxySession;
	NSString* _companionAppBundleIdentifier;
	NSString* _watchAppBundleIdentifier;
	NSString* _watchExtensionBundleIdentifier;
	unsigned long long _forcedNetworkServiceType;
	NSDictionary* _overriddenDelegateOptions;

}
+(BOOL)supportsSecureCoding;
-(HTTPConnectionCacheLimits)getConnectionCacheLimits;
-(CFHSTSPolicyRef)copyHSTSPolicy;
-(id)HTTPCookieStorage;
-(id)URLCredentialStorage;
-(id)protocolClasses;
-(double)timeoutIntervalForResource;
-(id)_directoryForDownloadedFiles;
-(BOOL)_requiresClientToOpenFiles;
-(BOOL)skip_download_unlink;
-(BOOL)_collectsTimingData;
-(long long)_timingDataOptions;
-(BOOL)_isProxySession;
-(id)HTTPAdditionalHeaders;
-(void)setHTTPAdditionalHeaders:(id)arg1 ;
-(id)sharedContainerIdentifier;
-(id)_overriddenDelegateOptions;
-(BOOL)_allowsRetryForBackgroundDataTasks;
-(BOOL)HTTPShouldSetCookies;
-(unsigned long long)HTTPCookieAcceptPolicy;
-(BOOL)_supportsAVAssetDownloads;
-(BOOL)_overridesBackgroundSessionAutoRedirect;
-(void)set_allowTCPIOConnectionStreamTask:(BOOL)arg1 ;
-(void)set_allowsTCPFastOpen:(BOOL)arg1 ;
-(BOOL)isDiscretionary;
-(void)setDiscretionary:(BOOL)arg1 ;
-(void)set_socketStreamProperties:(id)arg1 ;
-(BOOL)_allowTCPIOConnectionStreamTask;
-(id)_atsContext;
-(BOOL)isBackgroundSession;
-(void)set_supportsAVAssetDownloads:(BOOL)arg1 ;
-(id)_appleIDContext;
-(void)set_authenticatorStatusCodes:(id)arg1 ;
-(void*)_copyAttribute:(CFStringRef)arg1 ;
-(OpaqueCFHTTPCookieStorageRef)_copyCFCookieStorage;
-(id)_ledBellyServiceIdentifier;
-(void)set_ledBellyServiceIdentifier:(id)arg1 ;
-(BOOL)_shouldSkipPreferredClientCertificateLookup;
-(BOOL)allowsCellularAccess;
-(BOOL)_requiresPowerPluggedIn;
-(id)_socketStreamProperties;
-(BOOL)_allowsExpensiveAccess;
-(unsigned long long)_TCPAdaptiveReadTimeout;
-(unsigned long long)_TCPAdaptiveWriteTimeout;
-(BOOL)_allowsPowerNapScheduling;
-(id)_tcpConnectionPoolName;
-(id)_sourceApplicationBundleIdentifier;
-(id)_sourceApplicationSecondaryIdentifier;
-(id)_sourceApplicationAuditTokenData;
-(BOOL)_preventsIdleSleepOnceConnected;
-(BOOL)_forcesNewConnections;
-(BOOL)shouldUseExtendedBackgroundIdleMode;
-(BOOL)_allowsMultipathTCP;
-(BOOL)_allowsResponseMonitoringDuringBodyTranmission;
-(BOOL)_allowsIndefiniteConnections;
-(id)_CTDataConnectionServiceType;
-(BOOL)_allowsTCPFastOpen;
-(BOOL)_allowsTLSSessionTickets;
-(unsigned long long)_customReadBufferSize;
-(double)_customReadBufferTimeout;
-(unsigned long long)_forcedNetworkServiceType;
-(void)set_connectionCacheCellPurgeTimeout:(double)arg1 ;
-(void)set_longLivedConnectionCachePurgeTimeout:(double)arg1 ;
-(void)set_longLivedConnectionCacheCellPurgeTimeout:(double)arg1 ;
-(unsigned long long)requestCachePolicy;
-(double)timeoutIntervalForRequest;
-(id)_authenticatorStatusCodes;
-(void)set_shouldSkipPreferredClientCertificateLookup:(BOOL)arg1 ;
-(id)initWithDisposition:(id)arg1 ;
-(void)setBackgroundSession:(BOOL)arg1 ;
-(void)setSessionSendsLaunchEvents:(BOOL)arg1 ;
-(void)set_proxySession:(BOOL)arg1 ;
-(void)set_preventsDirectWiFiAccess:(BOOL)arg1 ;
-(CFHSTSPolicyRef)_phskip_hstsStorage;
-(void)set_phskip_hstsStorage:(CFHSTSPolicyRef)arg1 ;
-(id)_phskip_cookieStorage;
-(void)set_phskip_cookieStorage:(id)arg1 ;
-(id)_phskip_urlCache;
-(void)set_phskip_urlCache:(id)arg1 ;
-(id)_phskip_credStorage;
-(void)set_phskip_credStorage:(id)arg1 ;
-(void)setSharedContainerIdentifier:(id)arg1 ;
-(BOOL)sessionSendsLaunchEvents;
-(void)set_requiresPowerPluggedIn:(BOOL)arg1 ;
-(void)set_allowsExpensiveAccess:(BOOL)arg1 ;
-(void)set_allowsPowerNapScheduling:(BOOL)arg1 ;
-(BOOL)_sessionSendsLaunchOnDemandEvents;
-(void)set_sessionSendsLaunchOnDemandEvents:(BOOL)arg1 ;
-(void)set_collectsTimingData:(BOOL)arg1 ;
-(void)set_allowsRetryForBackgroundDataTasks:(BOOL)arg1 ;
-(BOOL)_onBehalfOfPairedDevice;
-(void)set_onBehalfOfPairedDevice:(BOOL)arg1 ;
-(BOOL)_respectsAllowsCellularAccessForDiscretionaryTasks;
-(void)set_respectsAllowsCellularAccessForDiscretionaryTasks:(BOOL)arg1 ;
-(BOOL)_infersDiscretionaryFromOriginatingClient;
-(void)setSkip_download_unlink:(BOOL)arg1 ;
-(void)set_requiresClientToOpenFiles:(BOOL)arg1 ;
-(void)set_forcesNewConnections:(BOOL)arg1 ;
-(BOOL)_preventsIdleSleep;
-(void)set_preventsIdleSleep:(BOOL)arg1 ;
-(BOOL)_disallowsSPDY;
-(void)set_disallowsSPDY:(BOOL)arg1 ;
-(BOOL)_usePipeliningHeuristics;
-(void)set_usePipeliningHeuristics:(BOOL)arg1 ;
-(int)TLSMinimumSupportedProtocol;
-(void)setTLSMinimumSupportedProtocol:(int)arg1 ;
-(int)TLSMaximumSupportedProtocol;
-(void)setTLSMaximumSupportedProtocol:(int)arg1 ;
-(id)connectionProxyDictionary;
-(void)setConnectionProxyDictionary:(id)arg1 ;
-(long long)HTTPMaximumConnectionsPerHost;
-(void)setShouldUseExtendedBackgroundIdleMode:(BOOL)arg1 ;
-(void)setProtocolClasses:(id)arg1 ;
-(void)set_directoryForDownloadedFiles:(id)arg1 ;
-(void)set_sourceApplicationSecondaryIdentifier:(id)arg1 ;
-(void)set_TCPAdaptiveReadTimeout:(unsigned long long)arg1 ;
-(void)set_TCPAdaptiveWriteTimeout:(unsigned long long)arg1 ;
-(double)_connectionCachePurgeTimeout;
-(double)_connectionCacheCellPurgeTimeout;
-(double)_longLivedConnectionCachePurgeTimeout;
-(double)_longLivedConnectionCacheCellPurgeTimeout;
-(id)_connectionPoolName;
-(void)set_connectionPoolName:(id)arg1 ;
-(long long)pipeliningHighWatermark;
-(void)setPipeliningHighWatermark:(long long)arg1 ;
-(long long)pipeliningLowWatermark;
-(void)setPipeliningLowWatermark:(long long)arg1 ;
-(long long)numPriorityLevels;
-(void)setNumPriorityLevels:(long long)arg1 ;
-(long long)numFastLanes;
-(void)setNumFastLanes:(long long)arg1 ;
-(long long)minimumFastLanePriority;
-(void)setMinimumFastLanePriority:(long long)arg1 ;
-(void)set_tcpConnectionPoolName:(id)arg1 ;
-(id)_contentDispHeadEncFallback;
-(void)set_contentDispHeadEncFallback:(id)arg1 ;
-(void)set_preventsIdleSleepOnceConnected:(BOOL)arg1 ;
-(void)set_overridesBackgroundSessionAutoRedirect:(BOOL)arg1 ;
-(BOOL)_performsEVCertCheck;
-(void)set_performsEVCertCheck:(BOOL)arg1 ;
-(void)set_appleIDContext:(id)arg1 ;
-(void)set_atsContext:(id)arg1 ;
-(BOOL)_prefersInfraWiFi;
-(void)set_prefersInfraWiFi:(BOOL)arg1 ;
-(BOOL)_shouldPreserveBackgroundSessionDisposition;
-(void)set_shouldPreserveBackgroundSessionDisposition:(BOOL)arg1 ;
-(BOOL)_disablesOutOfProcessDirectWiFiUsage;
-(void)set_disablesOutOfProcessDirectWiFiUsage:(BOOL)arg1 ;
-(BOOL)_disablesUseOfProxySession;
-(void)set_disablesUseOfProxySession:(BOOL)arg1 ;
-(BOOL)_preventsDirectWiFiAccess;
-(void)set_customReadBufferSize:(unsigned long long)arg1 ;
-(void)set_customReadBufferTimeout:(double)arg1 ;
-(void)set_allowsMultipathTCP:(BOOL)arg1 ;
-(void)set_allowsResponseMonitoringDuringBodyTranmission:(BOOL)arg1 ;
-(void)set_allowsIndefiniteConnections:(BOOL)arg1 ;
-(void)set_allowsTLSSessionTickets:(BOOL)arg1 ;
-(id)_companionAppBundleIdentifier;
-(void)set_companionAppBundleIdentifier:(id)arg1 ;
-(id)_watchAppBundleIdentifier;
-(void)set_watchAppBundleIdentifier:(id)arg1 ;
-(id)_watchExtensionBundleIdentifier;
-(void)set_watchExtensionBundleIdentifier:(id)arg1 ;
-(void)set_forcedNetworkServiceType:(unsigned long long)arg1 ;
-(void)set_overriddenDelegateOptions:(id)arg1 ;
-(void)setHSTSPolicy:(CFHSTSPolicyRef)arg1 ;
-(BOOL)_phskip_credStorageSet;
-(BOOL)_phskip_urlCacheSet;
-(BOOL)_phskip_cookieStorageSet;
-(BOOL)_phskip_hstsStorageSet;
-(void)set_phskip_credStorageSet:(BOOL)arg1 ;
-(void)set_phskip_urlCacheSet:(BOOL)arg1 ;
-(void)set_phskip_cookieStorageSet:(BOOL)arg1 ;
-(void)set_phskip_hstsStorageSet:(BOOL)arg1 ;
-(void)set_CTDataConnectionServiceType:(id)arg1 ;
-(void)set_timingDataOptions:(long long)arg1 ;
-(void)set_sourceApplicationBundleIdentifier:(id)arg1 ;
-(void)set_infersDiscretionaryFromOriginatingClient:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(void)set_sourceApplicationAuditTokenData:(id)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(void)setHTTPMaximumConnectionsPerHost:(long long)arg1 ;
-(void)set_connectionCachePurgeTimeout:(double)arg1 ;
-(id)disposition;
-(void)setDisposition:(id)arg1 ;
-(void)setTimeoutIntervalForRequest:(double)arg1 ;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(void)setHTTPShouldUsePipelining:(BOOL)arg1 ;
-(void)setRequestCachePolicy:(unsigned long long)arg1 ;
-(void)setURLCache:(id)arg1 ;
-(id)URLCache;
-(void)setNetworkServiceType:(unsigned long long)arg1 ;
-(unsigned long long)networkServiceType;
-(BOOL)HTTPShouldUsePipelining;
-(void)setHTTPCookieAcceptPolicy:(unsigned long long)arg1 ;
-(void)setHTTPCookieStorage:(id)arg1 ;
-(void)setHTTPShouldSetCookies:(BOOL)arg1 ;
-(void)setURLCredentialStorage:(id)arg1 ;
@end

