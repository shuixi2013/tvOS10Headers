/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
#import <libobjc.A.dylib/WPAirPlaySoloDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, WPAirPlaySolo, NSMutableDictionary, NSString;

@interface APAdvertiserBTLEManager : NSObject <WPAirPlaySoloDelegate> {

	SCD_Struct_AP12 _advertisementData;
	unsigned short _btleMode;
	BOOL _p2pSolo;
	BOOL _p2pSoloQueried;
	NSObject*<OS_dispatch_source> _p2pSoloQueryTimer;
	BOOL _isAdvertising;
	BOOL _isScanning;
	BOOL _isEnabled;
	unsigned char _seed;
	int _touchSetupActiveNotifyToken;
	WPAirPlaySolo* _btleServer;
	void* _eventHandlerContext;
	/*function pointer*/void* _eventHandlerFunc;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	OpaqueAPAdvertiserBTLEManager* _managerRef;
	SCDynamicStoreRef _scStore;
	NSMutableDictionary* _soloDevices;
	NSObject*<OS_dispatch_source> _staleDevicesTimer;

}

@property (nonatomic,retain) WPAirPlaySolo * btleServer;                                   //@synthesize btleServer=_btleServer - In the implementation block
@property (assign,nonatomic) void* eventHandlerContext;                                    //@synthesize eventHandlerContext=_eventHandlerContext - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* eventHandlerFunc;                   //@synthesize eventHandlerFunc=_eventHandlerFunc - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> eventQueue;                    //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;                 //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic) BOOL isAdvertising;                                           //@synthesize isAdvertising=_isAdvertising - In the implementation block
@property (assign,nonatomic) BOOL isScanning;                                              //@synthesize isScanning=_isScanning - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                                               //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) OpaqueAPAdvertiserBTLEManager* managerRef;                    //@synthesize managerRef=_managerRef - In the implementation block
@property (assign,nonatomic) SCDynamicStoreRef scStore;                                    //@synthesize scStore=_scStore - In the implementation block
@property (assign,nonatomic) unsigned char seed;                                           //@synthesize seed=_seed - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * soloDevices;                            //@synthesize soloDevices=_soloDevices - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_source> staleDevicesTimer;              //@synthesize staleDevicesTimer=_staleDevicesTimer - In the implementation block
@property (assign,nonatomic) int touchSetupActiveNotifyToken;                              //@synthesize touchSetupActiveNotifyToken=_touchSetupActiveNotifyToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(int)stop;
-(BOOL)isEnabled;
-(int)start;
-(int)update;
-(void)setIsEnabled:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)eventQueue;
-(unsigned char)seed;
-(void)setIsScanning:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)dispatchEvent:(unsigned)arg1 ;
-(void)startScanning;
-(void)stopScanning;
-(void)airPlaySoloDidUpdateState:(id)arg1 ;
-(void)airPlaySoloStartedAdvertising:(id)arg1 ;
-(void)airPlaySoloStoppedAdvertising:(id)arg1 ;
-(void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2 ;
-(void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 ;
-(void)airPlaySoloStartedScanning:(id)arg1 ;
-(void)airPlaySoloStoppedScanning:(id)arg1 ;
-(void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)stopAdvertising;
-(BOOL)isScanning;
-(void)startAdvertising;
-(BOOL)isAdvertising;
-(void)setIsAdvertising:(BOOL)arg1 ;
-(int)startP2PSoloQueryTimer;
-(void)handleP2PSoloQueryTimerFired;
-(void)handleP2PSoloQueryTimerCancelled;
-(int)updatePreferences;
-(int)updateSupportsSoloAndForceReadFromPrefs:(BOOL)arg1 ;
-(int)supportsSolo:(BOOL*)arg1 ;
-(id)stringForBTLEMode:(unsigned short)arg1 ;
-(int)setBTLEMode:(unsigned short)arg1 ;
-(int)getBTLEMode:(unsigned short*)arg1 ;
-(int)startListeningForNetworkChanges;
-(int)stopListeningForNetworkChanges;
-(int)startStaleDeviceTimer;
-(void)updateAdvertisementData;
-(int)showDebugWithDataBuffer:(SCD_Struct_AP14*)arg1 verbose:(BOOL)arg2 ;
-(WPAirPlaySolo *)btleServer;
-(void)setBtleServer:(WPAirPlaySolo *)arg1 ;
-(void*)eventHandlerContext;
-(void)setEventHandlerContext:(void*)arg1 ;
-(/*function pointer*/void*)eventHandlerFunc;
-(void)setEventHandlerFunc:(/*function pointer*/void*)arg1 ;
-(OpaqueAPAdvertiserBTLEManager*)managerRef;
-(void)setManagerRef:(OpaqueAPAdvertiserBTLEManager*)arg1 ;
-(SCDynamicStoreRef)scStore;
-(void)setScStore:(SCDynamicStoreRef)arg1 ;
-(NSMutableDictionary *)soloDevices;
-(void)setSoloDevices:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_source>)staleDevicesTimer;
-(void)setStaleDevicesTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(int)touchSetupActiveNotifyToken;
-(void)setTouchSetupActiveNotifyToken:(int)arg1 ;
-(void)setSeed:(unsigned char)arg1 ;
@end

