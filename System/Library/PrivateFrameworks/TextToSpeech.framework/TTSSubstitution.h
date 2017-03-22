/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextToSpeech/TextToSpeech-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSUUID;

@interface TTSSubstitution : NSObject <NSSecureCoding, NSCopying> {

	BOOL _active;
	BOOL _ignoreCase;
	BOOL _appliesToAllApps;
	BOOL _isReplacementTextAllPunctuation;
	BOOL _isReplacementTextSurroundedByPunctuation;
	NSString* _originalString;
	NSString* _replacementString;
	NSString* _phonemes;
	NSSet* _languages;
	NSSet* _voiceIds;
	NSSet* _bundleIdentifiers;
	NSUUID* _uuid;
	NSRange _replacementRange;

}

@property (nonatomic,retain) NSUUID * uuid;                                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * originalString;                                      //@synthesize originalString=_originalString - In the implementation block
@property (nonatomic,copy) NSString * replacementString;                                   //@synthesize replacementString=_replacementString - In the implementation block
@property (nonatomic,copy) NSString * phonemes;                                            //@synthesize phonemes=_phonemes - In the implementation block
@property (nonatomic,copy) NSSet * languages;                                              //@synthesize languages=_languages - In the implementation block
@property (nonatomic,copy) NSSet * voiceIds;                                               //@synthesize voiceIds=_voiceIds - In the implementation block
@property (assign,nonatomic) BOOL active;                                                  //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL ignoreCase;                                              //@synthesize ignoreCase=_ignoreCase - In the implementation block
@property (assign,nonatomic) NSRange replacementRange;                                     //@synthesize replacementRange=_replacementRange - In the implementation block
@property (assign,nonatomic) BOOL appliesToAllApps;                                        //@synthesize appliesToAllApps=_appliesToAllApps - In the implementation block
@property (nonatomic,copy) NSSet * bundleIdentifiers;                                      //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL isReplacementTextAllPunctuation;                       //@synthesize isReplacementTextAllPunctuation=_isReplacementTextAllPunctuation - In the implementation block
@property (nonatomic,readonly) BOOL isReplacementTextSurroundedByPunctuation;              //@synthesize isReplacementTextSurroundedByPunctuation=_isReplacementTextSurroundedByPunctuation - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)replacementString;
-(NSSet *)bundleIdentifiers;
-(void)setBundleIdentifiers:(NSSet *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(void)setReplacementRange:(NSRange)arg1 ;
-(NSRange)replacementRange;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSSet *)languages;
-(void)setLanguages:(NSSet *)arg1 ;
-(void)setIgnoreCase:(BOOL)arg1 ;
-(void)setAppliesToAllApps:(BOOL)arg1 ;
-(void)setOriginalString:(NSString *)arg1 ;
-(void)setReplacementString:(NSString *)arg1 ;
-(void)setPhonemes:(NSString *)arg1 ;
-(void)setVoiceIds:(NSSet *)arg1 ;
-(NSString *)originalString;
-(NSString *)phonemes;
-(NSSet *)voiceIds;
-(BOOL)ignoreCase;
-(BOOL)appliesToAllApps;
-(BOOL)isReplacementTextAllPunctuation;
-(BOOL)isReplacementTextSurroundedByPunctuation;
@end

