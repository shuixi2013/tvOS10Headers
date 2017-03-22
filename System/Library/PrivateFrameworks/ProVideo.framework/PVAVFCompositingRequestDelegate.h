/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVRenderRequestDelegate.h>

@class PVVideoCompositingContext, PVVideoCompositing, AVAsynchronousVideoCompositionRequest, PVVideoCompositionInstruction, NSString;

@interface PVAVFCompositingRequestDelegate : NSObject <PVRenderRequestDelegate> {

	PVVideoCompositing* m_compositor;
	AVAsynchronousVideoCompositionRequest* m_request;
	PVVideoCompositionInstruction* m_instruction;
	SCD_Struct_PV14 m_compositionTime;
	BOOL m_thumbnailCompositing;
	CVBufferRef m_destinationPixelBuffer;
	HGCVGLTextureFactory* m_hgCVGLTextureFactory;
	HGRef<PVRenderManager>* m_renderManager;
	HGRef<PVRenderContext>* m_renderContext;

}

@property (readonly) SCD_Struct_PV14 compositionTime; 
@property (readonly) PVVideoCompositionInstruction * compositionInstruction; 
@property (readonly) AVAsynchronousVideoCompositionRequest * compositionRequest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long requestTypeTag; 
@property (readonly) PVVideoCompositingContext * videoCompositingContext; 
+(unsigned long long)requestTypeTag;
-(int)requestPriority;
-(SCD_Struct_PV14)compositionTime;
-(void)finishCancelledRequest;
-(PVVideoCompositingContext *)videoCompositingContext;
-(int)renderContextPriority;
-(unsigned long long)requestTypeTag;
-(void)buildGraph:(vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(int)renderThreadPriority;
-(void)setupDestinationBuffers:(vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(void)finishCompletedRequest;
-(void)requestHandlerFinished:(HGRef<PVRenderRequestHandler>*)arg1 ;
-(void)_setupGLTextureFactory:(const HGRenderContext*)arg1 ;
-(void)_setupInputs:(PVInputHGNodeMap<int>*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(void)_buildGraph:(PVInputHGNodeMap<int>*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 outputNodes:(vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > >*)arg4 ;
-(id)initWithCompositor:(id)arg1 request:(id)arg2 compositionTime:(SCD_Struct_PV14)arg3 thumbnailCompositing:(BOOL)arg4 ;
-(PVVideoCompositionInstruction *)compositionInstruction;
-(AVAsynchronousVideoCompositionRequest *)compositionRequest;
@end

