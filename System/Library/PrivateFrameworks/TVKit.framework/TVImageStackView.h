/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class _UIStackedImageContainerLayer, _UIStackedImageConfiguration, TVImageStack, TVUINamedLayerStack, UIView, NSArray, UIColor;

@interface TVImageStackView : UIView {

	_UIStackedImageContainerLayer* _imageStackLayer;
	_UIStackedImageConfiguration* _imageStackConfig;
	TVImageStack* _imageStack;
	CGSize _imageStackSize;
	TVUINamedLayerStack* _uiLayerStack;
	double _layerSelectionDuration;
	double _layerUnselectionDuration;
	double _shadowSelectionDuration;
	double _shadowUnselectionDuration;
	double _repositionUnselectionDuration;
	BOOL _imageLoaded;
	UIView* _overlayView;
	UIView* _unmaskedOverlayView;

}

@property (assign,getter=isImageLoaded,nonatomic) BOOL imageLoaded;                                    //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (nonatomic,retain) TVImageStack * imageStack; 
@property (assign,nonatomic) double maxParallaxImageDepth; 
@property (nonatomic,copy) NSArray * parallaxImageDepths; 
@property (assign,nonatomic) double perspectiveZDepth; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double rotationAmount; 
@property (nonatomic,retain) UIColor * specularHighlightColor; 
@property (assign,nonatomic) double specularHighlightHorizontalPositionSensitivity; 
@property (assign,nonatomic) double specularHighlightVerticalPosition; 
@property (assign,nonatomic) double specularHighlightVerticalPositionSensitivity; 
@property (assign,nonatomic) double radiosityAmount; 
@property (assign,getter=isBrightnessBoostEnabled,nonatomic) BOOL brightnessBoostEnabled; 
@property (assign,getter=isHueShiftEnabled,nonatomic) BOOL hueShiftEnabled; 
@property (assign,nonatomic) double layerSelectionDuration; 
@property (assign,nonatomic) double layerUnselectionDuration; 
@property (assign,nonatomic) unsigned long long controlState; 
@property (nonatomic,readonly) unsigned long long primaryControlState; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isPressed,nonatomic) BOOL pressed; 
@property (assign,nonatomic) CGPoint focusDirection; 
@property (assign,nonatomic) double focusSizeIncrease; 
@property (nonatomic,retain) UIView * overlayView;                                                     //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIView * unmaskedOverlayView;                                             //@synthesize unmaskedOverlayView=_unmaskedOverlayView - In the implementation block
+(CGSize)_scaledSizeForSize:(CGSize)arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3 ;
+(id)imageStackViewWithImageStack:(id)arg1 size:(CGSize)arg2 ;
+(id)imageStackViewWithSize:(CGSize)arg1 ;
+(CGSize)_scaledSizeForSize:(CGSize)arg1 selectionStyle:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setRotationAmount:(double)arg1 ;
-(void)setSpecularHighlightVerticalPosition:(double)arg1 ;
-(void)setSpecularHighlightHorizontalPositionSensitivity:(double)arg1 ;
-(void)setSpecularHighlightVerticalPositionSensitivity:(double)arg1 ;
-(void)setLayerSelectionDuration:(double)arg1 ;
-(void)setLayerUnselectionDuration:(double)arg1 ;
-(double)layerSelectionDuration;
-(double)rotationAmount;
-(double)specularHighlightVerticalPosition;
-(double)specularHighlightHorizontalPositionSensitivity;
-(double)specularHighlightVerticalPositionSensitivity;
-(double)layerUnselectionDuration;
-(unsigned long long)controlState;
-(long long)_selectionStyle;
-(void)_setImageStackContentsGravity:(id)arg1 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)_setFocusDirection:(CGPoint)arg1 duration:(double)arg2 ;
-(double)_idleModeFocusSizeOffset;
-(id)_imageStackContentsGravity;
-(void)setControlState:(unsigned long long)arg1 ;
-(BOOL)isPressed;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(void)setFocusDirection:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(id)_layerBelowTitles;
-(id)_flatLayer;
-(id)_shadowLayer;
-(void)_setSelectionStyle:(long long)arg1 ;
-(void)_setIdleModeFocusSizeOffset:(double)arg1 ;
-(CGPoint)focusDirection;
-(UIView *)overlayView;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setImageLoaded:(BOOL)arg1 ;
-(BOOL)isImageLoaded;
-(void)setOverlayView:(UIView *)arg1 ;
-(id)initWithImageStack:(id)arg1 size:(CGSize)arg2 ;
-(void)setImageStack:(TVImageStack *)arg1 ;
-(void)_updateStackedImageConfiguration;
-(void)_loadImage;
-(TVImageStack *)imageStack;
-(id)_newImageConfiguration;
-(void)setImageStack:(id)arg1 withSize:(CGSize)arg2 ;
-(double)maxParallaxImageDepth;
-(void)setMaxParallaxImageDepth:(double)arg1 ;
-(NSArray *)parallaxImageDepths;
-(void)setParallaxImageDepths:(NSArray *)arg1 ;
-(double)perspectiveZDepth;
-(void)setPerspectiveZDepth:(double)arg1 ;
-(UIColor *)specularHighlightColor;
-(void)setSpecularHighlightColor:(UIColor *)arg1 ;
-(double)radiosityAmount;
-(void)setRadiosityAmount:(double)arg1 ;
-(BOOL)isBrightnessBoostEnabled;
-(void)setBrightnessBoostEnabled:(BOOL)arg1 ;
-(BOOL)isHueShiftEnabled;
-(void)setHueShiftEnabled:(BOOL)arg1 ;
-(void)setPressed:(BOOL)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)setUnmaskedOverlayView:(UIView *)arg1 ;
-(unsigned long long)primaryControlState;
-(double)focusSizeIncrease;
-(void)setFocusSizeIncrease:(double)arg1 ;
-(id)_imageConfiguration;
-(void)_setShadowOpacity:(double)arg1 ;
-(void)_setShadowRadius:(double)arg1 ;
-(void)_setShadowVerticalOffset:(double)arg1 ;
-(void)_resetShadowSettings;
-(double)_pressedDuration;
-(double)_pressedScaleAdjustment;
-(id)_layeredImageContainerLayer;
-(void)_setPressedDuration:(double)arg1 ;
-(void)_setPressedScaleAdjustment:(double)arg1 ;
-(void)_setUnpressedDuration:(double)arg1 ;
-(double)_unpressedDuration;
-(UIView *)unmaskedOverlayView;
@end

