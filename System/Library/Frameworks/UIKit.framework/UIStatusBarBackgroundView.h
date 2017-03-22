/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIStatusBarStyleAttributes, UIStatusBarCorners, UIImageView;

@interface UIStatusBarBackgroundView : UIView {

	UIStatusBarStyleAttributes* _style;
	UIStatusBarCorners* _topCorners;
	UIImageView* _glowView;
	BOOL _glowEnabled;
	BOOL _suppressGlow;

}
-(id)style;
-(id)_baseImage;
-(BOOL)_topCornersAreRounded;
-(void)_setGlowAnimationEnabled:(BOOL)arg1 waitForNextCycle:(BOOL)arg2 ;
-(void)_startGlowAnimationWaitForNextCycle:(BOOL)arg1 ;
-(void)_stopGlowAnimation;
-(BOOL)_styleCanGlow;
-(id)_glowImage;
-(id)_backgroundImageName;
-(id)initWithFrame:(CGRect)arg1 style:(id)arg2 backgroundColor:(id)arg3 ;
-(void)setGlowAnimationEnabled:(BOOL)arg1 ;
-(void)setSuppressesGlow:(BOOL)arg1 ;
@end

