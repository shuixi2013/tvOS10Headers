/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class BRGlobalProgressProxy, NSMutableArray, NSOperationQueue, BRUploadAllFilesForLogOutOperation, NSString;

@interface BRDownloadAllFilesForLogOutOperation : BROperation <NSProgressReporting> {

	BRGlobalProgressProxy* _progress;
	NSMutableArray* _fileCoordinators;
	/*^block*/id _downloadAllFilesCompletionBlock;
	NSOperationQueue* _internalQueue;
	BRUploadAllFilesForLogOutOperation* _uploadOp;

}

@property (retain) BRGlobalProgressProxy * progress;                //@synthesize progress=_progress - In the implementation block
@property (copy) id downloadAllFilesCompletionBlock;                //@synthesize downloadAllFilesCompletionBlock=_downloadAllFilesCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(id)init;
-(void)setProgress:(BRGlobalProgressProxy *)arg1 ;
-(BRGlobalProgressProxy *)progress;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)downloadAllFilesCompletionBlock;
-(void)setDownloadAllFilesCompletionBlock:(id)arg1 ;
@end

