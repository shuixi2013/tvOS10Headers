/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface _UIPreviewInteractionStateRecognizer : NSObject {

	unsigned long long _deepPressCount;
	double _smoothedForce;
	double _maximumForce;
	double _previousEffectiveTouchForce;
	double _smoothedDistance;
	double _lowpassDistanceAlpha;
	double _distanceThreshold;
	CGPoint _previousSceneReferenceLocation;
	BOOL _isFirstForceEvaluation;
	double _timeMark;
	double _currentTime;
	double _previousTime;
	double _popOffsetInitial;
	double _popOffsetLongterm;
	double _popOffsetDecayAlpha;
	double _lowpassForceAlpha;
	double _popDecayingOffset;
	double _popReductionForce;
	double _progressToStrongThreshold;
	BOOL _allowsPopOffsetDecay;
	double _popForceReductionThreshold;
	double _popAlwaysThreshold;
	double _highPopThreshold;
	double _previousPopThreshold;
	double _saturationForce;
	double _revealThreshold;
	double _standardThreshold;
	double _strongThreshold;
	double _hintAndPeekInterval;
	double _hintReductionForce;
	double _transitionInterval;
	double _actualHintForce;
	double _actualPeekForce;
	double _actualPopForce;
	double _actualHintTime;
	double _actualPeekTime;
	double _actualPopTime;
	long long _currentState;
	double _currentTouchForce;

}

@property (assign,nonatomic) long long currentState;                //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) double currentTouchForce;              //@synthesize currentTouchForce=_currentTouchForce - In the implementation block
@property (nonatomic,readonly) double velocity; 
-(void)dealloc;
-(id)init;
-(id)description;
-(void)reset;
-(long long)currentState;
-(double)velocity;
-(void)evaluateWithTouchForce:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3 ;
-(double)currentProgressToState:(long long)arg1 ;
-(void)_accessibilityForceSensitivityChanged:(id)arg1 ;
-(double)_currentTouchForceMultiplier;
-(void)setCurrentState:(long long)arg1 ;
-(double)_thresholdForForceLevel:(long long)arg1 ;
-(double)currentTouchForce;
-(double)_normalizedTouchForceValue:(double)arg1 ;
-(double)_denormalizedTouchForceValue:(double)arg1 ;
-(void)setCurrentTouchForce:(double)arg1 ;
@end

