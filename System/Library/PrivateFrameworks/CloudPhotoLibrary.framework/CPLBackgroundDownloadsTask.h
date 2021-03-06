/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSError;

@interface CPLBackgroundDownloadsTask : CPLEngineSyncTask {

	NSObject*<OS_dispatch_queue> _lock;
	NSMutableArray* _downloadTaskGroups;
	BOOL _shouldStop;
	NSError* _badError;
	NSError* _stopError;
	BOOL _hasResetQueue;
	unsigned long long _successfullyDownloadedResourcesCount;
	unsigned long long _failedDownloadedResourcesCount;
	unsigned long long _total;
	unsigned long long _activeDownloadTaskCount;
	unsigned long long _downloadTaskGroupsCount;

}
-(void)launch;
-(void)cancel;
-(id)description;
-(void)resume;
-(void)pause;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)taskDidFinishWithError:(id)arg1 ;
-(void)_downloadTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)_downloadTasksSortedForBatching:(id)arg1 ;
-(void)_updateActiveDownloadTaskCount;
-(void)_launchNecessaryDownloadTasksWithTransaction:(id)arg1 ;
-(void)_finishTaskLocked;
-(void)_enqueueTasksLocked;
-(id)taskIdentifier;
@end

