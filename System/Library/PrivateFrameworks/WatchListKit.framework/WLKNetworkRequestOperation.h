/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol WLKNetworkRequestOperationDelegate;
@class NSError, NSDictionary, NSString, SSURLConnectionResponse, NSURL;

@interface WLKNetworkRequestOperation : NSOperation {

	NSError* _error;
	id _response;
	unsigned long long _numRetries;
	BOOL _allowAuthentication;
	BOOL _requiresMescal;
	id<WLKNetworkRequestOperationDelegate> _delegate;
	NSDictionary* _additionalHeaderFields;
	NSString* _serverRouteKey;
	NSDictionary* _serverRouteReplacements;
	NSDictionary* _queryParameters;
	double _timeout;
	NSString* _identifier;
	/*^block*/id _requestCompletionBlock;
	NSString* _endpoint;
	NSString* _httpMethod;
	SSURLConnectionResponse* _fullResponse;
	NSString* _callerOverride;
	NSURL* _baseURL;

}

@property (nonatomic,copy,readonly) SSURLConnectionResponse * fullResponse;                       //@synthesize fullResponse=_fullResponse - In the implementation block
@property (nonatomic,retain) NSString * callerOverride;                                           //@synthesize callerOverride=_callerOverride - In the implementation block
@property (nonatomic,copy) NSURL * baseURL;                                                       //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * defaultBaseURL; 
@property (assign,nonatomic,__weak) id<WLKNetworkRequestOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowAuthentication;                                            //@synthesize allowAuthentication=_allowAuthentication - In the implementation block
@property (assign,nonatomic) BOOL requiresMescal;                                                 //@synthesize requiresMescal=_requiresMescal - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalHeaderFields;                               //@synthesize additionalHeaderFields=_additionalHeaderFields - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverRouteKey;                                    //@synthesize serverRouteKey=_serverRouteKey - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serverRouteReplacements;                       //@synthesize serverRouteReplacements=_serverRouteReplacements - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * queryParameters;                               //@synthesize queryParameters=_queryParameters - In the implementation block
@property (nonatomic,readonly) double timeout;                                                    //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id requestCompletionBlock;                                             //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
@property (nonatomic,readonly) id response;                                                       //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) NSString * endpoint;                                          //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,copy,readonly) NSString * httpMethod;                                        //@synthesize httpMethod=_httpMethod - In the implementation block
+(id)_defaultBaseURL;
+(unsigned long long)preferredCachePolicy;
-(id)requestCompletionBlock;
-(void)setDelegate:(id<WLKNetworkRequestOperationDelegate>)arg1 ;
-(id)init;
-(id<WLKNetworkRequestOperationDelegate>)delegate;
-(NSString *)identifier;
-(id)response;
-(void)main;
-(void)setRequestCompletionBlock:(id)arg1 ;
-(NSString *)endpoint;
-(double)timeout;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSDictionary *)queryParameters;
-(void)_failWithError:(id)arg1 ;
-(NSError *)error;
-(void)didFinish;
-(NSString *)httpMethod;
-(void)setCallerOverride:(NSString *)arg1 ;
-(id)initWithServerRouteKey:(id)arg1 serverRouteReplacements:(id)arg2 ;
-(id)responseProcessor;
-(void)setAllowAuthentication:(BOOL)arg1 ;
-(BOOL)allowAuthentication;
-(BOOL)requiresMescal;
-(id)initWithServerRouteKey:(id)arg1 serverRouteReplacements:(id)arg2 queryParameters:(id)arg3 ;
-(id)initWithServerRouteKey:(id)arg1 ;
-(void)setRequiresMescal:(BOOL)arg1 ;
-(id)_requestPropertiesWithServerRouteKey:(id)arg1 queryParameters:(id)arg2 additionalHeaderFields:(id)arg3 ;
-(id)_runNetworkOperationAndReturnError:(id*)arg1 ;
-(void)_finishWithResponse:(id)arg1 ;
-(id)initWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 timeout:(double)arg4 ;
-(id)initWithServerRouteKey:(id)arg1 serverRouteReplacements:(id)arg2 queryParameters:(id)arg3 timeout:(double)arg4 ;
-(id)initWithEndpoint:(id)arg1 queryParameters:(id)arg2 ;
-(void)didFail;
-(void)_didFailWithError:(id)arg1 ;
-(void)_didFinishWithResponse:(id)arg1 ;
-(NSURL *)defaultBaseURL;
-(id)_requestPropertiesWithAPIEndpoint:(id)arg1 baseURL:(id)arg2 queryParameters:(id)arg3 httpMethod:(id)arg4 additionalHeaderFields:(id)arg5 ;
-(id)initWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 ;
-(NSDictionary *)additionalHeaderFields;
-(void)setAdditionalHeaderFields:(NSDictionary *)arg1 ;
-(NSString *)serverRouteKey;
-(NSDictionary *)serverRouteReplacements;
-(SSURLConnectionResponse *)fullResponse;
-(NSString *)callerOverride;
@end

