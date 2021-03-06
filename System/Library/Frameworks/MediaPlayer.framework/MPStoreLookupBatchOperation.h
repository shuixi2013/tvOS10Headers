/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class SSLookupRequest, SSLookupResponse, NSError;

@interface MPStoreLookupBatchOperation : NSOperation {

	SSLookupRequest* _subrequest;
	SSLookupResponse* _response;
	NSError* _error;

}

@property (nonatomic,readonly) SSLookupRequest * subrequest;              //@synthesize subrequest=_subrequest - In the implementation block
@property (nonatomic,readonly) SSLookupResponse * response;               //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSError * error;                           //@synthesize error=_error - In the implementation block
-(SSLookupResponse *)response;
-(void)main;
-(NSError *)error;
-(id)initWithSubrequest:(id)arg1 ;
-(SSLookupRequest *)subrequest;
@end

