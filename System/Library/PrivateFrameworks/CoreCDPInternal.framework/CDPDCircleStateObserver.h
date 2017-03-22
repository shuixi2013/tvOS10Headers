/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CDPDCircleProxy;
@class NSObject;

@interface CDPDCircleStateObserver : NSObject {

	int _circleChangeToken;
	BOOL _isObserving;
	NSObject*<OS_dispatch_queue> _eventQueue;
	id<CDPDCircleProxy> _circleProxy;

}
-(void)dealloc;
-(id)initWithProxy:(id)arg1 ;
-(const char*)_notificationName;
-(void)observeCircleStateWithChangeHandler:(/*^block*/id)arg1 ;
-(void)observeChangeToState:(int)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopObservingCircleStatusChange;
@end
