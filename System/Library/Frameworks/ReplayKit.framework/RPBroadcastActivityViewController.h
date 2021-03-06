/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol RPBroadcastActivityViewControllerDelegate;
@class UIPopoverPresentationController, RPBroadcastActivityHostViewController;

@interface RPBroadcastActivityViewController : UIViewController {

	id<RPBroadcastActivityViewControllerDelegate> _delegate;
	UIPopoverPresentationController* _popoverPresentationControllerProxy;
	RPBroadcastActivityHostViewController* _hostViewController;
	/*^block*/id _didFinishHandler;

}

@property (nonatomic,retain) UIPopoverPresentationController * popoverPresentationControllerProxy;              //@synthesize popoverPresentationControllerProxy=_popoverPresentationControllerProxy - In the implementation block
@property (nonatomic,retain) RPBroadcastActivityHostViewController * hostViewController;                        //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,copy) id didFinishHandler;                                                                 //@synthesize didFinishHandler=_didFinishHandler - In the implementation block
@property (assign,nonatomic,__weak) id<RPBroadcastActivityViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
+(void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)loadBroadcastActivityViewControllerWithHandler:(/*^block*/id)arg1 broadcastActivitiesNotInstalledAlertTitle:(id)arg2 broadcastActivitiesNotInstalledAlertMessage:(id)arg3 ;
+(void)loadBroadcastActivityViewControllerWithHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<RPBroadcastActivityViewControllerDelegate>)arg1 ;
-(id<RPBroadcastActivityViewControllerDelegate>)delegate;
-(void)setHostViewController:(RPBroadcastActivityHostViewController *)arg1 ;
-(RPBroadcastActivityHostViewController *)hostViewController;
-(void)setDidFinishHandler:(id)arg1 ;
-(UIPopoverPresentationController *)popoverPresentationControllerProxy;
-(void)setPopoverPresentationControllerProxy:(UIPopoverPresentationController *)arg1 ;
-(id)didFinishHandler;
@end

