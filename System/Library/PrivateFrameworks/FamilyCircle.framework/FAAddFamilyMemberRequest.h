/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSString;

@interface FAAddFamilyMemberRequest : FAFamilyCircleRequest {

	BOOL _memberIsUnder13;
	NSString* _memberAppleID;
	NSString* _memberPassword;

}

@property (copy,readonly) NSString * memberAppleID;               //@synthesize memberAppleID=_memberAppleID - In the implementation block
@property (copy,readonly) NSString * memberPassword;              //@synthesize memberPassword=_memberPassword - In the implementation block
@property (readonly) BOOL memberIsUnder13;                        //@synthesize memberIsUnder13=_memberIsUnder13 - In the implementation block
-(NSString *)memberAppleID;
-(NSString *)memberPassword;
-(BOOL)memberIsUnder13;
-(id)initWithFamilyMemberAppleID:(id)arg1 password:(id)arg2 isUnder13:(BOOL)arg3 ;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
@end

