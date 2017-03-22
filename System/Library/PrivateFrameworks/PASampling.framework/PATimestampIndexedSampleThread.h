/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PASampleThreadData;

@interface PATimestampIndexedSampleThread : NSObject {

	unsigned long long _lastTimestampIndex;
	PASampleThreadData* _sampleThread;

}

@property (assign) unsigned long long lastTimestampIndex;              //@synthesize lastTimestampIndex=_lastTimestampIndex - In the implementation block
@property (readonly) PASampleThreadData * sampleThread;                //@synthesize sampleThread=_sampleThread - In the implementation block
-(id)debugDescription;
-(unsigned long long)lastTimestampIndex;
-(void)setLastTimestampIndex:(unsigned long long)arg1 ;
-(id)initWithSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(PASampleThreadData *)sampleThread;
@end

