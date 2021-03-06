/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVVideoComposition.h>

@class AVMutableVideoCompositionInternal, NSArray, AVVideoCompositionCoreAnimationTool;

@interface AVMutableVideoComposition : AVVideoComposition {

	AVMutableVideoCompositionInternal* _mutableVideoComposition;

}

@property (assign,nonatomic) int sourceTrackIDForFrameTiming; 
@property (nonatomic,retain) Class customVideoCompositorClass; 
@property (assign,nonatomic) SCD_Struct_AV2 frameDuration; 
@property (assign,nonatomic) CGSize renderSize; 
@property (assign,nonatomic) float renderScale; 
@property (nonatomic,copy) NSArray * instructions; 
@property (nonatomic,retain) AVVideoCompositionCoreAnimationTool * animationTool; 
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2 ;
+(id)videoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(/*^block*/id)arg2 ;
+(id)videoComposition;
-(int)sourceTrackIDForFrameTiming;
-(AVVideoCompositionCoreAnimationTool *)animationTool;
-(id)builtInCompositorName;
-(id)colorPrimaries;
-(id)colorYCbCrMatrix;
-(id)colorTransferFunction;
-(void)setBuiltInCompositorName:(id)arg1 ;
-(Class)customVideoCompositorClass;
-(NSArray *)instructions;
-(void)setInstructions:(NSArray *)arg1 ;
-(void)setSourceTrackIDForFrameTiming:(int)arg1 ;
-(void)setColorPrimaries:(id)arg1 ;
-(void)setColorYCbCrMatrix:(id)arg1 ;
-(void)setColorTransferFunction:(id)arg1 ;
-(void)setRenderSize:(CGSize)arg1 ;
-(void)setRenderScale:(float)arg1 ;
-(void)setAnimationTool:(AVVideoCompositionCoreAnimationTool *)arg1 ;
-(CGSize)renderSize;
-(void)setFrameDuration:(SCD_Struct_AV2)arg1 ;
-(float)renderScale;
-(void)setCustomVideoCompositorClass:(Class)arg1 ;
-(SCD_Struct_AV2)frameDuration;
@end

