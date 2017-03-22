/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureAudioDataOutputInternal;

@interface AVCaptureAudioDataOutput : AVCaptureOutput {

	AVCaptureAudioDataOutputInternal* _internal;

}

@property (nonatomic,readonly) id<AVCaptureAudioDataOutputSampleBufferDelegate> sampleBufferDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sampleBufferCallbackQueue; 
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id)supportedAssetWriterOutputFileTypes;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_updateRemoteQueue:(remoteQueueReceiverOpaqueRef)arg1 ;
-(void)_handleRemoteQueueOperation:(FigRemoteOperation*)arg1 ;
-(void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2 ;
-(id<AVCaptureAudioDataOutputSampleBufferDelegate>)sampleBufferDelegate;
-(NSObject*<OS_dispatch_queue>)sampleBufferCallbackQueue;
-(id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnectionForMediaType:(id)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
@end

