/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/MobileSoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASAsset;

@interface MSUUpdateBrainAssetLoader : NSObject {

	ASAsset* _updateAsset;

}

@property (nonatomic,retain) ASAsset * updateAsset;              //@synthesize updateAsset=_updateAsset - In the implementation block
-(void)dealloc;
-(BOOL)cancel:(id*)arg1 ;
-(void)loadUpdateBrainWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(void)adjustOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)purgeUpdateBrains:(id*)arg1 ;
-(long long)requiredDiskSpace:(id*)arg1 ;
-(void)setUpdateAsset:(ASAsset *)arg1 ;
-(id)initWithUpdateAsset:(id)arg1 ;
-(ASAsset *)updateAsset;
@end

