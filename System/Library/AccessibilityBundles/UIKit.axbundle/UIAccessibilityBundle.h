/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIAccessibility/UIAccessibilityLoader.h>

@interface UIAccessibilityBundle : UIAccessibilityLoader {

	BOOL _voiceOverHandwritingEnabled;
	BOOL _registeredForVoiceOverNotifications;

}

@property (assign,getter=isVoiceOverHandwritingEnabled,nonatomic) BOOL voiceOverHandwritingEnabled;                              //@synthesize voiceOverHandwritingEnabled=_voiceOverHandwritingEnabled - In the implementation block
@property (assign,getter=isRegisteredForVoiceOverNotifications,nonatomic) BOOL registeredForVoiceOverNotifications;              //@synthesize registeredForVoiceOverNotifications=_registeredForVoiceOverNotifications - In the implementation block
+(id)wrapDOMRange:(id)arg1 ;
+(id)sharedGlueObjectIfAvailable;
+(void)_accessibilityInitializeSubclassRuntimeOverrides;
+(void)_handleWebKitInstallation;
-(id)init;
-(id)description;
-(id)_currentAccessoryView:(BOOL)arg1 ;
-(void)_unregisterForVoiceOverNotifications:(id)arg1 ;
-(void)_registerForVoiceOverNotifications:(id)arg1 ;
-(void)_handleVoiceOverStatusChanged:(id)arg1 ;
-(BOOL)isVoiceOverHandwritingEnabled;
-(BOOL)isRegisteredForVoiceOverNotifications;
-(void)setRegisteredForVoiceOverNotifications:(BOOL)arg1 ;
-(void)_disableHandwriting;
-(void)setVoiceOverHandwritingEnabled:(BOOL)arg1 ;
-(void)_enableHandwriting;
@end

