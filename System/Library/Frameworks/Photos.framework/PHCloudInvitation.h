/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObject.h>

@class NSString, NSDate, NSNumber, NSArray;

@interface PHCloudInvitation : PHObject {

	BOOL _isMine;
	int _invitationState;
	int _invitationStateLocal;
	NSString* _inviteeFirstName;
	NSString* _inviteeLastName;
	NSString* _inviteeFullName;
	NSDate* _inviteeSubscriptionDate;
	NSString* _albumGUID;
	NSString* _cloudGUID;
	NSNumber* _inviteeEmailKey;
	NSString* _inviteeHashedPersonID;

}

@property (nonatomic,readonly) NSString * albumGUID;                               //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,readonly) NSString * cloudGUID;                               //@synthesize cloudGUID=_cloudGUID - In the implementation block
@property (nonatomic,readonly) int invitationStateLocal;                           //@synthesize invitationStateLocal=_invitationStateLocal - In the implementation block
@property (nonatomic,readonly) NSNumber * inviteeEmailKey;                         //@synthesize inviteeEmailKey=_inviteeEmailKey - In the implementation block
@property (nonatomic,readonly) NSString * inviteeHashedPersonID;                   //@synthesize inviteeHashedPersonID=_inviteeHashedPersonID - In the implementation block
@property (nonatomic,readonly) int invitationState;                                //@synthesize invitationState=_invitationState - In the implementation block
@property (nonatomic,readonly) NSString * inviteeFirstName;                        //@synthesize inviteeFirstName=_inviteeFirstName - In the implementation block
@property (nonatomic,readonly) NSString * inviteeLastName;                         //@synthesize inviteeLastName=_inviteeLastName - In the implementation block
@property (nonatomic,readonly) NSString * inviteeFullName;                         //@synthesize inviteeFullName=_inviteeFullName - In the implementation block
@property (nonatomic,readonly) BOOL isMine;                                        //@synthesize isMine=_isMine - In the implementation block
@property (nonatomic,readonly) NSDate * inviteeSubscriptionDate;                   //@synthesize inviteeSubscriptionDate=_inviteeSubscriptionDate - In the implementation block
@property (nonatomic,readonly) NSArray * inviteeEmails; 
@property (nonatomic,readonly) NSArray * inviteePhones; 
@property (nonatomic,readonly) NSString * invitationStateDescription; 
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)fetchType;
-(NSString *)cloudGUID;
-(NSString *)albumGUID;
-(id)inviteeDisplayNameIncludingEmail:(BOOL)arg1 ;
-(BOOL)isMine;
-(NSArray *)inviteeEmails;
-(NSArray *)inviteePhones;
-(NSString *)inviteeFirstName;
-(NSString *)inviteeLastName;
-(NSString *)inviteeFullName;
-(int)invitationState;
-(int)invitationStateLocal;
-(NSString *)invitationStateDescription;
-(NSString *)inviteeHashedPersonID;
-(NSDate *)inviteeSubscriptionDate;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(NSNumber *)inviteeEmailKey;
@end

