/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSString, CPLResourceTransferTask, NSArray;

@interface PLCloudInMemoryDownloadTask : NSObject {

	NSMapTable* _taskIDsToCompletionHandlers;
	BOOL _completed;
	NSString* _resourceID;
	CPLResourceTransferTask* _transferTask;

}

@property (nonatomic,copy,readonly) NSString * resourceID;                        //@synthesize resourceID=_resourceID - In the implementation block
@property (nonatomic,retain) CPLResourceTransferTask * transferTask;              //@synthesize transferTask=_transferTask - In the implementation block
@property (getter=isCompleted,nonatomic,readonly) BOOL completed;                 //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) NSArray * taskIDs; 
-(void)dealloc;
-(BOOL)isCompleted;
-(void)setTransferTask:(CPLResourceTransferTask *)arg1 ;
-(NSArray *)taskIDs;
-(id)initWithResourceID:(id)arg1 taskID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addClientWithTaskID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelClientWithTaskID:(id)arg1 ;
-(void)reportCompletionWithData:(id)arg1 error:(id)arg2 ;
-(NSString *)resourceID;
-(CPLResourceTransferTask *)transferTask;
@end

