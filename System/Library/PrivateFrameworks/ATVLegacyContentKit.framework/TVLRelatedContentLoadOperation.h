/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <Foundation/NSOperation.h>

@protocol TVSPlayback, TVSMediaItem;
@class TVLVideoPlayerElement, NSObject, TVRelatedContent;

@interface TVLRelatedContentLoadOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	id<TVSPlayback> _player;
	TVLVideoPlayerElement* _videoPlayerElement;
	NSObject*<TVSMediaItem> _mediaItem;
	TVRelatedContent* _relatedContent;

}

@property (nonatomic,retain) TVRelatedContent * relatedContent;                         //@synthesize relatedContent=_relatedContent - In the implementation block
@property (nonatomic,readonly) id<TVSPlayback> player;                                  //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) TVLVideoPlayerElement * videoPlayerElement;              //@synthesize videoPlayerElement=_videoPlayerElement - In the implementation block
@property (nonatomic,readonly) NSObject*<TVSMediaItem> mediaItem;                       //@synthesize mediaItem=_mediaItem - In the implementation block
-(id)init;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(id<TVSPlayback>)player;
-(NSObject*<TVSMediaItem>)mediaItem;
-(BOOL)isAsynchronous;
-(TVRelatedContent *)relatedContent;
-(void)setRelatedContent:(TVRelatedContent *)arg1 ;
-(id)initWithPlayer:(id)arg1 videoPlayerElement:(id)arg2 mediaItem:(id)arg3 ;
-(TVLVideoPlayerElement *)videoPlayerElement;
-(BOOL)_containsOptions:(id)arg1 ;
-(id)_upNextJSParamterFromVideoAsset:(id)arg1 context:(OpaqueJSContextRef)arg2 ;
-(void)_beginExecuting;
-(void)_endExecuting;
-(void)_loadRelatedContentForMediaItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end
