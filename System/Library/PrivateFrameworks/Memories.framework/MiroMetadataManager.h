/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface MiroMetadataManager : NSObject {

	NSCache* _assetMetadataCache;

}
+(id)sharedManager;
-(id)init;
-(void)clearCaches;
-(void)analyzeLoudnessForRanges:(id)arg1 ofAssets:(id)arg2 ;
-(id)metadataForAssetID:(id)arg1 ;
-(void)setMetadata:(id)arg1 forAssetID:(id)arg2 ;
-(void)analyzeLoudnessForRanges:(id)arg1 ofAssets:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)analyzeAssets:(id)arg1 ranges:(id)arg2 types:(unsigned long long)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)analyzeAsset:(id)arg1 ranges:(id)arg2 types:(unsigned long long)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)analyzeColorForAsset:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)analyzeColorForAsset:(id)arg1 ;
@end

