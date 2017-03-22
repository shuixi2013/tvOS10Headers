/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSApplicationControllerDelegate.h>

@protocol VSIdentityProviderRequestManagerDelegate, OS_dispatch_source;
@class VSIdentityProvider, NSOperationQueue, NSMutableArray, VSApplicationController, VSApplicationControllerRequest, VSViewModel, VSAccount, VSAccountStore, VSPreferences, NSObject, NSString;

@interface VSIdentityProviderRequestManager : NSObject <VSApplicationControllerDelegate> {

	BOOL _showingUserInterface;
	BOOL _didCreateAccount;
	BOOL _allowsApplicationControllerTimer;
	VSIdentityProvider* _identityProvider;
	id<VSIdentityProviderRequestManagerDelegate> _delegate;
	NSOperationQueue* _privateQueue;
	NSMutableArray* _requestContexts;
	VSApplicationController* _applicationController;
	VSApplicationControllerRequest* _currentApplicationControllerRequest;
	VSViewModel* _viewModel;
	VSAccount* _account;
	VSAccountStore* _accountStore;
	VSPreferences* _preferences;
	NSObject*<OS_dispatch_source> _applicationControllerTimerSource;
	double _applicationControllerTimerLeeway;
	double _requestCompletionDelayAfterShowingUserInterface;
	double _applicationControllerTimerDelay;

}

@property (nonatomic,retain) NSOperationQueue * privateQueue;                                                   //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestContexts;                                                  //@synthesize requestContexts=_requestContexts - In the implementation block
@property (nonatomic,retain) VSApplicationController * applicationController;                                   //@synthesize applicationController=_applicationController - In the implementation block
@property (nonatomic,retain) VSApplicationControllerRequest * currentApplicationControllerRequest;              //@synthesize currentApplicationControllerRequest=_currentApplicationControllerRequest - In the implementation block
@property (nonatomic,retain) VSViewModel * viewModel;                                                           //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) VSAccount * account;                                                               //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) VSAccountStore * accountStore;                                                     //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) BOOL showingUserInterface;                                                         //@synthesize showingUserInterface=_showingUserInterface - In the implementation block
@property (assign,nonatomic) BOOL didCreateAccount;                                                             //@synthesize didCreateAccount=_didCreateAccount - In the implementation block
@property (nonatomic,retain) VSPreferences * preferences;                                                       //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> applicationControllerTimerSource;                    //@synthesize applicationControllerTimerSource=_applicationControllerTimerSource - In the implementation block
@property (assign,nonatomic) BOOL allowsApplicationControllerTimer;                                             //@synthesize allowsApplicationControllerTimer=_allowsApplicationControllerTimer - In the implementation block
@property (assign,nonatomic) double applicationControllerTimerLeeway;                                           //@synthesize applicationControllerTimerLeeway=_applicationControllerTimerLeeway - In the implementation block
@property (assign,nonatomic) double requestCompletionDelayAfterShowingUserInterface;                            //@synthesize requestCompletionDelayAfterShowingUserInterface=_requestCompletionDelayAfterShowingUserInterface - In the implementation block
@property (assign,nonatomic) double applicationControllerTimerDelay;                                            //@synthesize applicationControllerTimerDelay=_applicationControllerTimerDelay - In the implementation block
@property (nonatomic,readonly) VSIdentityProvider * identityProvider;                                           //@synthesize identityProvider=_identityProvider - In the implementation block
@property (assign,nonatomic,__weak) id<VSIdentityProviderRequestManagerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<VSIdentityProviderRequestManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<VSIdentityProviderRequestManagerDelegate>)delegate;
-(void)setPreferences:(VSPreferences *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(VSPreferences *)preferences;
-(void)setAccountStore:(VSAccountStore *)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(VSAccountStore *)accountStore;
-(VSAccount *)account;
-(void)setAccount:(VSAccount *)arg1 ;
-(void)_stopObservingViewModel:(id)arg1 ;
-(VSViewModel *)viewModel;
-(void)_startObservingViewModel:(id)arg1 ;
-(void)setViewModel:(VSViewModel *)arg1 ;
-(VSIdentityProvider *)identityProvider;
-(id)initWithIdentityProvider:(id)arg1 ;
-(BOOL)didCreateAccount;
-(void)setDidCreateAccount:(BOOL)arg1 ;
-(void)applicationController:(id)arg1 request:(id)arg2 didCompleteWithResponse:(id)arg3 ;
-(void)applicationController:(id)arg1 didReceiveViewModel:(id)arg2 ;
-(void)applicationController:(id)arg1 didReceiveViewModelError:(id)arg2 ;
-(void)applicationController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3 ;
-(void)applicationControllerDidStart:(id)arg1 ;
-(void)applicationController:(id)arg1 startDidFailWithError:(id)arg2 ;
-(void)enqueueRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_stopApplicationController;
-(NSMutableArray *)requestContexts;
-(void)_processRequestContext:(id)arg1 ;
-(void)setAllowsApplicationControllerTimer:(BOOL)arg1 ;
-(BOOL)_requestRequiresApplicationController:(id)arg1 ;
-(void)setApplicationController:(VSApplicationController *)arg1 ;
-(void)_startApplicationControllerTimer;
-(void)_completeCachedAccountMetadataRequest;
-(id)_currentRequestContext;
-(BOOL)allowsApplicationControllerTimer;
-(void)_stopApplicationControllerTimer;
-(void)setApplicationControllerTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(double)applicationControllerTimerDelay;
-(double)applicationControllerTimerLeeway;
-(VSApplicationControllerRequest *)currentApplicationControllerRequest;
-(void)_handleApplicationControllerError:(id)arg1 forRequest:(id)arg2 ;
-(NSObject*<OS_dispatch_source>)applicationControllerTimerSource;
-(void)_notifyDidAuthenticateAccount;
-(void)_hideUserInterfaceIfNecessary;
-(void)_completeAuthenticationRequestWithApplicationControllerResponse:(id)arg1 ;
-(BOOL)_requestRequiresApplicationControllerIgnoringAuthentication:(id)arg1 ;
-(id)_applicationControllerRequestWithIdentityProviderRequest:(id)arg1 ;
-(void)_submitApplicationControllerRequest:(id)arg1 ;
-(BOOL)_canShowAuthenticationUI;
-(void)_showAuthenticationUIWithPurpose:(long long)arg1 ;
-(void)_completeCurrentRequestWithError:(id)arg1 ;
-(void)_completeDeletingAccountWithError:(id)arg1 ;
-(void)_completeCurrentRequestWithApplicationControllerResponse:(id)arg1 ;
-(BOOL)_handleLogoutRequestDidComplete:(id)arg1 ;
-(void)_resetVerificationStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)_requestCompletionDelay;
-(void)_completeCurrentRequestWithApplicationControllerResponse:(id)arg1 verificationData:(id)arg2 ;
-(id)_accountMetadataWithAuthenticationScheme:(id)arg1 responseStatusCode:(id)arg2 responseString:(id)arg3 accountMetadataRequest:(id)arg4 verificationData:(id)arg5 ;
-(void)_completeCurrentRequestWithResult:(id)arg1 ;
-(void)setCurrentApplicationControllerRequest:(VSApplicationControllerRequest *)arg1 ;
-(VSApplicationController *)applicationController;
-(BOOL)showingUserInterface;
-(void)setShowingUserInterface:(BOOL)arg1 ;
-(double)requestCompletionDelayAfterShowingUserInterface;
-(void)_startDeletingAccount;
-(BOOL)_handleAuthenticationRequest:(id)arg1 didCompleteWithResponse:(id)arg2 ;
-(BOOL)_handleSilentAuthenticationRequest:(id)arg1 didCompleteWithResponse:(id)arg2 ;
-(BOOL)_handleAccountMetadataRequest:(id)arg1 didCompleteWithResponse:(id)arg2 ;
-(void)_updateAccountWithAccountAuthentication:(id)arg1 ;
-(void)setApplicationControllerTimerDelay:(double)arg1 ;
-(void)setRequestContexts:(NSMutableArray *)arg1 ;
-(void)setApplicationControllerTimerLeeway:(double)arg1 ;
-(void)setRequestCompletionDelayAfterShowingUserInterface:(double)arg1 ;
-(id)_currentRequest;
@end
