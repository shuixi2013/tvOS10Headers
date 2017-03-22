/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPAccessoryServerBTLE.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>
#import <libobjc.A.dylib/HAPBTLEControlOutputStreamDelegate.h>
#import <libobjc.A.dylib/HAPPairSetupSessionClientDelegate.h>
#import <libobjc.A.dylib/HAPSecuritySessionDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@class HAPSecuritySession, HMFTimer, _HAPBTLEDiscoveryContext, HAPCharacteristic, HAPPairSetupSession, NSOperationQueue, NSMutableArray, NSMapTable, NSString;

@interface _HAPAccessoryServerBTLE200 : HAPAccessoryServerBTLE <CBPeripheralDelegate, HAPBTLEControlOutputStreamDelegate, HAPPairSetupSessionClientDelegate, HAPSecuritySessionDelegate, HMFTimerDelegate> {

	BOOL _verified;
	BOOL _badPairSetupCode;
	BOOL _pairing;
	BOOL _supportsMFiPairSetup;
	HAPSecuritySession* _securitySession;
	long long _connectionState;
	/*^block*/id _connectionCompletionHandler;
	HMFTimer* _connectionIdleTimer;
	_HAPBTLEDiscoveryContext* _discoveryContext;
	HAPCharacteristic* _identifyCharacteristic;
	HAPPairSetupSession* _pairSetupSession;
	double _pairSetupBackoffTimeInterval;
	/*^block*/id _setupCodeCompletionHandler;
	HAPCharacteristic* _pairingFeaturesCharacteristic;
	HAPCharacteristic* _pairSetupCharacteristic;
	HAPCharacteristic* _pairVerifyCharacteristic;
	NSOperationQueue* _pairVerifyOperationQueue;
	HAPCharacteristic* _pairingsCharacteristic;
	NSMutableArray* _pendingRequests;
	NSOperationQueue* _requestOperationQueue;
	NSMutableArray* _pendingResponses;
	NSOperationQueue* _clientOperationQueue;
	NSMapTable* _characteristicWriteCompletionHandlers;
	NSMapTable* _characteristicEnableEventCompletionHandlers;

}

@property (assign,nonatomic) long long connectionState;                                               //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,copy) id connectionCompletionHandler;                                            //@synthesize connectionCompletionHandler=_connectionCompletionHandler - In the implementation block
@property (nonatomic,retain) HMFTimer * connectionIdleTimer;                                          //@synthesize connectionIdleTimer=_connectionIdleTimer - In the implementation block
@property (nonatomic,retain) _HAPBTLEDiscoveryContext * discoveryContext;                             //@synthesize discoveryContext=_discoveryContext - In the implementation block
@property (assign,getter=isVerified,nonatomic) BOOL verified;                                         //@synthesize verified=_verified - In the implementation block
@property (assign,nonatomic,__weak) HAPCharacteristic * identifyCharacteristic;                       //@synthesize identifyCharacteristic=_identifyCharacteristic - In the implementation block
@property (nonatomic,retain) HAPPairSetupSession * pairSetupSession;                                  //@synthesize pairSetupSession=_pairSetupSession - In the implementation block
@property (assign,nonatomic) double pairSetupBackoffTimeInterval;                                     //@synthesize pairSetupBackoffTimeInterval=_pairSetupBackoffTimeInterval - In the implementation block
@property (assign,getter=isBadSetupCode,nonatomic) BOOL badPairSetupCode;                             //@synthesize badPairSetupCode=_badPairSetupCode - In the implementation block
@property (nonatomic,copy) id setupCodeCompletionHandler;                                             //@synthesize setupCodeCompletionHandler=_setupCodeCompletionHandler - In the implementation block
@property (assign,getter=isPairing,nonatomic) BOOL pairing;                                           //@synthesize pairing=_pairing - In the implementation block
@property (assign,nonatomic) BOOL supportsMFiPairSetup;                                               //@synthesize supportsMFiPairSetup=_supportsMFiPairSetup - In the implementation block
@property (assign,nonatomic,__weak) HAPCharacteristic * pairingFeaturesCharacteristic;                //@synthesize pairingFeaturesCharacteristic=_pairingFeaturesCharacteristic - In the implementation block
@property (assign,nonatomic,__weak) HAPCharacteristic * pairSetupCharacteristic;                      //@synthesize pairSetupCharacteristic=_pairSetupCharacteristic - In the implementation block
@property (nonatomic,retain) HAPSecuritySession * securitySession;                                    //@synthesize securitySession=_securitySession - In the implementation block
@property (assign,nonatomic,__weak) HAPCharacteristic * pairVerifyCharacteristic;                     //@synthesize pairVerifyCharacteristic=_pairVerifyCharacteristic - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * pairVerifyOperationQueue;                           //@synthesize pairVerifyOperationQueue=_pairVerifyOperationQueue - In the implementation block
@property (assign,nonatomic,__weak) HAPCharacteristic * pairingsCharacteristic;                       //@synthesize pairingsCharacteristic=_pairingsCharacteristic - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRequests;                                      //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * requestOperationQueue;                              //@synthesize requestOperationQueue=_requestOperationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingResponses;                                     //@synthesize pendingResponses=_pendingResponses - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * clientOperationQueue;                               //@synthesize clientOperationQueue=_clientOperationQueue - In the implementation block
@property (nonatomic,readonly) NSMapTable * characteristicWriteCompletionHandlers;                    //@synthesize characteristicWriteCompletionHandlers=_characteristicWriteCompletionHandlers - In the implementation block
@property (nonatomic,readonly) NSMapTable * characteristicEnableEventCompletionHandlers;              //@synthesize characteristicEnableEventCompletionHandlers=_characteristicEnableEventCompletionHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)signatureRequestForCharacteristic:(id)arg1 requiresAuthentication:(BOOL)arg2 error:(id*)arg3 ;
+(id)parseSignatureResponse:(id)arg1 error:(id*)arg2 ;
+(id)signatureRequestForService:(id)arg1 characteristic:(id)arg2 requiresAuthentication:(BOOL)arg3 error:(id*)arg4 ;
+(id)parseServiceSignatureResponse:(id)arg1 serviceInstanceID:(id)arg2 serviceType:(id)arg3 error:(id*)arg4 ;
+(BOOL)parseReadResponse:(id)arg1 value:(id*)arg2 error:(id*)arg3 ;
+(id)readRequestForCharacteristic:(id)arg1 options:(long long)arg2 error:(id*)arg3 ;
+(BOOL)parseWriteResponse:(id)arg1 value:(id*)arg2 error:(id*)arg3 ;
+(id)writeRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 error:(id*)arg5 ;
+(id)prepareWriteRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 error:(id*)arg5 ;
+(id)executeWriteRequestForCharacteristic:(id)arg1 options:(long long)arg2 error:(id*)arg3 ;
+(BOOL)isHAPService:(id)arg1 ;
+(BOOL)isHAPDescriptor:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)shortDescription;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)connectionState;
-(BOOL)isPairing;
-(void)setPairing:(BOOL)arg1 ;
-(void)peripheral:(id)arg1 didModifyServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3 ;
-(void)_enqueueRequest:(id)arg1 ;
-(void)setVerified:(BOOL)arg1 ;
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(void)_establishSecureSession;
-(void)setSecuritySessionOpen:(BOOL)arg1 ;
-(void)_enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isVerified;
-(void)_suspendConnectionIdleTimer;
-(void)_sendRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_readValueForCharacteristic:(id)arg1 options:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSOperationQueue *)clientOperationQueue;
-(void)_writeValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_performTimedWriteValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_performWriteValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_performTimedWriteExecuteForCharacteristic:(id)arg1 value:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_performTimedWritePrepareWithValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_sendPairingRequestData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HAPCharacteristic *)pairingsCharacteristic;
-(void)setSecuritySession:(HAPSecuritySession *)arg1 ;
-(HAPCharacteristic *)pairVerifyCharacteristic;
-(HAPSecuritySession *)securitySession;
-(void)_cancelAllQueuedOperationsWithError:(id)arg1 ;
-(void)_resumeAllOperations;
-(void)_requestResponseForRequest:(id)arg1 ;
-(void)_reallySendRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_pendingResponseForRequest:(id)arg1 ;
-(unsigned long long)_outstandingRequests;
-(void)_resumeConnectionIdleTimer;
-(id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id*)arg2 ;
-(void)_kickConnectionIdleTimer;
-(id)_decryptData:(id)arg1 error:(id*)arg2 ;
-(NSOperationQueue *)pairVerifyOperationQueue;
-(void)_suspendAllOperations;
-(HMFTimer *)connectionIdleTimer;
-(void)setPairVerifyCharacteristic:(HAPCharacteristic *)arg1 ;
-(void)setPairingsCharacteristic:(HAPCharacteristic *)arg1 ;
-(void)_sendControlPacket:(id)arg1 forRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)getLocalPairingIdentityAndAllowCreation:(BOOL)arg1 error:(id*)arg2 ;
-(void)_handleConnectionIdleTimeout;
-(void)controlOutputStream:(id)arg1 didReceiveRequestToSendControlPacket:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)controlOutputStreamDidOpen:(id)arg1 ;
-(void)controlOutputStream:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)controlOutputStreamDidComplete:(id)arg1 ;
-(id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2 ;
-(id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2 ;
-(void)securitySessionIsOpening:(id)arg1 ;
-(void)securitySessionDidOpen:(id)arg1 ;
-(void)securitySession:(id)arg1 didCloseWithError:(id)arg2 ;
-(id)_pendingRequestForCharacteristic:(id)arg1 ;
-(void)setConnectionIdleTimer:(HMFTimer *)arg1 ;
-(void)handleDisconnectionWithError:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateConnectionIdleTime:(unsigned char)arg1 ;
-(void)handleConnectionWithError:(id)arg1 ;
-(id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(BOOL)arg6 configNumber:(id)arg7 category:(id)arg8 connectionIdleTime:(unsigned char)arg9 browser:(id)arg10 keyStore:(id)arg11 ;
-(void)_createPrimaryAccessoryFromAdvertisementData;
-(NSMapTable *)characteristicWriteCompletionHandlers;
-(NSMapTable *)characteristicEnableEventCompletionHandlers;
-(void)_cancelDiscoveryWithError:(id)arg1 ;
-(void)_pairingCompletedWithError:(id)arg1 ;
-(HAPPairSetupSession *)pairSetupSession;
-(void)setPairSetupSession:(HAPPairSetupSession *)arg1 ;
-(id)_serviceForCBService:(id)arg1 ;
-(void)_discoverWithType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(_HAPBTLEDiscoveryContext *)discoveryContext;
-(void)setDiscoveryContext:(_HAPBTLEDiscoveryContext *)arg1 ;
-(void)_discoverServices;
-(void)_retryDiscovery;
-(id)_parseService:(id)arg1 error:(id*)arg2 ;
-(void)_discoverService:(id)arg1 ;
-(void)_readCharacteristicValue:(id)arg1 ;
-(void)_readCharacteristicSignatures;
-(BOOL)isHAPCharacteristic:(id)arg1 ;
-(id)_getServiceInstanceID:(id)arg1 ;
-(void)_discoverCharacteristic:(id)arg1 ;
-(void)_readDescriptorValue:(id)arg1 ;
-(void)_handleReadServiceInstanceId:(id)arg1 ;
-(void)_readServiceSignature:(id)arg1 ;
-(void)_readCharacteristicSignature:(id)arg1 ;
-(void)_handleCompletedDiscovery;
-(void)_handleReadCharacteristicSignature:(id)arg1 error:(id)arg2 ;
-(id)_getCharacteristicInstanceID:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldVerifyHAPCharacteristic:(id)arg1 ;
-(id)_characteristicForCBCharacteristic:(id)arg1 ;
-(void)_handleReadServiceSignature:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldVerifyHAPService:(id)arg1 ;
-(id)_parseCharacteristic:(id)arg1 error:(id*)arg2 ;
-(void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)markNotifyingCharacteristicUpdatedforCharacteristic:(id)arg1 ;
-(void)_enableEvent:(BOOL)arg1 forCharacteristic:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)_performEnableEvent:(BOOL)arg1 toCharacteristic:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_enableEvent:(BOOL)arg1 toCharacteristic:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_checkForAuthPrompt;
-(void)setSupportsMFiPairSetup:(BOOL)arg1 ;
-(void)_getPairingFeaturesWithCompletionHandler:(/*^block*/id)arg1 ;
-(HAPCharacteristic *)pairingFeaturesCharacteristic;
-(BOOL)_parsePairingFeaturesCharacteristic:(id)arg1 supportsMFiPairSetup:(BOOL*)arg2 error:(id*)arg3 ;
-(BOOL)supportsMFiPairSetup;
-(HAPCharacteristic *)pairSetupCharacteristic;
-(BOOL)isBadSetupCode;
-(void)setSetupCodeCompletionHandler:(id)arg1 ;
-(double)pairSetupBackoffTimeInterval;
-(id)setupCodeCompletionHandler;
-(void)setBadPairSetupCode:(BOOL)arg1 ;
-(void)setPairSetupBackoffTimeInterval:(double)arg1 ;
-(void)disconnectWithCompletionHandler:(/*^block*/id)arg1 ;
-(HAPCharacteristic *)identifyCharacteristic;
-(void)_resetWithError:(id)arg1 ;
-(unsigned long long)_maximumControlWriteLengthForRequest:(id)arg1 ;
-(void)_sendData:(id)arg1 toCharacteristic:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setConnectionCompletionHandler:(id)arg1 ;
-(void)_restartConnectionIdleTimer:(double)arg1 ;
-(void)setConnectionState:(long long)arg1 ;
-(id)connectionCompletionHandler;
-(void)_updateConnectionIdleTime:(unsigned char)arg1 ;
-(void)_cancelConnectionWithError:(id)arg1 ;
-(void)_handleDiscoveredServices:(id)arg1 error:(id)arg2 ;
-(void)_handleDiscoveredService:(id)arg1 error:(id)arg2 ;
-(void)_handleDiscoveredCharactersitic:(id)arg1 error:(id)arg2 ;
-(void)_handleReadDescriptorValue:(id)arg1 error:(id)arg2 ;
-(void)_handleReadCharacteristicValue:(id)arg1 error:(id)arg2 ;
-(void)_handleEventIndicationForCharacteristic:(id)arg1 ;
-(void)_handleResponseData:(id)arg1 fromCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)_handleWriteCompletionForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)_handleHAPNotificationStateUpdateForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)_handlePairSetupSessionExchangeData:(id)arg1 ;
-(void)_handlePairingSetupCodeRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleSecuritySessionSetupExchangeData:(id)arg1 ;
-(void)pairSetupSession:(id)arg1 didReceiveSetupCodeRequestWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)pairSetupSessionDidReceiveInvalidSetupCode:(id)arg1 ;
-(BOOL)pairSetupSession:(id)arg1 didReceiveBackoffRequestWithTimeInterval:(double)arg2 ;
-(id)pairSetupSession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2 ;
-(BOOL)pairSetupSession:(id)arg1 didPairWithPeer:(id)arg2 error:(id*)arg3 ;
-(void)pairSetupSession:(id)arg1 didReceiveSetupExchangeData:(id)arg2 ;
-(void)pairSetupSession:(id)arg1 didStopWithError:(id)arg2 ;
-(unsigned long long)hapBLEProtocolVersion;
-(void)_notifyDelegateOfReceivedEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2 ;
-(void)_notifyDelegateOfReceivedPlaintextData:(id)arg1 forCharacteristic:(id)arg2 ;
-(void)_notifyDelegateOfSentEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2 ;
-(void)_notifyDelegateOfSentPlaintextData:(id)arg1 forCharacteristic:(id)arg2 ;
-(void)setIdentifyCharacteristic:(HAPCharacteristic *)arg1 ;
-(void)setPairingFeaturesCharacteristic:(HAPCharacteristic *)arg1 ;
-(void)setPairSetupCharacteristic:(HAPCharacteristic *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableArray *)pendingResponses;
-(NSMutableArray *)pendingRequests;
-(void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isSecuritySessionOpen;
-(NSOperationQueue *)requestOperationQueue;
-(BOOL)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)startPairing;
-(void)continuePairingAfterAuthPrompt;
-(BOOL)stopPairingWithError:(id*)arg1 ;
-(BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(void)discoverAccessories;
@end

