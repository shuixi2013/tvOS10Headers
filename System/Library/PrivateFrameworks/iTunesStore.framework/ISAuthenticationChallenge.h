/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLAuthenticationChallenge, NSString;

@interface ISAuthenticationChallenge : NSObject {

	NSURLAuthenticationChallenge* _challenge;
	NSString* _localizedMessage;
	NSString* _localizedTitle;

}

@property (retain) NSString * localizedMessage;                                  //@synthesize localizedMessage=_localizedMessage - In the implementation block
@property (retain) NSString * localizedTitle;                                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (readonly) BOOL hasPassword; 
@property (retain,readonly) NSString * password; 
@property (retain,readonly) NSString * user; 
@property (readonly) long long failureCount; 
@property (readonly) BOOL userNameIsEditable; 
@property (readonly) BOOL userNameIsEmail; 
@property (readonly) id<NSURLAuthenticationChallengeSender> sender; 
-(BOOL)hasPassword;
-(NSString *)localizedMessage;
-(void)dealloc;
-(id<NSURLAuthenticationChallengeSender>)sender;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(id)initWithAuthenticationChallenge:(id)arg1 ;
-(void)setLocalizedMessage:(NSString *)arg1 ;
-(void)useCredential:(id)arg1 ;
-(BOOL)userNameIsEditable;
-(BOOL)userNameIsEmail;
-(long long)failureCount;
-(void)cancelAuthentication;
-(NSString *)user;
-(NSString *)password;
@end

