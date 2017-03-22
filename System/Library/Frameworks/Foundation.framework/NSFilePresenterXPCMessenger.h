/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenterXPCInterface.h>

@protocol NSFilePresenter, OS_dispatch_queue;
@class NSObject, NSFilePresenterProxy, NSString;

@interface NSFilePresenterXPCMessenger : NSObject <NSFilePresenterXPCInterface> {

	id<NSFilePresenter> _filePresenter;
	NSObject*<OS_dispatch_queue> _queue;
	NSFilePresenterProxy* _filePresenterProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectDebuggingInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithFilePresenter:(id)arg1 queue:(id)arg2 ;
-(void)_makePresenter:(id)arg1 relinquishToReadingClaimWithID:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_makePresenter:(id)arg1 relinquishToWritingClaimWithID:(id)arg2 options:(unsigned long long)arg3 purposeID:(id)arg4 subitemURL:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)_readRelinquishment;
-(id)_writeRelinquishment;
-(void)_makePresenter:(id)arg1 saveChangesWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)_makePresenter:(id)arg1 accommodateDeletionWithSubitemURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_makePresenter:(id)arg1 observeChangeWithSubitemURL:(id)arg2 ;
-(void)_makePresenter:(id)arg1 observeMoveToURL:(id)arg2 withSubitemURL:(id)arg3 ;
-(void)_makePresenterObserveDisconnection:(id)arg1 ;
-(void)_makePresenterObserveReconnection:(id)arg1 ;
-(void)_makePresenter:(id)arg1 observeUbiquityChangeWithSubitemURL:(id)arg2 ;
-(void)_makePresenter:(id)arg1 observeVersionChangeOfKind:(id)arg2 withClientID:(id)arg3 name:(id)arg4 subitemURL:(id)arg5 ;
-(void)_makePresenter:(id)arg1 setLastPresentedItemEventIdentifier:(unsigned long long)arg2 ;
-(void)_makePresenter:(id)arg1 reportUnsavedChangesWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)_makePresenter:(id)arg1 relinquishToAccessClaimWithID:(id)arg2 ifNecessaryUsingSelector:(SEL)arg3 recordingRelinquishment:(id)arg4 continuer:(/*^block*/id)arg5 ;
-(void)_makePresenter:(id)arg1 accommodateDisconnectionWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)_makePresenter:(id)arg1 validateRemoteDeletionRecordingRelinquishment:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(oneway void)reacquireFromReadingClaimForID:(id)arg1 ;
-(void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)reacquireFromWritingClaimForID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)accommodateDeletionOfSubitemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)observeChangeWithSubitemURL:(id)arg1 ;
-(oneway void)observeMoveToURL:(id)arg1 withSubitemURL:(id)arg2 byWriterWithPurposeID:(id)arg3 ;
-(oneway void)observeDisconnection;
-(oneway void)observeReconnection;
-(oneway void)observeUbiquityChangeWithSubitemURL:(id)arg1 ;
-(oneway void)observeVersionChangeOfKind:(id)arg1 toItemAtURL:(id)arg2 withClientID:(id)arg3 name:(id)arg4 ;
-(oneway void)updateLastEventID:(unsigned long long)arg1 ;
-(oneway void)logSuspensionWarning;
-(id)initWithFilePresenterProxy:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
@end

