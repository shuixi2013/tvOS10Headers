/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/FlexCloudManager.h>

@interface FlexMobileAssetManager : FlexCloudManager
-(id)initWithLibrary:(id)arg1 ;
-(id)loadCachedSongs;
-(void)fetchAllSongsWithCompletion:(/*^block*/id)arg1 ;
-(void)requestDownloadOfAsset:(id)arg1 ;
-(void)cancelDownloadOfAsset:(id)arg1 ;
-(void)requestPurgeOfAsset:(id)arg1 ;
-(unsigned long long)assetStatus:(id)arg1 ;
-(void)_processResults:(id)arg1 ;
-(void)_updateWithLocalArtwork;
-(void)_processArtwork;
-(void)_purgeAsset:(id)arg1 ;
-(long long)_responseForError:(id)arg1 ;
-(unsigned long long)_statusForAssetState:(long long)arg1 ;
-(id)_queryLocalAssetInformation;
@end

