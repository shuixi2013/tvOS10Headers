/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSSet, CoreDAVResponseItem;

@interface CalDAVPropPatchWithFallbackTaskGroup : CoreDAVTaskGroup {

	NSURL* _url;
	NSSet* _primaryElements;
	NSSet* _fallbackElements;
	CoreDAVResponseItem* _responseItem;

}

@property (nonatomic,retain) CoreDAVResponseItem * responseItem;              //@synthesize responseItem=_responseItem - In the implementation block
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5 ;
-(void)startTaskGroup;
-(void)_proppatchAfterFailureCount:(unsigned long long)arg1 ;
-(CoreDAVResponseItem *)responseItem;
-(void)setResponseItem:(CoreDAVResponseItem *)arg1 ;
@end

