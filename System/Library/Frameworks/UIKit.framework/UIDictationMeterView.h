/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIButton.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIImageView, NSMutableArray, CALayer, NSTimer, CADisplayLink, NSString;

@interface UIDictationMeterView : UIButton <CAAnimationDelegate> {

	UIImageView* _background;
	UIImageView* _overlay;
	NSMutableArray* _micListeningImages;
	CALayer* _micImageLayer;
	CALayer* _animatingLayer;
	NSTimer* _fillTimer;
	int _phase;
	int _state;
	float _runningPowerLevels[5];
	unsigned _powerPointer;
	CADisplayLink* _displayLink;
	double _releaseStart;
	float _releaseLevel;
	int _cachedViewMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setState:(int)arg1 ;
-(void)_reset;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)_emptyMicImage;
-(void)_startListening;
-(void)_startAttack;
-(void)_clearDisplayLink;
-(void)_removeAnimationsAndClearLayers;
-(float)_updateMedianWithNewValue:(float)arg1 ;
-(float)_powerLevelForMicPower:(float)arg1 ;
-(double)_animationInterval;
-(id)imageForMicLevel:(double)arg1 ;
-(float)_adjustedDuration:(float)arg1 ;
-(id)_keyframeAnimationForCGImages:(id)arg1 duration:(double)arg2 ;
-(id)_attackKeyFrameAnimation;
-(id)_decayKeyFrameAnimation;
-(id)_sustainKeyFrameAnimation;
-(float)_currentMicPowerLevel;
-(void)_resetRunningPowerLevels;
-(void)_updateReleaseAnimation:(id)arg1 ;
-(void)_updateListeningAnimation:(id)arg1 ;
-(void)_startDecay;
-(void)_startSustain;
-(void)_startRelease;
@end

