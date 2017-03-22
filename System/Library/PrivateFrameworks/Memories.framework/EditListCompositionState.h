/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CompositionTrackGroup, KonaClip;

@interface EditListCompositionState : NSObject <NSCopying> {

	CompositionTrackGroup* m_currentTrackGroup;
	CompositionTrackGroup* m_alternateTrackGroup;
	KonaClip* m_previousClip;
	KonaClip* m_clip;
	KonaClip* m_nextClip;
	float m_previousClipVolume;
	float m_clipVolume;
	float m_nextClipVolume;
	int m_previousClipType;
	int m_clipType;
	int m_nextClipType;
	CGSize m_previousClipNaturalSize;
	CGSize m_clipNaturalSize;
	CGSize m_nextClipNaturalSize;
	CGAffineTransform m_previousClipTransform;
	CGAffineTransform m_clipTransform;
	CGAffineTransform m_nextClipTransform;
	BOOL m_previousClipRequiresCA;
	BOOL m_clipRequiresCA;
	BOOL m_nextClipRequiresCA;
	SCD_Struct_Mi11 m_videoCompTimeRange;
	SCD_Struct_Mi11 m_audioCompTimeRange;
	int m_audioStartOffset;
	int m_audioEndOffset;

}

@property (nonatomic,retain) CompositionTrackGroup * currentTrackGroup; 
@property (nonatomic,retain) CompositionTrackGroup * alternateTrackGroup; 
@property (assign,nonatomic) KonaClip * previousClip; 
@property (assign,nonatomic) KonaClip * clip; 
@property (assign,nonatomic) KonaClip * nextClip; 
@property (assign,nonatomic) float previousClipVolume; 
@property (assign,nonatomic) float clipVolume; 
@property (assign,nonatomic) float nextClipVolume; 
@property (nonatomic,readonly) int previousClipType; 
@property (nonatomic,readonly) int clipType; 
@property (nonatomic,readonly) int nextClipType; 
@property (assign,nonatomic) CGSize previousClipNaturalSize; 
@property (assign,nonatomic) CGSize clipNaturalSize; 
@property (assign,nonatomic) CGSize nextClipNaturalSize; 
@property (assign,nonatomic) CGAffineTransform previousClipTransform; 
@property (assign,nonatomic) CGAffineTransform clipTransform; 
@property (assign,nonatomic) CGAffineTransform nextClipTransform; 
@property (assign,nonatomic) SCD_Struct_Mi11 videoCompTimeRange; 
@property (assign,nonatomic) SCD_Struct_Mi11 audioCompTimeRange; 
@property (assign,nonatomic) BOOL previousClipRequiresCA; 
@property (assign,nonatomic) BOOL clipRequiresCA; 
@property (assign,nonatomic) BOOL nextClipRequiresCA; 
@property (assign,nonatomic) int audioStartOffset; 
@property (assign,nonatomic) int audioEndOffset; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(KonaClip *)clip;
-(void)setClip:(KonaClip *)arg1 ;
-(int)clipType;
-(void)setAudioEndOffset:(int)arg1 ;
-(void)setAudioStartOffset:(int)arg1 ;
-(int)audioStartOffset;
-(int)audioEndOffset;
-(CompositionTrackGroup *)currentTrackGroup;
-(void)setCurrentTrackGroup:(CompositionTrackGroup *)arg1 ;
-(CompositionTrackGroup *)alternateTrackGroup;
-(void)setAlternateTrackGroup:(CompositionTrackGroup *)arg1 ;
-(KonaClip *)previousClip;
-(void)setPreviousClip:(KonaClip *)arg1 ;
-(KonaClip *)nextClip;
-(void)setNextClip:(KonaClip *)arg1 ;
-(float)previousClipVolume;
-(void)setPreviousClipVolume:(float)arg1 ;
-(float)clipVolume;
-(void)setClipVolume:(float)arg1 ;
-(float)nextClipVolume;
-(void)setNextClipVolume:(float)arg1 ;
-(CGSize)previousClipNaturalSize;
-(void)setPreviousClipNaturalSize:(CGSize)arg1 ;
-(CGSize)clipNaturalSize;
-(void)setClipNaturalSize:(CGSize)arg1 ;
-(CGSize)nextClipNaturalSize;
-(void)setNextClipNaturalSize:(CGSize)arg1 ;
-(CGAffineTransform)previousClipTransform;
-(void)setPreviousClipTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)clipTransform;
-(void)setClipTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)nextClipTransform;
-(void)setNextClipTransform:(CGAffineTransform)arg1 ;
-(SCD_Struct_Mi11)videoCompTimeRange;
-(void)setVideoCompTimeRange:(SCD_Struct_Mi11)arg1 ;
-(SCD_Struct_Mi11)audioCompTimeRange;
-(void)setAudioCompTimeRange:(SCD_Struct_Mi11)arg1 ;
-(BOOL)previousClipRequiresCA;
-(void)setPreviousClipRequiresCA:(BOOL)arg1 ;
-(BOOL)clipRequiresCA;
-(void)setClipRequiresCA:(BOOL)arg1 ;
-(BOOL)nextClipRequiresCA;
-(void)setNextClipRequiresCA:(BOOL)arg1 ;
-(void)swapForTransition;
-(int)previousClipType;
-(int)nextClipType;
@end

