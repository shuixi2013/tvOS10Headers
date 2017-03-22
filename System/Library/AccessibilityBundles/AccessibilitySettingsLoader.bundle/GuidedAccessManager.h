/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GuidedAccessManager : NSObject {

	id _notificationToken;

}

@property (nonatomic,retain) id notificationToken;              //@synthesize notificationToken=_notificationToken - In the implementation block
+(void)initializeMonitoring;
-(id)notificationToken;
-(void)setNotificationToken:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_loadRequiredBundles;
-(BOOL)applicationIsEntitledForUnmanagedASAM;
-(void)loadRequiredBundlesForUnmanagedASAM;
-(BOOL)_isValidClientApp;
-(void)_loadSpringboardServerBundle;
-(void)_loadClientBundle;
@end

