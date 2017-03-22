/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary, NSSet;

@interface CKFetchRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _isFetchCurrentUserOperation;
	BOOL _shouldFetchAssetContent;
	BOOL _shouldFetchAssetContentInMemory;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	NSDictionary* _recordIDsToETags;
	NSDictionary* _recordIDsToVersionETags;
	NSDictionary* _desiredPackageFileIndices;
	NSDictionary* _signaturesOfAssetsByRecordIDAndKey;
	NSSet* _assetFieldNamesToPublishURLs;
	unsigned long long _requestedTTL;
	unsigned long long _URLOptions;
	NSDictionary* _webSharingIdentityDataByRecordID;

}

@property (nonatomic,retain) NSArray * recordIDs;                                            //@synthesize recordIDs=_recordIDs - In the implementation block
@property (assign,nonatomic) BOOL isFetchCurrentUserOperation;                               //@synthesize isFetchCurrentUserOperation=_isFetchCurrentUserOperation - In the implementation block
@property (nonatomic,retain) NSArray * desiredKeys;                                          //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToETags;                                //@synthesize recordIDsToETags=_recordIDsToETags - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToVersionETags;                         //@synthesize recordIDsToVersionETags=_recordIDsToVersionETags - In the implementation block
@property (nonatomic,retain) NSDictionary * desiredPackageFileIndices;                       //@synthesize desiredPackageFileIndices=_desiredPackageFileIndices - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                                   //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContentInMemory;                           //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (nonatomic,retain) NSDictionary * signaturesOfAssetsByRecordIDAndKey;              //@synthesize signaturesOfAssetsByRecordIDAndKey=_signaturesOfAssetsByRecordIDAndKey - In the implementation block
@property (nonatomic,retain) NSSet * assetFieldNamesToPublishURLs;                           //@synthesize assetFieldNamesToPublishURLs=_assetFieldNamesToPublishURLs - In the implementation block
@property (assign,nonatomic) unsigned long long requestedTTL;                                //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) unsigned long long URLOptions;                                  //@synthesize URLOptions=_URLOptions - In the implementation block
@property (nonatomic,retain) NSDictionary * webSharingIdentityDataByRecordID;                //@synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)desiredKeys;
-(BOOL)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(NSArray *)recordIDs;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(unsigned long long)requestedTTL;
-(unsigned long long)URLOptions;
-(void)setURLOptions:(unsigned long long)arg1 ;
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
-(NSDictionary *)signaturesOfAssetsByRecordIDAndKey;
-(void)setSignaturesOfAssetsByRecordIDAndKey:(NSDictionary *)arg1 ;
-(NSDictionary *)webSharingIdentityDataByRecordID;
-(void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg1 ;
-(NSSet *)assetFieldNamesToPublishURLs;
-(void)setAssetFieldNamesToPublishURLs:(NSSet *)arg1 ;
-(void)setRequestedTTL:(unsigned long long)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
@end

