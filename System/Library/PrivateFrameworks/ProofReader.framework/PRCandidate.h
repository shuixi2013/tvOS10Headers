/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSArray;

@interface PRCandidate : NSObject {

	NSArray* _candidateWords;
	NSRange _replacementRange;
	double _errorScore;
	double _lmScore;
	BOOL _blacklisted;

}
+(double)errorScoreForType:(unsigned long long)arg1 ;
+(double)replacementErrorScoreForIntendedCharacter:(unsigned short)arg1 actualCharacter:(unsigned short)arg2 ;
+(double)transpositionErrorScoreForIntendedFirstCharacter:(unsigned short)arg1 intendedSecondCharacter:(unsigned short)arg2 ;
+(id)candidateWithString:(id)arg1 replacementRange:(NSRange)arg2 errorScore:(double)arg3 ;
+(id)candidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 transform:(unsigned long long)arg3 replacementRange:(NSRange)arg4 errorScore:(double)arg5 ;
+(id)candidateWithWords:(id)arg1 replacementRange:(NSRange)arg2 errorScore:(double)arg3 ;
+(id)candidateWithWords:(id)arg1 replacementRange:(NSRange)arg2 errorType:(unsigned long long)arg3 ;
+(id)candidateWithString:(id)arg1 replacementRange:(NSRange)arg2 errorType:(unsigned long long)arg3 ;
+(id)replacementCandidateWithString:(id)arg1 replacementRange:(NSRange)arg2 intendedCharacter:(unsigned short)arg3 actualCharacter:(unsigned short)arg4 ;
+(id)transpositionCandidateWithString:(id)arg1 replacementRange:(NSRange)arg2 intendedFirstCharacter:(unsigned short)arg3 intendedSecondCharacter:(unsigned short)arg4 ;
+(id)candidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 transform:(unsigned long long)arg3 replacementRange:(NSRange)arg4 errorType:(unsigned long long)arg5 ;
+(id)replacementCandidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 transform:(unsigned long long)arg3 replacementRange:(NSRange)arg4 intendedCharacter:(unsigned short)arg5 actualCharacter:(unsigned short)arg6 ;
+(id)transpositionCandidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 transform:(unsigned long long)arg3 replacementRange:(NSRange)arg4 intendedFirstCharacter:(unsigned short)arg5 intendedSecondCharacter:(unsigned short)arg6 ;
-(unsigned long long)numberOfWords;
-(id)candidateWords;
-(void)setLanguageModelScore:(double)arg1 ;
-(void)setBlacklisted:(BOOL)arg1 ;
-(id)initWithCandidateWords:(id)arg1 replacementRange:(NSRange)arg2 errorScore:(double)arg3 ;
-(id)initWithString:(id)arg1 replacementRange:(NSRange)arg2 errorScore:(double)arg3 ;
-(double)errorScore;
-(double)languageModelScore;
-(BOOL)isBlacklisted;
-(void)setErrorScore:(double)arg1 ;
-(void)dealloc;
-(id)description;
-(id)string;
-(NSRange)replacementRange;
-(double)score;
@end

