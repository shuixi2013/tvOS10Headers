/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicItemBehavior.h>

@interface _UIDynamicItemObservingBehavior : UIDynamicItemBehavior {

	BOOL _enabled;
	double _completionHandlerInvocationDelay;
	/*^block*/id _completionHandler;
	long long _frameCount;
	CGVector _targetVelocity;

}

@property (assign,nonatomic) BOOL enabled;                                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long frameCount;                                 //@synthesize frameCount=_frameCount - In the implementation block
@property (assign,nonatomic) CGVector targetVelocity;                              //@synthesize targetVelocity=_targetVelocity - In the implementation block
@property (assign,nonatomic) double completionHandlerInvocationDelay;              //@synthesize completionHandlerInvocationDelay=_completionHandlerInvocationDelay - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
-(BOOL)enabled;
-(void)cancel;
-(void)setEnabled:(BOOL)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)willMoveToAnimator:(id)arg1 ;
-(void)setFrameCount:(long long)arg1 ;
-(CGVector)targetVelocity;
-(long long)frameCount;
-(double)completionHandlerInvocationDelay;
-(void)setTargetVelocity:(CGVector)arg1 ;
-(void)setCompletionHandlerInvocationDelay:(double)arg1 ;
@end

