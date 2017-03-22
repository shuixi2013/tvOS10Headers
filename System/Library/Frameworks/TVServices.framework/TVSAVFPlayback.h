/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVPlayer;


@protocol TVSAVFPlayback <TVSPlayback>
@property (nonatomic,readonly) AVPlayer * avPlayer; 
@required
-(AVPlayer *)avPlayer;
-(void)removeWeakReferenceToVideoView:(id)arg1;
-(void)addWeakReferenceToVideoView:(id)arg1;

@end

