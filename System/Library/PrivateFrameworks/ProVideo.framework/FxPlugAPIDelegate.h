/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FxPlugAPIDelegate
@required
-(id)displayName;
-(unsigned)parameterCount;
-(void)removeParameter:(unsigned)arg1;
-(FigTime*)convertToFigTime:(double)arg1;
-(double)convertFromFigTime:(const FigTime*)arg1;
-(void)updateInspector;
-(void)markForDynamicParameterUsage;
-(FigTime*)fxTimeToFigTime:(/*function pointer*/void**)arg1 withConversionData:(void*)arg2;
-(void)preChannelChange:(OZChannelBase*)arg1 flagsOnly:(BOOL)arg2;
-(void*)beginTimingOperation:(FigTime)arg1 forChannel:(OZChannelBase*)arg2;
-(void)endTimingOperation:(void*)arg1;
-(void)postChannelChange:(OZChannelBase*)arg1 flagsOnly:(BOOL)arg2;
-(OZChannelFolder*)rootChannel;
-(OZChannelBase*)channelWithID:(int)arg1;
-(OZChannelBase*)parameterAtIndex:(unsigned)arg1;
-(BOOL)usesRationalTime;
-(void)beginOperationWithChannel:(OZChannelBase*)arg1;
-(void)endOperationWithChannel:(OZChannelBase*)arg1;
-(union*)figTimeToFxTime:(const FigTime*)arg1 withConversionData:(void*)arg2;

@end

