/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDMerging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMDDevice, HMDHome, NSString;

@interface HMDResidentDevice : NSObject <HMFDumpState, HMFLogging, HMDMerging, NSSecureCoding> {

	BOOL _enabled;
	BOOL _confirmed;
	BOOL _reachable;
	BOOL _lowBattery;
	NSUUID* _identifier;
	HMDDevice* _device;
	long long _batteryState;
	HMDHome* _home;
	unsigned long long _capabilities;

}

@property (nonatomic,readonly) unsigned long long status; 
@property (nonatomic,readonly) unsigned long long capabilities;                //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) HMDDevice * device;                               //@synthesize device=_device - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isConfirmed,nonatomic) BOOL confirmed;                //@synthesize confirmed=_confirmed - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                //@synthesize reachable=_reachable - In the implementation block
@property (assign,nonatomic) long long batteryState;                           //@synthesize batteryState=_batteryState - In the implementation block
@property (assign,getter=isLowBattery,nonatomic) BOOL lowBattery;              //@synthesize lowBattery=_lowBattery - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                            //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)logCategory;
+(id)batteryStateAsString:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSUUID *)identifier;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(long long)batteryState;
-(id)shortDescription;
-(unsigned long long)status;
-(BOOL)isConfirmed;
-(void)setConfirmed:(BOOL)arg1 ;
-(id)dumpState;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(HMDDevice *)device;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(BOOL)isReachable;
-(id)initWithDevice:(id)arg1 home:(id)arg2 ;
-(void)setReachable:(BOOL)arg1 ;
-(BOOL)mergeObject:(id)arg1 ;
-(unsigned long long)capabilities;
-(BOOL)isLowBattery;
-(void)setDevice:(HMDDevice *)arg1 ;
-(void)setBatteryState:(long long)arg1 ;
-(void)setLowBattery:(BOOL)arg1 ;
@end

