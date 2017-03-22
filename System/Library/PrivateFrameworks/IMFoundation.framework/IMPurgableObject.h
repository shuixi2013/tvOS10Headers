/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IMPurgableObject : NSObject {

	id _instanceObject;
	/*^block*/id _setupBlock;
	/*^block*/id _cleanupBlock;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(void)_cleanupInstance;
-(void)_setupInstance;
-(id)initWithSetupBlock:(/*^block*/id)arg1 cleanupBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)_receivedMemoryWarning:(id)arg1 ;
-(id)instance;
@end

