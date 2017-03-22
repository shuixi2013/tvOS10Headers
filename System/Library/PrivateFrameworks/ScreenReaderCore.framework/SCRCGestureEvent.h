/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@class SCRCGestureFinger;

@interface SCRCGestureEvent : NSObject {

	unsigned long long _deviceIdentifier;
	SCRCGestureFinger* _finger[8];
	unsigned long long _fingerCount;
	double _time;
	CGPoint _averageLocation;

}
-(id)initWithDeviceIdentifier:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(double)time;
-(unsigned long long)deviceIdentifier;
-(CGRect)fingerFrame;
-(void)addFingerWithIdentifier:(unsigned long long)arg1 location:(CGPoint)arg2 orbValue:(double)arg3 ;
-(void)addStylusWithIdentifier:(unsigned long long)arg1 location:(CGPoint)arg2 pressure:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5 ;
-(void)removeFingerWithIdentifier:(unsigned long long)arg1 ;
-(id)fingerAtIndex:(unsigned long long)arg1 ;
-(id)fingerWithIdentifier:(unsigned long long)arg1 ;
-(id)fingerWithoutIdentifier:(unsigned long long)arg1 ;
-(id)fingers;
-(CGPoint)averageLocation;
-(CGPoint)balancedLocation;
-(BOOL)isCancelEvent;
-(CGPoint)magneticLocation;
-(unsigned long long)fingerCount;
@end

