/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MPCPlayerItemContainer.h>

@class MPQueueFeeder;

@interface MPCMediaPlayerLegacyItemContainer : MPCPlayerItemContainer {

	MPQueueFeeder* _queueFeeder;

}

@property (nonatomic,readonly) MPQueueFeeder * queueFeeder;              //@synthesize queueFeeder=_queueFeeder - In the implementation block
-(MPQueueFeeder *)queueFeeder;
-(id)modelPlayEventRepresentation;
-(id)initWithQueueFeeder:(id)arg1 ;
@end

