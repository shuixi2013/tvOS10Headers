/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSURL, NSString, NSArray;

@interface SKCloudServiceSetupReloadContext : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _userInfo;
	NSURL* _cloudServiceSetupURL;
	NSString* _action;
	NSArray* _queryItems;
	NSString* _sourceApplicationBundleIdentifier;
	NSURL* _referrerURL;
	NSString* _serializedUserInfo;

}

@property (nonatomic,copy,readonly) NSString * serializedUserInfo;                    //@synthesize serializedUserInfo=_serializedUserInfo - In the implementation block
@property (nonatomic,retain) NSURL * cloudServiceSetupURL;                            //@synthesize cloudServiceSetupURL=_cloudServiceSetupURL - In the implementation block
@property (nonatomic,copy) NSString * action;                                         //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSArray * queryItems;                                      //@synthesize queryItems=_queryItems - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;              //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * referrerURL;                                     //@synthesize referrerURL=_referrerURL - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)userInfo;
-(NSString *)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSArray *)queryItems;
-(void)setQueryItems:(NSArray *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSURL *)cloudServiceSetupURL;
-(void)setCloudServiceSetupURL:(NSURL *)arg1 ;
-(NSURL *)referrerURL;
-(void)setReferrerURL:(NSURL *)arg1 ;
-(NSString *)serializedUserInfo;
@end

