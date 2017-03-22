/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSDate, NSNumber;

@interface SAPhoneSearch : SADomainCommand

@property (nonatomic,copy) NSArray * contacts; 
@property (nonatomic,copy) NSDate * end; 
@property (nonatomic,copy) NSNumber * faceTime; 
@property (nonatomic,copy) NSNumber * faceTimeAudio; 
@property (nonatomic,copy) NSNumber * isNew; 
@property (nonatomic,copy) NSNumber * last; 
@property (nonatomic,copy) NSNumber * missed; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSDate * start; 
@property (nonatomic,copy) NSNumber * voiceMail; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)start;
-(void)setStart:(NSDate *)arg1 ;
-(NSDate *)end;
-(void)setEnd:(NSDate *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)faceTime;
-(void)setFaceTime:(NSNumber *)arg1 ;
-(NSNumber *)faceTimeAudio;
-(void)setFaceTimeAudio:(NSNumber *)arg1 ;
-(NSNumber *)isNew;
-(void)setIsNew:(NSNumber *)arg1 ;
-(NSNumber *)last;
-(void)setLast:(NSNumber *)arg1 ;
-(NSNumber *)missed;
-(void)setMissed:(NSNumber *)arg1 ;
-(NSNumber *)outgoing;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(NSNumber *)voiceMail;
-(void)setVoiceMail:(NSNumber *)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)contacts;
@end

