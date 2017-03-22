/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHSynchronizableProtocol.h>
#import <libobjc.A.dylib/CHLoggerProtocol.h>

@class CHLogger, CHSynchronizable;

@interface CHSynchronizedLoggable : NSObject <CHSynchronizableProtocol, CHLoggerProtocol> {

	CHLogger* _logger;
	CHSynchronizable* _synchronizable;

}
-(id)initWithName:(const char*)arg1 ;
-(id)queue;
-(void)execute:(/*^block*/id)arg1 ;
-(void)executeSync:(/*^block*/id)arg1 ;
-(id)executeSyncWithResult:(/*^block*/id)arg1 ;
-(BOOL)executeSyncWithBOOL:(/*^block*/id)arg1 ;
-(id)logHandle;
-(id)initWithName:(const char*)arg1 queue:(id)arg2 ;
@end

