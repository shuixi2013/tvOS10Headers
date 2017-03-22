/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/TVSignInLandingViewDelegate.h>

@class TVSignInLandingView, NSString;

@interface TVLiCloudAuthenticationViewController : UIViewController <TVSignInLandingViewDelegate> {

	/*^block*/id _callbackBlock;
	TVSignInLandingView* _signInView;

}

@property (nonatomic,retain) TVSignInLandingView * signInView;              //@synthesize signInView=_signInView - In the implementation block
@property (nonatomic,copy) id callbackBlock;                                //@synthesize callbackBlock=_callbackBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)authenticateUserOnSelectSignIn;
-(void)setCallbackBlock:(id)arg1 ;
-(void)_menuOutGestureRecognized;
-(id)callbackBlock;
-(TVSignInLandingView *)signInView;
-(void)setSignInView:(TVSignInLandingView *)arg1 ;
@end

