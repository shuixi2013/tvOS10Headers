/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ResponseKit/ResponseKit-Structs.h>
@class NSString;

@interface RKLexicalEntity : NSObject {

	NSString* _string;
	NSString* _tokenType;
	NSString* _partOfSpeech;
	NSString* _lemma;
	NSString* _language;
	NSString* _internalWord;
	NSRange _tokenRange;

}

@property (retain) NSString * internalWord;              //@synthesize internalWord=_internalWord - In the implementation block
@property (retain) NSString * string;                    //@synthesize string=_string - In the implementation block
@property (retain) NSString * tokenType;                 //@synthesize tokenType=_tokenType - In the implementation block
@property (retain) NSString * partOfSpeech;              //@synthesize partOfSpeech=_partOfSpeech - In the implementation block
@property (retain) NSString * lemma;                     //@synthesize lemma=_lemma - In the implementation block
@property (retain) NSString * language;                  //@synthesize language=_language - In the implementation block
@property (assign) NSRange tokenRange;                   //@synthesize tokenRange=_tokenRange - In the implementation block
@property (readonly) NSString * word; 
-(NSString *)tokenType;
-(void)setTokenType:(NSString *)arg1 ;
-(id)description;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)partOfSpeech;
-(void)setPartOfSpeech:(NSString *)arg1 ;
-(NSString *)word;
-(NSString *)lemma;
-(NSString *)internalWord;
-(void)setInternalWord:(NSString *)arg1 ;
-(void)setLemma:(NSString *)arg1 ;
-(NSRange)tokenRange;
-(void)setTokenRange:(NSRange)arg1 ;
@end

