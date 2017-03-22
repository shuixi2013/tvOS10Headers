/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CPLStatusDelegate;
@class NSURL, NSMutableDictionary, NSObject, NSDate, NSDictionary;

@interface CPLStatus : NSObject {

	NSURL* _statusFileURL;
	NSMutableDictionary* _status;
	NSObject*<OS_dispatch_queue> _lock;
	id<CPLStatusDelegate> _delegate;

}

@property (nonatomic,copy) NSDate * initialSyncDate; 
@property (nonatomic,copy) NSDate * lastSuccessfulSyncDate; 
@property (nonatomic,copy) NSDate * lastCompletePrefetchDate; 
@property (nonatomic,copy) NSDate * lastPruneDate; 
@property (assign,nonatomic) BOOL hasChangesToProcess; 
@property (assign,nonatomic) BOOL isExceedingQuota; 
@property (nonatomic,copy) NSDate * exitDeleteTime; 
@property (assign,nonatomic) BOOL iCloudLibraryHasBeenWiped; 
@property (assign,nonatomic) BOOL iCloudLibraryExists; 
@property (nonatomic,readonly) NSDate * cloudAssetCountPerTypeLastCheckDate; 
@property (nonatomic,readonly) NSDictionary * cloudAssetCountPerType; 
@property (assign,nonatomic,__weak) id<CPLStatusDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
+(id)statusForSharedLibrary;
-(void)setDelegate:(id<CPLStatusDelegate>)arg1 ;
-(id<CPLStatusDelegate>)delegate;
-(void)_save;
-(void)setHasChangesToProcess:(BOOL)arg1 ;
-(id)initWithClientLibraryBaseURL:(id)arg1 ;
-(void)_loadIfNecessary;
-(void)refetchFromDisk;
-(void)setLastSuccessfulSyncDate:(NSDate *)arg1 ;
-(NSDate *)lastPruneDate;
-(void)setIsExceedingQuota:(BOOL)arg1 ;
-(void)setExitDeleteTime:(NSDate *)arg1 ;
-(void)setICloudLibraryHasBeenWiped:(BOOL)arg1 ;
-(BOOL)iCloudLibraryExists;
-(void)setICloudLibraryExists:(BOOL)arg1 ;
-(void)setCloudAssetCountPerType:(id)arg1 updateCheckDate:(BOOL)arg2 ;
-(NSDate *)cloudAssetCountPerTypeLastCheckDate;
-(void)_statusDidChange;
-(id)statusDescription;
-(NSDictionary *)cloudAssetCountPerType;
-(NSDate *)lastSuccessfulSyncDate;
-(BOOL)isExceedingQuota;
-(BOOL)iCloudLibraryHasBeenWiped;
-(BOOL)hasChangesToProcess;
-(void)setLastPruneDate:(NSDate *)arg1 ;
-(void)setLastCompletePrefetchDate:(NSDate *)arg1 ;
-(void)setInitialSyncDate:(NSDate *)arg1 ;
-(NSDate *)initialSyncDate;
-(NSDate *)lastCompletePrefetchDate;
-(NSDate *)exitDeleteTime;
@end

