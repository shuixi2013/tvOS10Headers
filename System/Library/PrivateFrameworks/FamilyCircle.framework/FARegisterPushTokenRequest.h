/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSData;

@interface FARegisterPushTokenRequest : FAFamilyCircleRequest {

	NSData* _pushToken;

}

@property (copy,readonly) NSData * pushToken;              //@synthesize pushToken=_pushToken - In the implementation block
-(id)initWithPushToken:(id)arg1 ;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSData *)pushToken;
@end

