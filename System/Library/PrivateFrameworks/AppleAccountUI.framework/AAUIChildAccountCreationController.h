/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RUIObjectModelDelegate.h>

@protocol AAUIChildAccountCreationDelegate;
@class AASetupAssistantService, AAGrandSlamSigner, NSURL, NSMutableArray, RUILoader, NSHTTPURLResponse, UIActivityIndicatorView, UIBarButtonItem, UINavigationItem, NSArray, UIToolbar, UINavigationController, NSString;

@interface AAUIChildAccountCreationController : NSObject <RUIObjectModelDelegate> {

	AASetupAssistantService* _setupService;
	AAGrandSlamSigner* _grandSlamSigner;
	NSURL* _launchingURL;
	NSMutableArray* _objectModels;
	RUILoader* _loader;
	NSHTTPURLResponse* _currentResponse;
	UIActivityIndicatorView* _spinnerView;
	UIBarButtonItem* _originalRightBarButtonItem;
	UINavigationItem* _navigationItemShowingSpinner;
	NSArray* _originalEnabledToolbarItems;
	NSArray* _originalToolbarItems;
	UIToolbar* _originalToolbar;
	BOOL _isShowingSpinner;
	BOOL _isPendingDismissal;
	id<AAUIChildAccountCreationDelegate> _delegate;
	UINavigationController* _navigationController;

}

@property (assign,nonatomic,__weak) id<AAUIChildAccountCreationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<AAUIChildAccountCreationDelegate>)arg1 ;
-(id<AAUIChildAccountCreationDelegate>)delegate;
-(UINavigationController *)navigationController;
-(void)_cancel;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)_addHeadersToRequest:(id)arg1 ;
-(void)_popObjectModelAnimated:(BOOL)arg1 ;
-(void)_showActivitySpinnerInNavigationBar;
-(id)_spinnerView;
-(void)_sendUserToiTunesSettings;
-(void)_startRemoteUILoaderWithRequest:(id)arg1 ;
-(void)_hideActivitySpinner;
-(void)_displayConnectionErrorAndCancel;
-(void)_cleanupRemoteUILoader;
-(void)_renewCredentialsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_createChildAccount;
-(BOOL)_pressedLink:(id)arg1 comesFromBarButtonItem:(id)arg2 objectModel:(id)arg3 ;
-(void)_showActivitySpinnerInToolbar:(id)arg1 ;
-(void)loadRemoteUI;
-(id)initWithGrandSlamSigner:(id)arg1 ;
-(void)objectModelDidChange:(id)arg1 ;
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
@end

