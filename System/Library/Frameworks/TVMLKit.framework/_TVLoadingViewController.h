/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class _TVImageView, UIView, UIActivityIndicatorView, UIImage, UIVisualEffectView, IKImageElement, IKViewElement;

@interface _TVLoadingViewController : _TVBgImageLoadingViewController {

	_TVImageView* _backgroundImageView;
	UIView* _loadingTitleLabel;
	UIActivityIndicatorView* _spinnerView;
	UIImage* _loadingImage;
	CGSize _spinnerSize;
	UIVisualEffectView* _visualEffectView;
	IKImageElement* _bgImageElement;
	IKImageElement* _heroImgElement;
	IKViewElement* _loadingTemplateElement;
	double _spinnerDelay;

}
+(id)_imageDecoratorForLoadingTemplateElement:(id)arg1 ;
+(id)_backgroundImageProxyForLoadingTemplateElement:(id)arg1 ;
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)setLoadingTitle:(id)arg1 ;
-(void)_configureBackgroundImageView;
-(void)updateWithLoadingTemplate:(id)arg1 ;
-(void)setSpinnerDelay:(double)arg1 ;
@end

