/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SKComposeReviewDelegate, SKUIServiceComposeReviewViewController;
@class _UIAsyncInvocation, NSURL, SKRemoteComposeReviewViewController, SKInvocationQueueProxy;

@interface SKComposeReviewViewController : UIViewController {

	_UIAsyncInvocation* _cancelRequest;
	NSURL* _compositionURL;
	id<SKComposeReviewDelegate> _delegate;
	/*^block*/id _prepareBlock;
	SKRemoteComposeReviewViewController* _remoteViewController;
	SKInvocationQueueProxy*<SKUIServiceComposeReviewViewController> _serviceProxy;

}

@property (assign,nonatomic) id<SKComposeReviewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SKComposeReviewDelegate>)arg1 ;
-(void)dealloc;
-(id<SKComposeReviewDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_requestRemoteViewController;
-(void)_addRemoteView;
-(void)_didPrepareWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)prepareWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_didFinishWithResult:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithCompositionURL:(id)arg1 ;
-(void)_tearDownAfterError:(id)arg1 ;
@end
