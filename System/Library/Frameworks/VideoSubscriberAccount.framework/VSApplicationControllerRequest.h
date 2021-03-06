/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary;

@interface VSApplicationControllerRequest : NSObject {

	long long _type;
	NSString* _authenticationToken;
	NSString* _SAMLRequest;
	NSArray* _attributeNames;
	NSString* _requestorVerificationToken;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * authenticationToken;                        //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (setter=AMLRequest,nonatomic,copy) NSString * SAMLRequest;              //@synthesize SAMLRequest=_SAMLRequest - In the implementation block
@property (nonatomic,copy) NSArray * attributeNames;                              //@synthesize attributeNames=_attributeNames - In the implementation block
@property (nonatomic,copy) NSString * requestorVerificationToken;                 //@synthesize requestorVerificationToken=_requestorVerificationToken - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                               //@synthesize userInfo=_userInfo - In the implementation block
-(NSArray *)attributeNames;
-(NSDictionary *)userInfo;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(void)setAttributeNames:(NSArray *)arg1 ;
-(NSString *)SAMLRequest;
-(NSString *)requestorVerificationToken;
-(void)setRequestorVerificationToken:(NSString *)arg1 ;
-(void)setSAMLRequest:(NSString *)arg1 ;
@end

