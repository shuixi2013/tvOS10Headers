/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableArray, NSError, NSHashTable, SSURLBag;

@interface ISURLBagLoadingController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasSuccessfullyLoadedBag;
	NSDictionary* _bagDictionary;
	NSMutableArray* _bagAccessRequestBlocks;
	NSError* _bagLoadingError;
	NSHashTable* _bagObservers;
	SSURLBag* _URLBag;

}

@property (nonatomic,readonly) NSDictionary * bagDictionary; 
+(id)sharedBagLoadingController;
-(void)dealloc;
-(id)init;
-(void)_reloadURLBagAllowingUpdateUsingExistingBagDictionary:(BOOL)arg1 ;
-(void)_handleNetworkReachabilityFlagsDidChangeNotification:(id)arg1 ;
-(void)_handleAccountStoreDidChangeNotification:(id)arg1 ;
-(void)_handleStoreFrontDidChangeNotification:(id)arg1 ;
-(void)_updateBagWithDictionary:(id)arg1 error:(id)arg2 ;
-(void)_didCompleteLoadingBagDictionary:(id)arg1 withError:(id)arg2 ;
-(void)requestAccessToBagUsingBlock:(/*^block*/id)arg1 ;
-(void)removeBagObserver:(id)arg1 ;
-(void)addBagObserver:(id)arg1 ;
-(NSDictionary *)bagDictionary;
@end

