/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, CoreDAVItemWithNoChildren;

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem {

	NSMutableSet* _emailAddresses;
	CoreDAVItemWithNoChildren* _unauthenticated;

}

@property (nonatomic,retain) NSMutableSet * emailAddresses;                            //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * unauthenticated;              //@synthesize unauthenticated=_unauthenticated - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setEmailAddresses:(NSMutableSet *)arg1 ;
-(CoreDAVItemWithNoChildren *)unauthenticated;
-(void)addEmailAddress:(id)arg1 ;
-(NSMutableSet *)emailAddresses;
@end

