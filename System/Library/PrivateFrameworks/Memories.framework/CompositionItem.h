/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@class KonaClip;

@interface CompositionItem : NSObject {

	BOOL m_isFinalClip;
	BOOL m_isMuted;
	BOOL m_isFreezeFrame;
	SCD_Struct_Mi11 m_sourceTimeRange;
	SCD_Struct_Mi1 m_destinationDuration;
	SCD_Struct_Mi1 m_leftTransitionExtension;
	SCD_Struct_Mi1 m_rightTransitionExtension;
	SCD_Struct_Mi1 m_audioStartOffset;
	SCD_Struct_Mi1 m_audioEndOffset;
	float m_speed;
	KonaClip* _clip;

}

@property (nonatomic,retain) KonaClip * clip;                                      //@synthesize clip=_clip - In the implementation block
@property (assign,nonatomic) BOOL isFinalClip; 
@property (assign,nonatomic) SCD_Struct_Mi11 sourceTimeRange; 
@property (assign,nonatomic) SCD_Struct_Mi1 destinationDuration; 
@property (assign,nonatomic) SCD_Struct_Mi1 leftTransitionExtension; 
@property (assign,nonatomic) SCD_Struct_Mi1 rightTransitionExtension; 
@property (assign,nonatomic) SCD_Struct_Mi1 audioStartOffset; 
@property (assign,nonatomic) SCD_Struct_Mi1 audioEndOffset; 
@property (nonatomic,readonly) BOOL hasVideoContent; 
@property (nonatomic,readonly) BOOL isMuted; 
@property (nonatomic,readonly) BOOL isFreezeFrame; 
@property (assign,nonatomic) float speed; 
+(id)compositionItemWithClip:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(void)setSpeed:(float)arg1 ;
-(KonaClip *)clip;
-(float)speed;
-(void)setClip:(KonaClip *)arg1 ;
-(void)setAudioEndOffset:(SCD_Struct_Mi1)arg1 ;
-(void)setAudioStartOffset:(SCD_Struct_Mi1)arg1 ;
-(SCD_Struct_Mi1)audioStartOffset;
-(SCD_Struct_Mi1)audioEndOffset;
-(BOOL)isFreezeFrame;
-(id)initWithClip:(id)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_Mi1)arg1 paddedFromTime:(SCD_Struct_Mi1)arg2 ;
-(id)emptyTrackSegmentWithDestinationRange:(SCD_Struct_Mi11)arg1 ;
-(id)emptyTrackSegmentWithDestinationTime:(SCD_Struct_Mi1)arg1 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_Mi11)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_Mi1)arg1 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_Mi11)arg1 ;
-(id)emptyVideoTrackSegmentsWithDestinationRange:(SCD_Struct_Mi11)arg1 ;
-(id)emptyAudioTrackSegmentsWithDestinationTime:(SCD_Struct_Mi1)arg1 ;
-(SCD_Struct_Mi11)sourceTimeRange;
-(void)setSourceTimeRange:(SCD_Struct_Mi11)arg1 ;
-(SCD_Struct_Mi1)destinationDuration;
-(void)setDestinationDuration:(SCD_Struct_Mi1)arg1 ;
-(SCD_Struct_Mi1)leftTransitionExtension;
-(void)setLeftTransitionExtension:(SCD_Struct_Mi1)arg1 ;
-(SCD_Struct_Mi1)rightTransitionExtension;
-(void)setRightTransitionExtension:(SCD_Struct_Mi1)arg1 ;
-(BOOL)isMuted;
-(BOOL)isFinalClip;
-(void)setIsFinalClip:(BOOL)arg1 ;
@end

