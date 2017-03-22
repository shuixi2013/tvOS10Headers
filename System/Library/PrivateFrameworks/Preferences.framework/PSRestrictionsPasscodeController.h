/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PSRestrictionsPasscodeController : NSObject
+(BOOL)validatePIN:(id)arg1 ;
+(void)setPIN:(id)arg1 ;
+(id)_keychainPasswordForRestrictions;
+(void)_removeKeychainPasswordForRestrictions;
+(id)_restrictionPasswordDictionary;
+(id)_generateSalt;
+(id)newHashDataForPassword:(id)arg1 andSalt:(id)arg2 ;
+(void)setPasswordForRestrictions:(id)arg1 ;
+(void)removePasswordForRestrictions;
+(id)passwordForRestrictions;
+(BOOL)legacyRestrictionsInEffect;
+(void)migrateRestrictionsPasscode;
+(id)saltForRestrictions;
+(BOOL)settingEnabled;
@end

