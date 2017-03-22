/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneLibrary/ToneLibrary-Structs.h>
#import <libobjc.A.dylib/TLAlertPlaybackBackEndController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMapTable;

@interface TLAlertSystemSoundController : NSObject <TLAlertPlaybackBackEndController> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	NSMapTable* _alertSystemSoundContexts;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_soundForAlert:(id)arg1 ;
+(id)_optionsForSystemSoundAlert:(id)arg1 ;
+(unsigned)_soundBehaviorForAlert:(id)arg1 ;
+(id)_vibrationPatternForAlert:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stopRepeatedlyPlayingAlert:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 targetQueue:(id)arg4 ;
-(void)_prepareForDealloc;
-(void)_assertRunningOnAccessQueue;
-(void)_stopPlayingAlerts:(id)arg1 withOptions:(SCD_Struct_TL3)arg2 playbackCompletionType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_playAlert:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_performBlockOnAccessQueue:(/*^block*/id)arg1 ;
-(void)_stopRepeatedlyPlayingAlert:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 targetQueue:(id)arg4 ;
-(void)_didCompletePlaybackForAlert:(id)arg1 completionHandler:(/*^block*/id)arg2 playbackCompletionType:(long long)arg3 error:(id)arg4 ;
-(void)_willBeginPlayingAlert:(id)arg1 withSoundID:(unsigned)arg2 ;
-(void)_systemSoundPlaybackDidCompleteForAlert:(id)arg1 ;
-(void)_didCompletePlaybackForAlert:(id)arg1 withCompletionType:(long long)arg2 error:(id)arg3 ;
-(void)playAlert:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)stopPlayingAlerts:(id)arg1 withOptions:(SCD_Struct_TL3)arg2 playbackCompletionType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

