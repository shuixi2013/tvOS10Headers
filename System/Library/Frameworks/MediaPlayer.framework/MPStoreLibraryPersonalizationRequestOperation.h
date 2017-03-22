/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPStoreLibraryPersonalizationRequest;

@interface MPStoreLibraryPersonalizationRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	MPStoreLibraryPersonalizationRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPStoreLibraryPersonalizationRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                          //@synthesize responseHandler=_responseHandler - In the implementation block
+(id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2 ;
-(MPStoreLibraryPersonalizationRequest *)request;
-(void)setRequest:(MPStoreLibraryPersonalizationRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
-(id)responseHandler;
@end

