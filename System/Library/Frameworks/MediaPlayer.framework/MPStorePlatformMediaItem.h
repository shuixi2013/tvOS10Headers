/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPNondurableMediaItem.h>

@class MPStoreItemMetadata;

@interface MPStorePlatformMediaItem : MPNondurableMediaItem {

	MPStoreItemMetadata* _storeItemMetadata;

}

@property (nonatomic,retain) MPStoreItemMetadata * storeItemMetadata;              //@synthesize storeItemMetadata=_storeItemMetadata - In the implementation block
+(id)defaultPropertyValues;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)artworkCatalog;
-(void)setStoreItemMetadata:(MPStoreItemMetadata *)arg1 ;
-(id)initWithStoreItemMetadata:(id)arg1 ;
-(MPStoreItemMetadata *)storeItemMetadata;
-(id)_valueFromMetadataForProperty:(id)arg1 ;
@end
