/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class IKViewElement, UIView, _TVFocusCaptureView, _TVShowcaseViewController, _TVOneupTemplateController, UIViewController, IKImageElement, UIImage, IKAudioElement, NSArray, NSString;

@interface _TVShowcaseTemplateController : _TVBgImageLoadingViewController <UIGestureRecognizerDelegate> {

	IKViewElement* _templateElement;
	UIView* _overlayView;
	_TVFocusCaptureView* _disabledTemplateFocusCaptureView;
	_TVShowcaseViewController* _showcaseViewController;
	_TVOneupTemplateController* _oneupViewController;
	UIViewController* _activeViewController;
	IKImageElement* _bgImageElement;
	UIImage* _bgImage;
	IKAudioElement* _audioElement;
	NSArray* _lockupElements;

}

@property (assign,nonatomic,__weak) _TVShowcaseViewController * showcaseViewController;              //@synthesize showcaseViewController=_showcaseViewController - In the implementation block
@property (assign,nonatomic,__weak) _TVOneupTemplateController * oneupViewController;                //@synthesize oneupViewController=_oneupViewController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * activeViewController;                         //@synthesize activeViewController=_activeViewController - In the implementation block
@property (assign,nonatomic,__weak) IKImageElement * bgImageElement;                                 //@synthesize bgImageElement=_bgImageElement - In the implementation block
@property (nonatomic,retain) UIImage * bgImage;                                                      //@synthesize bgImage=_bgImage - In the implementation block
@property (nonatomic,retain) IKAudioElement * audioElement;                                          //@synthesize audioElement=_audioElement - In the implementation block
@property (nonatomic,copy) NSArray * lockupElements;                                                 //@synthesize lockupElements=_lockupElements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_menuAction:(id)arg1 ;
-(UIImage *)bgImage;
-(void)setBgImage:(UIImage *)arg1 ;
-(NSArray *)lockupElements;
-(IKAudioElement *)audioElement;
-(void)setAudioElement:(IKAudioElement *)arg1 ;
-(void)setLockupElements:(NSArray *)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)updateWithShowcaseElement:(id)arg1 ;
-(id)initWithShowcaseElement:(id)arg1 ;
-(void)_transitionControllersWithMenuAction:(BOOL)arg1 ;
-(void)_updateWithShowcaseElement:(id)arg1 update:(BOOL)arg2 ;
-(UIViewController *)activeViewController;
-(_TVShowcaseViewController *)showcaseViewController;
-(_TVOneupTemplateController *)oneupViewController;
-(void)_updateDisabledFocusView;
-(IKImageElement *)bgImageElement;
-(void)setActiveViewController:(UIViewController *)arg1 ;
-(void)setBgImageElement:(IKImageElement *)arg1 ;
-(void)setShowcaseViewController:(_TVShowcaseViewController *)arg1 ;
-(void)setOneupViewController:(_TVOneupTemplateController *)arg1 ;
@end

