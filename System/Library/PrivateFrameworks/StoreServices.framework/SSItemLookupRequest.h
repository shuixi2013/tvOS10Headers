/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSMutableDictionary, NSDictionary, NSString;

@interface SSItemLookupRequest : SSRequest <SSXPCCoding> {

	NSMutableDictionary* _parameters;

}

@property (copy,readonly) NSDictionary * parameters; 
@property (assign,nonatomic) id<SSItemLookupRequestDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_convertedValueForValue:(id)arg1 ;
-(id)_errorForStatusCode:(long long)arg1 ;
-(id)_copyItemsFromResponse:(id)arg1 expirationDate:(id)arg2 ;
-(void)startWithItemLookupBlock:(/*^block*/id)arg1 ;
-(id)valueForParameter:(id)arg1 ;
-(id)copyQueryStringParameters;
-(void)dealloc;
-(id)init;
-(BOOL)start;
-(NSDictionary *)parameters;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setValue:(id)arg1 forParameter:(id)arg2 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
@end

