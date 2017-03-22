/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIView, _TVCollectionView, UIImageView;

@interface _TVShowcaseView : UIView {

	UIImage* _bgImage;
	UIView* _bannerView;
	_TVCollectionView* _carouselView;
	UIView* _lockupInfoView;
	UIImageView* _imageView;
	UIView* _lastFocusedView;

}

@property (assign,nonatomic,__weak) UIImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) UIView * lastFocusedView;                 //@synthesize lastFocusedView=_lastFocusedView - In the implementation block
@property (nonatomic,retain) UIImage * bgImage;                               //@synthesize bgImage=_bgImage - In the implementation block
@property (nonatomic,retain) UIView * bannerView;                             //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,readonly) _TVCollectionView * carouselView;              //@synthesize carouselView=_carouselView - In the implementation block
@property (nonatomic,retain) UIView * lockupInfoView;                         //@synthesize lockupInfoView=_lockupInfoView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setBannerView:(UIView *)arg1 ;
-(UIView *)bannerView;
-(UIImage *)bgImage;
-(void)setBgImage:(UIImage *)arg1 ;
-(UIView *)lastFocusedView;
-(void)setLastFocusedView:(UIView *)arg1 ;
-(_TVCollectionView *)carouselView;
-(UIView *)lockupInfoView;
-(void)setLockupInfoView:(UIView *)arg1 ;
@end

