/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_queue;
@class PHAManager, NSObject, NSHashTable, PHFetchResult, NSString;

@interface PHALibraryChangeListener : NSOperation <PHPhotoLibraryChangeObserver> {

	PHAManager* _photoAnalysisManager;
	NSObject*<OS_dispatch_queue> _changeObservationQueue;
	NSHashTable* _changeObservers;
	PHFetchResult* _momentFetchResult;
	PHFetchResult* _personsFetchResult;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)registerChangeObserver:(id)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(id)initWithPhotoAnalysisManager:(id)arg1 ;
-(void)beginListeningForChanges;
-(id)libraryChangeDetailsForFetchResult:(id*)arg1 changes:(id)arg2 ;
-(void)_publishRawChange:(id)arg1 ;
-(id)momentChangeDetailsForChanges:(id)arg1 ;
-(id)personsChangeDetailsForChanges:(id)arg1 ;
@end

