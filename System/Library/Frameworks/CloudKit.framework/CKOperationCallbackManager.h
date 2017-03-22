/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CKOperationCallbackManager : NSObject {

	NSMutableDictionary* _progressCallbacks;
	NSMutableDictionary* _commandCallbacks;
	NSMutableDictionary* _completionCallbacks;
	NSMutableDictionary* _checkpointCallbacks;

}

@property (retain) NSMutableDictionary * progressCallbacks;                //@synthesize progressCallbacks=_progressCallbacks - In the implementation block
@property (retain) NSMutableDictionary * commandCallbacks;                 //@synthesize commandCallbacks=_commandCallbacks - In the implementation block
@property (retain) NSMutableDictionary * completionCallbacks;              //@synthesize completionCallbacks=_completionCallbacks - In the implementation block
@property (retain) NSMutableDictionary * checkpointCallbacks;              //@synthesize checkpointCallbacks=_checkpointCallbacks - In the implementation block
-(id)init;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)removeAllCallbacks;
-(void)registerProgressCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)registerCompletionCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)registerCheckpointCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)unregisterAllCallbacksForOperation:(id)arg1 ;
-(NSMutableDictionary *)progressCallbacks;
-(NSMutableDictionary *)commandCallbacks;
-(NSMutableDictionary *)completionCallbacks;
-(NSMutableDictionary *)checkpointCallbacks;
-(void)registerCommandCallback:(/*^block*/id)arg1 forOperation:(id)arg2 ;
-(void)setProgressCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setCommandCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setCompletionCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setCheckpointCallbacks:(NSMutableDictionary *)arg1 ;
@end

