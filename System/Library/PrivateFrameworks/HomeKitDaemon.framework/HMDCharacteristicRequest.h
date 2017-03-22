/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMDCharacteristic;

@interface HMDCharacteristicRequest : NSObject {

	HMDCharacteristic* _characteristic;
	id _previousValue;

}

@property (nonatomic,readonly) HMDCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) id previousValue;                                //@synthesize previousValue=_previousValue - In the implementation block
+(id)requestWithCharacteristic:(id)arg1 ;
-(id)description;
-(HMDCharacteristic *)characteristic;
-(id)previousValue;
-(id)initWithCharacteristic:(id)arg1 ;
@end

