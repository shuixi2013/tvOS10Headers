/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNContactsUserDefaults : NSObject

@property (assign,nonatomic) long long displayNameOrder; 
@property (assign,nonatomic) long long shortNameFormat; 
@property (assign,getter=isShortNameFormatEnabled,nonatomic) BOOL shortNameFormatEnabled; 
@property (assign,nonatomic) BOOL shortNameFormatPrefersNicknames; 
@property (nonatomic,readonly) long long sortOrder; 
@property (nonatomic,copy,readonly) NSString * countryCode; 
+(void)flushSharedInstance;
+(id)sharedDefaults;
-(long long)shortNameFormat;
-(void)setShortNameFormat:(long long)arg1 ;
-(id)init;
-(long long)sortOrder;
-(NSString *)countryCode;
-(long long)newContactDisplayNameOrder;
-(void)setDisplayNameOrder:(long long)arg1 ;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(BOOL)isShortNameFormatEnabled;
-(void)setShortNameFormatPrefersNicknames:(BOOL)arg1 ;
-(BOOL)shortNameFormatPrefersNicknames;
-(long long)displayNameOrder;
-(id)filteredGroupAndContainerIDs;
-(void)setFilteredGroupAndContainerIDs:(id)arg1 ;
@end

