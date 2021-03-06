/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/_UIDocumentPickerExtensionViewController.h>

@class NSString;

@interface _UIDocumentPickerNavigationBridgeController : UINavigationController <_UIDocumentPickerExtensionViewController> {

	BOOL _hasSetInitialNavigationItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)_setTintColor:(id)arg1 ;
-(void)_setPickableTypes:(id)arg1 ;
-(void)_setPickerMode:(unsigned long long)arg1 ;
-(void)_setUploadURLWrapper:(id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(void)_documentPickerDidDismiss;
-(void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)hostingViewController;
-(void)_locationsMenu:(id)arg1 ;
-(void)_doneButton:(id)arg1 ;
-(void)_updateNavigationItem;
@end

