/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSData;

@interface AASigningSessionResponse : AAResponse {

	NSData* _sessionData;

}

@property (nonatomic,retain) NSData * sessionData;              //@synthesize sessionData=_sessionData - In the implementation block
-(NSData *)sessionData;
-(void)setSessionData:(NSData *)arg1 ;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
@end

