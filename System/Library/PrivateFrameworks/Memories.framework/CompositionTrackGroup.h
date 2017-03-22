/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@class NSString, AVMutableCompositionTrack, NSMutableArray, AVMutableAudioMixInputParameters, NSDictionary, AVMutableComposition, NSArray;

@interface CompositionTrackGroup : NSObject {

	NSString* m_groupLabel;
	AVMutableCompositionTrack* m_videoTrack;
	NSMutableArray* m_videoSegments;
	AVMutableAudioMixInputParameters* m_audioInputParameters;
	AVMutableCompositionTrack* m_audioTrack;
	NSMutableArray* m_audioSegments;
	SCD_Struct_Mi1 m_cursor;
	SCD_Struct_Mi1 m_cursorForMovieAudio;
	BOOL m_videoTrackInUse;
	BOOL m_shouldAddVolumePointsAsWorkaround;
	SCD_Struct_Mi1 m_cursorAtLastVideoInsertion;
	SCD_Struct_Mi1 m_timeOfLastVolumeChange;
	float m_volumeAtLastVolumeChange;
	float m_volumeChangePending;
	SCD_Struct_Mi1 m_timeOfLastRequest;
	BOOL _isExporting;
	BOOL _seenSpeedClip;
	BOOL _seenMoreThanOneASBD;
	BOOL _isFlexMusic;
	NSDictionary* m_flexTrackInfoDict;
	NSString* _preferredAudioTimePitchAlgorithm;
	AVMutableComposition* _composition;
	NSString* _timePitchAlgorithm;
	NSMutableArray* _extraAudioTrackGroups;
	opaqueCMFormatDescriptionRef _audioFormatDescription;
	SCD_Struct_Mi1 m_fadeOutStart;
	SCD_Struct_Mi1 m_fadeOutDuration;
	SCD_Struct_Mi1 _lastRampToZeroEnd;

}

@property (assign,nonatomic) NSString * timePitchAlgorithm;                                    //@synthesize timePitchAlgorithm=_timePitchAlgorithm - In the implementation block
@property (nonatomic,retain) NSMutableArray * extraAudioTrackGroups;                           //@synthesize extraAudioTrackGroups=_extraAudioTrackGroups - In the implementation block
@property (nonatomic,retain) opaqueCMFormatDescriptionRef audioFormatDescription;              //@synthesize audioFormatDescription=_audioFormatDescription - In the implementation block
@property (assign,nonatomic) BOOL seenSpeedClip;                                               //@synthesize seenSpeedClip=_seenSpeedClip - In the implementation block
@property (assign,nonatomic) BOOL seenMoreThanOneASBD;                                         //@synthesize seenMoreThanOneASBD=_seenMoreThanOneASBD - In the implementation block
@property (nonatomic,retain) AVMutableAudioMixInputParameters * audioParameters; 
@property (nonatomic,retain) NSDictionary * fmTrackInfoDict; 
@property (assign,nonatomic) SCD_Struct_Mi1 lastRampToZeroEnd;                                 //@synthesize lastRampToZeroEnd=_lastRampToZeroEnd - In the implementation block
@property (assign,nonatomic) BOOL isFlexMusic;                                                 //@synthesize isFlexMusic=_isFlexMusic - In the implementation block
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,retain) AVMutableCompositionTrack * videoTrack; 
@property (nonatomic,readonly) NSArray * videoSegments; 
@property (nonatomic,retain) AVMutableCompositionTrack * audioTrack; 
@property (nonatomic,readonly) NSArray * audioSegments; 
@property (nonatomic,retain) NSString * preferredAudioTimePitchAlgorithm;                      //@synthesize preferredAudioTimePitchAlgorithm=_preferredAudioTimePitchAlgorithm - In the implementation block
@property (nonatomic,readonly) int actualVideoTrackID; 
@property (nonatomic,readonly) int usableVideoTrackID; 
@property (nonatomic,readonly) SCD_Struct_Mi1 cursor; 
@property (nonatomic,readonly) SCD_Struct_Mi1 cursorAtLastVideoInsertion; 
@property (assign,nonatomic) SCD_Struct_Mi1 timeOfLastVolumeChange; 
@property (assign,nonatomic) SCD_Struct_Mi1 timeOfLastRequest; 
@property (assign,nonatomic) float volumeAtLastVolumeChange; 
@property (assign,nonatomic) float volumeChangePending; 
@property (assign,nonatomic) SCD_Struct_Mi1 fadeOutStart; 
@property (assign,nonatomic) SCD_Struct_Mi1 fadeOutDuration; 
@property (nonatomic,retain) AVMutableComposition * composition;                               //@synthesize composition=_composition - In the implementation block
@property (assign,nonatomic) BOOL isExporting;                                                 //@synthesize isExporting=_isExporting - In the implementation block
+(id)visualDescriptionForSegments:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(SCD_Struct_Mi1)cursor;
-(BOOL)validate;
-(void)setFadeOutDuration:(SCD_Struct_Mi1)arg1 ;
-(SCD_Struct_Mi1)fadeOutDuration;
-(void)markDirty;
-(AVMutableComposition *)composition;
-(void)setComposition:(AVMutableComposition *)arg1 ;
-(void)setIsExporting:(BOOL)arg1 ;
-(BOOL)shouldAddVolumePointsAsWorkaround;
-(void)setAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)removeExtraAudioTrackGroups;
-(BOOL)containsVideoSegments;
-(BOOL)containsAudioSegments;
-(void)setSeenSpeedClip:(BOOL)arg1 ;
-(void)setSeenMoreThanOneASBD:(BOOL)arg1 ;
-(void)resetVolumeState;
-(NSMutableArray *)extraAudioTrackGroups;
-(void)setExtraAudioTrackGroups:(NSMutableArray *)arg1 ;
-(BOOL)isFlexMusic;
-(void)setIsFlexMusic:(BOOL)arg1 ;
-(void)_updateIsFlexMusic:(id)arg1 ;
-(BOOL)seenMoreThanOneASBD;
-(opaqueCMFormatDescriptionRef)audioFormatDescription;
-(BOOL)asbd:(opaqueCMFormatDescriptionRef)arg1 isEqualTo:(opaqueCMFormatDescriptionRef)arg2 ;
-(BOOL)seenSpeedClip;
-(NSString *)preferredAudioTimePitchAlgorithm;
-(void)addExtraAudioTrackGroup:(id)arg1 ;
-(SCD_Struct_Mi1)lastRampToZeroEnd;
-(void)setFmTrackInfoDict:(NSDictionary *)arg1 ;
-(NSDictionary *)fmTrackInfoDict;
-(id)apply_version2_to_track:(id)arg1 withSegments:(id)arg2 assets:(id)arg3 ;
-(void)apply_version2:(id)arg1 ;
-(void)setAudioParameters:(AVMutableAudioMixInputParameters *)arg1 ;
-(void)applyFlexAudioMix:(id)arg1 ;
-(void)setTimeOfLastVolumeChange:(SCD_Struct_Mi1)arg1 ;
-(void)setVolumeAtLastVolumeChange:(float)arg1 ;
-(void)setVolumeChangePending:(float)arg1 ;
-(void)setTimeOfLastRequest:(SCD_Struct_Mi1)arg1 ;
-(void)setLastRampToZeroEnd:(SCD_Struct_Mi1)arg1 ;
-(float)volumeChangePending;
-(SCD_Struct_Mi1)timeOfLastRequest;
-(float)volumeAtLastVolumeChange;
-(SCD_Struct_Mi1)timeOfLastVolumeChange;
-(SCD_Struct_Mi1)fadeOutStart;
-(float)linearFadeOutValueForTime:(SCD_Struct_Mi1)arg1 ;
-(float)setFadedVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_Mi11)arg3 ;
-(void)commitVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_Mi11)arg3 ;
-(BOOL)shouldCommitVolume:(float)arg1 ;
-(BOOL)containsSegments;
-(void)applyCompositionItem:(id)arg1 ;
-(void)apply_version1;
-(NSArray *)videoSegments;
-(NSArray *)audioSegments;
-(NSString *)timePitchAlgorithm;
-(void)setTimePitchAlgorithm:(NSString *)arg1 ;
-(BOOL)isExporting;
-(void)setAudioTrack:(AVMutableCompositionTrack *)arg1 ;
-(void)setVideoTrack:(AVMutableCompositionTrack *)arg1 ;
-(int)actualVideoTrackID;
-(SCD_Struct_Mi1)cursorAtLastVideoInsertion;
-(BOOL)requestVolume:(float)arg1 atTime:(SCD_Struct_Mi1)arg2 ;
-(void)fixAVFoundationsMistake;
-(BOOL)requestVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_Mi11)arg3 ;
-(int)usableVideoTrackID;
-(void)applyCompositionItem:(id)arg1 atTime:(SCD_Struct_Mi1)arg2 ;
-(BOOL)requestVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_Mi11)arg3 fillEmptySegment:(BOOL)arg4 ;
-(void)setFadeOutStart:(SCD_Struct_Mi1)arg1 ;
-(AVMutableCompositionTrack *)audioTrack;
-(AVMutableAudioMixInputParameters *)audioParameters;
-(BOOL)commitPendingVolumeToTime:(SCD_Struct_Mi1)arg1 ;
-(void)applyPaddingToTime:(SCD_Struct_Mi1)arg1 ;
-(void)applyAudioMixParameters:(id)arg1 ;
-(void)applyCompositionItemAsLoopedAudio:(id)arg1 forTimeRange:(SCD_Struct_Mi11)arg2 ;
-(AVMutableCompositionTrack *)videoTrack;
-(void)setPreferredAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(void)applyCompositionItem:(id)arg1 videoOnly:(BOOL)arg2 ;
-(void)applyCompositionItem:(id)arg1 atTime:(SCD_Struct_Mi1)arg2 videoOnly:(BOOL)arg3 ;
-(void)apply:(id)arg1 ;
@end

