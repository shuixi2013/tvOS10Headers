/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol MPUMarqueeViewDelegate;
@class NSUUID, NSPointerArray, UIView, NSArray, NSString;

@interface MPUMarqueeView : UIView <CAAnimationDelegate> {

	NSUUID* _currentAnimationID;
	long long _options;
	NSPointerArray* _coordinatedMarqueeViews;
	MPUMarqueeView* _primaryMarqueeView;
	BOOL _marqueeEnabled;
	double _contentGap;
	UIView* _contentView;
	id<MPUMarqueeViewDelegate> _delegate;
	double _marqueeDelay;
	double _marqueeScrollRate;
	UIView* _viewForContentSize;
	CGSize _contentSize;
	UIEdgeInsets _fadeEdgeInsets;

}

@property (assign,nonatomic) double contentGap;                                        //@synthesize contentGap=_contentGap - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                       //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                   //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets fadeEdgeInsets;                              //@synthesize fadeEdgeInsets=_fadeEdgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<MPUMarqueeViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double marqueeDelay;                                      //@synthesize marqueeDelay=_marqueeDelay - In the implementation block
@property (assign,nonatomic) double marqueeScrollRate;                                 //@synthesize marqueeScrollRate=_marqueeScrollRate - In the implementation block
@property (assign,getter=isMarqueeEnabled,nonatomic) BOOL marqueeEnabled;              //@synthesize marqueeEnabled=_marqueeEnabled - In the implementation block
@property (nonatomic,readonly) NSArray * coordinatedMarqueeViews; 
@property (nonatomic,retain) UIView * viewForContentSize;                              //@synthesize viewForContentSize=_viewForContentSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MPUMarqueeViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)invalidateIntrinsicContentSize;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(id<MPUMarqueeViewDelegate>)delegate;
-(CGSize)contentSize;
-(double)_duration;
-(UIView *)contentView;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(id)viewForLastBaselineLayout;
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(id)viewForFirstBaselineLayout;
-(double)marqueeDelay;
-(void)setMarqueeDelay:(double)arg1 ;
-(void)_createMarqueeAnimationIfNeeded;
-(void)_tearDownMarqueeAnimation;
-(void)_applyMarqueeFade;
-(void)setMarqueeEnabled:(BOOL)arg1 withOptions:(long long)arg2 ;
-(void)addCoordinatedMarqueeView:(id)arg1 ;
-(void)_createMarqueeAnimationIfNeededWithMaximumDuration:(double)arg1 beginTime:(double)arg2 ;
-(void)setContentGap:(double)arg1 ;
-(void)setMarqueeScrollRate:(double)arg1 ;
-(void)setViewForContentSize:(UIView *)arg1 ;
-(NSArray *)coordinatedMarqueeViews;
-(void)resetMarqueePosition;
-(double)contentGap;
-(UIEdgeInsets)fadeEdgeInsets;
-(void)setFadeEdgeInsets:(UIEdgeInsets)arg1 ;
-(double)marqueeScrollRate;
-(BOOL)isMarqueeEnabled;
-(UIView *)viewForContentSize;
@end

