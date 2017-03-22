/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRAudioDataBlock.h>

@class MRAudioBuffer;

@interface MRMutableAudioDataBlock : MRAudioDataBlock

@property (nonatomic,retain) MRAudioBuffer * buffer; 
@property (assign,nonatomic) SCD_Struct_MR22 time; 
@property (assign,nonatomic) float gain; 
-(void)setGain:(float)arg1 ;
-(void)setTime:(SCD_Struct_MR22)arg1 ;
-(void)setBuffer:(MRAudioBuffer *)arg1 ;
@end
