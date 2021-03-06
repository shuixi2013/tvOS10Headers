/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPlayerLooperInternal, NSError, NSArray;

@interface AVPlayerLooper : NSObject {

	AVPlayerLooperInternal* _looper;

}

@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (readonly) long long loopCount; 
@property (nonatomic,readonly) NSArray * loopingPlayerItems; 
+(void)initialize;
+(id)playerLooperWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(SCD_Struct_AV3)arg3 ;
+(id)playerLooperWithPlayer:(id)arg1 templateItem:(id)arg2 ;
+(id)keyPathsForValuesAffectingLoopingEnabled;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)status;
-(long long)loopCount;
-(id)initWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(SCD_Struct_AV3)arg3 ;
-(BOOL)_setupLoopingReturningError:(id*)arg1 ;
-(void)_changeStatusToFailedWithError:(id)arg1 ;
-(void)_turnOffLooping;
-(int)_calculateNumberOfCopiesNeeded;
-(void)_configureLoopingItem:(id)arg1 ;
-(BOOL)_isWaitingForLastCopyToFinishSet;
-(void)_cleanupAfterPlayingLastLoopingCopy;
-(void)disableLooping;
-(BOOL)isLoopingEnabled;
-(NSArray *)loopingPlayerItems;
-(NSError *)error;
@end

