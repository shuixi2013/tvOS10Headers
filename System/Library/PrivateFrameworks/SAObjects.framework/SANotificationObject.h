/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate, NSNumber;

@interface SANotificationObject : SADomainObject

@property (nonatomic,copy) NSString * applicationId; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSNumber * dateIsAllDay; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSString * notificationId; 
@property (nonatomic,copy) NSDate * recencyDate; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * type; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)endDate;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSString *)applicationId;
-(void)setApplicationId:(NSString *)arg1 ;
-(NSNumber *)dateIsAllDay;
-(void)setDateIsAllDay:(NSNumber *)arg1 ;
-(NSString *)notificationId;
-(void)setNotificationId:(NSString *)arg1 ;
-(NSDate *)recencyDate;
-(void)setRecencyDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
@end

