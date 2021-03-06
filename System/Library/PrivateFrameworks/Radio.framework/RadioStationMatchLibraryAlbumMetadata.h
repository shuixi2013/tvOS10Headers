/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioStationMatchMetadata.h>

@class NSString, NSNumber;

@interface RadioStationMatchLibraryAlbumMetadata : RadioStationMatchMetadata {

	NSString* _albumName;
	NSNumber* _albumStoreID;
	NSNumber* _representativeCloudID;

}

@property (nonatomic,copy) NSString * albumName;                          //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,copy) NSNumber * albumStoreID;                       //@synthesize albumStoreID=_albumStoreID - In the implementation block
@property (nonatomic,copy) NSNumber * representativeCloudID;              //@synthesize representativeCloudID=_representativeCloudID - In the implementation block
+(id)metadataKey;
-(NSNumber *)albumStoreID;
-(id)copyMetadataDictionary;
-(NSNumber *)representativeCloudID;
-(void)setAlbumName:(NSString *)arg1 ;
-(NSString *)albumName;
-(void)setRepresentativeCloudID:(NSNumber *)arg1 ;
-(void)setAlbumStoreID:(NSNumber *)arg1 ;
@end

