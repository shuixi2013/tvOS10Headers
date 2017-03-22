/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSTask.h>

@protocol OS_dispatch_semaphore, OS_dispatch_source;
@class NSObject, NSMutableDictionary, NSPort;

@interface NSConcreteTask : NSTask {

	NSObject*<OS_dispatch_semaphore> _lock;
	NSMutableDictionary* _dictionary;
	/*^block*/id _terminationHandler;
	NSObject*<OS_dispatch_source> _dsrc;
	NSPort* _tmpPort;
	long long _suspendCount;
	int _pid;
	int _platformExitInfo;
	BOOL _hasExeced;
	BOOL _isRunning;
	BOOL _hasPostedDeathNotification;
	BOOL _terminationRun;
	char _qos;

}
-(id)currentDirectoryPath;
-(void)setArguments:(id)arg1 ;
-(void)launchWithDictionary:(id)arg1 ;
-(int)terminationStatus;
-(long long)terminationReason;
-(void)launch;
-(void)setCurrentDirectoryPath:(id)arg1 ;
-(void)setLaunchPath:(id)arg1 ;
-(void)interrupt;
-(void)terminate;
-(long long)suspendCount;
-(id)launchPath;
-(void)setStandardInput:(id)arg1 ;
-(void)setStandardOutput:(id)arg1 ;
-(void)setStandardError:(id)arg1 ;
-(id)standardInput;
-(id)standardOutput;
-(id)standardError;
-(void)_setTerminationHandler:(/*^block*/id)arg1 ;
-(void)_withTaskDictionary:(/*^block*/id)arg1 ;
-(long long)_platformExitInformation;
-(void)waitUntilExit;
-(void)setPreferredArchitectures:(id)arg1 ;
-(id)preferredArchitectures;
-(void)setTaskDictionary:(id)arg1 ;
-(id)taskDictionary;
-(void)terminateTask;
-(int)_procid;
-(void)setStartsNewProcessGroup:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)environment;
-(BOOL)suspend;
-(BOOL)isRunning;
-(BOOL)resume;
-(void)setEnvironment:(id)arg1 ;
-(void)setTerminationHandler:(/*^block*/id)arg1 ;
-(int)processIdentifier;
-(/*^block*/id)terminationHandler;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)qualityOfService;
-(id)arguments;
@end

