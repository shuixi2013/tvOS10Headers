/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMBatteryStatusTestDelegate;
@interface IMBatteryStatus : NSObject {

	id<IMBatteryStatusTestDelegate> _testDelegate;

}

@property (getter=isCharging,readonly) BOOL charging; 
-(BOOL)isCharging;
-(void)setTestDelegate:(id)arg1 ;
@end

