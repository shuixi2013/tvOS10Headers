/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHADownloadRequestManagement.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDate, NSString;

@interface PHAAssetResourceDownloadRequestManager : NSObject <PHADownloadRequestManagement> {

	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _dateToRequestPermissionAgain;
	unsigned long long _allowedDownloadCount;
	unsigned long long _requestCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long long requestCount;                 //@synthesize requestCount=_requestCount - In the implementation block
+(id)sharedManager;
-(id)init;
-(unsigned long long)requestCount;
-(void)setRequestCount:(unsigned long long)arg1 ;
-(void)requestPermissionToDownloadWithPhotoLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

