/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _CDInteractionStoreNotifier : NSObject {

	int _notifierToken;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(id)init;
-(void)recorded:(id)arg1 ;
-(void)postPackedMechanisms:(unsigned long long)arg1 ;
-(void)deleted;
@end

