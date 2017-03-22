/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSDownloadManagerObserverPrivate.h>

@class SSDownloadManager, NSArray, NSSet, NSString;

@interface SSDownloadQueue : NSObject <SSDownloadManagerObserverPrivate> {

	BOOL _autoFinishDownloads;
	SSDownloadManager* _downloadManager;
	CFSetRef _observers;

}

@property (nonatomic,readonly) NSArray * placeholderDownloads; 
@property (nonatomic,readonly) NSArray * preorders; 
@property (readonly) NSSet * downloadKinds; 
@property (readonly) SSDownloadManager * downloadManager; 
@property (nonatomic,readonly) NSArray * downloads; 
@property (assign,nonatomic) BOOL shouldAutomaticallyFinishDownloads;              //@synthesize autoFinishDownloads=_autoFinishDownloads - In the implementation block
@property (getter=isUsingNetwork,readonly) BOOL usingNetwork; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mediaDownloadKinds;
+(id)softwareApplicationDownloadKinds;
-(void)_handleDownloadsDidChange:(id)arg1 ;
-(id)initWithDownloadKinds:(id)arg1 ;
-(id)_initWithDownloadManagerOptions:(id)arg1 ;
-(BOOL)canCancelDownload:(id)arg1 ;
-(NSSet *)downloadKinds;
-(void)_sendDownloadStatusChangedAtIndex:(long long)arg1 ;
-(void)_handleDownloadsRemoved:(id)arg1 ;
-(void)_sendQueueNetworkUsageChanged;
-(void)_messageObserversWithFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)_sendQueueChangedWithRemovals:(id)arg1 ;
-(void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2 ;
-(id)initWithDownloadManagerOptions:(id)arg1 ;
-(BOOL)addDownload:(id)arg1 ;
-(SSDownloadManager *)downloadManager;
-(void)addPlaceholderDownloads:(id)arg1 ;
-(id)downloadForItemIdentifier:(unsigned long long)arg1 ;
-(NSArray *)placeholderDownloads;
-(NSArray *)preorders;
-(void)removePlaceholderDownload:(id)arg1 ;
-(BOOL)startPreOrderDownload:(id)arg1 ;
-(void)_sendQueuePreOrdersChanged;
-(BOOL)shouldAutomaticallyFinishDownloads;
-(void)setShouldAutomaticallyFinishDownloads:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSArray *)downloads;
-(void)downloadManagerNetworkUsageDidChange:(id)arg1 ;
-(BOOL)reloadFromServer;
-(BOOL)isUsingNetwork;
-(void)getDownloadsUsingBlock:(/*^block*/id)arg1 ;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(BOOL)cancelDownload:(id)arg1 ;
@end

