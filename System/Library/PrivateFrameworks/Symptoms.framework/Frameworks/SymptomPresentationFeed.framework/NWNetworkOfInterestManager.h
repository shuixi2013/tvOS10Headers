/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ServiceInterface, OS_dispatch_queue;
@class AnalyticsWorkspace, NSMutableSet, NSXPCConnection, NSObject;

@interface NWNetworkOfInterestManager : NSObject {

	AnalyticsWorkspace* workspace;
	NSMutableSet* registryNOI;
	int notifyToken;
	BOOL closing;
	BOOL hasCellPrimaryInterface;
	BOOL activeDaemonRegardlessPrimaryInterface;
	id _delegate;
	NSXPCConnection* _connection;
	id<ServiceInterface> _service;
	NSObject*<OS_dispatch_queue> _callerQueue;

}

@property (retain) NSXPCConnection * connection;                          //@synthesize connection=_connection - In the implementation block
@property (retain) id<ServiceInterface> service;                          //@synthesize service=_service - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callerQueue;              //@synthesize callerQueue=_callerQueue - In the implementation block
@property (assign,nonatomic) id delegate;                                 //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setQueue:(id)arg1 ;
-(void)setService:(id<ServiceInterface>)arg1 ;
-(void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)trackAllBuiltinNOIsForInterfaceType:(long long)arg1 options:(id)arg2 ;
-(void)trackCustomNOI:(id)arg1 options:(id)arg2 ;
-(void)linkThroughputOnNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)estimatedDataTransferTimeOnNOI:(id)arg1 withPayloadInfo:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)foregroundNetworkActivityUnderwayOn:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)canUseOnAlternateNOI:(id)arg1 apps:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)stopTrackingNOIs:(id)arg1 ;
-(void)destroy;
-(void)errorPredictionsForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)dayOfWeekPredictionGroupingForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)trainingProgressForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)trafficInvitesHourlyDistributionForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)callerQueue;
-(void)setCallerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<ServiceInterface>)service;
-(void)trackNOIAnyForInterfaceType:(long long)arg1 options:(id)arg2 ;
-(void)updatePredictionsForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)instantQualityForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)isClosing;
@end

