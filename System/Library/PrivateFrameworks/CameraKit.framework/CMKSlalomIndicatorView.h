/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface CMKSlalomIndicatorView : UIView {

	long long _framesPerSecond;
	UILabel* __framerateLabel;

}

@property (nonatomic,readonly) UILabel * _framerateLabel;              //@synthesize _framerateLabel=__framerateLabel - In the implementation block
@property (assign,nonatomic) long long framesPerSecond;                //@synthesize framesPerSecond=_framesPerSecond - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(void)_commonCMKSlalomIndicatorViewInitialization;
-(void)_updateFramerateLabel;
-(void)setFramesPerSecond:(long long)arg1 ;
-(long long)framesPerSecond;
-(UILabel *)_framerateLabel;
@end

