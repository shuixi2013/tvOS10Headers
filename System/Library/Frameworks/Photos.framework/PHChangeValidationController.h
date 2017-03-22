/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSManagedObjectContext, PLPhotoLibrary, NSArray, NSString;

@interface PHChangeValidationController : NSObject {

	BOOL _didPrepare;
	BOOL _confirmationRequired;
	NSSet* _insertRequests;
	NSSet* _updateRequests;
	NSSet* _deleteRequests;
	NSManagedObjectContext* _managedObjectContext;
	PLPhotoLibrary* _photoLibrary;
	NSArray* _renderedContentURLs;
	NSArray* _assetsToChangeContent;
	NSArray* _assetsToRevert;
	NSArray* _assetsToHide;
	NSArray* _assetsToDelete;
	NSArray* _albumsToDelete;
	NSArray* _foldersToDelete;
	NSString* _clientName;

}

@property (nonatomic,readonly) NSArray * renderedContentURLs;                              //@synthesize renderedContentURLs=_renderedContentURLs - In the implementation block
@property (nonatomic,readonly) NSArray * assetsToChangeContent;                            //@synthesize assetsToChangeContent=_assetsToChangeContent - In the implementation block
@property (nonatomic,readonly) NSArray * assetsToRevert;                                   //@synthesize assetsToRevert=_assetsToRevert - In the implementation block
@property (nonatomic,readonly) NSArray * assetsToHide;                                     //@synthesize assetsToHide=_assetsToHide - In the implementation block
@property (nonatomic,readonly) NSArray * assetsToDelete;                                   //@synthesize assetsToDelete=_assetsToDelete - In the implementation block
@property (nonatomic,readonly) NSArray * albumsToDelete;                                   //@synthesize albumsToDelete=_albumsToDelete - In the implementation block
@property (nonatomic,readonly) NSArray * foldersToDelete;                                  //@synthesize foldersToDelete=_foldersToDelete - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientName;                                 //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) BOOL confirmationRequired;                                  //@synthesize confirmationRequired=_confirmationRequired - In the implementation block
@property (nonatomic,readonly) NSSet * insertRequests;                                     //@synthesize insertRequests=_insertRequests - In the implementation block
@property (nonatomic,readonly) NSSet * updateRequests;                                     //@synthesize updateRequests=_updateRequests - In the implementation block
@property (nonatomic,readonly) NSSet * deleteRequests;                                     //@synthesize deleteRequests=_deleteRequests - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary;                              //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)validateWithError:(id*)arg1 ;
-(NSArray *)albumsToDelete;
-(PLPhotoLibrary *)photoLibrary;
-(NSSet *)insertRequests;
-(NSSet *)updateRequests;
-(NSSet *)deleteRequests;
-(BOOL)_prepareWithError:(id*)arg1 ;
-(BOOL)confirmationRequired;
-(NSArray *)renderedContentURLs;
-(NSArray *)assetsToChangeContent;
-(NSArray *)assetsToRevert;
-(NSArray *)assetsToHide;
-(NSArray *)assetsToDelete;
-(NSArray *)foldersToDelete;
-(id)initWithInsertRequests:(id)arg1 updateRequests:(id)arg2 deleteRequests:(id)arg3 context:(id)arg4 photoLibrary:(id)arg5 ;
-(NSString *)clientName;
@end

