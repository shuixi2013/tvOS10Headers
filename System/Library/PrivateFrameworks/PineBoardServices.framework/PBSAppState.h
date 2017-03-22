/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PBSBadgeValue, NSArray;

@interface PBSAppState : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _applicationIdentifier;
	PBSBadgeValue* _badgeValue;
	BOOL _badgeEnabled;
	BOOL _recentlyUpdated;
	BOOL _enabled;
	long long _cacheDeleting;
	NSArray* _pendingUserNotifications;

}

@property (nonatomic,copy,readonly) NSString * applicationIdentifier;                      //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) PBSBadgeValue * badgeValue;                            //@synthesize badgeValue=_badgeValue - In the implementation block
@property (getter=isBadgeEnabled,nonatomic,readonly) BOOL badgeEnabled;                    //@synthesize badgeEnabled=_badgeEnabled - In the implementation block
@property (getter=isRecentlyUpdated,nonatomic,readonly) BOOL recentlyUpdated;              //@synthesize recentlyUpdated=_recentlyUpdated - In the implementation block
@property (getter=isCacheDeleting,nonatomic,readonly) BOOL cacheDeleting; 
@property (nonatomic,copy,readonly) NSArray * pendingUserNotifications; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(PBSBadgeValue *)badgeValue;
-(NSString *)applicationIdentifier;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isBadgeEnabled;
-(BOOL)isRecentlyUpdated;
-(NSArray *)pendingUserNotifications;
-(BOOL)isCacheDeleting;
@end

