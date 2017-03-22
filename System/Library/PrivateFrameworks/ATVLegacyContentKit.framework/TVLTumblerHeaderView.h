/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLMenuHeaderView.h>

@class UIView;

@interface TVLTumblerHeaderView : TVLMenuHeaderView {

	BOOL _showsLeftArrow;
	BOOL _showsRightArrow;
	UIView* _leftArrowView;
	UIView* _rightArrowView;

}

@property (nonatomic,retain) UIView * leftArrowView;               //@synthesize leftArrowView=_leftArrowView - In the implementation block
@property (nonatomic,retain) UIView * rightArrowView;              //@synthesize rightArrowView=_rightArrowView - In the implementation block
@property (assign,nonatomic) BOOL showsLeftArrow;                  //@synthesize showsLeftArrow=_showsLeftArrow - In the implementation block
@property (assign,nonatomic) BOOL showsRightArrow;                 //@synthesize showsRightArrow=_showsRightArrow - In the implementation block
-(void)layoutSubviews;
-(UIView *)rightArrowView;
-(UIView *)leftArrowView;
-(void)setLeftArrowView:(UIView *)arg1 ;
-(void)setRightArrowView:(UIView *)arg1 ;
-(id)initWithHeaderElement:(id)arg1 ;
-(void)setTitle:(id)arg1 animateFromDirection:(long long)arg2 ;
-(void)setShowsLeftArrow:(BOOL)arg1 ;
-(void)setShowsRightArrow:(BOOL)arg1 ;
-(BOOL)showsLeftArrow;
-(BOOL)showsRightArrow;
@end

