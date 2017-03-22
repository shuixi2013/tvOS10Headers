/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACC2SVAuthenticationUIControllerProtocol <NSObject>
@property (assign,nonatomic) id<ACC2SVAuthenticationUIControllerDelegate> delegate; 
@optional
-(void)resetRecoveryCodeViewController;
-(void)showSetupPromptWithCompletion:(/*^block*/id)arg1;
-(void)enterRecoveryKeyWithCompletion:(/*^block*/id)arg1;
-(void)serverCommunicationWillStart;
-(void)serverCommunicationDidEnd;
-(void)handleFailoverWithCompletion:(/*^block*/id)arg1;

@required
-(void)setDelegate:(id)arg1;
-(id<ACC2SVAuthenticationUIControllerDelegate>)delegate;
-(void)hideUIAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(void)enterVerificationCodeWithLength:(unsigned long long)arg1 forDevice:(id)arg2 completion:(/*^block*/id)arg3;
-(void)chooseTrustedDeviceWithDeviceList:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resetTrustedDevicesViewControllerWithDeviceList:(id)arg1;
-(void)resetCodeVerificationViewController;
-(void)showAlertWithError:(id)arg1 completion:(/*^block*/id)arg2;

@end

