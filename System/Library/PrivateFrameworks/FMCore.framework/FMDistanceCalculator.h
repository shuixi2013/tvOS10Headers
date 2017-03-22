/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLocale, NSUserDefaults;

@interface FMDistanceCalculator : NSObject {

	NSLocale* _locale;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,retain) NSLocale * locale;                          //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (assign,nonatomic) long long measurementSystem; 
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(id)initWithDefaultsSuiteName:(id)arg1 ;
-(long long)measurementSystem;
-(id)_scaledAndConvertedMin:(double)arg1 andMax:(double)arg2 ;
-(id)_localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2 fractionDigits:(unsigned long long)arg3 ;
-(void)setMeasurementSystem:(long long)arg1 ;
-(double)averageDistanceFromLocation:(id)arg1 toLocation:(id)arg2 ;
-(id)localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2 ;
@end

