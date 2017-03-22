/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CMKCaptureService.h>

@class NSArray, NSMutableDictionary, CMKAvalancheSession, NSCountedSet, NSMutableSet;

@interface CMKAvalancheCaptureService : CMKCaptureService {

	BOOL _supportsAvalancheAnalysis;
	NSArray* _recentFaceMetadata;
	NSMutableDictionary* __avalancheSessionsByUUID;
	CMKAvalancheSession* __activeAvalancheSession;
	NSCountedSet* __inflightRequestsByUUID;
	NSMutableSet* __avalancheSessionsToBeFinalizedAfterNextResponseCompletion;
	double __avalancheStartTime;

}

@property (nonatomic,readonly) NSMutableDictionary * _avalancheSessionsByUUID;                                         //@synthesize _avalancheSessionsByUUID=__avalancheSessionsByUUID - In the implementation block
@property (nonatomic,readonly) CMKAvalancheSession * _activeAvalancheSession;                                          //@synthesize _activeAvalancheSession=__activeAvalancheSession - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _inflightRequestsByUUID;                                                 //@synthesize _inflightRequestsByUUID=__inflightRequestsByUUID - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _avalancheSessionsToBeFinalizedAfterNextResponseCompletion;              //@synthesize _avalancheSessionsToBeFinalizedAfterNextResponseCompletion=__avalancheSessionsToBeFinalizedAfterNextResponseCompletion - In the implementation block
@property (nonatomic,readonly) double _avalancheStartTime;                                                             //@synthesize _avalancheStartTime=__avalancheStartTime - In the implementation block
@property (assign,nonatomic) BOOL supportsAvalancheAnalysis;                                                           //@synthesize supportsAvalancheAnalysis=_supportsAvalancheAnalysis - In the implementation block
@property (nonatomic,copy) NSArray * recentFaceMetadata;                                                               //@synthesize recentFaceMetadata=_recentFaceMetadata - In the implementation block
-(id)init;
-(void)_ensureValidAvalancheSession;
-(void)finishAvalancheCaptureWithCompletion:(/*^block*/id)arg1 ;
-(CMKAvalancheSession *)_activeAvalancheSession;
-(BOOL)_canFinishCapturingActiveAvalanche;
-(void)_finalizeAvalancheSession:(id)arg1 ;
-(NSMutableSet *)_avalancheSessionsToBeFinalizedAfterNextResponseCompletion;
-(void)_cancelAvalancheSession:(id)arg1 ;
-(void)_finalizeAndBeginNewAvalancheSession;
-(BOOL)supportsAvalancheAnalysis;
-(NSMutableDictionary *)_avalancheSessionsByUUID;
-(NSArray *)recentFaceMetadata;
-(void)startAvalancheCapture;
-(void)finishAvalancheCapture;
-(void)cancelAvalancheCapture;
-(BOOL)canContinueAvalancheCapture;
-(void)requestWasEnqueued:(id)arg1 ;
-(void)responseWasGenerated:(id)arg1 error:(id)arg2 ;
-(void)responseWasCompleted:(id)arg1 error:(id)arg2 ;
-(void)setSupportsAvalancheAnalysis:(BOOL)arg1 ;
-(void)setRecentFaceMetadata:(NSArray *)arg1 ;
-(NSCountedSet *)_inflightRequestsByUUID;
-(double)_avalancheStartTime;
-(long long)numberOfPhotos;
@end

