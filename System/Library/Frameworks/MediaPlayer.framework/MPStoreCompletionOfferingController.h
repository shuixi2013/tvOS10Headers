/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue;
@class NSCache, NSMutableDictionary, NSObject, NSString;

@interface MPStoreCompletionOfferingController : NSObject <MCProfileConnectionObserver> {

	NSCache* _offeringCache;
	NSMutableDictionary* _lookupItemsByStoreLookupID;
	NSMutableDictionary* _lookupItemsByTokenID;
	unsigned long long _nextTokenID;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_getIsCMCDisabled:(BOOL*)arg1 disabledReason:(id*)arg2 ;
+(BOOL)_isCmcEnabled;
+(id)storeOfferingController;
+(void)setWantsArtwork:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_defaultMediaLibraryDidChangeNotification:(id)arg1 ;
-(void)_storeAccountsDidChangeNotification:(id)arg1 ;
-(void)_dumpCache;
-(id)_sanitizedQuery:(id)arg1 ;
-(id)_onQueueCompletionOfferingForAlbumItemsQuery:(id)arg1 ;
-(void)_onQueueCancelCompletionOfferingLookupTokenID:(unsigned long long)arg1 ;
-(id)_onQueueStartCompletionOfferingLookupForAlbumItemsQuery:(id)arg1 responseBlock:(/*^block*/id)arg2 ;
-(void)_onQueueClearCache;
-(void)_onQueueRemoveLookupItem:(id)arg1 ;
-(void)_onQueueSetCachedCompletionOffering:(id)arg1 forStoreLookupID:(id)arg2 ;
-(void)_onQueueRemoveLookupItemsForStoreLookupID:(id)arg1 ;
-(void)_onQueuePostLookupCompletedForLookupItem:(id)arg1 offering:(id)arg2 error:(id)arg3 ;
-(id)_onQueueGetInsertedLookupItemForAlbumItemsQuery:(id)arg1 requestAlreadyIssued:(BOOL*)arg2 responseBlock:(/*^block*/id)arg3 ;
-(void)_lookupCompletedWithResponse:(id)arg1 lookupItem:(id)arg2 error:(id)arg3 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)completionOfferingForAlbumItemsQuery:(id)arg1 ;
-(void)cancelCompletionOfferingLookup:(unsigned long long)arg1 ;
-(unsigned long long)startCompletionOfferingLookupForAlbumItemsQuery:(id)arg1 responseBlock:(/*^block*/id)arg2 ;
@end

