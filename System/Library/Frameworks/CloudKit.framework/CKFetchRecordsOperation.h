/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableSet, NSMutableDictionary, NSDictionary;

@interface CKFetchRecordsOperation : CKDatabaseOperation {

	BOOL _shouldFetchAssetContent;
	BOOL _shouldFetchAssetContentInMemory;
	BOOL _isFetchCurrentUserOperation;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	/*^block*/id _perRecordProgressBlock;
	/*^block*/id _perRecordCompletionBlock;
	/*^block*/id _fetchRecordsCompletionBlock;
	NSMutableSet* _packagesToDestroy;
	NSMutableDictionary* _assetInfoByArrayIndexByRecordKeyByRecordID;
	NSMutableDictionary* _signaturesOfAssetsByRecordIDAndKey;
	NSMutableDictionary* _recordIDsToRecords;
	NSMutableDictionary* _recordErrors;
	NSDictionary* _desiredPackageFileIndices;
	NSDictionary* _recordIDsToETags;
	NSDictionary* _recordIDsToVersionETags;
	NSDictionary* _webSharingIdentityDataByRecordID;

}

@property (nonatomic,retain) NSMutableSet * packagesToDestroy;                                              //@synthesize packagesToDestroy=_packagesToDestroy - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                                                  //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContentInMemory;                                          //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetInfoByArrayIndexByRecordKeyByRecordID;              //@synthesize assetInfoByArrayIndexByRecordKeyByRecordID=_assetInfoByArrayIndexByRecordKeyByRecordID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * signaturesOfAssetsByRecordIDAndKey;                      //@synthesize signaturesOfAssetsByRecordIDAndKey=_signaturesOfAssetsByRecordIDAndKey - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDsToRecords;                                      //@synthesize recordIDsToRecords=_recordIDsToRecords - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordErrors;                                            //@synthesize recordErrors=_recordErrors - In the implementation block
@property (nonatomic,copy) NSDictionary * desiredPackageFileIndices;                                        //@synthesize desiredPackageFileIndices=_desiredPackageFileIndices - In the implementation block
@property (assign,nonatomic) BOOL isFetchCurrentUserOperation;                                              //@synthesize isFetchCurrentUserOperation=_isFetchCurrentUserOperation - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToETags;                                               //@synthesize recordIDsToETags=_recordIDsToETags - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToVersionETags;                                        //@synthesize recordIDsToVersionETags=_recordIDsToVersionETags - In the implementation block
@property (nonatomic,retain) NSDictionary * webSharingIdentityDataByRecordID;                               //@synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                                             //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                                           //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id perRecordProgressBlock;                                                       //@synthesize perRecordProgressBlock=_perRecordProgressBlock - In the implementation block
@property (nonatomic,copy) id perRecordCompletionBlock;                                                     //@synthesize perRecordCompletionBlock=_perRecordCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordsCompletionBlock;                                                  //@synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock - In the implementation block
+(id)fetchCurrentUserRecordOperation;
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableSet *)packagesToDestroy;
-(BOOL)claimPackagesInRecord:(id)arg1 error:(id*)arg2 ;
-(void)setPackagesToDestroy:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)recordErrors;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(NSArray *)desiredKeys;
-(BOOL)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(NSArray *)recordIDs;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)setFetchRecordsCompletionBlock:(id)arg1 ;
-(id)perRecordProgressBlock;
-(id)perRecordCompletionBlock;
-(void)setIsFetchCurrentUserOperation:(BOOL)arg1 ;
-(BOOL)isFetchCurrentUserOperation;
-(NSDictionary *)recordIDsToETags;
-(void)setRecordIDsToETags:(NSDictionary *)arg1 ;
-(NSDictionary *)recordIDsToVersionETags;
-(void)setRecordIDsToVersionETags:(NSDictionary *)arg1 ;
-(NSDictionary *)desiredPackageFileIndices;
-(void)setDesiredPackageFileIndices:(NSDictionary *)arg1 ;
-(BOOL)shouldFetchAssetContentInMemory;
-(void)setShouldFetchAssetContentInMemory:(BOOL)arg1 ;
-(NSMutableDictionary *)signaturesOfAssetsByRecordIDAndKey;
-(void)setSignaturesOfAssetsByRecordIDAndKey:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)webSharingIdentityDataByRecordID;
-(void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg1 ;
-(id)fetchRecordsCompletionBlock;
-(NSMutableDictionary *)recordIDsToRecords;
-(id)assetInfoForRecordID:(id)arg1 recordKey:(id)arg2 arrayIndex:(id)arg3 ;
-(NSMutableDictionary *)assetInfoByArrayIndexByRecordKeyByRecordID;
-(void)setAssetInfoByArrayIndexByRecordKeyByRecordID:(NSMutableDictionary *)arg1 ;
-(void)setRecordIDsToRecords:(NSMutableDictionary *)arg1 ;
-(id)initWithRecordIDs:(id)arg1 ;
-(void)setPerRecordProgressBlock:(id)arg1 ;
-(void)setPerRecordCompletionBlock:(id)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
@end

