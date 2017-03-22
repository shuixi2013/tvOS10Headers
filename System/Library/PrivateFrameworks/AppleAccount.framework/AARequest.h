/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AppleAccount-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString, NSDictionary, NSURLRequest;

@interface AARequest : NSObject <NSURLSessionDataDelegate> {

	NSString* _initialURLString;
	BOOL _flushCache;
	OpaqueCFHTTPCookieStorageRef _cookieStorage;
	NSString* _oneTimePassword;
	NSString* _machineId;
	/*^block*/id _handler;
	NSDictionary* _customHeaders;

}

@property (readonly) NSURLRequest * urlRequest; 
@property (assign,nonatomic) BOOL flushCache;                         //@synthesize flushCache=_flushCache - In the implementation block
@property (nonatomic,copy) NSDictionary * customHeaders;              //@synthesize customHeaders=_customHeaders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)responseClass;
+(id)protocolVersion;
-(id)bodyDictionary;
-(void)dealloc;
-(void)setFlushCache:(BOOL)arg1 ;
-(id)redactedBodyStringWithPropertyList:(id)arg1 ;
-(void)_handleDataTaskCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)setDeviceProvisioningOneTimePassword:(id)arg1 ;
-(void)setDeviceProvisioningMachineId:(id)arg1 ;
-(id)urlCredential;
-(id)_redactedHeadersFromHTTPHeaders:(id)arg1 ;
-(void)setCustomHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)customHeaders;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(id)initWithURLString:(id)arg1 ;
-(NSURLRequest *)urlRequest;
-(id)urlString;
-(BOOL)flushCache;
-(void)setCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
@end

