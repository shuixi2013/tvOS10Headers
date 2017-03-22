/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNFoundationUserDefaults.h>

@protocol CNFoundationUserDefaults <NSObject>
@property (assign) BOOL preferNickname; 
@property (assign) unsigned long long nameOrder; 
@property (assign) unsigned long long shortNameFormat; 
@property (assign,getter=isShortNameFormatEnabled,nonatomic) BOOL shortNameFormatEnabled; 
@required
-(unsigned long long)shortNameFormat;
-(void)setShortNameFormat:(unsigned long long)arg1;
-(unsigned long long)sortOrder;
-(id)countryCode;
-(void)setShortNameFormatEnabled:(BOOL)arg1;
-(BOOL)isShortNameFormatEnabled;
-(void)setNameOrder:(unsigned long long)arg1;
-(unsigned long long)newContactNameOrder;
-(BOOL)preferNickname;
-(void)setPreferNickname:(BOOL)arg1;
-(unsigned long long)nameOrder;

@end


@class CNUserDefaults, NSString;

@interface CNFoundationUserDefaults : NSObject <CNFoundationUserDefaults> {

	CNUserDefaults* _userDefaults;

}

@property (retain) CNUserDefaults * userDefaults;                                                      //@synthesize userDefaults=_userDefaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL preferNickname; 
@property (assign) unsigned long long nameOrder; 
@property (assign) unsigned long long shortNameFormat; 
@property (assign,getter=isShortNameFormatEnabled,nonatomic) BOOL shortNameFormatEnabled; 
+(id)registeredDefaults;
+(id)makeRegisteredDefaults;
+(unsigned long long)_convertNSNameOrderToCNNameOrder:(long long)arg1 ;
+(id)sharedDefaults;
-(unsigned long long)shortNameFormat;
-(void)setShortNameFormat:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setUserDefaults:(CNUserDefaults *)arg1 ;
-(CNUserDefaults *)userDefaults;
-(unsigned long long)sortOrder;
-(id)countryCode;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(BOOL)isShortNameFormatEnabled;
-(void)setNameOrder:(unsigned long long)arg1 ;
-(unsigned long long)newContactNameOrder;
-(BOOL)preferNickname;
-(void)setPreferNickname:(BOOL)arg1 ;
-(unsigned long long)nameOrder;
@end

