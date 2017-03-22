/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MiroTrimmer.h>

@protocol MiroTrimmerDelegate, MiroClip;
@class AVPlayer, UIView, NSArray, MiroTrimmerDebugView, FrameGenerator, NSLayoutConstraint, UIImageView, NSString;

@interface MiroTrimFilmstripView : UIView <MiroTrimmer> {

	BOOL _playerBusySeeking;
	BOOL _isTrimmed;
	int _projectFrameRate;
	int _currentDragType;
	float _selectionStartTime;
	float _selectionEndTime;
	int _zoomPinnedTime;
	int _currentZoomOperation;
	int _deferredSeekTime;
	id<MiroTrimmerDelegate> _delegate;
	id<MiroClip> _clip;
	AVPlayer* _player;
	UIView* _contentContainer;
	UIView* _thumbnailContainer;
	NSArray* _thumbnailImageViews;
	MiroTrimmerDebugView* _debugOverlay;
	FrameGenerator* _frameGenerator;
	UIView* _playheadView;
	NSLayoutConstraint* _playheadPositionConstraint;
	id _playerPeriodicTimeObserver;
	id _trimBoundaryTimeObserver;
	UIView* _selectionView;
	UIView* _leftDisabledView;
	UIView* _rightDisabledView;
	UIImageView* _leftHandleView;
	UIImageView* _rightHandleView;
	NSLayoutConstraint* _leftSelectionHandlePositionConstraint;
	NSLayoutConstraint* _rightSelectionHandlePositionConstraint;
	NSArray* _contentEdgeInsetsConstraints;
	NSLayoutConstraint* _leftContentEdgeInsetConstraint;
	NSLayoutConstraint* _rightContentEdgeInsetConstraint;
	double _zoomFactor;
	double _trimHandleWidth;
	double _lastSeekWallClockTime;
	CGSize _currentLayedOutSize;
	CGPoint _slipDragPreviousLocation;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,retain) id<MiroClip> clip;                                                        //@synthesize clip=_clip - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                        //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) int projectFrameRate;                                                     //@synthesize projectFrameRate=_projectFrameRate - In the implementation block
@property (assign,nonatomic) CGSize currentLayedOutSize;                                               //@synthesize currentLayedOutSize=_currentLayedOutSize - In the implementation block
@property (nonatomic,retain) UIView * contentContainer;                                                //@synthesize contentContainer=_contentContainer - In the implementation block
@property (nonatomic,retain) UIView * thumbnailContainer;                                              //@synthesize thumbnailContainer=_thumbnailContainer - In the implementation block
@property (nonatomic,retain) NSArray * thumbnailImageViews;                                            //@synthesize thumbnailImageViews=_thumbnailImageViews - In the implementation block
@property (nonatomic,retain) MiroTrimmerDebugView * debugOverlay;                                      //@synthesize debugOverlay=_debugOverlay - In the implementation block
@property (nonatomic,retain) FrameGenerator * frameGenerator;                                          //@synthesize frameGenerator=_frameGenerator - In the implementation block
@property (nonatomic,retain) UIView * playheadView;                                                    //@synthesize playheadView=_playheadView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * playheadPositionConstraint;                          //@synthesize playheadPositionConstraint=_playheadPositionConstraint - In the implementation block
@property (nonatomic,retain) id playerPeriodicTimeObserver;                                            //@synthesize playerPeriodicTimeObserver=_playerPeriodicTimeObserver - In the implementation block
@property (nonatomic,retain) id trimBoundaryTimeObserver;                                              //@synthesize trimBoundaryTimeObserver=_trimBoundaryTimeObserver - In the implementation block
@property (nonatomic,retain) UIView * selectionView;                                                   //@synthesize selectionView=_selectionView - In the implementation block
@property (nonatomic,retain) UIView * leftDisabledView;                                                //@synthesize leftDisabledView=_leftDisabledView - In the implementation block
@property (nonatomic,retain) UIView * rightDisabledView;                                               //@synthesize rightDisabledView=_rightDisabledView - In the implementation block
@property (nonatomic,retain) UIImageView * leftHandleView;                                             //@synthesize leftHandleView=_leftHandleView - In the implementation block
@property (nonatomic,retain) UIImageView * rightHandleView;                                            //@synthesize rightHandleView=_rightHandleView - In the implementation block
@property (assign,nonatomic) int currentDragType;                                                      //@synthesize currentDragType=_currentDragType - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leftSelectionHandlePositionConstraint;               //@synthesize leftSelectionHandlePositionConstraint=_leftSelectionHandlePositionConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * rightSelectionHandlePositionConstraint;              //@synthesize rightSelectionHandlePositionConstraint=_rightSelectionHandlePositionConstraint - In the implementation block
@property (nonatomic,retain) NSArray * contentEdgeInsetsConstraints;                                   //@synthesize contentEdgeInsetsConstraints=_contentEdgeInsetsConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leftContentEdgeInsetConstraint;                      //@synthesize leftContentEdgeInsetConstraint=_leftContentEdgeInsetConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * rightContentEdgeInsetConstraint;                     //@synthesize rightContentEdgeInsetConstraint=_rightContentEdgeInsetConstraint - In the implementation block
@property (assign,nonatomic) float selectionStartTime;                                                 //@synthesize selectionStartTime=_selectionStartTime - In the implementation block
@property (assign,nonatomic) float selectionEndTime;                                                   //@synthesize selectionEndTime=_selectionEndTime - In the implementation block
@property (assign,nonatomic) CGPoint slipDragPreviousLocation;                                         //@synthesize slipDragPreviousLocation=_slipDragPreviousLocation - In the implementation block
@property (assign,nonatomic) double zoomFactor;                                                        //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign,nonatomic) int zoomPinnedTime;                                                       //@synthesize zoomPinnedTime=_zoomPinnedTime - In the implementation block
@property (assign,nonatomic) int currentZoomOperation;                                                 //@synthesize currentZoomOperation=_currentZoomOperation - In the implementation block
@property (assign,nonatomic) double trimHandleWidth;                                                   //@synthesize trimHandleWidth=_trimHandleWidth - In the implementation block
@property (assign,nonatomic) int deferredSeekTime;                                                     //@synthesize deferredSeekTime=_deferredSeekTime - In the implementation block
@property (assign,nonatomic) double lastSeekWallClockTime;                                             //@synthesize lastSeekWallClockTime=_lastSeekWallClockTime - In the implementation block
@property (assign) BOOL playerBusySeeking;                                                             //@synthesize playerBusySeeking=_playerBusySeeking - In the implementation block
@property (assign,nonatomic) BOOL isTrimmed;                                                           //@synthesize isTrimmed=_isTrimmed - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                                           //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<MiroTrimmerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MiroTrimmerDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MiroTrimmerDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id<MiroClip>)clip;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIView *)selectionView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIEdgeInsets)contentEdgeInsets;
-(CGSize)_thumbnailSize;
-(void)setSelectionView:(UIView *)arg1 ;
-(void)setClip:(id<MiroClip>)arg1 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)player;
-(void)setProjectFrameRate:(int)arg1 ;
-(int)projectFrameRate;
-(id)playerPeriodicTimeObserver;
-(void)setPlayerPeriodicTimeObserver:(id)arg1 ;
-(id)trimBoundaryTimeObserver;
-(void)setTrimBoundaryTimeObserver:(id)arg1 ;
-(void)_seekToTime:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(MiroTrimmerDebugView *)debugOverlay;
-(void)_deferredSeek;
-(int)deferredSeekTime;
-(double)lastSeekWallClockTime;
-(BOOL)playerBusySeeking;
-(void)setPlayerBusySeeking:(BOOL)arg1 ;
-(void)setDeferredSeekTime:(int)arg1 ;
-(void)setLastSeekWallClockTime:(double)arg1 ;
-(void)_deferredSeekToTime:(int)arg1 ;
-(void)setDebugOverlay:(MiroTrimmerDebugView *)arg1 ;
-(void)updateDebugMetadataOverlay;
-(long long)_numberOfThumbnails;
-(FrameGenerator *)frameGenerator;
-(void)setZoomFactor:(double)arg1 ;
-(void)setContentContainer:(UIView *)arg1 ;
-(UIView *)contentContainer;
-(void)_updateContentEdgeInsetsConstraints;
-(void)setThumbnailContainer:(UIView *)arg1 ;
-(UIView *)thumbnailContainer;
-(void)setTrimHandleWidth:(double)arg1 ;
-(void)setLeftHandleView:(UIImageView *)arg1 ;
-(void)setRightHandleView:(UIImageView *)arg1 ;
-(void)setPlayheadView:(UIView *)arg1 ;
-(UIView *)playheadView;
-(void)_updatePlayheadPosition;
-(void)_setPlayheadHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setLeftSelectionHandlePositionConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRightSelectionHandlePositionConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leftSelectionHandlePositionConstraint;
-(NSLayoutConstraint *)rightSelectionHandlePositionConstraint;
-(BOOL)isTrimmed;
-(void)_updateTrimmerAppearanceSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateFilmstripFromLayout:(BOOL)arg1 ;
-(void)_updateSelectionWithStartFrame:(float)arg1 endFrame:(float)arg2 ;
-(float)selectionStartTime;
-(int)currentZoomOperation;
-(float)selectionEndTime;
-(double)zoomFactor;
-(int)zoomPinnedTime;
-(NSArray *)contentEdgeInsetsConstraints;
-(double)_constantForLeftContentEdgeInsetConstraint;
-(void)setLeftContentEdgeInsetConstraint:(NSLayoutConstraint *)arg1 ;
-(double)_constantForRightContentEdgeInsetConstraint;
-(void)setRightContentEdgeInsetConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leftContentEdgeInsetConstraint;
-(NSLayoutConstraint *)rightContentEdgeInsetConstraint;
-(void)setContentEdgeInsetsConstraints:(NSArray *)arg1 ;
-(NSLayoutConstraint *)playheadPositionConstraint;
-(void)setPlayheadPositionConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateFilmstripFromLayout:(BOOL)arg1 thumbnailViewsToRemoveAfterAnimation:(id*)arg2 ;
-(CGSize)currentLayedOutSize;
-(NSArray *)thumbnailImageViews;
-(void)setThumbnailImageViews:(NSArray *)arg1 ;
-(int)_timePerThumbnail;
-(void)setFrameGenerator:(FrameGenerator *)arg1 ;
-(void)setCurrentLayedOutSize:(CGSize)arg1 ;
-(void)setCurrentDragType:(int)arg1 ;
-(int)currentDragType;
-(CGPoint)slipDragPreviousLocation;
-(void)setSlipDragPreviousLocation:(CGPoint)arg1 ;
-(void)_touchesEnded;
-(double)trimHandleWidth;
-(UIView *)leftDisabledView;
-(void)setLeftDisabledView:(UIView *)arg1 ;
-(UIView *)rightDisabledView;
-(void)setRightDisabledView:(UIView *)arg1 ;
-(void)setIsTrimmed:(BOOL)arg1 ;
-(void)setSelectionStartTime:(float)arg1 ;
-(void)setSelectionEndTime:(float)arg1 ;
-(UIImageView *)leftHandleView;
-(UIImageView *)rightHandleView;
-(void)setCurrentZoomOperation:(int)arg1 ;
-(void)setZoomPinnedTime:(int)arg1 ;
@end

