/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class _UIFloatingContentView, _TVImageView;

@interface _TVShowcaseCell : UICollectionViewCell {

	_UIFloatingContentView* _floatingView;
	_TVImageView* _imageView;
	CGSize _imageSize;

}

@property (assign,nonatomic,__weak) _UIFloatingContentView * floatingView;              //@synthesize floatingView=_floatingView - In the implementation block
@property (assign,nonatomic,__weak) _TVImageView * imageView;                           //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                          //@synthesize imageSize=_imageSize - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusFromView:(id)arg1 ;
-(CGSize)imageSize;
-(void)prepareForReuse;
-(_TVImageView *)imageView;
-(void)setImageView:(_TVImageView *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(_UIFloatingContentView *)floatingView;
-(void)setFloatingView:(_UIFloatingContentView *)arg1 ;
@end

