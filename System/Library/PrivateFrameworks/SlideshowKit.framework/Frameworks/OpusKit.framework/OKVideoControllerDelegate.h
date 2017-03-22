/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OKVideoControllerDelegate <NSObject>
@optional
-(void)videoPlayerControllerIsReadyToPlay:(id)arg1;
-(void)videoPlayerController:(id)arg1 stateDidChange:(unsigned long long)arg2;
-(void)videoPlayerController:(id)arg1 bufferingStateDidChange:(unsigned long long)arg2;

@required
-(void)videoPlayerController:(id)arg1 didStartPlayingItem:(id)arg2;
-(void)videoPlayerController:(id)arg1 didFinishPlayingItem:(id)arg2;
-(void)videoPlayerController:(id)arg1 didFailToPlayItem:(id)arg2;

@end
