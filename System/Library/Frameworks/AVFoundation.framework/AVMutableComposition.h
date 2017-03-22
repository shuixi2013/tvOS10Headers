/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVComposition.h>

@class AVMutableCompositionInternal, NSArray;

@interface AVMutableComposition : AVComposition {

	AVMutableCompositionInternal* _mutablePriv;

}

@property (nonatomic,readonly) NSArray * tracks; 
@property (assign,nonatomic) CGSize naturalSize; 
+(id)compositionWithURLAssetInitializationOptions:(id)arg1 ;
+(id)composition;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)naturalSize;
-(id)_initWithComposition:(id)arg1 ;
-(id)_newTrackForIndex:(long long)arg1 ;
-(void)_notifyTracksThatSegmentsWillChange:(id)arg1 ;
-(void)_notifyTracksThatSegmentsDidChange:(id)arg1 successfully:(BOOL)arg2 ;
-(BOOL)insertTimeRange:(SCD_Struct_AV3)arg1 ofAsset:(id)arg2 atTime:(SCD_Struct_AV2)arg3 error:(id*)arg4 ;
-(void)insertEmptyTimeRange:(SCD_Struct_AV3)arg1 ;
-(id)mutableTrackCompatibleWithTrack:(id)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(id)trackWithTrackID:(int)arg1 ;
-(NSArray *)tracks;
-(id)tracksWithMediaType:(id)arg1 ;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(void)removeTimeRange:(SCD_Struct_AV3)arg1 ;
-(void)scaleTimeRange:(SCD_Struct_AV3)arg1 toDuration:(SCD_Struct_AV2)arg2 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(id)addMutableTrackWithMediaType:(id)arg1 preferredTrackID:(int)arg2 ;
-(void)removeTrack:(id)arg1 ;
@end

