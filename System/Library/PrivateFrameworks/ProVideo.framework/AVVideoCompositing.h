/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol AVVideoCompositing <NSObject>
@property (nonatomic,readonly) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) NSDictionary * requiredPixelBufferAttributesForRenderContext; 
@property (nonatomic,readonly) BOOL supportsWideColorSourceFrames; 
@optional
-(void)cancelAllPendingVideoCompositionRequests;
-(BOOL)supportsWideColorSourceFrames;

@required
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)renderContextChanged:(id)arg1;
-(void)startVideoCompositionRequest:(id)arg1;
-(NSDictionary *)requiredPixelBufferAttributesForRenderContext;

@end

