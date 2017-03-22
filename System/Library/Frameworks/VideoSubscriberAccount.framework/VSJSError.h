/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSError.h>
@class NSString;


@protocol VSJSError <JSExport>
@property (assign,nonatomic) unsigned long long code; 
@property (nonatomic,copy) NSString * message; 
@required
-(id)init;
-(unsigned long long)code;
-(void)setMessage:(id)arg1;
-(NSString *)message;
-(void)setCode:(unsigned long long)arg1;

@end


@class NSString;

@interface VSJSError : IKJSObject <VSJSError> {

	unsigned long long _code;
	NSString* _message;

}

@property (assign,nonatomic) unsigned long long code;              //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSString * message;                     //@synthesize message=_message - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)code;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(id)error;
-(void)setCode:(unsigned long long)arg1 ;
@end

