/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMFHTTPRequestInternal, NSURL, NSString, NSDictionary, NSData, NSURLRequest;

@interface HMFHTTPRequest : NSObject {

	HMFHTTPRequestInternal* _internal;
	double _timeoutInterval;

}

@property (assign,nonatomic) double timeoutInterval;                           //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,readonly) HMFHTTPRequestInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * method; 
@property (nonatomic,readonly) NSDictionary * headerFields; 
@property (nonatomic,readonly) NSData * body; 
@property (nonatomic,copy,readonly) NSURLRequest * urlRequest; 
+(id)shortDescription;
-(id)init;
-(id)description;
-(id)debugDescription;
-(NSURL *)URL;
-(NSData *)body;
-(id)shortDescription;
-(NSString *)method;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
-(NSURLRequest *)urlRequest;
-(HMFHTTPRequestInternal *)internal;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)responseWithStatusCode:(long long)arg1 ;
-(NSDictionary *)headerFields;
-(id)initWithInternalRequest:(id)arg1 ;
@end

