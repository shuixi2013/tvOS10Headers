/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class AVAudioUnit;

@interface AVMusicTrack : NSObject {

	void* _impl;

}

@property (nonatomic,retain) AVAudioUnit * destinationAudioUnit; 
@property (assign,nonatomic) AVBeatRange loopRange; 
@property (assign,getter=isLoopingEnabled,nonatomic) BOOL loopingEnabled; 
@property (assign,nonatomic) long long numberOfLoops; 
@property (assign,nonatomic) double offsetTime; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,getter=isSoloed,nonatomic) BOOL soloed; 
@property (assign,nonatomic) double lengthInBeats; 
@property (assign,nonatomic) double lengthInSeconds; 
@property (nonatomic,readonly) unsigned long long timeResolution; 
-(void)dealloc;
-(unsigned long long)index;
-(BOOL)isLoopingEnabled;
-(OpaqueMusicTrackRef)track;
-(void)setMuted:(BOOL)arg1 ;
-(long long)numberOfLoops;
-(void)setNumberOfLoops:(long long)arg1 ;
-(id)initWithImpl:(MusicTrackImpl*)arg1 ;
-(void)setDestinationAudioUnit:(AVAudioUnit *)arg1 ;
-(AVAudioUnit *)destinationAudioUnit;
-(AVBeatRange)loopRange;
-(void)setLoopRange:(AVBeatRange)arg1 ;
-(void)setLoopingEnabled:(BOOL)arg1 ;
-(double)offsetTime;
-(void)setOffsetTime:(double)arg1 ;
-(BOOL)isSoloed;
-(void)setSoloed:(BOOL)arg1 ;
-(BOOL)usesAutomatedParameters;
-(void)setUsesAutomatedParameters:(BOOL)arg1 ;
-(double)lengthInBeats;
-(void)setLengthInBeats:(double)arg1 ;
-(double)lengthInSeconds;
-(void)setLengthInSeconds:(double)arg1 ;
-(unsigned long long)timeResolution;
-(BOOL)isMuted;
@end

