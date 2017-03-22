/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSDate;

@interface AAFamilyMember : NSObject {

	BOOL _isMe;
	BOOL _isChild;
	BOOL _isSharingPurchases;
	BOOL _isOrganizer;
	BOOL _areParentalControlsEnabled;
	BOOL _isAskToBuyEnabled;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _appleID;
	NSNumber* _personID;
	NSString* _personIDHash;
	NSString* _title;
	NSDate* _joinDate;
	NSString* _iTunesNotLinkedMessage;
	NSString* _linkediTunesAppleID;
	NSNumber* _linkediTunesDSID;

}

@property (nonatomic,copy) NSString * firstName;                           //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                            //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * appleID;                             //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSNumber * personID;                            //@synthesize personID=_personID - In the implementation block
@property (nonatomic,copy) NSString * personIDHash;                        //@synthesize personIDHash=_personIDHash - In the implementation block
@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDate * joinDate;                              //@synthesize joinDate=_joinDate - In the implementation block
@property (assign,nonatomic) BOOL isMe;                                    //@synthesize isMe=_isMe - In the implementation block
@property (assign,nonatomic) BOOL isChild;                                 //@synthesize isChild=_isChild - In the implementation block
@property (assign,nonatomic) BOOL isSharingPurchases;                      //@synthesize isSharingPurchases=_isSharingPurchases - In the implementation block
@property (assign,nonatomic) BOOL isOrganizer;                             //@synthesize isOrganizer=_isOrganizer - In the implementation block
@property (nonatomic,copy) NSString * iTunesNotLinkedMessage;              //@synthesize iTunesNotLinkedMessage=_iTunesNotLinkedMessage - In the implementation block
@property (nonatomic,copy) NSString * linkediTunesAppleID;                 //@synthesize linkediTunesAppleID=_linkediTunesAppleID - In the implementation block
@property (nonatomic,copy) NSNumber * linkediTunesDSID;                    //@synthesize linkediTunesDSID=_linkediTunesDSID - In the implementation block
@property (assign,nonatomic) BOOL areParentalControlsEnabled;              //@synthesize areParentalControlsEnabled=_areParentalControlsEnabled - In the implementation block
@property (assign,nonatomic) BOOL isAskToBuyEnabled;                       //@synthesize isAskToBuyEnabled=_isAskToBuyEnabled - In the implementation block
-(BOOL)isSharingPurchases;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setIsMe:(BOOL)arg1 ;
-(BOOL)isMe;
-(NSNumber *)personID;
-(void)setPersonID:(NSNumber *)arg1 ;
-(NSString *)personIDHash;
-(void)setPersonIDHash:(NSString *)arg1 ;
-(NSDate *)joinDate;
-(void)setJoinDate:(NSDate *)arg1 ;
-(BOOL)isChild;
-(void)setIsChild:(BOOL)arg1 ;
-(void)setIsSharingPurchases:(BOOL)arg1 ;
-(BOOL)isOrganizer;
-(void)setIsOrganizer:(BOOL)arg1 ;
-(NSString *)iTunesNotLinkedMessage;
-(void)setITunesNotLinkedMessage:(NSString *)arg1 ;
-(void)setLinkediTunesAppleID:(NSString *)arg1 ;
-(NSNumber *)linkediTunesDSID;
-(void)setLinkediTunesDSID:(NSNumber *)arg1 ;
-(BOOL)areParentalControlsEnabled;
-(void)setAreParentalControlsEnabled:(BOOL)arg1 ;
-(BOOL)isAskToBuyEnabled;
-(void)setIsAskToBuyEnabled:(BOOL)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)linkediTunesAppleID;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
@end

