/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXIPCServerMessageHandlerContext : NSObject {

	BOOL _async;
	/*^block*/id _handler;
	id _target;
	SEL _selector;

}

@property (nonatomic,readonly) id handler;                //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) id target;                 //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;              //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) BOOL async;                //@synthesize async=_async - In the implementation block
-(void)dealloc;
-(id)target;
-(SEL)selector;
-(id)handler;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(BOOL)async;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 async:(BOOL)arg3 ;
@end

