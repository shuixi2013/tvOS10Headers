/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class PTPOperationResponsePacket, PTPWrappedBytes;

@interface PTPTransport : NSObject {

	unsigned short _type;
	int _role;
	int _connectionStatus;
	id _delegate;
	BOOL _timedOut;
	BOOL _responseReceived;
	PTPOperationResponsePacket* _response;
	opaque_pthread_t* _callbackThread;
	opaque_pthread_mutex_t _callbackThreadMutex;
	opaque_pthread_cond_t _callbackThreadCondition;
	BOOL _callbackThreadConditionSignaled;
	CFRunLoopRef _callbackThreadRunLoop;
	CFRunLoopSourceRef _callbackDummyMachPortRLSrc;
	unsigned char _headerBuffer[12];
	unsigned char _md5[16];
	BOOL _failedMD5;
	BOOL _headerBufferFound;
	BOOL _delegateNeedsResponse;
	BOOL _busy;
	unsigned _canceledTransactionID;
	PTPWrappedBytes* _dataForTransaction;
	unsigned long long _excessReceivedDataSize;
	unsigned _totalBytesFilled;
	int _status;

}
-(id)md5;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)response;
-(BOOL)sendResponse:(id)arg1 ;
-(BOOL)sendEvent:(id)arg1 ;
-(unsigned short)type;
-(void)stop;
-(void)setResponse:(id)arg1 ;
-(BOOL)connected;
-(void)setTimedOut:(BOOL)arg1 ;
-(BOOL)timedOut;
-(void)sendData:(id)arg1 ;
-(CFRunLoopRef)callbackThreadRunLoop;
-(BOOL)startInitiator;
-(int)lockCallbackThreadMutex;
-(void)setStatus:(int)arg1 withInfo:(char*)arg2 ;
-(int)unlockCallbackThreadMutex;
-(int)waitForCallbackThreadConditionSignalWithTimeout:(long long)arg1 ;
-(int)signalCallbackThreadCondition;
-(BOOL)startResponder;
-(id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned)arg3 ;
-(id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned)arg3 ;
-(void)cancelTransaction:(id)arg1 ;
-(void)abortPendingIO;
-(int)connectionStatus;
-(unsigned long long)excessReceivedDataSize;
-(unsigned short)deviceStatus;
-(void)deviceReset;
-(BOOL)startCallbackThread;
-(void)endCallbackThread;
-(void)cleanupCallbackThread;
-(void*)callbackThreadFunction;
-(int)role;
-(BOOL)responseReceived;
-(void)setResponseReceived:(BOOL)arg1 ;
@end

