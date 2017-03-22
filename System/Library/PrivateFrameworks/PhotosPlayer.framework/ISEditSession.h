/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class NSObject, AVAsset, NSDictionary, CIContext, AVAssetExportSession, CIImage, NSString, NSURL;

@interface ISEditSession : NSObject {

	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _renderQueue;
	AVAsset* _videoAsset;
	SCD_Struct_IS4 _inputVideoDuration;
	SCD_Struct_IS4 _photoTime;
	CGImageSourceRef _inputImageSource;
	unsigned _inputOrientation;
	NSDictionary* _inputImageProperties;
	CIContext* _renderContext;
	AVAssetExportSession* _exportSession;
	CIImage* _inputImage;
	CIImage* _subsampledInputImage;
	long long _subsampleFactor;
	CIImage* _outputImage;
	CIImage* _scaledOutputImage;
	double _inputVideoScale;
	CGSize _inputVideoScaleRoundingError;
	/*^block*/id _frameProcessor;
	NSString* _temporaryDirectory;
	NSURL* _lastTemporaryVideoURL;
	NSString* _uniqueIdentifier;
	BOOL _isExporting;
	float _audioVolume;

}

@property (readonly) SCD_Struct_IS4 duration; 
@property (readonly) SCD_Struct_IS4 photoTime;              //@synthesize photoTime=_photoTime - In the implementation block
@property (readonly) unsigned orientation; 
@property (readonly) CIImage * inputImage; 
@property (copy) id frameProcessor; 
@property (assign) float audioVolume;                       //@synthesize audioVolume=_audioVolume - In the implementation block
@property (readonly) CGSize outputImageSize; 
@property (readonly) CGSize outputVideoSize; 
+(id)temporaryDirectory;
+(id)_createTemporaryDirectory;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(SCD_Struct_IS4)duration;
-(unsigned)orientation;
-(id)outputImage;
-(float)audioVolume;
-(void)setAudioVolume:(float)arg1 ;
-(CGSize)outputImageSize;
-(SCD_Struct_IS4)photoTime;
-(id)initWithPhotoURL:(id)arg1 videoURL:(id)arg2 photoTime:(SCD_Struct_IS4)arg3 photoOrientation:(unsigned)arg4 ;
-(id)frameProcessor;
-(void)setFrameProcessor:(id)arg1 ;
-(void)prepareForPlaybackWithTargetSize:(CGSize)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)exportToDestination:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(CIImage *)inputImage;
-(SCD_Struct_IS4)_inputVideoDuration;
-(SCD_Struct_IS4)_loadInputVideoDuration;
-(unsigned)_inputOrientation;
-(unsigned)_loadInputImageOrientation;
-(id)_inputImageProperties;
-(id)_loadInputImageProperties;
-(id)_inputImage;
-(id)_loadInputImage;
-(id)_loadInputImageWithSubsampleFactor:(long long)arg1 ;
-(id)_scaledInputImageForTargetScale:(double)arg1 ;
-(id)_inputVideoTrack;
-(CGSize)_inputImageSize;
-(CGSize)_inputVideoSize;
-(id)_outputImage;
-(id)_processImage:(id)arg1 scale:(double)arg2 error:(id*)arg3 ;
-(CGSize)_outputImageSize;
-(CGSize)_outputVideoSize;
-(double)_inputVideoScale;
-(CGAffineTransform)_inputVideoTransform;
-(double)_targetScaleForTargetSize:(CGSize)arg1 ;
-(CGSize)_outputVideoSizeForScale:(double)arg1 ;
-(void)_cancelCurrentExportIfNeeded;
-(void)_prepareForPlaybackWithTargetSize:(CGSize)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_canRenderAtPlaybackTime;
-(void)_renderImageWithTargetSize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_videoCompositionForTargetSize:(CGSize)arg1 ;
-(id)_temporaryURLOfType:(id)arg1 ;
-(void)_renderVideoToURL:(id)arg1 fileType:(id)arg2 targetSize:(CGSize)arg3 volume:(float)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_outputImageProperties;
-(id)_outputVideoMetadata;
-(void)_exportToDestination:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_renderImageToURL:(id)arg1 fileType:(id)arg2 targetSize:(CGSize)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)imageProperties;
-(id)inputImageForRenderScale:(double)arg1 ;
-(CGSize)outputVideoSize;
@end
