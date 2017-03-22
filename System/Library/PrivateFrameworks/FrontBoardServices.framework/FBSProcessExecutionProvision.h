/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBSProcess, OS_dispatch_queue, FBSProcessExecutionProvisionDelegate;
@class NSError, NSObject, NSString;

@interface FBSProcessExecutionProvision : NSObject <BSDescriptionProviding, NSCopying> {

	id<FBSProcess> _process;
	BOOL _activated;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _delegateCalloutQueue;
	BOOL _monitoring;
	BOOL _violated;
	id<FBSProcessExecutionProvisionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSProcessExecutionProvisionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) id<FBSProcess> process;                                       //@synthesize process=_process - In the implementation block
@property (getter=isMonitoring,nonatomic,readonly) BOOL monitoring;                                 //@synthesize monitoring=_monitoring - In the implementation block
@property (getter=isViolated,nonatomic,readonly) BOOL violated;                                     //@synthesize violated=_violated - In the implementation block
@property (nonatomic,retain,readonly) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)monitorProcess:(id)arg1 ;
-(void)_beginMonitoring;
-(void)_prepareForReuse;
-(void)_performDelegateCallout:(/*^block*/id)arg1 ;
-(BOOL)isViolated;
-(void)_noteViolatedWithError:(id)arg1 ;
-(void)setDelegate:(id<FBSProcessExecutionProvisionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<FBSProcessExecutionProvisionDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)prepareForReuse;
-(void)stopMonitoring;
-(NSError *)error;
-(void)updateProgress;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id<FBSProcess>)process;
-(BOOL)isResourceProvision;
-(void)_stopMonitoring;
-(BOOL)isMonitoring;
-(void)_updateProgress;
@end
