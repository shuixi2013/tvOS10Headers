/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentParticipant.h>

@class NSDate;

@interface EKPersistentAttendee : EKPersistentParticipant

@property (assign,nonatomic) long long participantStatus; 
@property (assign,nonatomic) long long participantRole; 
@property (assign,nonatomic) long long participantType; 
@property (assign,nonatomic) long long pendingStatus; 
@property (nonatomic,copy) NSDate * lastModified; 
@property (assign,nonatomic) BOOL commentChanged; 
@property (assign,nonatomic) BOOL statusChanged; 
@property (assign,nonatomic) BOOL proposedStartDateChanged; 
+(id)defaultPropertiesToLoad;
+(id)relations;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
+(id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)owner;
-(void)setOwner:(id)arg1 ;
-(id)initWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(long long)participantType;
-(long long)participantStatus;
-(long long)participantRole;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
-(void)setParticipantStatus:(long long)arg1 ;
-(void)setParticipantRole:(long long)arg1 ;
-(long long)pendingStatus;
-(void)setPendingStatus:(long long)arg1 ;
-(NSDate *)lastModified;
-(void)setLastModified:(NSDate *)arg1 ;
-(void)_setFlag:(unsigned)arg1 value:(BOOL)arg2 ;
-(BOOL)_valueForFlag:(unsigned)arg1 ;
-(id)initWithAddress:(id)arg1 name:(id)arg2 ;
-(void)setParticipantType:(long long)arg1 ;
-(void)setCommentChanged:(BOOL)arg1 ;
-(BOOL)commentChanged;
-(void)setStatusChanged:(BOOL)arg1 ;
-(BOOL)statusChanged;
-(void)setProposedStartDateChanged:(BOOL)arg1 ;
-(BOOL)proposedStartDateChanged;
-(int)entityType;
@end

