/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVVideoCompositing.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSDictionary, NSObject, CIContext, NSString;

@interface AVCoreImageFilterCustomVideoCompositor : NSObject <AVVideoCompositing> {

	NSObject*<OS_dispatch_group> _filteringRequestsInFlight;
	BOOL _shouldCancelAllRequests;
	CGColorSpaceRef _dstColorSpace;
	NSObject*<OS_dispatch_queue> _defaultCIContextThreadSafety;
	CIContext* _defaultCIContext;

}

@property (assign) BOOL shouldCancelAllRequests;                                                          //@synthesize shouldCancelAllRequests=_shouldCancelAllRequests - In the implementation block
@property (readonly) NSObject*<OS_dispatch_group> filteringRequestsInFlight;                              //@synthesize filteringRequestsInFlight=_filteringRequestsInFlight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) NSDictionary * requiredPixelBufferAttributesForRenderContext; 
@property (nonatomic,readonly) BOOL supportsWideColorSourceFrames; 
+(void)initialize;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)renderContextChanged:(id)arg1 ;
-(void)startVideoCompositionRequest:(id)arg1 ;
-(void)cancelAllPendingVideoCompositionRequests;
-(NSDictionary *)requiredPixelBufferAttributesForRenderContext;
-(BOOL)supportsWideColorSourceFrames;
-(void)_willDeallocOrFinalize;
-(BOOL)shouldCancelAllRequests;
-(id)defaultCIContext;
-(NSObject*<OS_dispatch_group>)filteringRequestsInFlight;
-(void)setShouldCancelAllRequests:(BOOL)arg1 ;
@end

