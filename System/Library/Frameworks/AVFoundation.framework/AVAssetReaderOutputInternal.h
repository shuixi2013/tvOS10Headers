/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSArray, AVRunLoopCondition;

@interface AVAssetReaderOutputInternal : NSObject {

	AVWeakReference* weakReference;
	BOOL alwaysCopiesSampleData;
	BOOL supportsRandomAccess;
	NSArray* currentTimeRanges;
	AVWeakReference* weakReferenceToAssetReader;
	OpaqueFigAssetReaderRef figAssetReader;
	int extractionID;
	AVRunLoopCondition* sampleBufferAvailabilityCondition;
	BOOL currentConfigurationIsFinal;
	BOOL extractionCompleteForCurrentConfiguration;
	int finished;

}
@end

