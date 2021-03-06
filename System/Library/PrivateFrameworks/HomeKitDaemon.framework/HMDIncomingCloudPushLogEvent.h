/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDIncomingCloudPushLogEvent : HMDLogEvent {

	NSString* _topic;

}

@property (nonatomic,readonly) NSString * topic;              //@synthesize topic=_topic - In the implementation block
+(id)uuid;
+(id)incomingCloudPush:(id)arg1 ;
-(id)initWithTopic:(id)arg1 ;
-(NSString *)topic;
@end

