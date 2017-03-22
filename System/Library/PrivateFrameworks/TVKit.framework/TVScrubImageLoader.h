/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@protocol TVScrubImageLoaderDelegate, TVSPlayback, TVSPlaybackImageLoader;
@class NSObject, NSMutableDictionary, NSMutableArray, NSString;

@interface TVScrubImageLoader : NSObject <NSCacheDelegate> {

	BOOL _imagesAvailable;
	id<TVScrubImageLoaderDelegate> _delegate;
	NSObject*<TVSPlayback> _player;
	id<TVSPlaybackImageLoader> _stillImageLoader;
	NSMutableDictionary* _imageInfoCache;
	NSMutableArray* _imageInfosBeingLoaded;
	NSMutableArray* _loadedImageInfos;
	double _priorityImageTime;
	CGSize _maxImageSize;

}

@property (nonatomic,retain) NSObject*<TVSPlayback> player;                               //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) CGSize maxImageSize;                                         //@synthesize maxImageSize=_maxImageSize - In the implementation block
@property (nonatomic,retain) id<TVSPlaybackImageLoader> stillImageLoader;                 //@synthesize stillImageLoader=_stillImageLoader - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageInfoCache;                        //@synthesize imageInfoCache=_imageInfoCache - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageInfosBeingLoaded;                      //@synthesize imageInfosBeingLoaded=_imageInfosBeingLoaded - In the implementation block
@property (nonatomic,retain) NSMutableArray * loadedImageInfos;                           //@synthesize loadedImageInfos=_loadedImageInfos - In the implementation block
@property (assign,nonatomic) double priorityImageTime;                                    //@synthesize priorityImageTime=_priorityImageTime - In the implementation block
@property (assign,nonatomic) BOOL imagesAvailable;                                        //@synthesize imagesAvailable=_imagesAvailable - In the implementation block
@property (assign,nonatomic,__weak) id<TVScrubImageLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<TVScrubImageLoaderDelegate>)arg1 ;
-(void)dealloc;
-(id<TVScrubImageLoaderDelegate>)delegate;
-(void)_reset;
-(void)loadImages;
-(void)setPlayer:(NSObject*<TVSPlayback>)arg1 ;
-(NSObject*<TVSPlayback>)player;
-(NSMutableArray *)imageInfosBeingLoaded;
-(double)_timeAfterRemovingInterstitials:(double)arg1 ;
-(void)setImageInfosBeingLoaded:(NSMutableArray *)arg1 ;
-(void)_loadImages;
-(void)setPriorityImageTime:(double)arg1 ;
-(id)_closestLoadedImageInfoForTime:(double)arg1 ;
-(double)_timeAfterInsertingInterstitials:(double)arg1 ;
-(void)_playerCurrentMediaItemMetadataDidChange:(id)arg1 ;
-(id<TVSPlaybackImageLoader>)stillImageLoader;
-(void)setStillImageLoader:(id<TVSPlaybackImageLoader>)arg1 ;
-(NSMutableArray *)loadedImageInfos;
-(NSMutableDictionary *)imageInfoCache;
-(void)setImagesAvailable:(BOOL)arg1 ;
-(double)priorityImageTime;
-(id)_imageLoadInfoIfNeededForTime:(double)arg1 ;
-(id)_progressiveImageLoadInfosNeeded;
-(CGSize)maxImageSize;
-(void)_saveLoadedImageInfo:(id)arg1 ;
-(BOOL)imagesAvailable;
-(id)_imageInfosNeededWithStride:(double)arg1 ;
-(id)initWithPlayer:(id)arg1 maxImageSize:(CGSize)arg2 ;
-(void)prioritizeLoadingOfImageAtTime:(double)arg1 ;
-(id)closestImageForTime:(double)arg1 imageTime:(double*)arg2 ;
-(void)setMaxImageSize:(CGSize)arg1 ;
-(void)setImageInfoCache:(NSMutableDictionary *)arg1 ;
-(void)setLoadedImageInfos:(NSMutableArray *)arg1 ;
@end

