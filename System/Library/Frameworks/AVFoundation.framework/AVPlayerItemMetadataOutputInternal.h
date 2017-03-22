/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSArray, AVWeakReferencingDelegateStorage, NSObject, AVWeakReference;

@interface AVPlayerItemMetadataOutputInternal : NSObject {

	NSArray* metadataIdentifiers;
	AVWeakReferencingDelegateStorage* delegateStorage;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	NSObject*<OS_dispatch_queue> accumulationQueue;
	AVWeakReference* weakReferenceToHost;
	double advanceInterval;
	CFDictionaryRef accumulatedMetadataGroups;

}
@end

