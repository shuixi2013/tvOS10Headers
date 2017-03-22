/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSHashTable;

@interface BKSAnimationFenceObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _fencePointerToTraceMap;
	NSMapTable* _fencePointerToTriggerPortMap;
	NSMapTable* _fencePointerToCAPortMap;
	NSMapTable* _triggerPortToFencePointersMap;
	NSMapTable* _triggerPortToDeathWatcherMap;
	NSHashTable* _validDeathWatchersTable;
	unsigned long long _encodeCount;

}
+(id)sharedInstance;
-(BOOL)addFence:(id)arg1 ;
-(void)removeFencePointer:(void*)arg1 ;
-(unsigned long long)nextEncodeIdentifier;
-(void)dealloc;
-(id)init;
-(id)description;
@end

