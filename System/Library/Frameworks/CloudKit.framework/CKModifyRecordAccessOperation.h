/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSMutableArray;

@interface CKModifyRecordAccessOperation : CKDatabaseOperation {

	/*^block*/id _recordAccessGrantedBlock;
	/*^block*/id _recordAccessRevokedBlock;
	/*^block*/id _recordAccessCompletionBlock;
	NSArray* _recordIDsToGrant;
	NSArray* _recordIDsToRevoke;
	NSMutableDictionary* _recordErrors;
	NSMutableArray* _grantedRecordIDs;
	NSMutableArray* _revokedRecordIDs;

}

@property (nonatomic,retain) NSArray * recordIDsToGrant;                      //@synthesize recordIDsToGrant=_recordIDsToGrant - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToRevoke;                     //@synthesize recordIDsToRevoke=_recordIDsToRevoke - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordErrors;              //@synthesize recordErrors=_recordErrors - In the implementation block
@property (nonatomic,retain) NSMutableArray * grantedRecordIDs;               //@synthesize grantedRecordIDs=_grantedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * revokedRecordIDs;               //@synthesize revokedRecordIDs=_revokedRecordIDs - In the implementation block
@property (nonatomic,copy) id recordAccessGrantedBlock;                       //@synthesize recordAccessGrantedBlock=_recordAccessGrantedBlock - In the implementation block
@property (nonatomic,copy) id recordAccessRevokedBlock;                       //@synthesize recordAccessRevokedBlock=_recordAccessRevokedBlock - In the implementation block
@property (nonatomic,copy) id recordAccessCompletionBlock;                    //@synthesize recordAccessCompletionBlock=_recordAccessCompletionBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)recordErrors;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(NSArray *)recordIDsToGrant;
-(void)setRecordIDsToGrant:(NSArray *)arg1 ;
-(NSArray *)recordIDsToRevoke;
-(void)setRecordIDsToRevoke:(NSArray *)arg1 ;
-(id)recordAccessGrantedBlock;
-(id)recordAccessRevokedBlock;
-(id)recordAccessCompletionBlock;
-(NSMutableArray *)grantedRecordIDs;
-(NSMutableArray *)revokedRecordIDs;
-(void)setRecordAccessCompletionBlock:(id)arg1 ;
-(void)setRecordAccessGrantedBlock:(id)arg1 ;
-(void)setRecordAccessRevokedBlock:(id)arg1 ;
-(id)initWithRecordIDsToGrantAccess:(id)arg1 recordIDsToRevokeAccess:(id)arg2 ;
-(void)setGrantedRecordIDs:(NSMutableArray *)arg1 ;
-(void)setRevokedRecordIDs:(NSMutableArray *)arg1 ;
@end

