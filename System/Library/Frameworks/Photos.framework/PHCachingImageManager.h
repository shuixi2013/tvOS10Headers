/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHImageManager.h>

@interface PHCachingImageManager : PHImageManager {

	BOOL _allowsCachingHighQualityImages;

}

@property (assign,nonatomic) BOOL allowsCachingHighQualityImages;              //@synthesize allowsCachingHighQualityImages=_allowsCachingHighQualityImages - In the implementation block
-(id)init;
-(id)description;
-(id)_highPriorityRequestWaitGroup;
-(BOOL)canAvoidTouchingAssetsWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 options:(id)arg3 outBestFormat:(int*)arg4 outBestFormatIsTable:(BOOL*)arg5 outDegradedFormat:(int*)arg6 outDegradedFormatIsTable:(BOOL*)arg7 ;
-(id)_fireCloudDownloadOfImageForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(CGSize)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setAllowsCachingHighQualityImages:(BOOL)arg1 ;
-(BOOL)allowsCachingHighQualityImages;
-(void)startCachingImagesForImageLoadingAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)stopCachingImagesForImageLoadingAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)startCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)stopCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)stopCachingImagesForAllAssets;
@end

