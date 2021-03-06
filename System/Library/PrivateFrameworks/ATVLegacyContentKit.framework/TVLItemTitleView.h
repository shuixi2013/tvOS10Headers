/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, TVSImageProxy, TVImageView;

@interface TVLItemTitleView : UIView {

	BOOL _ratingSnapsToTitle;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _rightTitleLabel;
	TVSImageProxy* _imageProxy;
	TVSImageProxy* _ratingImageProxy;
	TVImageView* _ratingImageView;
	TVImageView* _rightImageView;

}

@property (nonatomic,retain) TVImageView * ratingImageView;                 //@synthesize ratingImageView=_ratingImageView - In the implementation block
@property (nonatomic,retain) TVImageView * rightImageView;                  //@synthesize rightImageView=_rightImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                       //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * rightTitleLabel;                     //@synthesize rightTitleLabel=_rightTitleLabel - In the implementation block
@property (nonatomic,retain) TVSImageProxy * imageProxy;                    //@synthesize imageProxy=_imageProxy - In the implementation block
@property (nonatomic,retain) TVSImageProxy * ratingImageProxy;              //@synthesize ratingImageProxy=_ratingImageProxy - In the implementation block
@property (assign,nonatomic) BOOL ratingSnapsToTitle;                       //@synthesize ratingSnapsToTitle=_ratingSnapsToTitle - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(TVSImageProxy *)imageProxy;
-(void)setImageProxy:(TVSImageProxy *)arg1 ;
-(UILabel *)rightTitleLabel;
-(void)setRatingImageProxy:(TVSImageProxy *)arg1 ;
-(void)setRightTitleLabel:(UILabel *)arg1 ;
-(TVSImageProxy *)ratingImageProxy;
-(BOOL)ratingSnapsToTitle;
-(void)setRatingSnapsToTitle:(BOOL)arg1 ;
-(TVImageView *)ratingImageView;
-(void)setRatingImageView:(TVImageView *)arg1 ;
-(TVImageView *)rightImageView;
-(void)setRightImageView:(TVImageView *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
@end

