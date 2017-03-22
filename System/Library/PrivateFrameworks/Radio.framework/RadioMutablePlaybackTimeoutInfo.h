/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioPlaybackTimeoutInfo.h>

@interface RadioMutablePlaybackTimeoutInfo : RadioPlaybackTimeoutInfo
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeAllPlaybackTimeouts;
-(void)setDockedPlaybackTimeout:(double)arg1 forPlaybackType:(long long)arg2 ;
-(void)setLockedPlaybackTimeout:(double)arg1 forPlaybackType:(long long)arg2 ;
-(void)setPausedPlaybackTimeout:(double)arg1 forPlaybackType:(long long)arg2 ;
-(void)setUnlockedPlaybackTimeout:(double)arg1 forPlaybackType:(long long)arg2 ;
@end

