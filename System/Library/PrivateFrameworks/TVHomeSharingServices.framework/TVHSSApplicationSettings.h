/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHSSBaseSettings.h>

@class TVHSSMediaCategorySettings;

@interface TVHSSApplicationSettings : TVHSSBaseSettings {

	BOOL _showPlaylistsInAllMediaCategories;
	BOOL _allowDAAPServerDiscovery;
	long long _mediaRepeatMode;
	TVHSSMediaCategorySettings* _moviesSettings;
	TVHSSMediaCategorySettings* _homeVideosSettings;
	TVHSSMediaCategorySettings* _TVShowsSettings;
	TVHSSMediaCategorySettings* _podcastsSettings;
	TVHSSMediaCategorySettings* _iTunesUSettings;

}

@property (nonatomic,retain) TVHSSMediaCategorySettings * moviesSettings;                  //@synthesize moviesSettings=_moviesSettings - In the implementation block
@property (nonatomic,retain) TVHSSMediaCategorySettings * homeVideosSettings;              //@synthesize homeVideosSettings=_homeVideosSettings - In the implementation block
@property (nonatomic,retain) TVHSSMediaCategorySettings * TVShowsSettings;                 //@synthesize TVShowsSettings=_TVShowsSettings - In the implementation block
@property (nonatomic,retain) TVHSSMediaCategorySettings * podcastsSettings;                //@synthesize podcastsSettings=_podcastsSettings - In the implementation block
@property (nonatomic,retain) TVHSSMediaCategorySettings * iTunesUSettings;                 //@synthesize iTunesUSettings=_iTunesUSettings - In the implementation block
@property (assign,nonatomic) BOOL showPlaylistsInAllMediaCategories;                       //@synthesize showPlaylistsInAllMediaCategories=_showPlaylistsInAllMediaCategories - In the implementation block
@property (assign,nonatomic) BOOL allowDAAPServerDiscovery;                                //@synthesize allowDAAPServerDiscovery=_allowDAAPServerDiscovery - In the implementation block
@property (assign,nonatomic) long long mediaRepeatMode;                                    //@synthesize mediaRepeatMode=_mediaRepeatMode - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(long long)mediaRepeatMode;
-(void)setMediaRepeatMode:(long long)arg1 ;
-(void)_refreshSettingsFromPreferencesAndShouldNotify:(BOOL)arg1 ;
-(TVHSSMediaCategorySettings *)moviesSettings;
-(TVHSSMediaCategorySettings *)homeVideosSettings;
-(TVHSSMediaCategorySettings *)TVShowsSettings;
-(TVHSSMediaCategorySettings *)podcastsSettings;
-(TVHSSMediaCategorySettings *)iTunesUSettings;
-(void)setShowPlaylistsInAllMediaCategories:(BOOL)arg1 ;
-(void)setAllowDAAPServerDiscovery:(BOOL)arg1 ;
-(BOOL)showPlaylistsInAllMediaCategories;
-(BOOL)allowDAAPServerDiscovery;
-(void)setMoviesSettings:(TVHSSMediaCategorySettings *)arg1 ;
-(void)setHomeVideosSettings:(TVHSSMediaCategorySettings *)arg1 ;
-(void)setTVShowsSettings:(TVHSSMediaCategorySettings *)arg1 ;
-(void)setPodcastsSettings:(TVHSSMediaCategorySettings *)arg1 ;
-(void)setITunesUSettings:(TVHSSMediaCategorySettings *)arg1 ;
@end

