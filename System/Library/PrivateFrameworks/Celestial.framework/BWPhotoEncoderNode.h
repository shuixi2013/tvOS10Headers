/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, FigCapturePixelConverter, NSDictionary;

@interface BWPhotoEncoderNode : BWNode {

	NSObject*<OS_dispatch_queue> _previewGenerationQueue;
	NSObject*<OS_dispatch_group> _previewGenerationGroup;
	FigCapturePixelConverter* _previewPixelConverter;
	SCD_Struct_BW12 _sourceVideoDimensions;
	FigPhotoCompressionSessionRef _compressionSession;
	FigCapturePixelConverter* _jpegPixelConverter;
	BOOL _croppingEnabled;
	NSDictionary* _inputColorInfo;

}
+(void)initialize;
+(CGRect)_cropRectForSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 whenEnabled:(BOOL)arg3 ;
+(void)_updateMetadataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 whenCroppingEnabled:(BOOL)arg3 ;
+(BOOL)_croppingRequiredForSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 whenEnabled:(BOOL)arg3 ;
+(void)_addQualityOptionsToDictionary:(id)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 stillImageSettings:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setInputColorInfo:(id)arg1 ;
-(void)setCroppingEnabled:(BOOL)arg1 ;
-(void)setSourceVideoDimensions:(SCD_Struct_BW12)arg1 ;
-(int)_generatePreviewForSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 cropRect:(CGRect)arg3 previewPixelBuffer:(_CVBuffer*)arg4 ;
-(int)_encodePhotoForSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 cropRect:(CGRect)arg3 outputSurfaceImageSize:(CGSize*)arg4 ;
-(IOSurfaceRef)_closeContainerAndCopySurfaceWithSurfaceSize:(unsigned long long*)arg1 ;
-(BOOL)croppingEnabled;
-(id)inputColorInfo;
-(SCD_Struct_BW12)sourceVideoDimensions;
-(int)_addThumbnailFromBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 cropRect:(CGRect)arg3 maxPixelSize:(unsigned long long)arg4 ;
@end

