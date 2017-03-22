/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKFetchRecordZoneChangesOperation : CKDatabaseOperation {

	BOOL _fetchAllChanges;
	BOOL _shouldFetchAssetContents;
	NSArray* _recordZoneIDs;
	NSDictionary* _optionsByRecordZoneID;
	/*^block*/id _recordChangedBlock;
	/*^block*/id _recordWithIDWasDeletedBlock;
	/*^block*/id _recordZoneChangeTokensUpdatedBlock;
	/*^block*/id _recordZoneFetchCompletionBlock;
	/*^block*/id _fetchRecordZoneChangesCompletionBlock;
	NSMutableDictionary* _statusByZoneID;
	NSMutableDictionary* _perItemErrors;

}

@property (nonatomic,copy) NSMutableDictionary * statusByZoneID;                  //@synthesize statusByZoneID=_statusByZoneID - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContents;                       //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * perItemErrors;                 //@synthesize perItemErrors=_perItemErrors - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDs;                               //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * optionsByRecordZoneID;                  //@synthesize optionsByRecordZoneID=_optionsByRecordZoneID - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,copy) id recordChangedBlock;                                 //@synthesize recordChangedBlock=_recordChangedBlock - In the implementation block
@property (nonatomic,copy) id recordWithIDWasDeletedBlock;                        //@synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneChangeTokensUpdatedBlock;                 //@synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneFetchCompletionBlock;                     //@synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordZoneChangesCompletionBlock;              //@synthesize fetchRecordZoneChangesCompletionBlock=_fetchRecordZoneChangesCompletionBlock - In the implementation block
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(BOOL)fetchAllChanges;
-(void)setOptionsByRecordZoneID:(NSDictionary *)arg1 ;
-(BOOL)shouldFetchAssetContents;
-(void)setShouldFetchAssetContents:(BOOL)arg1 ;
-(long long)changeTypesFromSetCallbacks;
-(NSDictionary *)optionsByRecordZoneID;
-(id)recordChangedBlock;
-(id)recordWithIDWasDeletedBlock;
-(NSMutableDictionary *)statusByZoneID;
-(id)recordZoneChangeTokensUpdatedBlock;
-(id)recordZoneFetchCompletionBlock;
-(id)fetchRecordZoneChangesCompletionBlock;
-(NSMutableDictionary *)perItemErrors;
-(id)recordZoneChangesStatusByZoneID;
-(void)setRecordZoneChangeTokensUpdatedBlock:(id)arg1 ;
-(void)setStatusByZoneID:(NSMutableDictionary *)arg1 ;
-(void)setPerItemErrors:(NSMutableDictionary *)arg1 ;
-(id)initWithRecordZoneIDs:(id)arg1 optionsByRecordZoneID:(id)arg2 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setRecordChangedBlock:(id)arg1 ;
-(void)setRecordWithIDWasDeletedBlock:(id)arg1 ;
-(void)setRecordZoneFetchCompletionBlock:(id)arg1 ;
-(void)setFetchRecordZoneChangesCompletionBlock:(id)arg1 ;
@end

