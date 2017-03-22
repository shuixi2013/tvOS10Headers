/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SBLockOverlayStylePropertiesFactory : NSObject {

	NSMutableDictionary* _deviceQualityToProperties;
	unsigned long long _style;

}

@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
+(id)overlayPropertiesFactoryWithStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(id)propertiesWithGraphicsQuality:(long long)arg1 ;
-(id)_fetchAndCachePropsForDeviceQuality:(long long)arg1 ;
-(id)propertiesWithDeviceDefaultGraphicsQuality;
@end

