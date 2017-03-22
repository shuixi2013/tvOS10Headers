/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSArray, NSString;

@interface SAAlarmObject : SADomainObject

@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSArray * frequency; 
@property (nonatomic,copy) NSNumber * hour; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * minute; 
@property (nonatomic,copy) NSNumber * relativeOffsetMinutes; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)enabled;
-(void)setEnabled:(NSNumber *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSArray *)frequency;
-(void)setFrequency:(NSArray *)arg1 ;
-(void)setHour:(NSNumber *)arg1 ;
-(NSNumber *)hour;
-(NSNumber *)minute;
-(void)setMinute:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)relativeOffsetMinutes;
-(void)setRelativeOffsetMinutes:(NSNumber *)arg1 ;
@end

