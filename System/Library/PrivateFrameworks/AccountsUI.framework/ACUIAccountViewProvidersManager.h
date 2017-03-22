/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary;

@interface ACUIAccountViewProvidersManager : NSObject {

	NSDictionary* _accountTypeToPluginNameMap;
	NSMutableDictionary* _pluginCache;

}
+(id)sharedInstance;
-(id)init;
-(Class)controllerClassForCreatingAccountWithType:(id)arg1 ;
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg1 ;
-(id)configurationInfoForCreatingAccountWithType:(id)arg1 ;
-(id)_accountViewProviderPluginForAccountTypeID:(id)arg1 ;
-(Class)viewControllerClassForViewingAccount:(id)arg1 ;
-(id)configurationInfoForViewingAccount:(id)arg1 ;
-(id)_loadAccountViewProviderPluginWithName:(id)arg1 ;
@end

