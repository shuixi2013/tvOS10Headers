/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFClientLiteClientCommandHandling.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface AFClientLite : NSObject <AFClientLiteClientCommandHandling> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _commandHandler;

}
-(id)init;
-(void)_handleCommand:(id)arg1 isOneWay:(BOOL)arg2 commandHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(oneway void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleCommand:(id)arg1 commandHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleOneWayCommand:(id)arg1 commandHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

