/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RUIObjectModelDelegate.h>
#import <libobjc.A.dylib/RUILoaderDelegate.h>

@protocol AAUICredentialRecoveryPresentationDelegate;
@class NSURL, RUILoader, RUIPage, NSMutableArray, UINavigationController, UIViewController, UIActivityIndicatorView, UIBarButtonItem, UINavigationItem, NSObject, NSString;

@interface AAUICredentialRecoveryController : NSObject <RUIObjectModelDelegate, RUILoaderDelegate> {

	NSURL* _remoteUIURL;
	RUILoader* _remoteUILoader;
	RUIPage* _loadingPage;
	NSMutableArray* _objectModels;
	UINavigationController* _navigationController;
	UIViewController* _presentationViewController;
	UIViewController* _navigationBaseViewController;
	BOOL _isModal;
	UIActivityIndicatorView* _spinnerView;
	UIBarButtonItem* _originalRightBarButtonItem;
	UINavigationItem* _navigationItemShowingSpinner;
	BOOL _isShowingSpinner;
	NSObject*<AAUICredentialRecoveryPresentationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<AAUICredentialRecoveryPresentationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(NSObject*<AAUICredentialRecoveryPresentationDelegate>)arg1 ;
-(id)init;
-(NSObject*<AAUICredentialRecoveryPresentationDelegate>)delegate;
-(void)_cleanupLoader;
-(void)_addHeadersToRequest:(id)arg1 ;
-(void)_popObjectModelAnimated:(BOOL)arg1 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(id)initWithRemoteUIURL:(id)arg1 modalPresentation:(BOOL)arg2 ;
-(id)remoteUIURL;
-(void)_createRemoteUIViewControllerFromURL:(id)arg1 ;
-(void)_showActivitySpinnerInNavigationBar;
-(void)_finishPresentationWithSuccess:(BOOL)arg1 ;
-(void)_hideActivitySpinnerInNavigationBar;
-(void)_displayConnectionError;
-(void)startPresentation;
-(void)cancelPresentation;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
@end

