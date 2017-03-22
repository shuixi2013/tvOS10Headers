/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSDownload.h>

@class ASDJob;

@interface SSDivertedDownload : SSDownload {

	ASDJob* _job;

}

@property (nonatomic,retain) ASDJob * job;              //@synthesize job=_job - In the implementation block
-(BOOL)isEligibleForRestore:(id*)arg1 ;
-(void)setValuesWithStoreDownloadMetadata:(id)arg1 ;
-(id)_newAssetWithURL:(id)arg1 assetType:(id)arg2 ;
-(id)backgroundNetworkingJobGroupName;
-(double)estimatedSecondsRemaining;
-(BOOL)isCancelable;
-(id)networkConstraints;
-(BOOL)removeAsset:(id)arg1 ;
-(void)restart;
-(void)setBackgroundNetworkingJobGroupName:(id)arg1 ;
-(void)setNetworkConstraints:(id)arg1 ;
-(void)handleWithDownloadHandler:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)isBackgroundNetworkingUserInitiated;
-(void)setBackgroundNetworkingUserInitiated:(BOOL)arg1 ;
-(void)_resetStatus;
-(id)_XPCConnection;
-(ASDJob *)job;
-(void)setJob:(ASDJob *)arg1 ;
-(double)percentComplete;
-(void)resume;
-(BOOL)isExternal;
-(id)valueForProperty:(id)arg1 ;
-(void)pause;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)metadata;
-(void)setMetadata:(id)arg1 ;
-(id)failureError;
-(BOOL)addAsset:(id)arg1 forType:(id)arg2 ;
-(id)downloadIdentifier;
-(void)setDownloadHandler:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)assetsForType:(id)arg1 ;
-(long long)bytesDownloaded;
-(long long)bytesTotal;
-(long long)persistentIdentifier;
-(long long)downloadSizeLimit;
-(id)downloadPhaseIdentifier;
-(id)downloadPolicy;
-(void)setDownloadPolicy:(id)arg1 ;
-(void)prioritizeAboveDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithDownloadMetadata:(id)arg1 ;
-(id)assets;
-(void)setAssets:(id)arg1 ;
@end

