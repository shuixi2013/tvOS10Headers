/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <UserNotifications/UNNotificationAttachmentOptions.h>
#import <libobjc.A.dylib/UNNotificationAttachmentThumbnailOptions.h>

@class NSString;

@interface UNMovieNotificationAttachmentOptions : UNNotificationAttachmentOptions <UNNotificationAttachmentThumbnailOptions> {

	BOOL _thumbnailHidden;
	SCD_Struct_UN2 _thumbnailTimestamp;
	CGRect _thumbnailClippingRect;

}

@property (nonatomic,readonly) SCD_Struct_UN2 thumbnailTimestamp;              //@synthesize thumbnailTimestamp=_thumbnailTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL thumbnailHidden;                           //@synthesize thumbnailHidden=_thumbnailHidden - In the implementation block
@property (nonatomic,readonly) CGRect thumbnailClippingRect;                   //@synthesize thumbnailClippingRect=_thumbnailClippingRect - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)optionsFromOptionsDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)thumbnailClippingRect;
-(BOOL)thumbnailHidden;
-(SCD_Struct_UN2)thumbnailTimestamp;
-(id)initWithThumbnailHidden:(BOOL)arg1 thumbnailClippingRect:(CGRect)arg2 thumbnailTimestamp:(SCD_Struct_UN2)arg3 ;
@end

