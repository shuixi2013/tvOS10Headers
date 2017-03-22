/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKIdentityProtocol.h>

@class NSString, NSURL, NSDate;

@interface EKCalendarEventInvitationNotificationAttendee : NSObject <EKIdentityProtocol> {

	BOOL _statusChanged;
	BOOL _commentChanged;
	BOOL _proposedStartDateChanged;
	BOOL _proposedStartDateDeclined;
	BOOL _isCurrentUser;
	NSString* _name;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _emailAddress;
	NSURL* _url;
	long long _participantStatus;
	NSString* _comment;
	NSDate* _proposedStartDate;

}

@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                        //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                         //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress;                     //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL statusChanged;                          //@synthesize statusChanged=_statusChanged - In the implementation block
@property (nonatomic,readonly) BOOL commentChanged;                         //@synthesize commentChanged=_commentChanged - In the implementation block
@property (nonatomic,readonly) BOOL proposedStartDateChanged;               //@synthesize proposedStartDateChanged=_proposedStartDateChanged - In the implementation block
@property (nonatomic,readonly) long long participantStatus;                 //@synthesize participantStatus=_participantStatus - In the implementation block
@property (nonatomic,readonly) NSString * comment;                          //@synthesize comment=_comment - In the implementation block
@property (nonatomic,readonly) NSDate * proposedStartDate;                  //@synthesize proposedStartDate=_proposedStartDate - In the implementation block
@property (nonatomic,readonly) BOOL proposedStartDateDeclined;              //@synthesize proposedStartDateDeclined=_proposedStartDateDeclined - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentUser;                          //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSURL *)url;
-(NSString *)comment;
-(long long)participantStatus;
-(NSDate *)proposedStartDate;
-(BOOL)commentChanged;
-(BOOL)statusChanged;
-(BOOL)proposedStartDateChanged;
-(id)initWithParticipant:(id)arg1 forEvent:(id)arg2 ;
-(BOOL)proposedStartDateDeclined;
-(NSString *)emailAddress;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)isCurrentUser;
@end

