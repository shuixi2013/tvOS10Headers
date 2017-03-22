/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface MPCReportingController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _childReportingControllers;
	MPCReportingController* _parentReportingController;

}

@property (assign,nonatomic,__weak) MPCReportingController * parentReportingController; 
@property (nonatomic,copy,readonly) NSArray * childReportingControllers; 
-(id)init;
-(void)recordReportingEvents:(id)arg1 ;
-(void)addChildReportingController:(id)arg1 ;
-(void)setParentReportingController:(MPCReportingController *)arg1 ;
-(void)_recordReportingEvents:(id)arg1 ;
-(MPCReportingController *)parentReportingController;
-(NSArray *)childReportingControllers;
-(void)removeChildReportingController:(id)arg1 ;
@end

