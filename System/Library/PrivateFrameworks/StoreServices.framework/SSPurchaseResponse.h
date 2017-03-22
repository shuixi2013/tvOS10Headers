/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSError, SSPurchase, SSURLConnectionResponse, NSMutableDictionary, NSString;

@interface SSPurchaseResponse : NSObject <SSXPCCoding> {

	BOOL _cancelsPurchaseBatch;
	NSArray* _downloadIdentifiers;
	NSError* _error;
	SSPurchase* _purchase;
	double _requestStartTime;
	SSURLConnectionResponse* _response;
	double _responseEndTime;
	double _responseStartTime;
	NSMutableDictionary* _transactionIdentifiers;

}

@property (assign,nonatomic) BOOL cancelsPurchaseBatch;                          //@synthesize cancelsPurchaseBatch=_cancelsPurchaseBatch - In the implementation block
@property (nonatomic,copy) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) SSPurchase * purchase;                                //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,retain) SSURLConnectionResponse * URLResponse;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSArray * downloadIdentifiers;                        //@synthesize downloadIdentifiers=_downloadIdentifiers - In the implementation block
@property (assign,nonatomic) double requestStartTime;                            //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (assign,nonatomic) double responseEndTime;                             //@synthesize responseEndTime=_responseEndTime - In the implementation block
@property (assign,nonatomic) double responseStartTime;                           //@synthesize responseStartTime=_responseStartTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPurchase:(SSPurchase *)arg1 ;
-(void)setResponseEndTime:(double)arg1 ;
-(double)requestStartTime;
-(void)setRequestStartTime:(double)arg1 ;
-(double)responseEndTime;
-(double)responseStartTime;
-(void)setResponseStartTime:(double)arg1 ;
-(id)downloadMetadataForItemIdentifier:(long long)arg1 ;
-(id)downloadsMetadata;
-(id)transactionIdentifierForItemIdentifier:(long long)arg1 ;
-(id)responseMetrics;
-(BOOL)cancelsPurchaseBatch;
-(void)setCancelsPurchaseBatch:(BOOL)arg1 ;
-(NSArray *)downloadIdentifiers;
-(void)setDownloadIdentifiers:(NSArray *)arg1 ;
-(void)setURLResponse:(SSURLConnectionResponse *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(SSURLConnectionResponse *)URLResponse;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(SSPurchase *)purchase;
@end
