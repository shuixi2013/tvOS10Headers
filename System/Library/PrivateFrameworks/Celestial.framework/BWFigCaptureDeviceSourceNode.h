/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>
#import <libobjc.A.dylib/BWFigCameraSourceNode.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class BWFigVideoCaptureDevice, BWFigVideoCaptureStream, BWNodeOutput, NSDictionary, NSObject, NSMutableDictionary, NSString;

@interface BWFigCaptureDeviceSourceNode : BWSourceNode <BWFigCameraSourceNode> {

	BWFigVideoCaptureDevice* _captureDevice;
	BWFigVideoCaptureStream* _captureStream;
	OpaqueFigCaptureStreamRef _stream;
	BWNodeOutput* _videoCaptureOutput;
	BWNodeOutput* _stillImageOutput;
	BWNodeOutput* _detectedFacesOutput;
	NSDictionary* _videoCaptureOutputColorInfoOverride;
	NSObject*<OS_dispatch_group> _streamEventNotificationGroup;
	NSObject*<OS_dispatch_queue> _streamEventDispatchQueue;
	BOOL _detectedFacesOutputEnabled;
	BOOL _videoCaptureOutputPixelBufferAttachmentModificationAllowed;
	int _resolvedSensorFormatIndex;
	int _streamSensorFormatIndex;
	unsigned _sensorPixelFormat;
	unsigned _streamSensorPixelFormat;
	int _offlineConfigurationSeed;
	int _resolvedOfflineConfigurationSeed;
	SCD_Struct_BW12 _sensorDimensions;
	SCD_Struct_BW12 _minOutputDimensions;
	int _minOutputDimensionsSensorFormatIndex;
	int _sensorFormatIndex;
	float _minFrameRate;
	float _maxFrameRate;
	float _aeMaxGain;
	int _maxIntegrationTimeOverride;
	BOOL _requiresOverscan;
	BOOL _temporalNoiseReductionEnabled;
	BOOL _chromaNoiseReductionEnabled;
	BOOL _automaticallyEnablesLowLightBoostWhenAvailable;
	BOOL _lowLightBoostSupportedForFormat;
	int _motionAttachmentsSource;
	SCD_Struct_BW12 _outputDimensions;
	SCD_Struct_BW12 _streamOutputDimensions;
	SCD_Struct_BW12 _sensorOverscanDimensions;
	BOOL _streamFormatChangeInFlight;
	SCD_Struct_BW12 _streamOutputDimensionsAfterFormatChange;
	unsigned _streamSensorPixelFormatAfterFormatChange;
	opaqueCMBufferQueueRef _streamQueue;
	opaqueCMBufferQueueTriggerTokenRef _streamQueueTriggerToken;
	NSObject*<OS_dispatch_queue> _bufferServicingQueue;
	opaqueCMBufferQueueRef _stillImageQueue;
	opaqueCMBufferQueueTriggerTokenRef _stillImageQueueTriggerToken;
	NSObject*<OS_dispatch_queue> _stillImageServicingQueue;
	BOOL _deferMetadataDictionaryCreation;
	NSMutableDictionary* _dutyCycleMetadataCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BWFigVideoCaptureDevice * captureDevice; 
@property (readonly) BWFigVideoCaptureStream * captureStream; 
@property (readonly) BWNodeOutput * videoCaptureOutput; 
@property (readonly) BWNodeOutput * stillImageOutput; 
@property (readonly) BWNodeOutput * detectedFacesOutput; 
@property (nonatomic,copy) NSDictionary * videoCaptureOutputColorInfoOverride; 
@property (assign,nonatomic) BOOL videoCaptureOutputPixelBufferAttachmentModificationAllowed; 
+(void)initialize;
+(id)captureDeviceSourceNodeWithCaptureDevice:(id)arg1 ;
+(int)_indexOfFormatInFormatsArray:(id)arg1 matchingSensorDimensions:(SCD_Struct_BW12)arg2 sensorPixelFormat:(unsigned)arg3 sensorFormatIndex:(int)arg4 ;
-(void)dealloc;
-(id)nodeSubType;
-(void)setOutputDimensions:(SCD_Struct_BW12)arg1 ;
-(BWNodeOutput *)videoCaptureOutput;
-(BWNodeOutput *)stillImageOutput;
-(BOOL)stop:(id*)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(BWFigVideoCaptureStream *)captureStream;
-(void)setDetectedFacesOutputEnabled:(BOOL)arg1 ;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(void)setMinFrameRate:(float)arg1 ;
-(void)setMaxFrameRate:(float)arg1 ;
-(void)setTemporalNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setAeMaxGain:(float)arg1 ;
-(int)maxIntegrationTimeOverride;
-(void)setMaxIntegrationTimeOverride:(int)arg1 ;
-(void)updateOutputRequirements;
-(float)aeMaxGain;
-(void)setSensorPixelFormat:(unsigned)arg1 ;
-(void)setSensorDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setSensorFormatIndex:(int)arg1 ;
-(void)setRequiresOverscan:(BOOL)arg1 ;
-(void)setLowLightBoostSupportedForFormat:(BOOL)arg1 ;
-(SCD_Struct_BW12)minOutputDimensions;
-(SCD_Struct_BW12)sensorOverscanDimensions;
-(void)willStop;
-(BOOL)detectedFacesOutputEnabled;
-(BWNodeOutput *)detectedFacesOutput;
-(id)colorInfoForOutput:(id)arg1 ;
-(void)setVideoCaptureOutputPixelBufferAttachmentModificationAllowed:(BOOL)arg1 ;
-(void)setVideoCaptureOutputColorInfoOverride:(NSDictionary *)arg1 ;
-(void)makeCurrentConfigurationLive;
-(BOOL)hasNonLiveConfigurationChanges;
-(int)_bringStreamUpToDate;
-(void)_resolveOfflineConfiguration;
-(BOOL)_haveNonLiveConfigurationChangesWithSensorFormatIndexChanged:(BOOL*)arg1 sensorPixelFormatChanged:(BOOL*)arg2 outputDimensionsChanged:(BOOL*)arg3 ;
-(void)_registerForStreamNotifications;
-(int)_startStreaming;
-(int)_prepareStillImageQueue;
-(int)_stopStreaming;
-(void)_unprepareStillImageQueue;
-(void)_unregisterFromStreamNotifications;
-(id)_initWithCaptureDevice:(id)arg1 ;
-(void)_unprepareStreamQueue;
-(void)_updateMinOutputDimensionsForResolvedSensorFormatIndex;
-(int)_bringStreamFormatIndexUpToDate;
-(void)_bringStreamPixelFormatUpToDate;
-(BOOL)_prepareStreamQueue;
-(int)_updateStreamOutputDimensions;
-(int)_lockFramerateToMaxSupportedByCurrentSensorFormat;
-(void)_updateMetadataConfigurations;
-(void)_updateDutyCycleMetadataCacheForActiveFormatIndex:(long long)arg1 ;
-(SCD_Struct_BW12)_maxOutputDimensionsForResolvedSensorFormatIndex;
-(NSDictionary *)videoCaptureOutputColorInfoOverride;
-(BOOL)videoCaptureOutputPixelBufferAttachmentModificationAllowed;
-(unsigned)sensorPixelFormat;
-(int)sensorFormatIndex;
-(SCD_Struct_BW12)outputDimensions;
-(int)motionAttachmentsSource;
-(BOOL)requiresOverscan;
-(BOOL)temporalNoiseReductionEnabled;
-(BOOL)chromaNoiseReductionEnabled;
-(BOOL)lowLightBoostSupportedForFormat;
-(int)_addCaptureStreamMetadata:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(OpaqueCMClockRef)clock;
-(float)maxFrameRate;
-(BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
-(void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1 ;
-(float)minFrameRate;
-(SCD_Struct_BW12)sensorDimensions;
-(void)setChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(BOOL)start:(id*)arg1 ;
-(BWFigVideoCaptureDevice *)captureDevice;
@end

