/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, MPStoreRedownloadProductItemAsset, NSString, NSURL;

@interface MPStoreRedownloadProductItem : NSObject {

	NSDictionary* _responseDictionary;
	BOOL _usesCurrentAccountIfAvailable;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;                           //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (assign,nonatomic) BOOL usesCurrentAccountIfAvailable;                            //@synthesize usesCurrentAccountIfAvailable=_usesCurrentAccountIfAvailable - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allFlavors; 
@property (nonatomic,readonly) MPStoreRedownloadProductItemAsset * asset; 
@property (nonatomic,readonly) MPStoreRedownloadProductItemAsset * firstAsset; 
@property (nonatomic,copy,readonly) NSString * fileExtension; 
@property (nonatomic,readonly) NSURL * HLSPlaylistURL; 
-(MPStoreRedownloadProductItemAsset *)asset;
-(id)_initWithResponseDictionary:(id)arg1 ;
-(void)_enumerateAssetDictionariesWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)allFlavors;
-(MPStoreRedownloadProductItemAsset *)firstAsset;
-(NSURL *)HLSPlaylistURL;
-(id)assetForFlavor:(id)arg1 ;
-(BOOL)usesCurrentAccountIfAvailable;
-(void)setUsesCurrentAccountIfAvailable:(BOOL)arg1 ;
-(NSString *)fileExtension;
-(NSDictionary *)responseDictionary;
@end

