/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPAdvanceRepeatModeCommandEvent : MPRemoteCommandEvent {

	BOOL _preservesRepeatMode;

}

@property (nonatomic,readonly) BOOL preservesRepeatMode;              //@synthesize preservesRepeatMode=_preservesRepeatMode - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(BOOL)preservesRepeatMode;
@end

