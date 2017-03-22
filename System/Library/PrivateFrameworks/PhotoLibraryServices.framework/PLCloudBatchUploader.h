/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibrary, NSMutableArray, NSMutableSet;

@interface PLCloudBatchUploader : NSObject {

	PLPhotoLibrary* _photoLibrary;
	NSMutableArray* _uploadBatchArray;
	NSMutableSet* _downloadedDeleteUuid;
	NSMutableSet* _cameraAsset;
	BOOL _initialUpload;
	BOOL _shouldGenerateDerivatives;

}

@property (assign) BOOL initialUpload;                          //@synthesize initialUpload=_initialUpload - In the implementation block
@property (assign) BOOL shouldGenerateDerivatives;              //@synthesize shouldGenerateDerivatives=_shouldGenerateDerivatives - In the implementation block
-(void)dealloc;
-(id)pop;
-(id)createUploadBatchesForDeletionFromEvent:(id)arg1 ;
-(id)createBatchesForChanges:(id)arg1 insertedPhotoCount:(unsigned long long*)arg2 insertedVideoCount:(unsigned long long*)arg3 totalSizeOfUnpushedOriginals:(unsigned long long*)arg4 ;
-(BOOL)shouldProcessDuringInitialUpload:(id)arg1 ;
-(void)_addAsset:(id)arg1 toAssetChanges:(id)arg2 isInsert:(BOOL)arg3 seenAssetUuid:(id)arg4 ;
-(void)_sortData:(id)arg1 isInsert:(BOOL)arg2 forUploadChanges:(id)arg3 shouldTriggerPrefetch:(BOOL*)arg4 inManagedObjectContext:(id)arg5 ;
-(void)_sortRelationshipData:(id)arg1 forRelationshipUpdate:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(BOOL)_isKnownDeletionForUuid:(id)arg1 ;
-(id)_fetchChangesFromEvent:(id)arg1 shouldTriggerPrefetch:(BOOL*)arg2 ;
-(void)_incrementUploadAttemptsAndPushStateForAssets:(id)arg1 ;
-(void)addBatches:(id)arg1 ;
-(void)_processAlbumDeletes:(id)arg1 albumInserts:(id)arg2 albumChanges:(id)arg3 withBatchManager:(id)arg4 ;
-(id)_validateAssets:(id)arg1 fromCloudUuidDeleteList:(id)arg2 ;
-(BOOL)_needsToIncludeMaster:(id)arg1 forAsset:(id)arg2 ;
-(BOOL)_asset:(id)arg1 isIn:(id)arg2 ;
-(void)_sendAlbums:(id)arg1 toBatchManager:(id)arg2 ;
-(void)_sendAssets:(id)arg1 toBatchManager:(id)arg2 ;
-(void)_processPendingAlbums:(id)arg1 withBatchManager:(id)arg2 ;
-(void)_processPendingAssets:(id)arg1 withBatchManager:(id)arg2 ;
-(void)_addLocalResourcesToRecord:(id)arg1 ;
-(void)_push:(id)arg1 ;
-(void)_pushBatches:(id)arg1 ;
-(void)_cleanUploadedResources:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 ;
-(void)clearUploadArray;
-(BOOL)hasBatchesToUpload;
-(unsigned long long)numberOfBatchesToUpload;
-(void)recordDeletionOnUuids:(id)arg1 ;
-(void)handleUploadBatchesForDeletionFromEvent:(id)arg1 ;
-(void)handleUploadBatchesFromEvent:(id)arg1 insertedPhotoCount:(unsigned long long*)arg2 insertedVideoCount:(unsigned long long*)arg3 totalSizeOfUnpushedOriginals:(unsigned long long*)arg4 shouldTriggerPrefetch:(BOOL*)arg5 ;
-(void)uploadFullPhotoLibraryToCloud;
-(void)processGenerateDerivativesCommitError:(id)arg1 inUploadBatch:(id)arg2 ;
-(id)processCommitError:(id)arg1 andFinalizeError:(id)arg2 forUploadBatchContainer:(id)arg3 totalSizeOfUnpushedOriginals:(unsigned long long*)arg4 ;
-(BOOL)initialUpload;
-(void)setInitialUpload:(BOOL)arg1 ;
-(BOOL)shouldGenerateDerivatives;
-(void)setShouldGenerateDerivatives:(BOOL)arg1 ;
@end
