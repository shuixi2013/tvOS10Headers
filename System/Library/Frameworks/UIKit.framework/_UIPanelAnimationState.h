/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UISlidingBarStateRequest, _UIDynamicValueAnimation;

@interface _UIPanelAnimationState : NSObject {

	UISlidingBarStateRequest* _fromRequest;
	UISlidingBarStateRequest* _toRequest;
	double _progress;
	long long _affectedSides;
	_UIDynamicValueAnimation* _animation;

}

@property (nonatomic,copy) UISlidingBarStateRequest * fromRequest;                   //@synthesize fromRequest=_fromRequest - In the implementation block
@property (nonatomic,copy) UISlidingBarStateRequest * toRequest;                     //@synthesize toRequest=_toRequest - In the implementation block
@property (assign,nonatomic) double progress;                                        //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long affectedSides;                                //@synthesize affectedSides=_affectedSides - In the implementation block
@property (nonatomic,readonly) UISlidingBarStateRequest * stateRequest; 
@property (nonatomic,retain) _UIDynamicValueAnimation * animation;                   //@synthesize animation=_animation - In the implementation block
-(void)stop;
-(_UIDynamicValueAnimation *)animation;
-(void)setProgress:(double)arg1 ;
-(UISlidingBarStateRequest *)stateRequest;
-(double)progress;
-(void)setAnimation:(_UIDynamicValueAnimation *)arg1 ;
-(long long)affectedSides;
-(void)setAffectedSides:(long long)arg1 ;
-(UISlidingBarStateRequest *)fromRequest;
-(UISlidingBarStateRequest *)toRequest;
-(void)startWithCallback:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFromRequest:(UISlidingBarStateRequest *)arg1 ;
-(void)setToRequest:(UISlidingBarStateRequest *)arg1 ;
@end
