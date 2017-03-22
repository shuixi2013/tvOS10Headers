/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>
#import <libobjc.A.dylib/SBFProceduralWallpaperDelegate.h>

@protocol SBFProceduralWallpaper;
@class NSDictionary, NSTimer, UIImage, CADisplayLink, NSString;

@interface SBFProceduralWallpaperView : SBFWallpaperView <SBFProceduralWallpaperDelegate> {

	id<SBFProceduralWallpaper> _proceduralWallpaper;
	NSDictionary* _options;
	NSTimer* _colorSampleTimer;
	int _thermalNotificationToken;
	BOOL _pausedForThermalReasons;
	CAImageQueueRef _blurQueue;
	UIImage* _blur;
	UIImage* _cachedUnblurredImage;
	CADisplayLink* _cachedUnblurredImageDisplayLinkObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_allowsRasterization;
+(BOOL)_allowsParallax;
-(void)dealloc;
-(void)layoutSubviews;
-(void)invalidate;
-(id)options;
-(void)setRotating:(BOOL)arg1 ;
-(id)_computeAverageColor;
-(void)_handleVariantChange;
-(id)_blurredImage;
-(void)_handleVisibilityChange;
-(BOOL)_isVisible;
-(void)_startGeneratingBlurredImages;
-(void)_stopGeneratingBlurredImages;
-(long long)wallpaperType;
-(void)prepareToAppear;
-(void)prepareToDisappear;
-(id)snapshotImage;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2 ;
-(BOOL)needsImmediateLayoutBeforeRotation;
-(BOOL)hasContentOutsideVisibleBounds;
-(void)setContinuousColorSamplingEnabled:(BOOL)arg1 ;
-(void)setWallpaperAnimationEnabled:(BOOL)arg1 ;
-(void)_updateAnimating;
-(void)_cachedUnbluredImageDidInvalidate;
-(void)_updateSampleTimer;
-(BOOL)_deviceMayRotate;
-(BOOL)hasBeenInvalidated;
-(id)_newImageFromBlurSurface:(IOSurfaceRef)arg1 rect:(CGRect)arg2 ;
-(BOOL)_shouldSampleContinuously;
-(void)_sample;
-(void)wallpaper:(id)arg1 didGenerateBlur:(IOSurfaceRef)arg2 forRect:(CGRect)arg3 ;
-(void)wallpaper:(id)arg1 didComputeAverageColor:(id)arg2 forRect:(CGRect)arg3 ;
-(id)initWithFrame:(CGRect)arg1 proceduralWallpaper:(id)arg2 options:(id)arg3 variant:(long long)arg4 ;
@end

