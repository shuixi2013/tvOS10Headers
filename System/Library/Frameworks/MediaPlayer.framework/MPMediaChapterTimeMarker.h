/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPTimeMarker.h>

@class NSArray;

@interface MPMediaChapterTimeMarker : MPTimeMarker {

	unsigned long long _chapterIndex;
	NSArray* _chapters;
	BOOL _hasArtworkAtPlaybackTime;

}

@property (assign,nonatomic) unsigned long long chapterIndex;              //@synthesize chapterIndex=_chapterIndex - In the implementation block
@property (nonatomic,retain) NSArray * chapters;                           //@synthesize chapters=_chapters - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkAtPlaybackTime;                //@synthesize hasArtworkAtPlaybackTime=_hasArtworkAtPlaybackTime - In the implementation block
-(BOOL)hasArtworkAtPlaybackTime;
-(NSArray *)chapters;
-(void)setChapterIndex:(unsigned long long)arg1 ;
-(void)setChapters:(NSArray *)arg1 ;
-(void)setHasArtworkAtPlaybackTime:(BOOL)arg1 ;
-(unsigned long long)chapterIndex;
@end

