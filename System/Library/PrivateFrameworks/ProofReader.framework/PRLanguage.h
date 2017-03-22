/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PRLanguage : NSObject {

	NSString* _identifier;
	NSString* _localization;
	NSString* _fallbackLocalization;
	unsigned long long _orthoIndex;
	unsigned _encoding;
	unsigned char _languageCode;
	unsigned char _languageDialect;
	unsigned char _languageMode;

}
+(id)dataBundle;
+(id)localizationsForLanguage:(id)arg1 ;
+(id)localizationForLanguage:(id)arg1 ;
+(id)fallbackLocalizationForLanguage:(id)arg1 ;
+(id)languageWithIdentifier:(id)arg1 ;
+(void)getCodesForLanguage:(id)arg1 languageCode:(char*)arg2 languageDialect:(char*)arg3 languageMode:(char*)arg4 ;
+(unsigned long long)orthographyIndexForLanguageCode:(unsigned char)arg1 ;
+(unsigned)encodingForOrthographyIndex:(unsigned long long)arg1 ;
-(id)localization;
-(id)fallbackLocalization;
-(unsigned long long)orthographyIndex;
-(unsigned char)languageDialect;
-(unsigned char)languageMode;
-(unsigned char)oneLetterWords;
-(unsigned char)twoLetterWords;
-(unsigned char)accents;
-(BOOL)isEnglish;
-(BOOL)isFrench;
-(BOOL)isGerman;
-(BOOL)isItalian;
-(BOOL)isSpanish;
-(BOOL)isPortuguese;
-(BOOL)isDutch;
-(BOOL)isDanish;
-(BOOL)isSwedish;
-(BOOL)isNorwegian;
-(BOOL)isPolish;
-(BOOL)isFinnish;
-(BOOL)isTurkish;
-(BOOL)isRussian;
-(BOOL)isKorean;
-(void)dealloc;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(unsigned char)languageCode;
-(unsigned)encoding;
@end

