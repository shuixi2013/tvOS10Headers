/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSDownloadQueueObserver <NSObject>
@optional
-(void)downloadQueue:(id)arg1 downloadStatusChangedAtIndex:(long long)arg2;
-(void)downloadQueueNetworkUsageChanged:(id)arg1;

@required
-(void)downloadQueue:(id)arg1 changedWithRemovals:(id)arg2;

@end

