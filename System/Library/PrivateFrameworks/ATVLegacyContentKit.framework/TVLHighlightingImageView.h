/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIImage;

@interface TVLHighlightingImageView : UIView {

	UIImageView* _imageView;
	UIImageView* _highlightedImageView;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * highlightedImage; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(UIImage *)highlightedImage;
-(void)setHighlightedImage:(UIImage *)arg1 ;
-(void)setHighlightProgress:(double)arg1 ;
@end

