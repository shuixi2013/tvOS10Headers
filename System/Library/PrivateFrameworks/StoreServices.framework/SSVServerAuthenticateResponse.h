/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSURL, NSString;

@interface SSVServerAuthenticateResponse : NSObject <SSXPCCoding> {

	NSNumber* _authenticatedAccountIdentifier;
	long long _performedButtonIndex;
	NSURL* _redirectURL;
	long long _selectedButtonIndex;

}

@property (nonatomic,copy) NSNumber * authenticatedAccountIdentifier;              //@synthesize authenticatedAccountIdentifier=_authenticatedAccountIdentifier - In the implementation block
@property (assign,nonatomic) long long performedButtonIndex;                       //@synthesize performedButtonIndex=_performedButtonIndex - In the implementation block
@property (nonatomic,copy) NSURL * redirectURL;                                    //@synthesize redirectURL=_redirectURL - In the implementation block
@property (assign,nonatomic) long long selectedButtonIndex;                        //@synthesize selectedButtonIndex=_selectedButtonIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)authenticatedAccountIdentifier;
-(void)setAuthenticatedAccountIdentifier:(NSNumber *)arg1 ;
-(long long)performedButtonIndex;
-(void)setPerformedButtonIndex:(long long)arg1 ;
-(NSURL *)redirectURL;
-(void)setRedirectURL:(NSURL *)arg1 ;
-(long long)selectedButtonIndex;
-(void)setSelectedButtonIndex:(long long)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
@end

