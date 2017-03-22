/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PASampling/PASampling-Structs.h>
@class PASampleAggregatorOptions, PASampleTimeSeriesDataStore, NSMutableSet, NSMutableArray;

@interface PASampleAggregator : NSObject {

	PASampleAggregatorOptions* _options;
	PASampleTimeSeriesDataStore* _sampleStore;
	NSMutableSet* _tasks;
	NSMutableArray* _wallTimestamps;
	NSMutableArray* _machTimestamps;

}

@property (retain) PASampleAggregatorOptions * options;                      //@synthesize options=_options - In the implementation block
@property (retain) NSMutableSet * tasks;                                     //@synthesize tasks=_tasks - In the implementation block
@property (readonly) PASampleTimeSeriesDataStore * sampleStore;              //@synthesize sampleStore=_sampleStore - In the implementation block
@property (readonly) unsigned long long count; 
@property (assign) BOOL displayHeader; 
@property (assign) BOOL displayBody; 
@property (assign) BOOL displayFooter; 
@property (assign) BOOL tabDelineateBinaryImageSections; 
@property (assign) BOOL binaryImagesBeforeStacks; 
@property (assign) BOOL displayFrameAddresses; 
@property (assign) BOOL displaySub1MsCpuTime; 
@property (assign) BOOL displayStateChangesOnIdleThreads; 
@property (assign) BOOL displayOffsetsFromUnnamedSymbols; 
@property (assign) BOOL displaySymbolInformation; 
@property (assign) BOOL displayBinaryImageAddresses; 
@property (assign) BOOL displayBinaryImagesLackingNameOrPath; 
@property (assign) BOOL displayRunningThreads; 
@property (assign) BOOL displayRunnableThreads; 
@property (assign) BOOL displayBlockedThreads; 
@property (assign) BOOL displayProcessFirstLastTimes; 
@property (assign) BOOL displayIdleWorkQueueThreads; 
@property (assign) BOOL displayAllBinaries; 
@property (assign) BOOL verbose; 
-(unsigned long long)count;
-(PASampleAggregatorOptions *)options;
-(void)setOptions:(PASampleAggregatorOptions *)arg1 ;
-(void)setSamples:(id)arg1 ;
-(BOOL)verbose;
-(void)setVerbose:(BOOL)arg1 ;
-(BOOL)displayFrameAddresses;
-(BOOL)displayStateChangesOnIdleThreads;
-(BOOL)displaySub1MsCpuTime;
-(BOOL)displayProcessFirstLastTimes;
-(BOOL)displayOffsetsFromUnnamedSymbols;
-(BOOL)displaySymbolInformation;
-(BOOL)displayBinaryImageAddresses;
-(BOOL)displayBinaryImagesLackingNameOrPath;
-(BOOL)displayRunningThreads;
-(BOOL)displayRunnableThreads;
-(BOOL)displayBlockedThreads;
-(BOOL)displayIdleWorkQueueThreads;
-(BOOL)displayAllBinaries;
-(void)setDisplayFrameAddresses:(BOOL)arg1 ;
-(void)setDisplayStateChangesOnIdleThreads:(BOOL)arg1 ;
-(void)setDisplaySub1MsCpuTime:(BOOL)arg1 ;
-(void)setDisplayProcessFirstLastTimes:(BOOL)arg1 ;
-(void)setDisplayOffsetsFromUnnamedSymbols:(BOOL)arg1 ;
-(void)setDisplaySymbolInformation:(BOOL)arg1 ;
-(void)setDisplayBinaryImageAddresses:(BOOL)arg1 ;
-(void)setDisplayBinaryImagesLackingNameOrPath:(BOOL)arg1 ;
-(void)setDisplayRunningThreads:(BOOL)arg1 ;
-(void)setDisplayRunnableThreads:(BOOL)arg1 ;
-(void)setDisplayBlockedThreads:(BOOL)arg1 ;
-(void)setDisplayIdleWorkQueueThreads:(BOOL)arg1 ;
-(void)setDisplayAllBinaries:(BOOL)arg1 ;
-(BOOL)displayHeader;
-(void)setDisplayHeader:(BOOL)arg1 ;
-(BOOL)displayBody;
-(void)setDisplayBody:(BOOL)arg1 ;
-(BOOL)displayFooter;
-(void)setDisplayFooter:(BOOL)arg1 ;
-(BOOL)tabDelineateBinaryImageSections;
-(void)setTabDelineateBinaryImageSections:(BOOL)arg1 ;
-(BOOL)binaryImagesBeforeStacks;
-(void)setBinaryImagesBeforeStacks:(BOOL)arg1 ;
-(NSMutableSet *)tasks;
-(double)wallTimeAtTimestampIndex:(unsigned long long)arg1 ;
-(PASampleTimeSeriesDataStore *)sampleStore;
-(void)printDateToOutputStream:(id)arg1 ;
-(void)printHeaderToOutputStream:(id)arg1 ;
-(id)sortedTasks;
-(void)printFooterToOutputStream:(id)arg1 ;
-(void)_printToOutputStream:(id)arg1 ;
-(id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1 ;
-(id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(void)setTasks:(NSMutableSet *)arg1 ;
-(id)initWithSampleStore:(id)arg1 ;
-(void)setHeaderOnly:(BOOL)arg1 ;
-(double)machTimeAtTimestampIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstTimestampIndexAfterWallTime:(double)arg1 ;
-(unsigned long long)firstTimestampIndexAfterMachTime:(double)arg1 ;
-(void)printToStream:(_sFILE*)arg1 ;
-(void)printToMutableData:(id)arg1 ;
@end

