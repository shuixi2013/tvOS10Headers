/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STSiriLocation, NSString, NSDate;

@interface STShowMapsSearchResultsRequest : AFSiriRequest {

	STSiriLocation* _searchResults;
	NSString* _extSessionGuid;
	NSDate* _extSessionGuidCreatedTimestamp;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)extSessionGuid;
-(id)extSessionGuidCreatedTimestamp;
-(id)createResponse;
-(id)searchResults;
-(id)_initWithLocation:(id)arg1 extSessionGuid:(id)arg2 extSessionGuidCreatedTimestamp:(id)arg3 ;
@end
