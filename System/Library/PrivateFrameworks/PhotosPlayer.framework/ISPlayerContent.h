/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class AVPlayerItem, ISCrossfadeItem;

@interface ISPlayerContent : NSObject {

	BOOL _photoHasColorAdjustments;
	int _photoEXIFOrientation;
	float _videoCropFactor;
	CGImageRef _photo;
	double _photoTime;
	AVPlayerItem* _videoPlayerItem;
	ISCrossfadeItem* _crossfadeItem;

}

@property (nonatomic,readonly) CGImageRef photo;                             //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) int photoEXIFOrientation;                     //@synthesize photoEXIFOrientation=_photoEXIFOrientation - In the implementation block
@property (nonatomic,readonly) double photoTime;                             //@synthesize photoTime=_photoTime - In the implementation block
@property (nonatomic,readonly) AVPlayerItem * videoPlayerItem;               //@synthesize videoPlayerItem=_videoPlayerItem - In the implementation block
@property (nonatomic,readonly) ISCrossfadeItem * crossfadeItem;              //@synthesize crossfadeItem=_crossfadeItem - In the implementation block
@property (nonatomic,readonly) BOOL photoHasColorAdjustments;                //@synthesize photoHasColorAdjustments=_photoHasColorAdjustments - In the implementation block
@property (nonatomic,readonly) float videoCropFactor;                        //@synthesize videoCropFactor=_videoCropFactor - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGImageRef)photo;
-(double)photoTime;
-(AVPlayerItem *)videoPlayerItem;
-(ISCrossfadeItem *)crossfadeItem;
-(BOOL)photoHasColorAdjustments;
-(float)videoCropFactor;
-(id)initWithPhoto:(CGImageRef)arg1 photoEXIFOrientation:(int)arg2 photoTime:(double)arg3 photoHasColorAdjustments:(BOOL)arg4 videoPlayerItem:(id)arg5 videoCropFactor:(float)arg6 crossfadeItem:(id)arg7 ;
-(int)photoEXIFOrientation;
@end
