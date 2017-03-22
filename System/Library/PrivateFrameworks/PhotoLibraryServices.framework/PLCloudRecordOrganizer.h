/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibrary, NSMutableArray;

@interface PLCloudRecordOrganizer : NSObject {

	PLPhotoLibrary* _photoLibrary;
	NSMutableArray* _assetRecordsWithContainerChange;
	NSMutableArray* _albumRecordsWithContainerChange;
	NSMutableArray* _personRecords;
	NSMutableArray* _masterRecords;
	NSMutableArray* _assetRecords;
	NSMutableArray* _albumRecords;
	NSMutableArray* _memoryRecords;
	NSMutableArray* _deleteRecords;
	NSMutableArray* _expungedRecords;

}

@property (readonly) NSMutableArray * assetRecordsWithContainerChange;              //@synthesize assetRecordsWithContainerChange=_assetRecordsWithContainerChange - In the implementation block
@property (readonly) NSMutableArray * albumRecordsWithContainerChange;              //@synthesize albumRecordsWithContainerChange=_albumRecordsWithContainerChange - In the implementation block
@property (readonly) NSMutableArray * personRecords;                                //@synthesize personRecords=_personRecords - In the implementation block
@property (readonly) NSMutableArray * masterRecords;                                //@synthesize masterRecords=_masterRecords - In the implementation block
@property (readonly) NSMutableArray * assetRecords;                                 //@synthesize assetRecords=_assetRecords - In the implementation block
@property (readonly) NSMutableArray * albumRecords;                                 //@synthesize albumRecords=_albumRecords - In the implementation block
@property (readonly) NSMutableArray * memoryRecords;                                //@synthesize memoryRecords=_memoryRecords - In the implementation block
@property (readonly) NSMutableArray * deleteRecords;                                //@synthesize deleteRecords=_deleteRecords - In the implementation block
@property (readonly) NSMutableArray * expungedRecords;                              //@synthesize expungedRecords=_expungedRecords - In the implementation block
-(void)dealloc;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)organizeRecords:(id)arg1 ;
-(NSMutableArray *)assetRecordsWithContainerChange;
-(NSMutableArray *)albumRecordsWithContainerChange;
-(NSMutableArray *)personRecords;
-(NSMutableArray *)masterRecords;
-(NSMutableArray *)assetRecords;
-(NSMutableArray *)albumRecords;
-(NSMutableArray *)memoryRecords;
-(NSMutableArray *)deleteRecords;
-(NSMutableArray *)expungedRecords;
@end

