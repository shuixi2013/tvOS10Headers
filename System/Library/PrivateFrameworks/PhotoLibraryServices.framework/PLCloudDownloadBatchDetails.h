/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLCloudDownloadBatchDetails : NSObject {

	BOOL _hasResourceChanges;
	long long _numberOfPhotos;
	long long _numberOfVideos;

}

@property (assign,nonatomic) BOOL hasResourceChanges;               //@synthesize hasResourceChanges=_hasResourceChanges - In the implementation block
@property (assign,nonatomic) long long numberOfPhotos;              //@synthesize numberOfPhotos=_numberOfPhotos - In the implementation block
@property (assign,nonatomic) long long numberOfVideos;              //@synthesize numberOfVideos=_numberOfVideos - In the implementation block
-(BOOL)hasResourceChanges;
-(long long)numberOfPhotos;
-(long long)numberOfVideos;
-(void)setHasResourceChanges:(BOOL)arg1 ;
-(void)setNumberOfPhotos:(long long)arg1 ;
-(void)setNumberOfVideos:(long long)arg1 ;
-(void)unionBatchDetails:(id)arg1 ;
@end
