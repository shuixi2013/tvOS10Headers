/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface LocalAttachmentCleanUpSupport : NSObject {

	NSObject*<OS_dispatch_source> _source;

}
-(void)dealloc;
-(id)init;
-(void)interruptNextScheduledCleanup;
-(void)_dispatchCleanupAfterDelay:(long long)arg1 ;
-(void)scheduleNextCleanup;
-(void)_setTimerOnSource:(long long)arg1 ;
-(void)cleanUpOrphanedFiles;
@end

