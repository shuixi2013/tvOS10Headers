/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaQuery, MPStoreOfferMediaItemCollection, NSArray;

@interface MPStoreCollectionCompletionOffering : NSObject {

	MPMediaQuery* _localItemsQuery;
	long long _preferredStoreOfferVariant;
	MPStoreOfferMediaItemCollection* _offeredCollection;
	MPStoreOfferMediaItemCollection* _mergedCollection;

}

@property (nonatomic,readonly) long long preferredStoreOfferVariant;                                          //@synthesize preferredStoreOfferVariant=_preferredStoreOfferVariant - In the implementation block
@property (nonatomic,readonly) MPStoreOfferMediaItemCollection * offeredCollection;                           //@synthesize offeredCollection=_offeredCollection - In the implementation block
@property (nonatomic,readonly) MPStoreOfferMediaItemCollection * mergedCollection;                            //@synthesize mergedCollection=_mergedCollection - In the implementation block
@property (nonatomic,readonly) MPStoreOfferMediaItemCollection * itemsWithCompletionsCollection; 
@property (nonatomic,readonly) NSArray * localItems; 
-(id)initWithOfferedCollection:(id)arg1 localItemsQuery:(id)arg2 preferredStoreOfferVariant:(long long)arg3 ;
-(MPStoreOfferMediaItemCollection *)mergedCollection;
-(MPStoreOfferMediaItemCollection *)itemsWithCompletionsCollection;
-(long long)preferredStoreOfferVariant;
-(NSArray *)localItems;
-(MPStoreOfferMediaItemCollection *)offeredCollection;
@end

