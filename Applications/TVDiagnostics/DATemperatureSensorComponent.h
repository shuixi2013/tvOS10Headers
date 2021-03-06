//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DAComponent.h"

@interface DATemperatureSensorComponent : DAComponent
{
    struct __IOHIDEventSystemClient *_HIDEventSystem;	// 8 = 0x8
}

@property(nonatomic) struct __IOHIDEventSystemClient *HIDEventSystem; // @synthesize HIDEventSystem=_HIDEventSystem;
- (id)temperatureData;	// IMP=0x0000000100012528
- (id)celsiusTemperatureFromService:(struct __IOHIDServiceClient *)arg1;	// IMP=0x0000000100012498
- (id)parseHIDLocationID:(int)arg1;	// IMP=0x00000001000123f8
- (void)systemClientRelease;	// IMP=0x000000010001239c
- (_Bool)systemClientSetup;	// IMP=0x0000000100012210
- (id)profile;	// IMP=0x0000000100012060
- (_Bool)isPresent;	// IMP=0x0000000100011ff0
- (id)type;	// IMP=0x0000000100011fe0

@end

