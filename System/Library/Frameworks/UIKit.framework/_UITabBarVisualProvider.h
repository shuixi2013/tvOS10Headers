/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UITabBar;

@interface _UITabBarVisualProvider : NSObject {

	UITabBar* _tabBar;
	BOOL _usesLegacyUI;

}

@property (nonatomic,readonly) UITabBar * tabBar;              //@synthesize tabBar=_tabBar - In the implementation block
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusedView;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)updateConstraints;
-(UITabBar *)tabBar;
-(id)initWithTabBar:(id)arg1 ;
-(void)prepare;
-(void)teardown;
-(void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 animate:(BOOL)arg4 ;
-(id)exchangeItem:(id)arg1 withItem:(id)arg2 ;
-(void)changeSelectedItem:(id)arg1 fromItem:(id)arg2 ;
-(void)changeAppearance;
-(void)changeLayout;
-(id)createViewForTabBarItem:(id)arg1 ;
-(void)updateArchivedSubviews:(id)arg1 ;
-(CGSize)intrinsicContentSizeGivenSize:(CGSize)arg1 ;
-(BOOL)wantsFocus;
-(double)defaultAnimationDuration;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(id)_shim_compatibilityBackgroundView;
-(void)_shim_setAccessoryView:(id)arg1 ;
-(id)_shim_accessoryView;
-(id)_shim_shadowView;
-(void)_shim_updateFocusHighlightVisibility;
-(void)_shim_updateBackdropView;
-(void)_shim_setBackdropGroupName:(id)arg1 ;
-(BOOL)_shim_hasBackdrop;
-(void)_shim_layoutItemsOnly;
-(void)_shim_updateTabBarItemView:(id)arg1 ;
@end

