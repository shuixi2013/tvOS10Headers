/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IPFeatureManager : NSObject
+(void)setEventStoreForTesting:(id)arg1 ;
+(id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 ;
+(void)scanEventsInMessageUnits:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)scanEventsInMessageUnits:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

