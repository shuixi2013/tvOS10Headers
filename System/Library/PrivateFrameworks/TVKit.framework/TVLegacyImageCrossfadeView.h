/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, _TVImageLoaderQueue, UIImageView, NSTimer;

@interface TVLegacyImageCrossfadeView : UIView {

	NSArray* _imageProxies;
	double _crossfadePeriod;
	double _crossfadeDuration;
	double _rotationAngleDegrees;
	_TVImageLoaderQueue* _loaderQueue;
	UIImageView* _imageView;
	NSTimer* _crossfadeTimer;

}

@property (nonatomic,retain) _TVImageLoaderQueue * loaderQueue;              //@synthesize loaderQueue=_loaderQueue - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSTimer * crossfadeTimer;                       //@synthesize crossfadeTimer=_crossfadeTimer - In the implementation block
@property (nonatomic,copy) NSArray * imageProxies;                           //@synthesize imageProxies=_imageProxies - In the implementation block
@property (assign,nonatomic) double crossfadePeriod;                         //@synthesize crossfadePeriod=_crossfadePeriod - In the implementation block
@property (assign,nonatomic) double crossfadeDuration;                       //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
@property (assign,nonatomic) double rotationAngleDegrees;                    //@synthesize rotationAngleDegrees=_rotationAngleDegrees - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)_startTimer;
-(NSArray *)imageProxies;
-(void)setImageProxies:(NSArray *)arg1 ;
-(CGSize)_maximumImageSize;
-(void)_loadNextImage:(id)arg1 ;
-(void)_crossfadeToImage:(id)arg1 ;
-(void)setRotationAngleDegrees:(double)arg1 ;
-(double)crossfadePeriod;
-(void)setCrossfadePeriod:(double)arg1 ;
-(double)crossfadeDuration;
-(void)setCrossfadeDuration:(double)arg1 ;
-(double)rotationAngleDegrees;
-(_TVImageLoaderQueue *)loaderQueue;
-(void)setLoaderQueue:(_TVImageLoaderQueue *)arg1 ;
-(NSTimer *)crossfadeTimer;
-(void)setCrossfadeTimer:(NSTimer *)arg1 ;
@end

