/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKit/UIControl.h>

@class TVHighlightingImageView, TVFloatingView, UILabel, UIImageView, CALayer, UIView, UITapGestureRecognizer, NSString, UIImage;

@interface TVActionButton : UIControl {

	TVHighlightingImageView* _badgeImageView;
	TVFloatingView* _floatingView;
	UILabel* _headlineLabel;
	UILabel* _unFocusedHeadlineLabel;
	UIImageView* _imageView;
	CALayer* _maskImageLayer;
	UILabel* _titleLabel;
	UIView* _focusedOverlayView;
	UIView* _unfocusedOverlayView;
	UITapGestureRecognizer* _selectRecognizer;
	BOOL _drawsBorder;
	BOOL _invertTextColorOnFocus;
	NSString* _title;
	NSString* _headline;
	UIImage* _image;
	UIImage* _badgeImage;

}

@property (assign,nonatomic) BOOL invertTextColorOnFocus;              //@synthesize invertTextColorOnFocus=_invertTextColorOnFocus - In the implementation block
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * headline;                        //@synthesize headline=_headline - In the implementation block
@property (nonatomic,retain) UIImage * image;                          //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * badgeImage;                     //@synthesize badgeImage=_badgeImage - In the implementation block
@property (assign,nonatomic) BOOL drawsBorder;                         //@synthesize drawsBorder=_drawsBorder - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(BOOL)canBecomeFocused;
-(void)focusedViewDidChange;
-(id)_titleLabel;
-(void)setHeadline:(NSString *)arg1 ;
-(NSString *)headline;
-(void)_selectButtonAction:(id)arg1 ;
-(UIImage *)badgeImage;
-(void)setBadgeImage:(UIImage *)arg1 ;
-(void)setDrawsBorder:(BOOL)arg1 ;
-(id)_headlineLabel;
-(void)setInvertTextColorOnFocus:(BOOL)arg1 ;
-(void)_updateImageViewBounds;
-(BOOL)drawsBorder;
-(BOOL)invertTextColorOnFocus;
@end

