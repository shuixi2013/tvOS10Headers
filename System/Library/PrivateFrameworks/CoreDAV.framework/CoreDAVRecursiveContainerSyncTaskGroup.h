/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVDeleteTaskDelegate.h>
#import <CoreDAV/CoreDAVPutTaskDelegate.h>
#import <CoreDAV/CoreDAVTaskGroupDelegate.h>
#import <CoreDAV/CoreDAVMkcolTaskDelegate.h>
#import <CoreDAV/CoreDAVPropPatchTaskDelegate.h>

@class NSURL, NSString, NSArray, NSMutableArray, NSMutableSet, NSMutableDictionary, NSDictionary;

@interface CoreDAVRecursiveContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVTaskGroupDelegate, CoreDAVMkcolTaskDelegate, CoreDAVPropPatchTaskDelegate> {

	int _phase;
	NSURL* _folderURL;
	NSString* _previousCTag;
	NSString* _nextCTag;
	NSString* _previousSyncToken;
	NSString* _nextSyncToken;
	NSString* _previousPTag;
	NSString* _nextPTag;
	NSArray* _actions;
	unsigned long long _multiGetBatchSize;
	NSMutableArray* _unsubmittedTasks;
	NSURL* _addMemberURL;
	BOOL _useMultiGet;
	NSMutableSet* _syncReportDeletedURLs;
	NSMutableDictionary* _leafURLToETag;
	NSMutableArray* _childCollectionURL;
	Class _appSpecificDataItemClass;
	Class _appSpecificContainerItemClass;
	BOOL _syncItemOrder;
	NSMutableDictionary* _folderURLToChildrenURLOrder;
	BOOL _preflightCTag;

}

@property (nonatomic,retain) NSString * previousSyncToken;                              //@synthesize previousSyncToken=_previousSyncToken - In the implementation block
@property (nonatomic,retain) NSString * nextCTag;                                       //@synthesize nextCTag=_nextCTag - In the implementation block
@property (nonatomic,readonly) NSURL * folderURL;                                       //@synthesize folderURL=_folderURL - In the implementation block
@property (nonatomic,readonly) NSString * previousCTag;                                 //@synthesize previousCTag=_previousCTag - In the implementation block
@property (assign,nonatomic) BOOL preflightCTag;                                        //@synthesize preflightCTag=_preflightCTag - In the implementation block
@property (assign,nonatomic) unsigned long long multiGetBatchSize;                      //@synthesize multiGetBatchSize=_multiGetBatchSize - In the implementation block
@property (assign,nonatomic) id<CoreDAVLocalDBTreeInfoProvider> delegate; 
@property (nonatomic,readonly) NSDictionary * folderURLToChildrenURLOrder;              //@synthesize folderURLToChildrenURLOrder=_folderURLToChildrenURLOrder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)_tearDownAllUnsubmittedTasks;
-(void)_pushActions;
-(void)_getDataPayloads;
-(void)_getTask:(id)arg1 finishedWithParsedContents:(id)arg2 deletedItems:(id)arg3 error:(id)arg4 ;
-(BOOL)isWhitelistedError:(id)arg1 ;
-(void)setPreviousSyncToken:(NSString *)arg1 ;
-(void)_postTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_syncReportTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setNextCTag:(NSString *)arg1 ;
-(void)deleteTask:(id)arg1 completedWithError:(id)arg2 ;
-(void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3 ;
-(void)syncAway;
-(unsigned long long)multiGetBatchSize;
-(void)setMultiGetBatchSize:(unsigned long long)arg1 ;
-(NSURL *)folderURL;
-(NSString *)previousCTag;
-(NSString *)previousSyncToken;
-(void)mkcolTask:(id)arg1 parsedPropStats:(id)arg2 error:(id)arg3 ;
-(void)_getItemTags;
-(void)_taskGroupSuccessfullyFinishedWithContents:(id)arg1 ;
-(id)copyFolderMultiGetTaskWithURLs:(id)arg1 ;
-(void)_getTopFolderTags;
-(void)_folderModTask:(id)arg1 parsedPropStats:(id)arg2 error:(id)arg3 ;
-(BOOL)shouldSyncChildWithResourceType:(id)arg1 ;
-(void)_foundChildrenOrder:(id)arg1 inFolderWithURL:(id)arg2 ;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousPTag:(id)arg3 previousSyncToken:(id)arg4 actions:(id)arg5 syncItemOrder:(BOOL)arg6 context:(id)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9 ;
-(BOOL)preflightCTag;
-(void)setPreflightCTag:(BOOL)arg1 ;
-(NSDictionary *)folderURLToChildrenURLOrder;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(id)_copyContainerParserMappings;
-(id)dataContentType;
-(id)copyMultiGetTaskWithURLs:(id)arg1 ;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(void)cancelTaskGroup;
-(void)bailWithError:(id)arg1 ;
-(NSString *)nextCTag;
-(unsigned long long)_submitTasks;
@end

