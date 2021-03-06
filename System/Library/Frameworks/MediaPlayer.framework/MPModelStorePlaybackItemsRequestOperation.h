/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPModelStorePlaybackItemsRequest;

@interface MPModelStorePlaybackItemsRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	MPModelStorePlaybackItemsRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) MPModelStorePlaybackItemsRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) id responseHandler;                                      //@synthesize responseHandler=_responseHandler - In the implementation block
-(MPModelStorePlaybackItemsRequest *)request;
-(void)execute;
-(id)responseHandler;
-(id)initWithRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
@end

