/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@class NSURL, NSString, NSData, NSMutableData, NSError, NSURLConnection, NSObject;

@interface MCHTTPTransaction : NSObject {

	NSURL* _requestURL;
	NSString* _method;
	double _timeout;
	NSString* _userAgent;
	NSString* _contentType;
	NSData* _data;
	SecIdentityRef _identity;
	NSString* _CMSSignatureHeaderName;
	NSURL* _currentURL;
	NSURL* _permanentlyRedirectedURL;
	BOOL _rememberData;
	NSMutableData* _responseData;
	long long _statusCode;
	NSError* _error;
	NSURLConnection* _connection;
	NSObject*<OS_dispatch_semaphore> _doneSema;

}

@property (nonatomic,retain) NSURL * url;                                            //@synthesize requestURL=_requestURL - In the implementation block
@property (nonatomic,retain) NSString * method;                                      //@synthesize method=_method - In the implementation block
@property (assign,nonatomic) double timeout;                                         //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSString * userAgent;                                   //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,retain) NSString * contentType;                                 //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * CMSSignatureHeaderName;                      //@synthesize CMSSignatureHeaderName=_CMSSignatureHeaderName - In the implementation block
@property (nonatomic,retain,readonly) NSData * responseData;                         //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,retain,readonly) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,retain,readonly) NSURL * permanentlyRedirectedURL;              //@synthesize permanentlyRedirectedURL=_permanentlyRedirectedURL - In the implementation block
@property (nonatomic,readonly) long long statusCode;                                 //@synthesize statusCode=_statusCode - In the implementation block
+(id)transactionWithURL:(id)arg1 method:(id)arg2 ;
+(id)performRequestURL:(id)arg1 method:(id)arg2 timeout:(double)arg3 userAgent:(id)arg4 contentType:(id)arg5 data:(id)arg6 identity:(SecIdentityRef)arg7 outPermanentlyRedirectedURL:(id*)arg8 outError:(id*)arg9 ;
-(void)setContentType:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 method:(id)arg2 ;
-(NSURL *)permanentlyRedirectedURL;
-(BOOL)_shouldAllowTrust:(SecTrustRef)arg1 forHost:(id)arg2 ;
-(void)performCompletionBlock:(/*^block*/id)arg1 ;
-(void)setMethod:(NSString *)arg1 ;
-(NSString *)CMSSignatureHeaderName;
-(void)setCMSSignatureHeaderName:(NSString *)arg1 ;
-(void)dealloc;
-(NSURL *)url;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(long long)statusCode;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSString *)method;
-(void)setIdentity:(SecIdentityRef)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(BOOL)connectionShouldUseCredentialStorage:(id)arg1 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(NSError *)error;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(NSData *)responseData;
-(NSString *)contentType;
-(void)_beginTransaction;
-(SecIdentityRef)copyIdentity;
-(void)performSynchronously;
@end

