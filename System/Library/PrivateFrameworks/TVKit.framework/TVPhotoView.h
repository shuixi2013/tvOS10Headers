/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PHLivePhotoViewDelegate.h>

@class UIActivityIndicatorView, UIImageView, PHLivePhotoView, UIView, UIGestureRecognizer, NSString;

@interface TVPhotoView : UIView <PHLivePhotoViewDelegate> {

	BOOL _isVideoView;
	UIActivityIndicatorView* _spinner;
	UIImageView* _imageView;
	UIImageView* _badgeImageView;
	PHLivePhotoView* _playerView;
	UIView* _overlayView;
	UIView* _currentView;
	UIView* _irisGestureRecognizerView;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;                               //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * badgeImageView;                                    //@synthesize badgeImageView=_badgeImageView - In the implementation block
@property (nonatomic,retain) PHLivePhotoView * playerView;                                    //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                            //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIView * currentView;                                            //@synthesize currentView=_currentView - In the implementation block
@property (assign,nonatomic,__weak) UIView * irisGestureRecognizerView;                       //@synthesize irisGestureRecognizerView=_irisGestureRecognizerView - In the implementation block
@property (assign,nonatomic) BOOL isVideoView;                                                //@synthesize isVideoView=_isVideoView - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * livePhotoGestureRecognizer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setCurrentView:(UIView *)arg1 ;
-(UIView *)currentView;
-(void)_removeLivePhotoGesture;
-(void)_removeAllSubviews;
-(void)_removeVideoOverlayViews;
-(void)setUpVideoOverlayWithSpinner;
-(void)setUpVideoOverlayWithImage:(id)arg1 ;
-(void)setUpBadgeImageViewWithImage:(id)arg1 ;
-(PHLivePhotoView *)playerView;
-(unsigned long long)_autoresizingMask;
-(void)displaySpinner;
-(void)displayImage:(id)arg1 ;
-(void)displayVideoLoadingSpinnerOverlay;
-(void)displayVideoOverlayIcon:(id)arg1 isVideoBadge:(BOOL)arg2 ;
-(void)displayLivePhoto:(id)arg1 ;
-(void)seekForVitalityHintIfNeeded;
-(void)playVitalityHint;
-(void)removeBadgeImageView;
-(id)displayedImage;
-(void)willAnimateToCaptionMode;
-(void)willAnimateToFullScreenMode;
-(void)didAnimateToCaptionMode;
-(void)didAnimateToFullScreenMode;
-(UIGestureRecognizer *)livePhotoGestureRecognizer;
-(UIImageView *)badgeImageView;
-(void)setBadgeImageView:(UIImageView *)arg1 ;
-(void)setPlayerView:(PHLivePhotoView *)arg1 ;
-(UIView *)irisGestureRecognizerView;
-(void)setIrisGestureRecognizerView:(UIView *)arg1 ;
-(BOOL)isVideoView;
-(void)setIsVideoView:(BOOL)arg1 ;
@end

