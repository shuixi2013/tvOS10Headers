/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class TIHandwritingStrokes, NSArray, NSString, TIInputManagerHandwriting, CHRecognizer;

@interface RecognizeDrawingOperation : NSOperation {

	TIHandwritingStrokes* _strokes;
	int _recognitionType;
	NSArray* _candidates;
	NSString* _history;
	TIInputManagerHandwriting* _im;
	CHRecognizer* _recognizer;

}

@property (nonatomic,retain) NSArray * candidates;                             //@synthesize candidates=_candidates - In the implementation block
@property (nonatomic,retain) TIInputManagerHandwriting * manager;              //@synthesize im=_im - In the implementation block
@property (nonatomic,retain) NSString * history;                               //@synthesize history=_history - In the implementation block
@property (nonatomic,retain) CHRecognizer * recognizer;                        //@synthesize recognizer=_recognizer - In the implementation block
+(id)recognitionResultsForStrokes:(id)arg1 withRecognizer:(id)arg2 history:(id)arg3 shouldCancel:(/*^block*/id)arg4 ;
-(void)dealloc;
-(NSArray *)candidates;
-(void)setCandidates:(NSArray *)arg1 ;
-(CHRecognizer *)recognizer;
-(void)setRecognizer:(CHRecognizer *)arg1 ;
-(void)main;
-(TIInputManagerHandwriting *)manager;
-(void)setManager:(TIInputManagerHandwriting *)arg1 ;
-(id)initWithInputManager:(id)arg1 strokes:(id)arg2 history:(id)arg3 ;
-(NSString *)history;
-(void)setHistory:(NSString *)arg1 ;
@end

