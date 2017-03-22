/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UISearchPresentationController.h>

@class UIVisualEffectView;

@interface _UISearchATVPresentationController : _UISearchPresentationController {

	UIVisualEffectView* _blurView;

}

@property (nonatomic,retain) UIVisualEffectView * blurView;              //@synthesize blurView=_blurView - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)containerViewWillLayoutSubviews;
-(long long)adaptivePresentationStyle;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(BOOL)searchBarToBecomeTopAttached;
-(double)statusBarAdjustment;
-(void)setContentVisible:(BOOL)arg1 ;
-(double)resultsControllerContentOffset;
-(BOOL)shouldAccountForStatusBar;
-(id)adaptivePresentationController;
-(BOOL)resultsUnderlapsSearchBar;
-(BOOL)searchBarCanContainScopeBar;
-(BOOL)searchBarShouldClipToBounds;
-(CGRect)finalFrameForContainerView;
-(BOOL)animatorShouldLayoutPresentationViews;
-(BOOL)forceObeyNavigationBarInsets;
-(unsigned long long)edgeForHidingNavigationBar;
-(UIVisualEffectView *)blurView;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(id)backgroundObscuringView;
-(void)showBackgroundObscuringView;
-(void)hideBackgroundObscuringView;
-(id)_presentedViewControllerForSizeClassPair:(SCD_Struct_UI30)arg1 ;
@end

