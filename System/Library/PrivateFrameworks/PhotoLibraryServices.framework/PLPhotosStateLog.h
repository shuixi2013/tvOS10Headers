/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject, PLPhotoLibrary;

@interface PLPhotosStateLog : NSObject {

	NSObject*<OS_dispatch_group> _group;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_group> group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,retain,readonly) PLPhotoLibrary * photoLibrary; 
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_group>)group;
-(PLPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)_logAssets:(id)arg1 forAlbum:(id)arg2 indent:(unsigned long long)arg3 ;
-(void)logAlbum:(id)arg1 index:(unsigned long long)arg2 indent:(unsigned long long)arg3 completeMetadata:(BOOL)arg4 printAssets:(BOOL)arg5 ;
-(BOOL)compressFileFromPath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)copyFilesMatching:(id)arg1 andExcluding:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4 usingCompression:(BOOL)arg5 ;
-(void)logMoments;
-(void)logAlbumLists;
-(void)logAllAlbums;
-(void)logAssetCounts;
-(void)logDescription:(id)arg1 ;
-(void)createSnapshot;
@end

