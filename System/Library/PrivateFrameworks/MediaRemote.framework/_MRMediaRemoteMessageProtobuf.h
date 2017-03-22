/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _MRClientUpdatesConfigurationProtobuf, _MRSetConnectionStateMessageProtobuf, _MRPlaybackQueueProtobuf, _MRCryptoPairingMessageProtobuf, _MRDeviceInfoMessageProtobuf, _MRGameControllerMessageProtobuf, _MRGameControllerPropertiesMessageProtobuf, _MRGenericMessageProtobuf, _MRGetKeyboardSessionProtobuf, _MRGetPlaybackQueueMessageProtobuf, _MRGetStateMessageProtobuf, _MRGetVoiceInputDevicesMessageProtobuf, _MRGetVoiceInputDevicesResponseMessageProtobuf, _MRKeyboardMessageProtobuf, _MRNotificationMessageProtobuf, _MRSetReadyStateMessageProtobuf, _MRRegisterForGameControllerEventsMessageProtobuf, _MRRegisterGameControllerMessageProtobuf, _MRRegisterGameControllerResponseMessageProtobuf, _MRRegisterHIDDeviceMessageProtobuf, _MRRegisterHIDDeviceResultMessageProtobuf, _MRRegisterVoiceInputDeviceMessageProtobuf, _MRRegisterVoiceInputDeviceResponseMessageProtobuf, _MRSendButtonEventMessageProtobuf, _MRSendCommandMessageProtobuf, _MRSendCommandResultMessageProtobuf, _MRSendHIDEventMessageProtobuf, _MRSendHIDReportMessageProtobuf, _MRSendVirtualTouchEventMessageProtobuf, _MRSendVoiceInputMessageProtobuf, _MRSetArtworkMessageProtobuf, _MRSetHiliteModeMessageProtobuf, _MRSetRecordingStateMessageProtobuf, _MRSetStateMessageProtobuf, _MRTextInputMessageProtobuf, _MRTransactionMessageProtobuf, _MRUnregisterGameControllerMessageProtobuf, _MRVolumeControlAvailabilityProtobuf, _MRWakeDeviceMessageProtobuf;

@interface _MRMediaRemoteMessageProtobuf : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _authenticationToken;
	_MRClientUpdatesConfigurationProtobuf* _clientUpdatesConfigMessage;
	_MRSetConnectionStateMessageProtobuf* _connectionState;
	_MRPlaybackQueueProtobuf* _contentItemsChangedNotificationMessage;
	_MRCryptoPairingMessageProtobuf* _cryptoPairingMessage;
	_MRDeviceInfoMessageProtobuf* _deviceInfoMessage;
	unsigned _errorCode;
	_MRGameControllerMessageProtobuf* _gameController;
	_MRGameControllerPropertiesMessageProtobuf* _gameControllerProperties;
	_MRGenericMessageProtobuf* _genericMessage;
	_MRGetKeyboardSessionProtobuf* _getKeyboardMessage;
	_MRGetPlaybackQueueMessageProtobuf* _getPlaybackQueue;
	_MRGetStateMessageProtobuf* _getStateMessage;
	_MRGetVoiceInputDevicesMessageProtobuf* _getVoiceInputDevicesMessage;
	_MRGetVoiceInputDevicesResponseMessageProtobuf* _getVoiceInputDevicesResponseMessage;
	NSString* _identifier;
	_MRKeyboardMessageProtobuf* _keyboardMessage;
	_MRNotificationMessageProtobuf* _notificationMessage;
	_MRSetReadyStateMessageProtobuf* _readyStateMessage;
	_MRRegisterForGameControllerEventsMessageProtobuf* _registerForGameControllerEvents;
	_MRRegisterGameControllerMessageProtobuf* _registerGameController;
	_MRRegisterGameControllerResponseMessageProtobuf* _registerGameControllerResponse;
	_MRRegisterHIDDeviceMessageProtobuf* _registerHIDDeviceMessage;
	_MRRegisterHIDDeviceResultMessageProtobuf* _registerHIDDeviceResultMessage;
	_MRRegisterVoiceInputDeviceMessageProtobuf* _registerVoiceInputDeviceMessage;
	_MRRegisterVoiceInputDeviceResponseMessageProtobuf* _registerVoiceInputDeviceResponseMessage;
	_MRSendButtonEventMessageProtobuf* _sendButtonEventMessage;
	_MRSendCommandMessageProtobuf* _sendCommandMessage;
	_MRSendCommandResultMessageProtobuf* _sendCommandResultMessage;
	_MRSendHIDEventMessageProtobuf* _sendHIDEventMessage;
	_MRSendHIDReportMessageProtobuf* _sendHIDReportMessage;
	_MRSendVirtualTouchEventMessageProtobuf* _sendVirtualTouchEventMessage;
	_MRSendVoiceInputMessageProtobuf* _sendVoiceInputMessage;
	_MRSetArtworkMessageProtobuf* _setArtworkMessage;
	_MRSetHiliteModeMessageProtobuf* _setHiliteModeMessage;
	_MRSetRecordingStateMessageProtobuf* _setRecordingStateMessage;
	_MRSetStateMessageProtobuf* _setStateMessage;
	_MRTextInputMessageProtobuf* _textInputMessage;
	_MRTransactionMessageProtobuf* _transactionPackets;
	int _type;
	_MRUnregisterGameControllerMessageProtobuf* _unregisterGameController;
	_MRVolumeControlAvailabilityProtobuf* _volumeControlAvailabilityMessage;
	_MRWakeDeviceMessageProtobuf* _wakeDeviceMessage;
	SCD_Struct_MR13 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                                                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                                                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthenticationToken; 
@property (nonatomic,retain) NSString * authenticationToken;                                                                            //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                                                                                        //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSendCommandMessage; 
@property (nonatomic,retain) _MRSendCommandMessageProtobuf * sendCommandMessage;                                                        //@synthesize sendCommandMessage=_sendCommandMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSendCommandResultMessage; 
@property (nonatomic,retain) _MRSendCommandResultMessageProtobuf * sendCommandResultMessage;                                            //@synthesize sendCommandResultMessage=_sendCommandResultMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasGetStateMessage; 
@property (nonatomic,retain) _MRGetStateMessageProtobuf * getStateMessage;                                                              //@synthesize getStateMessage=_getStateMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSetStateMessage; 
@property (nonatomic,retain) _MRSetStateMessageProtobuf * setStateMessage;                                                              //@synthesize setStateMessage=_setStateMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSetArtworkMessage; 
@property (nonatomic,retain) _MRSetArtworkMessageProtobuf * setArtworkMessage;                                                          //@synthesize setArtworkMessage=_setArtworkMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasRegisterHIDDeviceMessage; 
@property (nonatomic,retain) _MRRegisterHIDDeviceMessageProtobuf * registerHIDDeviceMessage;                                            //@synthesize registerHIDDeviceMessage=_registerHIDDeviceMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasRegisterHIDDeviceResultMessage; 
@property (nonatomic,retain) _MRRegisterHIDDeviceResultMessageProtobuf * registerHIDDeviceResultMessage;                                //@synthesize registerHIDDeviceResultMessage=_registerHIDDeviceResultMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSendHIDEventMessage; 
@property (nonatomic,retain) _MRSendHIDEventMessageProtobuf * sendHIDEventMessage;                                                      //@synthesize sendHIDEventMessage=_sendHIDEventMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSendHIDReportMessage; 
@property (nonatomic,retain) _MRSendHIDReportMessageProtobuf * sendHIDReportMessage;                                                    //@synthesize sendHIDReportMessage=_sendHIDReportMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSendVirtualTouchEventMessage; 
@property (nonatomic,retain) _MRSendVirtualTouchEventMessageProtobuf * sendVirtualTouchEventMessage;                                    //@synthesize sendVirtualTouchEventMessage=_sendVirtualTouchEventMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationMessage; 
@property (nonatomic,retain) _MRNotificationMessageProtobuf * notificationMessage;                                                      //@synthesize notificationMessage=_notificationMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasContentItemsChangedNotificationMessage; 
@property (nonatomic,retain) _MRPlaybackQueueProtobuf * contentItemsChangedNotificationMessage;                                         //@synthesize contentItemsChangedNotificationMessage=_contentItemsChangedNotificationMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInfoMessage; 
@property (nonatomic,retain) _MRDeviceInfoMessageProtobuf * deviceInfoMessage;                                                          //@synthesize deviceInfoMessage=_deviceInfoMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasClientUpdatesConfigMessage; 
@property (nonatomic,retain) _MRClientUpdatesConfigurationProtobuf * clientUpdatesConfigMessage;                                        //@synthesize clientUpdatesConfigMessage=_clientUpdatesConfigMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasVolumeControlAvailabilityMessage; 
@property (nonatomic,retain) _MRVolumeControlAvailabilityProtobuf * volumeControlAvailabilityMessage;                                   //@synthesize volumeControlAvailabilityMessage=_volumeControlAvailabilityMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasGameController; 
@property (nonatomic,retain) _MRGameControllerMessageProtobuf * gameController;                                                         //@synthesize gameController=_gameController - In the implementation block
@property (nonatomic,readonly) BOOL hasRegisterGameController; 
@property (nonatomic,retain) _MRRegisterGameControllerMessageProtobuf * registerGameController;                                         //@synthesize registerGameController=_registerGameController - In the implementation block
@property (nonatomic,readonly) BOOL hasRegisterGameControllerResponse; 
@property (nonatomic,retain) _MRRegisterGameControllerResponseMessageProtobuf * registerGameControllerResponse;                         //@synthesize registerGameControllerResponse=_registerGameControllerResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasUnregisterGameController; 
@property (nonatomic,retain) _MRUnregisterGameControllerMessageProtobuf * unregisterGameController;                                     //@synthesize unregisterGameController=_unregisterGameController - In the implementation block
@property (nonatomic,readonly) BOOL hasRegisterForGameControllerEvents; 
@property (nonatomic,retain) _MRRegisterForGameControllerEventsMessageProtobuf * registerForGameControllerEvents;                       //@synthesize registerForGameControllerEvents=_registerForGameControllerEvents - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyboardMessage; 
@property (nonatomic,retain) _MRKeyboardMessageProtobuf * keyboardMessage;                                                              //@synthesize keyboardMessage=_keyboardMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasGetKeyboardMessage; 
@property (nonatomic,retain) _MRGetKeyboardSessionProtobuf * getKeyboardMessage;                                                        //@synthesize getKeyboardMessage=_getKeyboardMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasTextInputMessage; 
@property (nonatomic,retain) _MRTextInputMessageProtobuf * textInputMessage;                                                            //@synthesize textInputMessage=_textInputMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasGetVoiceInputDevicesMessage; 
@property (nonatomic,retain) _MRGetVoiceInputDevicesMessageProtobuf * getVoiceInputDevicesMessage;                                      //@synthesize getVoiceInputDevicesMessage=_getVoiceInputDevicesMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasGetVoiceInputDevicesResponseMessage; 
@property (nonatomic,retain) _MRGetVoiceInputDevicesResponseMessageProtobuf * getVoiceInputDevicesResponseMessage;                      //@synthesize getVoiceInputDevicesResponseMessage=_getVoiceInputDevicesResponseMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasRegisterVoiceInputDeviceMessage; 
@property (nonatomic,retain) _MRRegisterVoiceInputDeviceMessageProtobuf * registerVoiceInputDeviceMessage;                              //@synthesize registerVoiceInputDeviceMessage=_registerVoiceInputDeviceMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasRegisterVoiceInputDeviceResponseMessage; 
@property (nonatomic,retain) _MRRegisterVoiceInputDeviceResponseMessageProtobuf * registerVoiceInputDeviceResponseMessage;              //@synthesize registerVoiceInputDeviceResponseMessage=_registerVoiceInputDeviceResponseMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSetRecordingStateMessage; 
@property (nonatomic,retain) _MRSetRecordingStateMessageProtobuf * setRecordingStateMessage;                                            //@synthesize setRecordingStateMessage=_setRecordingStateMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSendVoiceInputMessage; 
@property (nonatomic,retain) _MRSendVoiceInputMessageProtobuf * sendVoiceInputMessage;                                                  //@synthesize sendVoiceInputMessage=_sendVoiceInputMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasGetPlaybackQueue; 
@property (nonatomic,retain) _MRGetPlaybackQueueMessageProtobuf * getPlaybackQueue;                                                     //@synthesize getPlaybackQueue=_getPlaybackQueue - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionPackets; 
@property (nonatomic,retain) _MRTransactionMessageProtobuf * transactionPackets;                                                        //@synthesize transactionPackets=_transactionPackets - In the implementation block
@property (nonatomic,readonly) BOOL hasCryptoPairingMessage; 
@property (nonatomic,retain) _MRCryptoPairingMessageProtobuf * cryptoPairingMessage;                                                    //@synthesize cryptoPairingMessage=_cryptoPairingMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasGameControllerProperties; 
@property (nonatomic,retain) _MRGameControllerPropertiesMessageProtobuf * gameControllerProperties;                                     //@synthesize gameControllerProperties=_gameControllerProperties - In the implementation block
@property (nonatomic,readonly) BOOL hasReadyStateMessage; 
@property (nonatomic,retain) _MRSetReadyStateMessageProtobuf * readyStateMessage;                                                       //@synthesize readyStateMessage=_readyStateMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasConnectionState; 
@property (nonatomic,retain) _MRSetConnectionStateMessageProtobuf * connectionState;                                                    //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,readonly) BOOL hasSendButtonEventMessage; 
@property (nonatomic,retain) _MRSendButtonEventMessageProtobuf * sendButtonEventMessage;                                                //@synthesize sendButtonEventMessage=_sendButtonEventMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSetHiliteModeMessage; 
@property (nonatomic,retain) _MRSetHiliteModeMessageProtobuf * setHiliteModeMessage;                                                    //@synthesize setHiliteModeMessage=_setHiliteModeMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasWakeDeviceMessage; 
@property (nonatomic,retain) _MRWakeDeviceMessageProtobuf * wakeDeviceMessage;                                                          //@synthesize wakeDeviceMessage=_wakeDeviceMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasGenericMessage; 
@property (nonatomic,retain) _MRGenericMessageProtobuf * genericMessage;                                                                //@synthesize genericMessage=_genericMessage - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(NSString *)identifier;
-(void)setType:(int)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasIdentifier;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(unsigned)errorCode;
-(void)setSendCommandMessage:(_MRSendCommandMessageProtobuf *)arg1 ;
-(void)setSendCommandResultMessage:(_MRSendCommandResultMessageProtobuf *)arg1 ;
-(void)setGetStateMessage:(_MRGetStateMessageProtobuf *)arg1 ;
-(void)setSetStateMessage:(_MRSetStateMessageProtobuf *)arg1 ;
-(void)setSetArtworkMessage:(_MRSetArtworkMessageProtobuf *)arg1 ;
-(void)setRegisterHIDDeviceMessage:(_MRRegisterHIDDeviceMessageProtobuf *)arg1 ;
-(void)setRegisterHIDDeviceResultMessage:(_MRRegisterHIDDeviceResultMessageProtobuf *)arg1 ;
-(void)setSendHIDEventMessage:(_MRSendHIDEventMessageProtobuf *)arg1 ;
-(void)setSendHIDReportMessage:(_MRSendHIDReportMessageProtobuf *)arg1 ;
-(void)setSendVirtualTouchEventMessage:(_MRSendVirtualTouchEventMessageProtobuf *)arg1 ;
-(void)setNotificationMessage:(_MRNotificationMessageProtobuf *)arg1 ;
-(void)setContentItemsChangedNotificationMessage:(_MRPlaybackQueueProtobuf *)arg1 ;
-(void)setDeviceInfoMessage:(_MRDeviceInfoMessageProtobuf *)arg1 ;
-(void)setClientUpdatesConfigMessage:(_MRClientUpdatesConfigurationProtobuf *)arg1 ;
-(void)setVolumeControlAvailabilityMessage:(_MRVolumeControlAvailabilityProtobuf *)arg1 ;
-(void)setGameController:(_MRGameControllerMessageProtobuf *)arg1 ;
-(void)setRegisterGameController:(_MRRegisterGameControllerMessageProtobuf *)arg1 ;
-(void)setRegisterGameControllerResponse:(_MRRegisterGameControllerResponseMessageProtobuf *)arg1 ;
-(void)setUnregisterGameController:(_MRUnregisterGameControllerMessageProtobuf *)arg1 ;
-(void)setRegisterForGameControllerEvents:(_MRRegisterForGameControllerEventsMessageProtobuf *)arg1 ;
-(void)setKeyboardMessage:(_MRKeyboardMessageProtobuf *)arg1 ;
-(void)setGetKeyboardMessage:(_MRGetKeyboardSessionProtobuf *)arg1 ;
-(void)setTextInputMessage:(_MRTextInputMessageProtobuf *)arg1 ;
-(void)setGetVoiceInputDevicesMessage:(_MRGetVoiceInputDevicesMessageProtobuf *)arg1 ;
-(void)setGetVoiceInputDevicesResponseMessage:(_MRGetVoiceInputDevicesResponseMessageProtobuf *)arg1 ;
-(void)setRegisterVoiceInputDeviceMessage:(_MRRegisterVoiceInputDeviceMessageProtobuf *)arg1 ;
-(void)setRegisterVoiceInputDeviceResponseMessage:(_MRRegisterVoiceInputDeviceResponseMessageProtobuf *)arg1 ;
-(void)setSetRecordingStateMessage:(_MRSetRecordingStateMessageProtobuf *)arg1 ;
-(void)setSendVoiceInputMessage:(_MRSendVoiceInputMessageProtobuf *)arg1 ;
-(void)setGetPlaybackQueue:(_MRGetPlaybackQueueMessageProtobuf *)arg1 ;
-(void)setTransactionPackets:(_MRTransactionMessageProtobuf *)arg1 ;
-(void)setCryptoPairingMessage:(_MRCryptoPairingMessageProtobuf *)arg1 ;
-(void)setGameControllerProperties:(_MRGameControllerPropertiesMessageProtobuf *)arg1 ;
-(void)setReadyStateMessage:(_MRSetReadyStateMessageProtobuf *)arg1 ;
-(void)setSendButtonEventMessage:(_MRSendButtonEventMessageProtobuf *)arg1 ;
-(void)setSetHiliteModeMessage:(_MRSetHiliteModeMessageProtobuf *)arg1 ;
-(void)setWakeDeviceMessage:(_MRWakeDeviceMessageProtobuf *)arg1 ;
-(void)setGenericMessage:(_MRGenericMessageProtobuf *)arg1 ;
-(BOOL)hasAuthenticationToken;
-(BOOL)hasSendCommandMessage;
-(BOOL)hasSendCommandResultMessage;
-(BOOL)hasGetStateMessage;
-(BOOL)hasSetStateMessage;
-(BOOL)hasSetArtworkMessage;
-(BOOL)hasRegisterHIDDeviceMessage;
-(BOOL)hasRegisterHIDDeviceResultMessage;
-(BOOL)hasSendHIDEventMessage;
-(BOOL)hasSendHIDReportMessage;
-(BOOL)hasSendVirtualTouchEventMessage;
-(BOOL)hasNotificationMessage;
-(BOOL)hasContentItemsChangedNotificationMessage;
-(BOOL)hasDeviceInfoMessage;
-(BOOL)hasClientUpdatesConfigMessage;
-(BOOL)hasVolumeControlAvailabilityMessage;
-(BOOL)hasGameController;
-(BOOL)hasRegisterGameController;
-(BOOL)hasRegisterGameControllerResponse;
-(BOOL)hasUnregisterGameController;
-(BOOL)hasRegisterForGameControllerEvents;
-(BOOL)hasKeyboardMessage;
-(BOOL)hasGetKeyboardMessage;
-(BOOL)hasTextInputMessage;
-(BOOL)hasGetVoiceInputDevicesMessage;
-(BOOL)hasGetVoiceInputDevicesResponseMessage;
-(BOOL)hasRegisterVoiceInputDeviceMessage;
-(BOOL)hasRegisterVoiceInputDeviceResponseMessage;
-(BOOL)hasSetRecordingStateMessage;
-(BOOL)hasSendVoiceInputMessage;
-(BOOL)hasGetPlaybackQueue;
-(BOOL)hasTransactionPackets;
-(BOOL)hasCryptoPairingMessage;
-(BOOL)hasGameControllerProperties;
-(BOOL)hasReadyStateMessage;
-(BOOL)hasConnectionState;
-(BOOL)hasSendButtonEventMessage;
-(BOOL)hasSetHiliteModeMessage;
-(BOOL)hasWakeDeviceMessage;
-(BOOL)hasGenericMessage;
-(_MRSendCommandMessageProtobuf *)sendCommandMessage;
-(_MRSendCommandResultMessageProtobuf *)sendCommandResultMessage;
-(_MRGetStateMessageProtobuf *)getStateMessage;
-(_MRSetStateMessageProtobuf *)setStateMessage;
-(_MRSetArtworkMessageProtobuf *)setArtworkMessage;
-(_MRRegisterHIDDeviceMessageProtobuf *)registerHIDDeviceMessage;
-(_MRRegisterHIDDeviceResultMessageProtobuf *)registerHIDDeviceResultMessage;
-(_MRSendHIDEventMessageProtobuf *)sendHIDEventMessage;
-(_MRSendHIDReportMessageProtobuf *)sendHIDReportMessage;
-(_MRSendVirtualTouchEventMessageProtobuf *)sendVirtualTouchEventMessage;
-(_MRNotificationMessageProtobuf *)notificationMessage;
-(_MRPlaybackQueueProtobuf *)contentItemsChangedNotificationMessage;
-(_MRDeviceInfoMessageProtobuf *)deviceInfoMessage;
-(_MRClientUpdatesConfigurationProtobuf *)clientUpdatesConfigMessage;
-(_MRVolumeControlAvailabilityProtobuf *)volumeControlAvailabilityMessage;
-(_MRGameControllerMessageProtobuf *)gameController;
-(_MRRegisterGameControllerMessageProtobuf *)registerGameController;
-(_MRRegisterGameControllerResponseMessageProtobuf *)registerGameControllerResponse;
-(_MRUnregisterGameControllerMessageProtobuf *)unregisterGameController;
-(_MRRegisterForGameControllerEventsMessageProtobuf *)registerForGameControllerEvents;
-(_MRKeyboardMessageProtobuf *)keyboardMessage;
-(_MRGetKeyboardSessionProtobuf *)getKeyboardMessage;
-(_MRTextInputMessageProtobuf *)textInputMessage;
-(_MRGetVoiceInputDevicesMessageProtobuf *)getVoiceInputDevicesMessage;
-(_MRGetVoiceInputDevicesResponseMessageProtobuf *)getVoiceInputDevicesResponseMessage;
-(_MRRegisterVoiceInputDeviceMessageProtobuf *)registerVoiceInputDeviceMessage;
-(_MRRegisterVoiceInputDeviceResponseMessageProtobuf *)registerVoiceInputDeviceResponseMessage;
-(_MRSetRecordingStateMessageProtobuf *)setRecordingStateMessage;
-(_MRSendVoiceInputMessageProtobuf *)sendVoiceInputMessage;
-(_MRGetPlaybackQueueMessageProtobuf *)getPlaybackQueue;
-(_MRTransactionMessageProtobuf *)transactionPackets;
-(_MRCryptoPairingMessageProtobuf *)cryptoPairingMessage;
-(_MRGameControllerPropertiesMessageProtobuf *)gameControllerProperties;
-(_MRSetReadyStateMessageProtobuf *)readyStateMessage;
-(_MRSendButtonEventMessageProtobuf *)sendButtonEventMessage;
-(_MRSetHiliteModeMessageProtobuf *)setHiliteModeMessage;
-(_MRWakeDeviceMessageProtobuf *)wakeDeviceMessage;
-(_MRGenericMessageProtobuf *)genericMessage;
-(_MRSetConnectionStateMessageProtobuf *)connectionState;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(void)setConnectionState:(_MRSetConnectionStateMessageProtobuf *)arg1 ;
@end

