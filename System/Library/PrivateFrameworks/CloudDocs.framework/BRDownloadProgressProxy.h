/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@class NSMetadataQuery, NSOperationQueue;

@interface BRDownloadProgressProxy : NSProgress {

	NSMetadataQuery* _query;
	NSOperationQueue* _queue;

}
-(void)stop;
-(void)start;
-(id)initWithURL:(id)arg1 ;
-(void)_queryDidReceiveUpdate:(id)arg1 ;
@end

