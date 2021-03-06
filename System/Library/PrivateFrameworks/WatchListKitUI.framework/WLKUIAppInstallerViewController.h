/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIAlertController, _WLKUIAppInstallViewTV, UIView, UIVisualEffectView, WLKChannelDetails, NSString;

@interface WLKUIAppInstallerViewController : UIViewController {

	UIAlertController* _alertController;
	_WLKUIAppInstallViewTV* _appInstallView;
	UIView* _backgroundView;
	/*^block*/id _completion;
	UIVisualEffectView* _tvBackgroundView;
	WLKChannelDetails* _channel;
	NSString* _localizedContentTitle;

}

@property (nonatomic,copy,readonly) WLKChannelDetails * channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSString * localizedContentTitle;                  //@synthesize localizedContentTitle=_localizedContentTitle - In the implementation block
+(id)_placeholderAppIcon;
-(id)init;
-(void)loadView;
-(void)_tapAction:(id)arg1 ;
-(WLKChannelDetails *)channel;
-(void)_menuButtonAction:(id)arg1 ;
-(id)initWithChannel:(id)arg1 ;
-(void)_dismissAppInstall;
-(void)_beginInstallingApp;
-(void)_showAppInstallProgress;
-(void)_updateWithInstallProgress:(double)arg1 ;
-(void)_hideAppInstallProgressWithCompletion:(/*^block*/id)arg1 ;
-(void)_finishInstallationWithCompletion:(/*^block*/id)arg1 ;
-(void)beginInstallingAppWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)localizedContentTitle;
-(void)setLocalizedContentTitle:(NSString *)arg1 ;
@end

