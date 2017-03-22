/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioPlaybackContext.h>

@class NSArray;

@interface RadioMutablePlaybackContext : RadioPlaybackContext

@property (assign,nonatomic) long long numberOfSkipsUsed; 
@property (nonatomic,copy) NSArray * trackPlaybackDescriptorQueue; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTrackPlaybackDescriptorQueue:(NSArray *)arg1 ;
-(void)setNumberOfSkipsUsed:(long long)arg1 ;
@end

