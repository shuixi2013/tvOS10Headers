/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKApplication <NSObject>
@optional
-(id)activeDocument;
-(id)appLocalJSURL;
-(id)appJSCachePath;
-(BOOL)shouldAllowRemoteInspection;
-(BOOL)appIsTrusted;
-(BOOL)appIsPrivileged;
-(id)appLaunchParams;
-(id)viewElementRegistry;
-(BOOL)appUsesDefaultStyleSheets;
-(id)appTraitCollection;

@required
-(id)appIdentifier;
-(BOOL)shouldIgnoreJSValidation;
-(id)appJSURL;
-(id)vendorIdentifier;
-(id)localStorage;
-(id)vendorStorage;
-(id)userDefaultsStorage;

@end

