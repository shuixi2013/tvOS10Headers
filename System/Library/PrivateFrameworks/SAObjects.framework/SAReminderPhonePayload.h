/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAReminderPayload.h>

@class NSString;

@interface SAReminderPhonePayload : AceObject <SAReminderPayload>

@property (nonatomic,copy) NSString * phoneCallType; 
@property (nonatomic,copy) NSString * recipient; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phonePayload;
+(id)phonePayloadWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)recipient;
-(void)setRecipient:(NSString *)arg1 ;
-(NSString *)phoneCallType;
-(void)setPhoneCallType:(NSString *)arg1 ;
@end
