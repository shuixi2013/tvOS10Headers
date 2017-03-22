/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_EARSpeechRecognitionResultStream.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray, _EARSpeechRecognizer, _EARSpeechRecognitionAudioBuffer, NSString;

@interface VTTranscriber : NSObject <_EARSpeechRecognitionResultStream> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _previousUtteranceTokens;
	double _triggerConfidence;
	NSArray* _triggerTokenList;
	/*^block*/id _callback;
	_EARSpeechRecognizer* _recognizer;
	_EARSpeechRecognitionAudioBuffer* _recognizerBuffer;

}

@property (readonly) double triggerConfidence;                      //@synthesize triggerConfidence=_triggerConfidence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(void)endAudio;
-(double)_getConfidence:(id)arg1 ;
-(void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 triggerTokens:(id)arg2 ;
-(void)runRecognitionWithCallback:(/*^block*/id)arg1 ;
-(void)recognizeWavData:(const short*)arg1 length:(int)arg2 ;
-(id)recognizedTokens;
-(double)triggerConfidence;
@end

