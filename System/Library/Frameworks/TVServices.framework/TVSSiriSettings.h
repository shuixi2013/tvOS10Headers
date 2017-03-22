/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFSettingsConnection, NSString, NSArray;

@interface TVSSiriSettings : NSObject {

	AFSettingsConnection* _connection;
	BOOL _dictationEnabled;
	BOOL _siriEnabled;
	BOOL _offeredEnableAssistant;
	BOOL _offeredEnableDictation;
	NSString* _language;

}

@property (assign,getter=isSiriEnabled,nonatomic) BOOL siriEnabled;                        //@synthesize siriEnabled=_siriEnabled - In the implementation block
@property (assign,getter=isDictationEnabled,nonatomic) BOOL dictationEnabled;              //@synthesize dictationEnabled=_dictationEnabled - In the implementation block
@property (getter=isSiriAvailable,nonatomic,readonly) BOOL siriAvailable; 
@property (assign,nonatomic) BOOL offeredEnableAssistant;                                  //@synthesize offeredEnableAssistant=_offeredEnableAssistant - In the implementation block
@property (assign,nonatomic) BOOL offeredEnableDictation;                                  //@synthesize offeredEnableDictation=_offeredEnableDictation - In the implementation block
@property (nonatomic,copy) NSString * language;                                            //@synthesize language=_language - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableLanguages; 
@property (nonatomic,copy,readonly) NSArray * allAvailableLanguages; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSArray *)availableLanguages;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)prefsChanged:(id)arg1 ;
-(void)_reloadSettings;
-(BOOL)isDictationSupportedForSystemLanguage:(id)arg1 ;
-(BOOL)isSirisupportedForStoreFrontID:(id)arg1 ;
-(id)bestSiriLanguageForStoreFrontID:(id)arg1 ;
-(id)preferredSystemLanguageForSiriLanguage:(id)arg1 ;
-(id)bestSiriLanguageForSystemLanguage:(id)arg1 ;
-(id)bestDictationLanguageForSystemLanguage:(id)arg1 ;
-(void)setSiriEnabled:(BOOL)arg1 ;
-(BOOL)isDictationEnabled;
-(void)setDictationEnabled:(BOOL)arg1 ;
-(void)setOfferedEnableAssistant:(BOOL)arg1 ;
-(void)setOfferedEnableDictation:(BOOL)arg1 ;
-(BOOL)isSiriAvailable;
-(NSArray *)allAvailableLanguages;
-(BOOL)isSiriSupportedForSystemLanguage:(id)arg1 ;
-(BOOL)isSiriEnabled;
-(BOOL)offeredEnableAssistant;
-(BOOL)offeredEnableDictation;
@end

