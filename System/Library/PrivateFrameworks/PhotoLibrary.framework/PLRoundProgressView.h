/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class NSTimer, NSDate, UIView, CAShapeLayer, PLProgressArcLayer, CALayer;

@interface PLRoundProgressView : UIView {

	CGPoint _pieCenter;
	double _pieRadius;
	NSTimer* _progressTimer;
	double _uiProgress;
	double _realProgress;
	double _increaseRate;
	NSDate* _prevUpdateTime;
	long long _style;
	double _progress;
	UIView* __contentView;
	CAShapeLayer* __sliceLayer;
	CAShapeLayer* __circleLayer;
	PLProgressArcLayer* __progressArcLayer;
	CALayer* __irisGlyphLayer;
	double __contentsScale;

}

@property (setter=_setContentView:,nonatomic,retain) UIView * _contentView;                                    //@synthesize _contentView=__contentView - In the implementation block
@property (setter=_setSliceLayer:,nonatomic,retain) CAShapeLayer * _sliceLayer;                                //@synthesize _sliceLayer=__sliceLayer - In the implementation block
@property (setter=_setCircleLayer:,nonatomic,retain) CAShapeLayer * _circleLayer;                              //@synthesize _circleLayer=__circleLayer - In the implementation block
@property (setter=_setProgressArcLayer:,nonatomic,retain) PLProgressArcLayer * _progressArcLayer;              //@synthesize _progressArcLayer=__progressArcLayer - In the implementation block
@property (setter=_setIrisGlyphLayer:,nonatomic,retain) CALayer * _irisGlyphLayer;                             //@synthesize _irisGlyphLayer=__irisGlyphLayer - In the implementation block
@property (assign,setter=_setContentsScale:,nonatomic) double _contentsScale;                                  //@synthesize _contentsScale=__contentsScale - In the implementation block
@property (nonatomic,readonly) long long style;                                                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double progress;                                                                  //@synthesize progress=_progress - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(UIView *)_contentView;
-(long long)style;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(double)progress;
-(void)_setContentView:(id)arg1 ;
-(void)resetProgress;
-(CAShapeLayer *)_sliceLayer;
-(void)_setSliceLayer:(id)arg1 ;
-(CAShapeLayer *)_circleLayer;
-(void)_setCircleLayer:(id)arg1 ;
-(CALayer *)_irisGlyphLayer;
-(void)_setIrisGlyphLayer:(id)arg1 ;
-(void)stopProgressTimer;
-(void)startProgressTimer;
-(void)_updateSubviews;
-(void)_setContentsScale:(double)arg1 ;
-(void)_updateSublayersContentsScale;
-(double)_contentsScale;
-(PLProgressArcLayer *)_progressArcLayer;
-(void)setPieRadius:(double)arg1 ;
-(void)_updateUIProgress;
-(void)increaseUIProgress:(id)arg1 ;
-(double)toRadian:(double)arg1 ;
-(void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2 ;
-(void)_setProgressArcLayer:(id)arg1 ;
-(void)setInitialIncreaseRatePerFrame:(double)arg1 ;
@end

