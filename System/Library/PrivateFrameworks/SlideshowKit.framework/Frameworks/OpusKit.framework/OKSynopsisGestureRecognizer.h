/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPinchGestureRecognizer.h>

@interface OKSynopsisGestureRecognizer : UIPinchGestureRecognizer {

	double _lastScale;
	unsigned long long _currentType;
	id _target;
	SEL _action;
	unsigned long long _gestureType;

}

@property (nonatomic,readonly) double progress; 
@property (nonatomic,readonly) unsigned long long gestureType;              //@synthesize gestureType=_gestureType - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(unsigned long long)gestureType;
-(double)progress;
-(BOOL)shouldCompleteGesture;
-(void)handle:(id)arg1 ;
@end

