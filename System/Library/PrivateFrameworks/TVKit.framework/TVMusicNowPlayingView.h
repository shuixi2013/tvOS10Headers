/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@protocol TVMusicNowPlayingViewDelegate;
@class UIView, _TVMusicArtworkImageView, TVImageView, TVSImageProxy, NSLayoutConstraint, UILabel, UIButton, UIImageView, TVAudioNowPlayingItemConfigurationObject, TVCollectionView, NSString, NSArray;

@interface TVMusicNowPlayingView : UIView {

	UIView* _coverArtPlaceholder;
	_TVMusicArtworkImageView* _coverArtView;
	TVImageView* _backgroundImageView;
	TVImageView* _loadingBackgroundImageView;
	UIView* _containerView;
	TVSImageProxy* _artworkImageProxy;
	NSLayoutConstraint* _coverArtWidthConstraint;
	NSLayoutConstraint* _coverArtHeightConstraint;
	BOOL _isAnimatingCover;
	UILabel* _songLabel;
	UILabel* _artistAlbumLabel;
	UILabel* _radioStationLabel;
	UIButton* _contextMenuButton;
	UILabel* _informationalTextLabel;
	UIView* _lastFocusedView;
	UIImageView* _explicitBadge;
	BOOL _forceFocusToPlaylistView;
	BOOL _playlistVisible;
	id<TVMusicNowPlayingViewDelegate> _nowPlayingDelegate;
	TVAudioNowPlayingItemConfigurationObject* _nowPlayingInfo;
	TVSImageProxy* _backgroundImageProxy;
	TVCollectionView* _playlistCollectionView;
	NSString* _informationalText;
	NSArray* _controls;

}

@property (assign,nonatomic,__weak) id<TVMusicNowPlayingViewDelegate> nowPlayingDelegate;              //@synthesize nowPlayingDelegate=_nowPlayingDelegate - In the implementation block
@property (nonatomic,retain) TVAudioNowPlayingItemConfigurationObject * nowPlayingInfo;                //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,retain) TVSImageProxy * backgroundImageProxy;                                     //@synthesize backgroundImageProxy=_backgroundImageProxy - In the implementation block
@property (nonatomic,readonly) UIView * containerView; 
@property (assign,getter=isPlaylistVisible,nonatomic) BOOL playlistVisible;                            //@synthesize playlistVisible=_playlistVisible - In the implementation block
@property (nonatomic,retain) TVSImageProxy * artworkImageProxy;                                        //@synthesize artworkImageProxy=_artworkImageProxy - In the implementation block
@property (assign,getter=isArtworkVisible,nonatomic) BOOL artworkVisible; 
@property (nonatomic,readonly) TVCollectionView * playlistCollectionView;                              //@synthesize playlistCollectionView=_playlistCollectionView - In the implementation block
@property (nonatomic,retain) NSString * informationalText;                                             //@synthesize informationalText=_informationalText - In the implementation block
@property (nonatomic,retain) NSArray * controls;                                                       //@synthesize controls=_controls - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)containerView;
-(id)preferredFocusEnvironments;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)allowInteraction:(BOOL)arg1 ;
-(void)setNowPlayingInfo:(TVAudioNowPlayingItemConfigurationObject *)arg1 ;
-(TVAudioNowPlayingItemConfigurationObject *)nowPlayingInfo;
-(id)initWithFrame:(CGRect)arg1 layout:(long long)arg2 ;
-(void)setArtworkVisible:(BOOL)arg1 ;
-(id)_addLabel;
-(void)_showControls:(BOOL)arg1 ;
-(void)_selectedContextMenu:(id)arg1 ;
-(id)_constraintsForLayout:(long long)arg1 ;
-(BOOL)isPlaylistVisible;
-(void)setArtworkImageProxy:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBackgroundImageProxy:(TVSImageProxy *)arg1 ;
-(void)_setNowPlayingInfo:(id)arg1 ;
-(id)_titleAttributes;
-(id)_subtitleAttributes;
-(BOOL)isArtworkVisible;
-(void)_setLabelsHighlighted:(BOOL)arg1 ;
-(NSArray *)controls;
-(void)setPlaylistVisible:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPlaylistVisible:(BOOL)arg1 wasSelected:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(TVCollectionView *)playlistCollectionView;
-(void)setFocusToDataView;
-(void)_dissolveFromPlaylistWithCompletion:(/*^block*/id)arg1 ;
-(id<TVMusicNowPlayingViewDelegate>)nowPlayingDelegate;
-(void)_setHighlighted:(BOOL)arg1 forLabel:(id)arg2 ;
-(void)setArtworkImageProxy:(TVSImageProxy *)arg1 ;
-(void)setArtworkImageProxy:(id)arg1 animated:(BOOL)arg2 ;
-(void)setControls:(NSArray *)arg1 ;
-(void)setPlaylistVisible:(BOOL)arg1 ;
-(void)setInformationalText:(NSString *)arg1 ;
-(void)setAllowArtworkFocus:(BOOL)arg1 ;
-(BOOL)allowArtworkFocus;
-(void)setNowPlayingDelegate:(id<TVMusicNowPlayingViewDelegate>)arg1 ;
-(TVSImageProxy *)backgroundImageProxy;
-(TVSImageProxy *)artworkImageProxy;
-(NSString *)informationalText;
@end

