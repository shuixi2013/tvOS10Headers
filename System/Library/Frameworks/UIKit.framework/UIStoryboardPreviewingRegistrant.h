/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@protocol UIViewControllerPreviewing;
@class UIStoryboardPreviewingSegueTemplateStorage, UIViewController, UIView, NSString;

@interface UIStoryboardPreviewingRegistrant : NSObject <NSCoding, UIViewControllerPreviewingDelegate> {

	id<UIViewControllerPreviewing> _previewingContext;
	UIStoryboardPreviewingSegueTemplateStorage* _segueTemplateStorage;
	UIViewController* _viewController;
	UIView* _sourceView;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView;                            //@synthesize sourceView=_sourceView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)registerForPreviewing;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)unregisterForPreviewing;
@end
