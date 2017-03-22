/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWFigVideoCaptureStreamDelegate, OS_dispatch_queue, BWFigVideoCaptureStreamStillImageCaptureDelegate, OS_dispatch_group;
#import <Celestial/Celestial-Structs.h>
@class NSDictionary, NSString, NSArray, BWStillImageTimeMachine, NSMutableArray, NSObject;

@interface BWFigVideoCaptureStream : NSObject {

	OpaqueFigCaptureStreamRef _stream;
	BOOL _streaming;
	NSDictionary* _attributes;
	NSString* _portType;
	float _minimumFrameRate;
	float _maximumFrameRate;
	NSDictionary* _supportedProperties;
	NSArray* _supportedFormats;
	long long _activeFormatIndex;
	BOOL _multiStreamEnabled;
	NSDictionary* _moduleInfo;
	NSDictionary* _sensorIDDictionary;
	id<BWFigVideoCaptureStreamDelegate> _delegate;
	float _baseZoomFactor;
	NSDictionary* _opticalCenter;
	float _pixelSize;
	float _gravityFactor;
	int _cameraAccessLock;
	BOOL _clientProcessHasAccessToCamera;
	BOOL _hasSphere;
	BOOL _sphereVideoSupported;
	BOOL _sphereVideoEnabled;
	BOOL _avoidsSphereRecentering;
	int _sphereLock;
	BOOL _enablesSphereWhenAvailable;
	BOOL _sphereEnabled;
	BOOL _motionDataInvalid;
	BOOL _timeMachineEnabled;
	int _timeMachineCapacity;
	BWStillImageTimeMachine* _timeMachine;
	int _stillImageCaptureStateLock;
	BOOL _grabNextFrame;
	int _activeStillImagePrimaryCaptureType;
	int _activeStillImageCaptureType;
	BOOL _activeStillImageCaptureIsMultiCameraCaptureAndFusion;
	int _lastStillImageCaptureType;
	SCD_Struct_BW2 _lastStillImagePTS;
	BOOL _usesStillFusionReferenceFramePTSForDidCaptureCallback;
	NSMutableArray* _stillFusionBracketFramesMetadata;
	SCD_Struct_BW2 _HDRStillCaptureReferenceFramePTS;
	int _skippedFramesCountForAF;
	int _expectedImagesOrErrorsForCaptureStillImageNow;
	int _receivedImagesOrErrorsForCaptureStillImageNow;
	/*^block*/id _stillImageBufferTimeMachineHandler;
	BOOL _stillImageCaptureEnabled;
	NSObject*<OS_dispatch_queue> _streamNotificationDispatchQueue;
	BOOL _providesPreBracketedEV0;
	BOOL _flashEnabled;
	id<BWFigVideoCaptureStreamStillImageCaptureDelegate> _stillImageCaptureDelegate;
	NSObject*<OS_dispatch_group> _stillImageCaptureDelegateDispatchGroup;
	BOOL _faceDetectionMetadataRequested;
	BOOL _defersFaceDetectionStartup;
	NSDictionary* _faceDetectionConfiguration;
	OpaqueFigSimpleMutexRef _faceDetectionConfigurationMutex;
	BOOL _faceDetectionEnabled;
	BOOL _synchronizedStreamsEnabled;
	BOOL _streamingEnabledWhenConfiguredAsSlave;
	int _masterToSlaveFrameRateRatio;
	NSDictionary* _geometricDistortionCoefficients;

}

@property (readonly) OpaqueFigCaptureStreamRef stream; 
@property (readonly) NSDictionary * attributes; 
@property (assign,nonatomic) id<BWFigVideoCaptureStreamDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL multiStreamEnabled; 
@property (readonly) NSString * portType; 
@property (readonly) NSArray * supportedFormats; 
@property (readonly) NSDictionary * moduleInfo; 
@property (readonly) NSString * sensorIDString; 
@property (readonly) NSDictionary * sensorIDDictionary; 
@property (readonly) NSDictionary * geometricDistortionCoefficients; 
@property (readonly) BOOL synchronizedStreamsEnabled; 
@property (readonly) float baseZoomFactor; 
@property (readonly) NSDictionary * opticalCenter; 
@property (readonly) float pixelSize; 
@property (readonly) float gravityFactor; 
@property (assign,nonatomic) float minimumFrameRate; 
@property (assign,nonatomic) float maximumFrameRate; 
@property (nonatomic,readonly) float maximumAllowedFrameRate; 
@property (nonatomic,readonly) float minimumAllowedFrameRate; 
@property (readonly) BOOL hasSphere; 
@property (assign,nonatomic) BOOL enablesSphereWhenAvailable; 
@property (readonly) BOOL sphereEnabled; 
@property (readonly) BOOL sphereVideoSupported; 
@property (assign,nonatomic) BOOL sphereVideoEnabled;                                                                     //@synthesize sphereVideoEnabled=_sphereVideoEnabled - In the implementation block
@property (assign,nonatomic) BOOL avoidsSphereRecentering;                                                                //@synthesize avoidsSphereRecentering=_avoidsSphereRecentering - In the implementation block
@property (readonly) BOOL motionDataInvalid; 
@property (assign,nonatomic) BOOL defersFaceDetectionStartup; 
@property (nonatomic,readonly) BOOL streaming;                                                                            //@synthesize streaming=_streaming - In the implementation block
@property (assign,nonatomic) BOOL stillImageCaptureEnabled; 
@property (assign,nonatomic) id<BWFigVideoCaptureStreamStillImageCaptureDelegate> stillImageCaptureDelegate;              //@synthesize stillImageCaptureDelegate=_stillImageCaptureDelegate - In the implementation block
@property (assign,nonatomic) BOOL usesStillFusionReferenceFramePTSForDidCaptureCallback;                                  //@synthesize usesStillFusionReferenceFramePTSForDidCaptureCallback=_usesStillFusionReferenceFramePTSForDidCaptureCallback - In the implementation block
@property (readonly) int timeMachineCapacity; 
@property (assign,nonatomic) BOOL timeMachineEnabled; 
@property (nonatomic,copy) id stillImageBufferTimeMachineHandler; 
@property (nonatomic,readonly) int activeStillImageCaptureType;                                                           //@synthesize activeStillImageCaptureType=_activeStillImageCaptureType - In the implementation block
@property (nonatomic,readonly) BOOL providesPreBracketedEV0;                                                              //@synthesize providesPreBracketedEV0=_providesPreBracketedEV0 - In the implementation block
@property (nonatomic,readonly) int lastStillImageCaptureType;                                                             //@synthesize lastStillImageCaptureType=_lastStillImageCaptureType - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2 lastStillImagePTS;                                                          //@synthesize lastStillImagePTS=_lastStillImagePTS - In the implementation block
+(void)initialize;
-(void)setDelegate:(id<BWFigVideoCaptureStreamDelegate>)arg1 ;
-(void)dealloc;
-(id<BWFigVideoCaptureStreamDelegate>)delegate;
-(NSDictionary *)attributes;
-(NSArray *)supportedFormats;
-(float)minimumFrameRate;
-(void)setMinimumFrameRate:(float)arg1 ;
-(float)maximumFrameRate;
-(void)setMaximumFrameRate:(float)arg1 ;
-(void)startupFaceDetectionIfNeeded;
-(long long)activeFormatIndex;
-(int)setActiveFormatIndex:(long long)arg1 ;
-(BOOL)stillImageCaptureEnabled;
-(void)setStillImageCaptureEnabled:(BOOL)arg1 ;
-(BOOL)providesPreBracketedEV0;
-(void)unregisterForFaceDetectionMetadata;
-(BOOL)sphereVideoEnabled;
-(NSString *)portType;
-(float)baseZoomFactor;
-(void)setDefersFaceDetectionStartup:(BOOL)arg1 ;
-(BOOL)hasSphere;
-(void)setEnablesSphereWhenAvailable:(BOOL)arg1 ;
-(void)setAvoidsSphereRecentering:(BOOL)arg1 ;
-(BOOL)sphereVideoSupported;
-(void)setSphereVideoEnabled:(BOOL)arg1 ;
-(NSDictionary *)sensorIDDictionary;
-(NSString *)sensorIDString;
-(void)_updateSphereMode;
-(id)_activeFormatNumberValueForKey:(CFStringRef)arg1 ;
-(void)_setFaceDetectionEnabled:(BOOL)arg1 ;
-(void)_updateFaceDetectionEnabledOnStream;
-(int)_updateFaceDetectionConfigurationOnStream:(id)arg1 ;
-(void)_addCaptureStreamAttachmentsToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)sphereEnabled;
-(void)_updateMotionDataStatus:(opaqueCMSampleBufferRef)arg1 ;
-(void)_serviceTimeMachineWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 withError:(int)arg2 fromTimeMachine:(BOOL)arg3 ;
-(void)_prepareForStillImageCaptureWithStillImageSettings:(id)arg1 fromCMTimeMachine:(BOOL)arg2 ;
-(void)_resetStillImageCaptureState;
-(BOOL)_updateCaptureStateWithStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 orError:(int)arg2 ;
-(id)initWithFigCaptureStream:(OpaqueFigCaptureStreamRef)arg1 attributes:(id)arg2 sensorIDDictionary:(id)arg3 synchronizedStreamsEnabled:(BOOL)arg4 ;
-(OpaqueFigCaptureStreamRef)stream;
-(BOOL)multiStreamEnabled;
-(NSDictionary *)moduleInfo;
-(NSDictionary *)geometricDistortionCoefficients;
-(NSDictionary *)opticalCenter;
-(float)gravityFactor;
-(BOOL)synchronizedStreamsEnabled;
-(float)maximumAllowedFrameRate;
-(float)minimumAllowedFrameRate;
-(BOOL)enablesSphereWhenAvailable;
-(void)setMotionDataInvalid:(BOOL)arg1 ;
-(BOOL)motionDataInvalid;
-(void)registerForFaceDetectionMetadata;
-(void)enableFaceDetectionForAutoFocus;
-(BOOL)defersFaceDetectionStartup;
-(void)sourceNodeWillStartStreaming;
-(void)sourceNodeDidStartStreaming;
-(void)sourceNodeWillStopStreaming;
-(void)sourceNodeDidStopStreaming;
-(void)sourceNodeWillEmitVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sourceNodeWillEmitVideoPreviewSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sourceNodeWillDiscardVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sourceNodeWillEmitStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sourceNodeWillEmitStillImageQuadraBufferProcessingError:(int)arg1 ;
-(void)sourceNodeWillEmitDetectedFacesSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)timeMachineCapacity;
-(void)setTimeMachineEnabled:(BOOL)arg1 ;
-(BOOL)timeMachineEnabled;
-(void)setStillImageBufferTimeMachineHandler:(id)arg1 ;
-(id)stillImageBufferTimeMachineHandler;
-(void)captureStillImageFromTimeMachineWithStillImageSettings:(id)arg1 ;
-(void)prepareForStillImageCaptureFromFirmwareWithStillImageSettings:(id)arg1 ;
-(void)willCaptureStillImageFromFirmware;
-(void)failedToCaptureStillImageFromFirmwareWithError:(int)arg1 ;
-(void)setStreamingEnabledWhenConfiguredAsSlave:(BOOL)arg1 masterToSlaveFrameRateRatio:(int)arg2 ;
-(BOOL)avoidsSphereRecentering;
-(id<BWFigVideoCaptureStreamStillImageCaptureDelegate>)stillImageCaptureDelegate;
-(void)setStillImageCaptureDelegate:(id<BWFigVideoCaptureStreamStillImageCaptureDelegate>)arg1 ;
-(BOOL)usesStillFusionReferenceFramePTSForDidCaptureCallback;
-(void)setUsesStillFusionReferenceFramePTSForDidCaptureCallback:(BOOL)arg1 ;
-(int)activeStillImageCaptureType;
-(int)lastStillImageCaptureType;
-(SCD_Struct_BW2)lastStillImagePTS;
-(void)setFaceDetectionConfiguration:(id)arg1 ;
-(BOOL)supportsProperty:(CFStringRef)arg1 ;
-(BOOL)streaming;
-(float)pixelSize;
@end

