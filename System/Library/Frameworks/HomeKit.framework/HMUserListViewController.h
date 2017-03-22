/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/HMUserManagementRemoteHost.h>

@class HMHome, _UIAsyncInvocation, HMUserListRemoteViewController;

@interface HMUserListViewController : UIViewController <HMUserManagementRemoteHost> {

	BOOL _shouldPresentWhenLoaded;
	HMHome* _home;
	/*^block*/id _completionHandler;
	/*^block*/id _loadHandler;
	_UIAsyncInvocation* _cancelServiceInvocation;
	HMUserListRemoteViewController* _remoteViewController;

}

@property (nonatomic,retain) HMHome * home;                                                      //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentWhenLoaded;                                       //@synthesize shouldPresentWhenLoaded=_shouldPresentWhenLoaded - In the implementation block
@property (nonatomic,copy) id loadHandler;                                                       //@synthesize loadHandler=_loadHandler - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * cancelServiceInvocation;                       //@synthesize cancelServiceInvocation=_cancelServiceInvocation - In the implementation block
@property (nonatomic,retain) HMUserListRemoteViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                 //@synthesize completionHandler=_completionHandler - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(HMUserListRemoteViewController *)remoteViewController;
-(void)viewDidLoad;
-(void)setRemoteViewController:(HMUserListRemoteViewController *)arg1 ;
-(void)_requestRemoteViewController;
-(void)userManagementDidFinishWithError:(id)arg1 ;
-(void)userManagementDidLoad;
-(void)setShouldPresentWhenLoaded:(BOOL)arg1 ;
-(void)_finishSetupWithError:(id)arg1 ;
-(void)_configureAndAddRemoteViewController;
-(void)setCancelServiceInvocation:(_UIAsyncInvocation *)arg1 ;
-(BOOL)shouldPresentWhenLoaded;
-(void)_presentAsTopmostViewController;
-(void)presentWhenLoaded;
-(_UIAsyncInvocation *)cancelServiceInvocation;
-(id)initWithHome:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(void)setLoadHandler:(id)arg1 ;
-(id)loadHandler;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
@end

