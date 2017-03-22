/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLDelayedFiledSystemDeletions : NSObject {

	NSMutableArray* _deletionInfos;

}
+(void)waitForAllDelayedDeletionsToFinish;
+(void)appendDescriptionForEvent:(id)arg1 toComponents:(id)arg2 ;
+(id)deletionsFromChangeHubEvent:(id)arg1 ;
+(id)filesystemDeletionQueue;
-(void)dealloc;
-(id)debugDescription;
-(void)addFilesystemDeletionInfo:(id)arg1 ;
-(void)deleteAllRemainingFilesAndThumbnailsWithPhotoLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)appendToXPCMessage:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)initWithFilesystemDeletionInfos:(id)arg1 ;
@end

