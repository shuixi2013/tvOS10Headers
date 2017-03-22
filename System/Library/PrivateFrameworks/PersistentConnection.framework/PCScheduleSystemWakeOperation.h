/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSDate, NSString;

@interface PCScheduleSystemWakeOperation : NSOperation {

	BOOL _scheduleOrCancel;
	BOOL _userVisible;
	NSDate* _wakeDate;
	double _acceptableDelay;
	NSString* _serviceIdentifier;
	void* _unqiueIdentifier;

}
-(id)initForScheduledWake:(BOOL)arg1 wakeDate:(id)arg2 acceptableDelay:(double)arg3 userVisible:(BOOL)arg4 serviceIdentifier:(id)arg5 uniqueIdentifier:(void*)arg6 ;
-(void)dealloc;
-(void)main;
@end
