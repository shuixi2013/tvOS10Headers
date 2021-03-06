/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaStream/MediaStream-Structs.h>
@class NSMutableDictionary;

@interface MSAlertManager : NSObject {

	NSMutableDictionary* _personIDToNotification;

}
+(id)sharedAlertManager;
-(id)init;
-(void)_dismissNotificationForPersonID:(id)arg1 ;
-(void)_showNotificationInfo:(id)arg1 ;
-(void)_userDidRespondToNotification:(CFUserNotificationRef)arg1 info:(id)arg2 responseFlags:(unsigned long long)arg3 ;
-(void)displayAlertForPersonID:(id)arg1 notificationDict:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

