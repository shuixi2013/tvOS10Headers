/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSData, NSDictionary, ISDataProvider, SBKTransaction;

@interface SBKRequest : NSObject {

	BOOL _shouldAuthenticate;
	NSURL* _requestURL;
	NSString* _action;
	NSData* _bodyData;
	long long _bodyContentType;
	NSDictionary* _headers;
	NSDictionary* _arguments;
	long long _method;
	ISDataProvider* _responseDataProvider;
	BOOL _concurrent;
	BOOL _includeDeviceGUID;
	SBKTransaction* _transaction;

}

@property (nonatomic,retain) SBKTransaction * transaction;                       //@synthesize transaction=_transaction - In the implementation block
@property (getter=isConcurrent,nonatomic,readonly) BOOL concurrent;              //@synthesize concurrent=_concurrent - In the implementation block
@property (assign,nonatomic) long long method;                                   //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) double timeoutInterval; 
@property (assign,nonatomic) BOOL shouldAuthenticate;                            //@synthesize shouldAuthenticate=_shouldAuthenticate - In the implementation block
@property (assign,nonatomic) BOOL includeDeviceGUID;                             //@synthesize includeDeviceGUID=_includeDeviceGUID - In the implementation block
@property (nonatomic,retain) NSData * bodyData;                                  //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,retain) ISDataProvider * responseDataProvider;              //@synthesize responseDataProvider=_responseDataProvider - In the implementation block
+(id)requestWithRequestURL:(id)arg1 ;
+(id)_methodStringForMethod:(long long)arg1 ;
+(long long)bodyContentEncodingType;
+(long long)bodyContentType;
+(id)_contentEncodingTypeStringForBodyContentEncodingType:(long long)arg1 ;
+(id)_contentTypeStringForBodyContentType:(long long)arg1 ;
-(void)setMethod:(long long)arg1 ;
-(id)description;
-(long long)method;
-(void)setValue:(id)arg1 forHeaderField:(id)arg2 ;
-(void)setBodyData:(NSData *)arg1 ;
-(NSData *)bodyData;
-(double)timeoutInterval;
-(BOOL)isConcurrent;
-(void)setValue:(id)arg1 forArgument:(id)arg2 ;
-(void)setBodyDataWithPropertyList:(id)arg1 ;
-(void)setIncludeDeviceGUID:(BOOL)arg1 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(BOOL)shouldAuthenticate;
-(void)setShouldAuthenticate:(BOOL)arg1 ;
-(id)newURLOperation;
-(id)copyRequestProperties;
-(ISDataProvider *)responseDataProvider;
-(id)initWithRequestURL:(id)arg1 ;
-(id)_defaultHeaderFields;
-(void)setResponseDataProvider:(ISDataProvider *)arg1 ;
-(BOOL)includeDeviceGUID;
-(BOOL)acceptsGzipEncoding;
-(id)descriptionWithoutHeaderFields;
-(SBKTransaction *)transaction;
-(void)setTransaction:(SBKTransaction *)arg1 ;
@end

