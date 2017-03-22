/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVMediaDataRequesterConsumer, OS_dispatch_queue;
@class NSObject;

@interface AVMediaDataRequester : NSObject {

	id<AVMediaDataRequesterConsumer> _mediaDataConsumer;
	NSObject*<OS_dispatch_queue> _requestQueue;
	/*^block*/id _requestBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,readonly) id requestBlock;                                        //@synthesize requestBlock=_requestBlock - In the implementation block
-(void)finalize;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)initWithMediaDataConsumer:(id)arg1 requestQueue:(id)arg2 requestBlock:(/*^block*/id)arg3 ;
-(void)_requestMediaDataIfReady;
-(void)startRequestingMediaData;
-(id)requestBlock;
-(NSObject*<OS_dispatch_queue>)requestQueue;
@end

