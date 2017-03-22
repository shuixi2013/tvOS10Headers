/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKViewController.h>

@class VSDeveloperSettingsFacade;

@interface VSDeveloperSettingsViewController_tvOS : TSKViewController {

	VSDeveloperSettingsFacade* _facade;

}

@property (nonatomic,retain) VSDeveloperSettingsFacade * facade;              //@synthesize facade=_facade - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(VSDeveloperSettingsFacade *)facade;
-(id)_viewControllerForIdentityProvider:(id)arg1 ;
-(void)_enqueueChange:(long long)arg1 withIdentityProvider:(id)arg2 ;
-(void)_showDetailViewController:(id)arg1 ;
-(id)loadSettingGroups;
-(void)setFacade:(VSDeveloperSettingsFacade *)arg1 ;
@end

