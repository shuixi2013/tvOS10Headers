/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class AVPlayerLayer, AVPlayer;

@interface PLAVPlayerView : UIView {

	long long _scaleMode;

}

@property (nonatomic,retain,readonly) AVPlayerLayer * layer; 
@property (nonatomic,retain) AVPlayer * player; 
@property (assign,nonatomic) long long scaleMode;                         //@synthesize scaleMode=_scaleMode - In the implementation block
@property (nonatomic,readonly) CGRect videoRect; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)player;
-(long long)scaleMode;
-(void)setScaleMode:(long long)arg1 ;
-(void)setScaleMode:(long long)arg1 duration:(double)arg2 ;
-(CGRect)videoRect;
@end

