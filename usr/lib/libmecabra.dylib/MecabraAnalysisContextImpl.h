/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libmecabra.dylib/libmecabra.dylib-Structs.h>
@class NSMutableArray, NSString, NSMutableString, NSArray;

@interface MecabraAnalysisContextImpl : NSObject {

	NSMutableArray* _candidateContext;
	NSString* _stringContext;
	NSString* _stringBeforeCaret;
	NSMutableString* _candidateContextString;
	BOOL _rebuildCandidateContextString;

}

@property (nonatomic,retain) NSMutableArray * candidateContext;                     //@synthesize candidateContext=_candidateContext - In the implementation block
@property (assign,nonatomic) BOOL rebuildCandidateContextString;                    //@synthesize rebuildCandidateContextString=_rebuildCandidateContextString - In the implementation block
@property (nonatomic,retain) NSMutableString * candidateContextString;              //@synthesize candidateContextString=_candidateContextString - In the implementation block
@property (nonatomic,retain) NSString * stringBeforeCaret;                          //@synthesize stringBeforeCaret=_stringBeforeCaret - In the implementation block
@property (nonatomic,retain) NSString * stringContext;                              //@synthesize stringContext=_stringContext - In the implementation block
@property (nonatomic,readonly) NSArray * candidateContextForAnalysis; 
@property (nonatomic,readonly) NSString * stringContextForAnalysis; 
-(void)addCandidate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)setStringBeforeCaret:(NSString *)arg1 ;
-(void)setStringContext:(NSString *)arg1 ;
-(void)adjustCandidateContext;
-(void)revertLastCommittedCandidate;
-(NSString *)stringContextForAnalysis;
-(NSArray *)candidateContextForAnalysis;
-(NSMutableString *)candidateContextString;
-(BOOL)rebuildCandidateContextString;
-(NSMutableArray *)candidateContext;
-(void)setRebuildCandidateContextString:(BOOL)arg1 ;
-(NSString *)stringBeforeCaret;
-(NSString *)stringContext;
-(void)clearContextForAddition;
-(SCD_Struct_Me6)positionInContextWithPartialDocumentStringLength:(unsigned long long)arg1 ;
-(void)setCandidateContext:(NSMutableArray *)arg1 ;
-(void)setCandidateContextString:(NSMutableString *)arg1 ;
@end

