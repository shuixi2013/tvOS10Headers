/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKViewController.h>
#import <libobjc.A.dylib/TSKViewControllerExternalObserving.h>
#import <libobjc.A.dylib/VSIdentityProviderPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/VSIdentityProviderControllerDelegate.h>
#import <libobjc.A.dylib/VSRemoteNotifierDelegate.h>

@class VSViewControllerPresentationStack, VSRemoteNotifier, NSString;

@interface TVSettingsVideoSubscriberAccountViewController : TSKViewController <TSKViewControllerExternalObserving, VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderControllerDelegate, VSRemoteNotifierDelegate> {

	id _externalValue;
	VSViewControllerPresentationStack* _viewControllerPresentationStack;
	VSRemoteNotifier* _remoteNotifier;

}

@property (nonatomic,retain) id externalValue;                                                                 //@synthesize externalValue=_externalValue - In the implementation block
@property (nonatomic,retain) VSViewControllerPresentationStack * viewControllerPresentationStack;              //@synthesize viewControllerPresentationStack=_viewControllerPresentationStack - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * remoteNotifier;                                                //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(VSRemoteNotifier *)remoteNotifier;
-(void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2 ;
-(void)setRemoteNotifier:(VSRemoteNotifier *)arg1 ;
-(void)_presentError:(id)arg1 ;
-(id)loadSettingGroups;
-(void)identityProviderController:(id)arg1 showViewController:(id)arg2 ;
-(void)identityProviderController:(id)arg1 replaceViewControllerWithViewController:(id)arg2 ;
-(void)identityProviderPickerViewControllerDidCancel:(id)arg1 ;
-(void)identityProviderPickerViewController:(id)arg1 didPickIdentityProvider:(id)arg2 ;
-(void)_signIn:(id)arg1 ;
-(void)_signOut:(id)arg1 ;
-(void)_updatePassword:(id)arg1 ;
-(void)_showMoreApps:(id)arg1 ;
-(void)_updateExternalValue;
-(id)externalValue;
-(void)setExternalValue:(id)arg1 ;
-(VSViewControllerPresentationStack *)viewControllerPresentationStack;
-(void)_handleIdentityProviderRequest:(id)arg1 ;
-(void)_videoSubscriberAccountAvailabilityStatusDidChange:(id)arg1 ;
-(void)setViewControllerPresentationStack:(VSViewControllerPresentationStack *)arg1 ;
@end

