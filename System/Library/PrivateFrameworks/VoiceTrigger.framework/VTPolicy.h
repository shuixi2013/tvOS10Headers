/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VTEventMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface VTPolicy : NSObject <VTEventMonitorDelegate> {

	NSMutableArray* _monitors;
	NSMutableArray* _conditions;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultVoiceTriggerEnablePolicy;
-(void)dealloc;
-(id)init;
-(BOOL)isEnabled;
-(void)setCallback:(/*^block*/id)arg1 ;
-(void)subscribeEventMonitor:(id)arg1 ;
-(void)addConditions:(/*^block*/id)arg1 ;
-(BOOL)_checkAllConditionsEnabled;
-(void)VTEventMonitorDidReceiveEvent:(id)arg1 ;
-(void)notifyCallback:(BOOL)arg1 ;
@end

