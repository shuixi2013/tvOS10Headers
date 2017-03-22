/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView, UIImage, UIColor;

@interface MKPlatterView : UIView {

	UIImageView* _iconView;
	UIView* _platterView;
	BOOL _highlighted;
	UIImage* _image;
	UIColor* _imageTintColor;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIImage * image;                                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIColor * imageTintColor;                           //@synthesize imageTintColor=_imageTintColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIImage *)image;
-(void)tintColorDidChange;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)setImageTintColor:(UIColor *)arg1 ;
-(UIColor *)imageTintColor;
@end

