/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/_UIStackedImageContainerView.h>

@class TVSLayeredImageProxy, UIView, _UIStackedImageContainerLayer;

@interface TVLayeredImageContainerView : _UIStackedImageContainerView {

	TVSLayeredImageProxy* _layeredImageProxy;
	BOOL _layeredImageLoaded;
	UIView* _overlayView;

}

@property (assign,getter=isLayeredImageLoaded,nonatomic) BOOL layeredImageLoaded;                       //@synthesize layeredImageLoaded=_layeredImageLoaded - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                      //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) TVSLayeredImageProxy * layeredImageProxy;                                  //@synthesize layeredImageProxy=_layeredImageProxy - In the implementation block
@property (nonatomic,readonly) _UIStackedImageContainerLayer * layeredImageContainerLayer; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(void)setFocusDirection:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(CGPoint)focusDirection;
-(UIView *)overlayView;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(_UIStackedImageContainerLayer *)layeredImageContainerLayer;
-(void)setLayeredImageLoaded:(BOOL)arg1 ;
-(void)_loadLayeredImage;
-(BOOL)isLayeredImageLoaded;
-(id)initWithLayeredImageProxy:(id)arg1 ;
-(void)setLayeredImageProxy:(TVSLayeredImageProxy *)arg1 ;
-(TVSLayeredImageProxy *)layeredImageProxy;
@end

