/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioTrack.h>

@class NSURL;

@interface RadioStreamTrack : RadioTrack

@property (nonatomic,retain,readonly) NSURL * certificateURL; 
@property (nonatomic,retain,readonly) NSURL * contentURL; 
@property (getter=isITunesStream,nonatomic,readonly) BOOL ITunesStream; 
@property (nonatomic,retain,readonly) NSURL * keyServerURL; 
@property (getter=isSkipable,nonatomic,readonly) BOOL skipable; 
-(NSURL *)certificateURL;
-(NSURL *)keyServerURL;
-(NSURL *)contentURL;
-(BOOL)isITunesStream;
-(BOOL)isSkipable;
@end

