/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLItemChange.h>

@class NSArray, NSDate, NSString, NSData;

@interface CPLMasterChange : CPLItemChange {

	NSArray* _resources;
	NSDate* _creationDate;
	NSString* _itemType;
	NSDate* _importDate;
	NSString* _filename;
	NSString* _importGroupIdentifier;
	NSString* _mediaMetaDataType;
	NSData* _mediaMetaData;
	long long _originalOrientation;
	unsigned long long _fullSizeJPEGSource;

}

@property (nonatomic,copy) NSArray * resources;                                  //@synthesize resources=_resources - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSString * itemType;                                  //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) BOOL isImage; 
@property (nonatomic,readonly) BOOL isVideo; 
@property (nonatomic,copy) NSDate * importDate;                                  //@synthesize importDate=_importDate - In the implementation block
@property (nonatomic,copy) NSString * filename;                                  //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy) NSString * importGroupIdentifier;                     //@synthesize importGroupIdentifier=_importGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSString * mediaMetaDataType;                         //@synthesize mediaMetaDataType=_mediaMetaDataType - In the implementation block
@property (nonatomic,retain) NSData * mediaMetaData;                             //@synthesize mediaMetaData=_mediaMetaData - In the implementation block
@property (assign,nonatomic) long long originalOrientation;                      //@synthesize originalOrientation=_originalOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long fullSizeJPEGSource;              //@synthesize fullSizeJPEGSource=_fullSizeJPEGSource - In the implementation block
-(id)init;
-(void)setName:(id)arg1 ;
-(id)name;
-(BOOL)isVideo;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(NSString *)itemType;
-(long long)dequeueOrder;
-(id)propertiesForChangeType:(unsigned long long)arg1 ;
-(/*^block*/id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1 ;
-(BOOL)isImage;
-(void)prepareForStorage;
-(void)awakeFromStorage;
-(BOOL)supportsDeletion;
-(unsigned long long)dataClassType;
-(long long)originalOrientation;
-(void)setOriginalOrientation:(long long)arg1 ;
-(void)setImportDate:(NSDate *)arg1 ;
-(void)setFullSizeJPEGSource:(unsigned long long)arg1 ;
-(unsigned long long)fullSizeJPEGSource;
-(NSDate *)importDate;
-(void)setItemType:(NSString *)arg1 ;
-(void)setMediaMetaData:(NSData *)arg1 ;
-(void)setMediaMetaDataType:(NSString *)arg1 ;
-(void)setImportGroupIdentifier:(NSString *)arg1 ;
-(BOOL)supportsResources;
-(NSData *)mediaMetaData;
-(NSString *)mediaMetaDataType;
-(NSString *)importGroupIdentifier;
-(id)propertiesDescription;
@end

