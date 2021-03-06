/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsSupport/DSLogLine.h>

@class NSString;

@interface DSUsageLogLine : DSLogLine

@property (nonatomic,readonly) NSString * eventType; 
@property (nonatomic,readonly) int usageTime; 
@property (nonatomic,readonly) int standbyTime; 
@property (nonatomic,readonly) int batteryLevel; 
@property (nonatomic,readonly) BOOL isReset; 
@property (nonatomic,readonly) BOOL isOnPower; 
@property (nonatomic,readonly) BOOL isOffPower; 
-(int)batteryLevel;
-(BOOL)isReset;
-(NSString *)eventType;
-(int)usageTime;
-(int)standbyTime;
-(BOOL)isOnPower;
-(BOOL)isOffPower;
@end

