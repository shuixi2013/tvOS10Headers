/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface AAUIDeclineFamilyInviteRequest : AAFamilyRequest {

	NSString* _inviteCode;

}

@property (nonatomic,copy) NSString * inviteCode;              //@synthesize inviteCode=_inviteCode - In the implementation block
-(NSString *)inviteCode;
-(void)setInviteCode:(NSString *)arg1 ;
-(id)urlRequest;
-(id)urlString;
-(BOOL)isUserInitiated;
@end

