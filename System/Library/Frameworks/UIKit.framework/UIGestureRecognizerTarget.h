/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UIGestureRecognizerTarget : NSObject {

	id _target;
	SEL _action;

}

@property (nonatomic,__weak,readonly) id target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                    //@synthesize action=_action - In the implementation block
+(id)gestureTargetWithTarget:(id)arg1 action:(SEL)arg2 ;
-(id)description;
-(SEL)action;
-(id)target;
-(BOOL)isEqualToTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_sendActionWithGestureRecognizer:(id)arg1 ;
@end

