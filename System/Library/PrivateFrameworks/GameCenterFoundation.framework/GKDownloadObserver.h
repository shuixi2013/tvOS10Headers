/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSDownloadManagerObserver.h>

@class SSDownloadManager, NSString;

@interface GKDownloadObserver : NSObject <SSDownloadManagerObserver> {

	SSDownloadManager* _downloadManager;

}

@property (retain) SSDownloadManager * downloadManager;              //@synthesize downloadManager=_downloadManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedObserver;
-(SSDownloadManager *)downloadManager;
-(void)dealloc;
-(id)init;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(BOOL)isDownloadingGame:(id)arg1 ;
-(void)setDownloadManager:(SSDownloadManager *)arg1 ;
@end

