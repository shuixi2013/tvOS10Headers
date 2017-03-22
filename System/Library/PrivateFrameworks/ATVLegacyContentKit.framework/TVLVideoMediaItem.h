/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVSURLMediaItem.h>

@class TVSSecureKeyDeliveryCoordinator, TVLVideoAssetElement, TVLEventGroupUpdater, NSMutableArray, TVSDocumentLoader;

@interface TVLVideoMediaItem : TVSURLMediaItem {

	TVSSecureKeyDeliveryCoordinator* _secureKeyDeliveryCoordinator;
	TVLVideoAssetElement* _videoAssetElement;
	TVLEventGroupUpdater* _eventGroupUpdater;
	unsigned long long _loadingContext;
	NSMutableArray* _chapterCollectionRefreshTimers;
	TVSDocumentLoader* _webVTTStylesDocumentLoader;

}

@property (nonatomic,retain) TVLVideoAssetElement * videoAssetElement;                     //@synthesize videoAssetElement=_videoAssetElement - In the implementation block
@property (nonatomic,retain) TVLEventGroupUpdater * eventGroupUpdater;                     //@synthesize eventGroupUpdater=_eventGroupUpdater - In the implementation block
@property (assign,nonatomic) unsigned long long loadingContext;                            //@synthesize loadingContext=_loadingContext - In the implementation block
@property (nonatomic,retain) NSMutableArray * chapterCollectionRefreshTimers;              //@synthesize chapterCollectionRefreshTimers=_chapterCollectionRefreshTimers - In the implementation block
@property (nonatomic,retain) TVSDocumentLoader * webVTTStylesDocumentLoader;               //@synthesize webVTTStylesDocumentLoader=_webVTTStylesDocumentLoader - In the implementation block
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(id)initWithURL:(id)arg1 traits:(id)arg2 ;
-(void)prepareForLoadingWithCompletion:(/*^block*/id)arg1 ;
-(void)cleanUpMediaItem;
-(void)loadStreamingKeyForRequest:(id)arg1 ;
-(unsigned long long)loadingContext;
-(void)setLoadingContext:(unsigned long long)arg1 ;
-(TVLVideoAssetElement *)videoAssetElement;
-(void)setVideoAssetElement:(TVLVideoAssetElement *)arg1 ;
-(id)initWithVideoAssetElement:(id)arg1 ;
-(id)initWithVideoAssetElement:(id)arg1 traits:(id)arg2 ;
-(BOOL)_preparationCancelled:(unsigned long long)arg1 ;
-(void)_setupAutoRefreshForChapterCollection:(id)arg1 ;
-(void)setWebVTTStylesDocumentLoader:(TVSDocumentLoader *)arg1 ;
-(void)_chapterRefreshTimerFired:(id)arg1 ;
-(TVLEventGroupUpdater *)eventGroupUpdater;
-(void)setEventGroupUpdater:(TVLEventGroupUpdater *)arg1 ;
-(NSMutableArray *)chapterCollectionRefreshTimers;
-(void)setChapterCollectionRefreshTimers:(NSMutableArray *)arg1 ;
-(TVSDocumentLoader *)webVTTStylesDocumentLoader;
@end

