/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface UNPushNotificationRequestBuilder : NSObject {

	NSDictionary* _payload;
	NSString* _bundleIdentifier;
	NSString* _identifier;

}
-(id)initWithIdentifier:(id)arg1 payload:(id)arg2 bundleIdentifier:(id)arg3 ;
-(id)buildNotificationRequest;
-(id)buildSafePayload;
-(id)_sanitizeAPSDictionary:(id)arg1 ;
-(id)_sanitizeAlert:(id)arg1 ;
-(id)_sanitizeFlag:(id)arg1 ;
-(id)_sanitizeStringArray:(id)arg1 ;
-(id)_sanitizeLocalizationArgumentsArray:(id)arg1 ;
@end
