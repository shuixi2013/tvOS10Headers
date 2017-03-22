/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoardServices/SpringBoardServices-Structs.h>
@class NSString;

@interface SBSAssertion : NSObject {

	NSString* _assertionName;
	NSString* _reason;
	unsigned _port;
	opaque_pthread_mutex_t _lock;

}

@property (nonatomic,copy,readonly) NSString * assertionName;              //@synthesize assertionName=_assertionName - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
-(NSString *)assertionName;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(NSString *)reason;
-(id)initWithAssertionName:(id)arg1 reason:(id)arg2 port:(unsigned)arg3 ;
@end

