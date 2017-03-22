/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKParticipant.h>

@class NSDate;

@interface EKAttendee : EKParticipant

@property (assign,nonatomic) long long participantRole; 
@property (assign,nonatomic) long long participantStatus; 
@property (assign,nonatomic) long long participantType; 
@property (nonatomic,readonly) NSDate * lastModifiedParticipationStatus; 
@property (assign,nonatomic) long long pendingStatus; 
@property (assign,nonatomic) BOOL commentChanged; 
@property (assign,nonatomic) BOOL statusChanged; 
@property (assign,nonatomic) BOOL proposedStartDateChanged; 
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
+(id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)owner;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(id)initWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(long long)participantType;
-(long long)participantStatus;
-(long long)participantRole;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
-(void)setParticipantStatus:(long long)arg1 ;
-(void)setParticipantRole:(long long)arg1 ;
-(long long)pendingStatus;
-(void)setPendingStatus:(long long)arg1 ;
-(void)setParticipantType:(long long)arg1 ;
-(void)setCommentChanged:(BOOL)arg1 ;
-(BOOL)commentChanged;
-(void)setStatusChanged:(BOOL)arg1 ;
-(BOOL)statusChanged;
-(void)setProposedStartDateChanged:(BOOL)arg1 ;
-(BOOL)proposedStartDateChanged;
-(id)_persistentAttendee;
-(NSDate *)lastModifiedParticipationStatus;
-(BOOL)isCurrentUser;
@end

