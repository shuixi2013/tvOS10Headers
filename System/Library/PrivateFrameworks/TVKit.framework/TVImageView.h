/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIImageView, UIColor, TVSImageProxy;

@interface TVImageView : UIView {

	BOOL _rendersImageAsTemplates;
	UIImage* _image;
	UIImageView* _imageView;
	UIColor* __focusedColor;
	long long _imageContentMode;
	UIImage* _flatImage;
	UIImage* _flatHighlightImage;
	BOOL _selected;
	BOOL _imageLoaded;
	BOOL __enableEdgeAntialiasingOnSelected;
	BOOL __edgeAntialiasingOnSelectedRestrictedToLeftRightEdge;
	UIImage* _placeholderImage;
	TVSImageProxy* _imageProxy;
	/*^block*/id _completion;
	UIColor* __tintColor;

}

@property (nonatomic,copy) id completion;                                                                                                                            //@synthesize completion=_completion - In the implementation block
@property (assign,getter=isImageLoaded,nonatomic) BOOL imageLoaded;                                                                                                  //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor;                                                                                             //@synthesize _tintColor=__tintColor - In the implementation block
@property (setter=_setFocusedColor:,nonatomic,retain) UIColor * _focusedColor;                                                                                       //@synthesize _focusedColor=__focusedColor - In the implementation block
@property (assign,setter=_setEnableEdgeAntialiasingOnSelected:,nonatomic) BOOL _enableEdgeAntialiasingOnSelected;                                                    //@synthesize _enableEdgeAntialiasingOnSelected=__enableEdgeAntialiasingOnSelected - In the implementation block
@property (assign,setter=_setEdgeAntialiasingOnSelectedRestrictedToLeftRightEdge:,nonatomic) BOOL _edgeAntialiasingOnSelectedRestrictedToLeftRightEdge;              //@synthesize _edgeAntialiasingOnSelectedRestrictedToLeftRightEdge=__edgeAntialiasingOnSelectedRestrictedToLeftRightEdge - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * placeholderImage;                                                                                                             //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,retain) TVSImageProxy * imageProxy;                                                                                                             //@synthesize imageProxy=_imageProxy - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(UIImage *)image;
-(void)setCornerRadius:(double)arg1 ;
-(long long)contentMode;
-(double)cornerRadius;
-(void)willMoveToWindow:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_setTintColor:(id)arg1 ;
-(id)_imageView;
-(UIColor *)_tintColor;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(TVSImageProxy *)imageProxy;
-(void)setImageProxy:(TVSImageProxy *)arg1 ;
-(void)setImageLoaded:(BOOL)arg1 ;
-(BOOL)isImageLoaded;
-(void)setImageProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadImage;
-(void)_updateImageViewWithPlaceholderImageIfNeeded;
-(BOOL)_enableEdgeAntialiasingOnSelected;
-(BOOL)_edgeAntialiasingOnSelectedRestrictedToLeftRightEdge;
-(void)_setFocusedColor:(id)arg1 ;
-(UIColor *)_focusedColor;
-(void)_setEnableEdgeAntialiasingOnSelected:(BOOL)arg1 ;
-(void)_setEdgeAntialiasingOnSelectedRestrictedToLeftRightEdge:(BOOL)arg1 ;
-(void)_setImage:(id)arg1 ;
@end

