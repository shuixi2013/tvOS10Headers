/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharePrepFolderForSharing : BROperation {

	NSURL* _url;
	/*^block*/id _prepFolderSharingCompletionBlock;

}

@property (copy) id prepFolderSharingCompletionBlock;              //@synthesize prepFolderSharingCompletionBlock=_prepFolderSharingCompletionBlock - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)prepFolderSharingCompletionBlock;
-(void)setPrepFolderSharingCompletionBlock:(id)arg1 ;
@end

