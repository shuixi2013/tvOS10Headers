/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class NSData, NSString, SSURLConnectionRequest;

@interface RadioReportIssueRequest : RadioRequest {

	NSData* _data;
	NSString* _description;
	int _issueType;
	SSURLConnectionRequest* _request;

}
-(void)cancel;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithIssueType:(int)arg1 description:(id)arg2 data:(id)arg3 ;
-(id)initWithIssueType:(int)arg1 description:(id)arg2 ;
@end

