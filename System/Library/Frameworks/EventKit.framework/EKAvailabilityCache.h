/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary;

@interface EKAvailabilityCache : NSObject {

	BOOL _sourceIsInvalid;
	NSString* _accountID;
	BOOL _sourceSupportsAvailabilityRequests;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableDictionary* _addressesToCachedSpanRanges;
	NSMutableDictionary* _ignoredEventIDsToAddressBasedCaches;
	unsigned long long _nextRequestID;
	unsigned long long _cancelledID;

}
+(BOOL)_isValidStartDate:(id)arg1 endDate:(id)arg2 ;
+(void)_logRequestElapsedTime:(double)arg1 forNumberOfAddresses:(unsigned long long)arg2 ;
+(id)_generateEventKitSpansFromPersistenceSpans:(id)arg1 ;
+(long long)_convertType:(long long)arg1 ;
-(id)init;
-(id)description;
-(id)initWithSource:(id)arg1 ;
-(id)_dictionaryForIgnoredEventID:(id)arg1 ;
-(void)_handleResults:(id)arg1 resultsBlock:(/*^block*/id)arg2 ignoredEventID:(id)arg3 ;
-(id)requestAvailabilityBetweenStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 resultsBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)cancelAvailabilityRequestWithID:(id)arg1 ;
@end

