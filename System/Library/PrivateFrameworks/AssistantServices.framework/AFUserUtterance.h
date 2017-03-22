/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssistantServices/AssistantServices-Structs.h>
@class NSMutableArray, NSString, NSDictionary, NSArray;

@interface AFUserUtterance : NSObject {

	NSMutableArray* _phrases;
	NSMutableArray* _tokens;
	NSString* _text;
	long long _sentenceConfidence;
	NSMutableArray* _utterances;
	NSDictionary* _correctionIdentifier;

}

@property (nonatomic,readonly) NSDictionary * correctionIdentifier;              //@synthesize correctionIdentifier=_correctionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * dictationResult; 
-(id)description;
-(id)speechTokensForUtteranceAtIndex:(unsigned long long)arg1 ;
-(id)rangeListOfDifferingTextFromSpeechInterpretation:(id)arg1 comparedToBaseTokenList:(id)arg2 ;
-(id)rangeListOfDifferingTextFromTargetTokenList:(id)arg1 comparedToBaseTokenList:(id)arg2 ;
-(id)longestCommonSubsequenceBetweenList:(id)arg1 andList:(id)arg2 ;
-(id)textOfUtteranceAtIndex:(unsigned long long)arg1 ;
-(void)_updateUtteranceswithAlternativeUtteranceAtIndex:(unsigned long long)arg1 swapIndices:(id)arg2 ;
-(void)_updatePhraseswithSwapIndices:(id)arg1 ;
-(id)bestTextInterpretation;
-(id)initWithPhrases:(id)arg1 correctionIdentifier:(id)arg2 ;
-(id)initWithPhrases:(id)arg1 utterances:(id)arg2 ;
-(id)initWithPhrases:(id)arg1 sentenceConfidence:(long long)arg2 utterances:(id)arg3 correctionIdentifier:(id)arg4 ;
-(id)initWithTokens:(id)arg1 correctionIdentifier:(id)arg2 ;
-(id)initWithString:(id)arg1 correctionIdentifier:(id)arg2 ;
-(long long)numberOfAlternativeUtterances;
-(id)rangeListOfDifferingTextFromUtteranceAtIndex:(unsigned long long)arg1 comparedToBaseUtteranceAtIndex:(unsigned long long)arg2 ;
-(id)rangeListOfDifferingTextFromSpeechInterpretation:(id)arg1 comparedToBaseUtteranceAtIndex:(unsigned long long)arg2 ;
-(id)interpretationOfUtteranceAtIndex:(unsigned long long)arg1 ;
-(NSDictionary*)allRecognitionStringsAndScores;
-(id)updateDictationResult:(id)arg1 withAlternativeUtteranceAtIndex:(unsigned long long)arg2 ;
-(NSArray *)dictationResult;
-(id)streamingTokens;
-(NSDictionary *)correctionIdentifier;
@end

