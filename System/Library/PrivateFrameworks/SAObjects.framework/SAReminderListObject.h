/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SAReminderRecurrence, SAReminderTrigger, NSArray, NSNumber;

@interface SAReminderListObject : SADomainObject

@property (nonatomic,copy) NSString * accountName; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAReminderRecurrence * recurrence; 
@property (nonatomic,retain) SAReminderTrigger * reminderTrigger; 
@property (nonatomic,copy) NSArray * reminders; 
@property (nonatomic,copy) NSArray * remindersToCreate; 
@property (nonatomic,copy) NSNumber * totalNumOfReminders; 
+(id)listObject;
+(id)listObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAReminderRecurrence *)recurrence;
-(void)setRecurrence:(SAReminderRecurrence *)arg1 ;
-(NSArray *)reminders;
-(void)setReminders:(NSArray *)arg1 ;
-(SAReminderTrigger *)reminderTrigger;
-(void)setReminderTrigger:(SAReminderTrigger *)arg1 ;
-(NSArray *)remindersToCreate;
-(void)setRemindersToCreate:(NSArray *)arg1 ;
-(NSNumber *)totalNumOfReminders;
-(void)setTotalNumOfReminders:(NSNumber *)arg1 ;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
@end

