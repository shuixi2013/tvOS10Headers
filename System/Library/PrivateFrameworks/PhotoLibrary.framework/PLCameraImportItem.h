/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class NSString, NSMutableDictionary, UIImage, NSData, NSError, PLManagedAsset;

@interface PLCameraImportItem : NSObject {

	NSString* _identifier;
	NSString* _parentFolder;
	NSString* _basePath;
	NSMutableDictionary* _representationsMapping;
	UIImage* _thumbnail;
	NSData* _thumbnailData;
	int _thumbnailState;
	BOOL _metadataRequested;
	BOOL _thumbnailRequested;
	BOOL _shouldImport;
	NSError* _importError;
	NSString* eventName;
	PLManagedAsset* importedAsset;

}

@property (nonatomic,copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * parentFolder;              //@synthesize parentFolder=_parentFolder - In the implementation block
@property (nonatomic,retain) NSString * basePath;                         //@synthesize basePath=_basePath - In the implementation block
@property (nonatomic,retain) NSString * eventName; 
@property (nonatomic,retain) PLManagedAsset * importedAsset; 
@property (nonatomic,retain,readonly) UIImage * thumbnail;                //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) NSData * thumbnailData;                      //@synthesize thumbnailData=_thumbnailData - In the implementation block
@property (assign,nonatomic) BOOL shouldImport;                           //@synthesize shouldImport=_shouldImport - In the implementation block
@property (nonatomic,retain) NSError * importError;                       //@synthesize importError=_importError - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(BOOL)isLocked;
-(UIImage *)thumbnail;
-(id)representations;
-(unsigned long long)fileSize;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(id)creationDate;
-(BOOL)isAudio;
-(BOOL)isJPEG;
-(NSString *)parentFolder;
-(BOOL)isMovie;
-(NSString *)basePath;
-(void)setBasePath:(NSString *)arg1 ;
-(BOOL)isInDatabaseForce:(BOOL)arg1 ;
-(BOOL)isRaw;
-(BOOL)canRequestMetadata;
-(BOOL)canRequestThumbnail;
-(id)initWithIdentifier:(id)arg1 parentFolder:(id)arg2 ;
-(void)addRepresentationForCameraFile:(id)arg1 ;
-(void)removeRepresentationForCameraFile:(id)arg1 ;
-(void)requestMetadata;
-(id)representationForCameraFile:(id)arg1 ;
-(BOOL)hasAllMetadata;
-(int)thumbnailState;
-(void)setThumbnailState:(int)arg1 ;
-(void)requestThumbnail;
-(void)setThumbnailWithImageRef:(CGImageRef)arg1 ;
-(BOOL)shouldImport;
-(BOOL)isOnDisk;
-(void)setShouldImport:(BOOL)arg1 ;
-(void)setImportError:(NSError *)arg1 ;
-(BOOL)isStandalonePhoto;
-(void)markRepresentationsInDatabase;
-(NSError *)importError;
-(void)_addRepresentation:(id)arg1 ;
-(void)_removeRepresentation:(id)arg1 ;
-(BOOL)_isTypeWithSelector:(SEL)arg1 ;
-(id)fileExtensions;
-(id)_fileExtensionForTypeWithSelector:(SEL)arg1 ;
-(id)metadataForRepresentationWithFileExtension:(id)arg1 ;
-(void)clearMetadata;
-(void)cancelThumbnailRequest;
-(void)clearThumbnail;
-(BOOL)isStandaloneMovie;
-(id)jpgExtension;
-(id)rawExtension;
-(id)movieExtension;
-(id)audioExtension;
-(id)otherExtensions;
-(NSData *)thumbnailData;
-(void)setThumbnailData:(NSData *)arg1 ;
-(PLManagedAsset *)importedAsset;
-(void)setImportedAsset:(PLManagedAsset *)arg1 ;
@end

