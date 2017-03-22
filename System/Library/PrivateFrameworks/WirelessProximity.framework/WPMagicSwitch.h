/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WirelessProximity-Structs.h>
#import <WirelessProximity/WPClient.h>

@protocol WPMagicSwitchDelegate;
@interface WPMagicSwitch : WPClient {

	id<WPMagicSwitchDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPMagicSwitchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<WPMagicSwitchDelegate>)arg1 ;
-(id<WPMagicSwitchDelegate>)delegate;
-(void)invalidate;
-(void)stopScanning;
-(id)clientAsString;
-(SCD_Struct_WP1)dutyCycleToScanningRates:(long long)arg1 ;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)startAdvertisingWithData:(id)arg1 ;
-(void)stopAdvertising;
-(void)stateDidChange:(long long)arg1 ;
-(void)startScanningWithData:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
@end

