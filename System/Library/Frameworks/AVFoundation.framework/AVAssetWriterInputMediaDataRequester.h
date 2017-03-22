/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AVWeakReference;

@interface AVAssetWriterInputMediaDataRequester : NSObject {

	NSObject*<OS_dispatch_queue> _requestQueue;
	/*^block*/id _requestBlock;
	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	AVWeakReference* _weakReferenceToDelegate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> requestQueue;                  //@synthesize requestQueue=_requestQueue - In the implementation block
@property (__weak) id<AVAssetWriterInputMediaDataRequesterDelegate> delegate; 
-(void)finalize;
-(void)setDelegate:(id<AVAssetWriterInputMediaDataRequesterDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AVAssetWriterInputMediaDataRequesterDelegate>)delegate;
-(id)initWithRequestQueue:(id)arg1 requestBlock:(/*^block*/id)arg2 ;
-(void)requestMediaDataIfNecessary;
-(void)_collectUncollectables_invokedFromDeallocAndFinalize;
-(NSObject*<OS_dispatch_queue>)requestQueue;
@end

