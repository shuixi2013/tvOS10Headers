/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMHomeInvitationData.h>

@class NSString, NSUUID;

@interface HMIncomingHomeInvitationData : HMHomeInvitationData {

	NSString* _inviterUserID;
	NSString* _homeName;
	NSUUID* _homeUUID;
	NSString* _inviterName;
	NSUUID* _inviterUUID;

}

@property (nonatomic,readonly) NSString * inviterUserID;                 //@synthesize inviterUserID=_inviterUserID - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeName;                 //@synthesize homeName=_homeName - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * homeUUID;                   //@synthesize homeUUID=_homeUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * inviterName;              //@synthesize inviterName=_inviterName - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * inviterUUID;                //@synthesize inviterUUID=_inviterUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithInviterUserID:(id)arg1 invitationIdentifier:(id)arg2 inviterName:(id)arg3 invitationState:(long long)arg4 homeName:(id)arg5 homeUUID:(id)arg6 expiryDate:(id)arg7 ;
-(NSString *)homeName;
-(NSUUID *)homeUUID;
-(NSString *)inviterUserID;
-(NSUUID *)inviterUUID;
-(NSString *)inviterName;
@end

