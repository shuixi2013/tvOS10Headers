/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantTV.framework/SetupAssistantTV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class SATVAnimationViewController, UIImageView;

@interface SATVNavigationController : UINavigationController {

	SATVAnimationViewController* _animationViewController;
	UIImageView* _wallpaperBackgroundView;

}

@property (nonatomic,retain) UIImageView * wallpaperBackgroundView;                              //@synthesize wallpaperBackgroundView=_wallpaperBackgroundView - In the implementation block
@property (nonatomic,retain) SATVAnimationViewController * animationViewController;              //@synthesize animationViewController=_animationViewController - In the implementation block
-(id)backgroundColor;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(SATVAnimationViewController *)animationViewController;
-(void)setWallpaperBackgroundView:(UIImageView *)arg1 ;
-(UIImageView *)wallpaperBackgroundView;
-(void)setAnimationViewController:(SATVAnimationViewController *)arg1 ;
@end

