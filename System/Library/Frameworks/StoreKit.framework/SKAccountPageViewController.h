/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SKAccountPageViewControllerDelegate, SKUIServiceAccountPageViewController;
@class NSURL, _UIAsyncInvocation, SKRemoteAccountPageViewController, SKInvocationQueueProxy;

@interface SKAccountPageViewController : UIViewController {

	NSURL* _accountURL;
	_UIAsyncInvocation* _cancelRequest;
	id<SKAccountPageViewControllerDelegate> _delegate;
	/*^block*/id _prepareBlock;
	SKRemoteAccountPageViewController* _remoteViewController;
	SKInvocationQueueProxy*<SKUIServiceAccountPageViewController> _serviceProxy;

}

@property (assign,nonatomic) id<SKAccountPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SKAccountPageViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SKAccountPageViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_dismissViewController;
-(void)_requestRemoteViewController;
-(void)_addRemoteView;
-(void)_didPrepareWithResult:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithAccountURL:(id)arg1 ;
-(void)prepareWithCompletionBlock:(/*^block*/id)arg1 ;
@end

