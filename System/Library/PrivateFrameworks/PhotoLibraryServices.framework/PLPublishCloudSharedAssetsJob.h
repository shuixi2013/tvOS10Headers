/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSString, NSArray, NSDictionary;

@interface PLPublishCloudSharedAssetsJob : PLCloudSharingJob {

	BOOL _isNewAlbum;
	NSString* _publishAlbumCloudGUID;
	NSArray* _originalAssetUUIDs;
	NSArray* _stillImageOnlyAssetUUIDs;
	NSDictionary* _trimmedVideoPathInfo;
	NSString* _batchCommentText;

}

@property (nonatomic,retain) NSString * publishAlbumCloudGUID;                 //@synthesize publishAlbumCloudGUID=_publishAlbumCloudGUID - In the implementation block
@property (nonatomic,retain) NSArray * originalAssetUUIDs;                     //@synthesize originalAssetUUIDs=_originalAssetUUIDs - In the implementation block
@property (nonatomic,retain) NSArray * stillImageOnlyAssetUUIDs;               //@synthesize stillImageOnlyAssetUUIDs=_stillImageOnlyAssetUUIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * trimmedVideoPathInfo;              //@synthesize trimmedVideoPathInfo=_trimmedVideoPathInfo - In the implementation block
@property (assign,nonatomic) BOOL isNewAlbum;                                  //@synthesize isNewAlbum=_isNewAlbum - In the implementation block
@property (nonatomic,retain) NSString * batchCommentText;                      //@synthesize batchCommentText=_batchCommentText - In the implementation block
+(void)publishBatchOfOriginalAssets:(id)arg1 toSharedAlbum:(id)arg2 withAssetsSharingInfos:(id)arg3 trimmedVideoPathInfo:(id)arg4 isNewAlbum:(BOOL)arg5 batchCommentText:(id)arg6 ;
-(void)dealloc;
-(id)description;
-(void)run;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(void)executeDaemonOperation;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(BOOL)shouldArchiveXPCToDisk;
-(void)setOriginalAssetUUIDs:(NSArray *)arg1 ;
-(void)setStillImageOnlyAssetUUIDs:(NSArray *)arg1 ;
-(void)setPublishAlbumCloudGUID:(NSString *)arg1 ;
-(void)setIsNewAlbum:(BOOL)arg1 ;
-(void)setBatchCommentText:(NSString *)arg1 ;
-(void)setTrimmedVideoPathInfo:(NSDictionary *)arg1 ;
-(NSString *)publishAlbumCloudGUID;
-(NSArray *)originalAssetUUIDs;
-(NSArray *)stillImageOnlyAssetUUIDs;
-(BOOL)isNewAlbum;
-(NSString *)batchCommentText;
-(NSDictionary *)trimmedVideoPathInfo;
@end

