/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIInterfaceActionHandlerInvocationDelegate.h>
#import <UIKit/UIInterfaceActionGroupDisplaying.h>

@protocol UIInterfaceActionVisualStyleProviding;
@class UIInterfaceActionVisualStyle, UIInterfaceActionGroupView, UIInterfaceActionGroup, NSString;

@interface UIInterfaceActionGroupViewController : UIViewController <UIInterfaceActionHandlerInvocationDelegate, UIInterfaceActionGroupDisplaying> {

	id<UIInterfaceActionVisualStyleProviding> _visualStyleProvider;
	UIInterfaceActionGroupView* _actionGroupView;
	UIInterfaceActionGroup* _actionGroup;

}

@property (nonatomic,copy,readonly) UIInterfaceActionGroup * actionGroup;                                       //@synthesize actionGroup=_actionGroup - In the implementation block
@property (nonatomic,copy,readonly) UIInterfaceActionGroupView * actionGroupView;                               //@synthesize actionGroupView=_actionGroupView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIInterfaceActionVisualStyle * visualStyle; 
@property (assign,nonatomic,__weak) id<UIInterfaceActionVisualStyleProviding> visualStyleProvider;              //@synthesize visualStyleProvider=_visualStyleProvider - In the implementation block
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2 ;
-(UIInterfaceActionGroupView *)actionGroupView;
-(void)interfaceAction:(id)arg1 invokeActionHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadVisualStyle;
-(void)setVisualStyleProvider:(id<UIInterfaceActionVisualStyleProviding>)arg1 ;
-(UIInterfaceActionGroup *)actionGroup;
-(id<UIInterfaceActionVisualStyleProviding>)visualStyleProvider;
-(id)initWithActionGroup:(id)arg1 ;
@end

