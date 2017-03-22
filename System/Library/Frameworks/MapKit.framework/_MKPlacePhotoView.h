/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol GEOMapItemPhoto;
@class UIActivityIndicatorView, NSTimer, UILabel, MKPlacePhotosView, NSURLSessionTask, UIImageView, UIImage, NSString;

@interface _MKPlacePhotoView : UIScrollView <UIScrollViewDelegate> {

	UIActivityIndicatorView* _activity;
	BOOL _isZoomed;
	NSTimer* _tapTimer;
	UILabel* _descriptionLabel;
	UILabel* _licenseLabel;
	id<GEOMapItemPhoto> _photo;
	MKPlacePhotosView* _viewer;
	NSURLSessionTask* _task;
	BOOL _hasLoadedFullPhoto;
	UIImageView* _imageView;
	UIImage* _thumbnail;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                    //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedFullPhoto;                //@synthesize hasLoadedFullPhoto=_hasLoadedFullPhoto - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(UIImageView *)imageView;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 photo:(id)arg2 viewer:(id)arg3 ;
-(void)loadFullPhoto;
-(void)urlRequestFinished:(id)arg1 withError:(id)arg2 ;
-(void)unloadFullPhoto;
-(void)zoomToPoint:(id)arg1 ;
-(void)toggleBackground;
-(BOOL)hasLoadedFullPhoto;
-(void)setHasLoadedFullPhoto:(BOOL)arg1 ;
@end

