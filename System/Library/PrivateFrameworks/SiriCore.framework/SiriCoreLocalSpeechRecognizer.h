/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSpeechServiceDelegate.h>

@protocol OS_dispatch_queue, SiriCoreLocalSpeechRecognizerDelegate;
@class SiriCoreLocalSpeechDESRecord, NSObject, NSXPCConnection, NSArray, NSString, NSUUID, NSError;

@interface SiriCoreLocalSpeechRecognizer : NSObject <AFSpeechServiceDelegate> {

	SiriCoreLocalSpeechDESRecord* _desRecord;
	BOOL _recognitionActive;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _esConnection;
	NSArray* _serverPhrases;
	NSArray* _serverUtterances;
	NSString* _refId;
	NSArray* _localPhrases;
	NSArray* _localUtterances;
	BOOL _hasReceivedServerSpeechRecognized;
	BOOL _hasReceivedLocalSpeechRecognized;
	BOOL _hasRecognizedAnything;
	NSUUID* _instanceUUID;
	NSString* _currentLanguage;
	NSError* _recognitionError;
	id<SiriCoreLocalSpeechRecognizerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<SiriCoreLocalSpeechRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)speechProfileDataLastModifiedDataForLanguage:(id)arg1 ;
-(id)init;
-(id<SiriCoreLocalSpeechRecognizerDelegate>)delegate;
-(void)invalidate;
-(id)_connection;
-(id)_service;
-(void)getOfflineDictationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)disableDESWithCompletion:(/*^block*/id)arg1 ;
-(void)addAudioPacket:(id)arg1 ;
-(void)finishAudio;
-(void)createSpeechProfileWithLanguage:(id)arg1 JSONData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAssetsForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runAdaptationRecipeEvaluation:(id)arg1 localSpeechDESRecord:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)speechServiceDidRecognizeTokens:(id)arg1 ;
-(oneway void)speechServiceDidProcessAudioDuration:(double)arg1 ;
-(oneway void)speechServiceDidRecognizePhrases:(id)arg1 utterances:(id)arg2 ;
-(oneway void)speechServiceDidFinishRecognitionWithError:(id)arg1 ;
-(void)_resetCombiner;
-(void)_combineResultsWithCompletion:(/*^block*/id)arg1 ;
-(id)_serviceWithFunctionName:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_readProfileAndUserDataWithLanguage:(id)arg1 allowOverride:(BOOL)arg2 tryLastDESRecipe:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_writeDESRecord;
-(id)initWithDelegate:(id)arg1 instanceUUID:(id)arg2 ;
-(void)combineWithServerPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)combineWithLocalPhrases:(id)arg1 utterances:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startSpeechRecognitionWithLanguage:(id)arg1 task:(id)arg2 context:(id)arg3 narrowband:(BOOL)arg4 detectUtterances:(BOOL)arg5 maximumRecognitionDuration:(double)arg6 secureOfflineOnly:(BOOL)arg7 censorSpeech:(BOOL)arg8 didStartHandler:(/*^block*/id)arg9 ;
-(void)updateSpeechProfileWithLanguage:(id)arg1 userData:(id)arg2 localSpeechDESRecord:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

