/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKAppDeviceConfig <NSObject>
@optional
-(id)bundleIdentifier;

@required
-(id)timeZone;
-(id)systemLanguage;
-(CGSize*)screenSize;
-(unsigned long long)preferredVideoFormat;
-(unsigned long long)preferredVideoPreviewFormat;
-(BOOL)isTimeZoneSet;
-(id)storeFrontCountryCode;

@end

