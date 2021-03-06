/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BFFCapabilities : NSObject {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	BOOL _regionSupportsPaymentRegistrationInitialized;
	BOOL _regionSupportsPaymentRegistration;

}
+(id)sharedCapabilities;
-(void)dealloc;
-(id)init;
-(BOOL)supportsApplePay;
-(BOOL)isAppleTV;
-(void)getRegionSupportsPaymentRegistrationWithCompletion:(/*^block*/id)arg1 ;
-(void)localeChanged:(id)arg1 ;
@end

