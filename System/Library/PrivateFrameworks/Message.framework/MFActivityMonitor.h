/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFPriorityDesignator.h>
#import <libobjc.A.dylib/MFCancelable.h>

@class NSThread, NSString, MFInvocationQueue, MFError, MFMailboxUid, NSMutableSet;

@interface MFActivityMonitor : MFPriorityDesignator <MFCancelable> {

	NSThread* _runningThread;
	NSString* _taskName;
	NSString* _displayName;
	NSString* _statusMessage;
	NSString* _descriptionString;
	MFInvocationQueue* _ourQueue;
	double _percentDone;
	unsigned _key : 13;
	unsigned _canCancel : 1;
	unsigned _shouldCancel : 1;
	unsigned _isActive : 1;
	unsigned _changeCount : 8;
	id _delegate;
	id _target;
	MFError* _error;
	unsigned long long _expectedLength;
	unsigned long long _maxCount;
	unsigned long long _currentCount;
	double _currentItemPercentDone;
	unsigned _supportsPerItemProgress : 1;
	MFMailboxUid* _mailbox;
	double _lastTime;
	double _startTime;
	unsigned long long _gotNewMessagesState;
	unsigned long long _bytesRead;
	unsigned long long _bytesWritten;
	NSMutableSet* _reasons;
	NSMutableSet* _associatedCancelables;
	BOOL _isRemoteSearch;

}

@property (retain) MFMailboxUid * mailbox;                          //@synthesize mailbox=_mailbox - In the implementation block
@property (assign,nonatomic) BOOL canBeCancelled; 
@property (assign,nonatomic) BOOL shouldCancel; 
@property (assign,nonatomic) BOOL isRemoteSearch;                   //@synthesize isRemoteSearch=_isRemoteSearch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentMonitor;
+(void)destroyMonitor;
-(void)cancel;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(BOOL)isActive;
-(void)reset;
-(int)changeCount;
-(double)startTime;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(id)error;
-(void)setError:(id)arg1 ;
-(void)setMailbox:(MFMailboxUid *)arg1 ;
-(void)addReason:(id)arg1 ;
-(BOOL)canBeCancelled;
-(MFMailboxUid *)mailbox;
-(void)setCanBeCancelled:(BOOL)arg1 ;
-(void)resetConnectionStats;
-(void)setPercentDone:(double)arg1 ;
-(unsigned long long)bytesWritten;
-(id)reasons;
-(void)addCancelable:(id)arg1 ;
-(void)removeCancelable:(id)arg1 ;
-(void)setExpectedLength:(unsigned long long)arg1 ;
-(unsigned long long)expectedLength;
-(void)setGotNewMessagesState:(unsigned long long)arg1 ;
-(void)recordBytesWritten:(unsigned long long)arg1 ;
-(void)recordBytesRead:(unsigned long long)arg1 ;
-(unsigned long long)bytesRead;
-(void)setShouldCancel:(BOOL)arg1 ;
-(void)postActivityStarting;
-(void)postActivityFinished:(id)arg1 ;
-(id)userInfoForNotification;
-(void)postDidChangeWithUserInfo:(id)arg1 ;
-(id)_ntsThrottledUserInfoDict;
-(void)setSupportsPerItemProgress:(BOOL)arg1 ;
-(double)percentDone;
-(void)setStatusMessage:(id)arg1 percentDone:(double)arg2 ;
-(void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(int)arg3 ;
-(void)setPercentDone:(double)arg1 withKey:(int)arg2 ;
-(void)setDisplayName:(id)arg1 maxCount:(unsigned long long)arg2 ;
-(void)addActivityTarget:(id)arg1 ;
-(BOOL)_lockedAddActivityTarget:(id)arg1 ;
-(void)removeActivityTarget:(id)arg1 ;
-(id)primaryTarget;
-(void)setPrimaryTarget:(id)arg1 ;
-(void)_cancelAssociatedCancelables;
-(void)cancelMessage;
-(void)setStatusMessage:(id)arg1 withKey:(int)arg2 ;
-(void)startActivity;
-(void)finishedActivity:(id)arg1 ;
-(void)notifyConnectionEstablished;
-(void)setCurrentCount:(unsigned long long)arg1 ;
-(void)setPercentDoneOfCurrentItem:(double)arg1 ;
-(unsigned long long)gotNewMessagesState;
-(BOOL)hasReason:(id)arg1 ;
-(void)setStatusMessage:(id)arg1 ;
-(id)statusMessage;
-(id)taskName;
-(void)setTaskName:(id)arg1 ;
-(void)setActivityTarget:(id)arg1 ;
-(id)activityTarget;
-(void)addActivityTargets:(id)arg1 ;
-(id)activityTargets;
-(void)setInvocationQueue:(id)arg1 ;
-(int)acquireExclusiveAccessKey;
-(void)relinquishExclusiveAccessKey:(int)arg1 ;
-(BOOL)isRemoteSearch;
-(void)setIsRemoteSearch:(BOOL)arg1 ;
-(void)setMaxCount:(unsigned long long)arg1 ;
-(void)_didChange;
-(BOOL)shouldCancel;
@end

