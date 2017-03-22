/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAWeatherLocation, NSString, NSArray;

@interface SAWeatherAirQualityObject : SADomainObject

@property (assign,nonatomic) long long airQualityIndex; 
@property (nonatomic,retain) SAWeatherLocation * airQualityLocation; 
@property (nonatomic,copy) NSString * airQualityRatingCategory; 
@property (nonatomic,copy) NSString * localizedCategoryName; 
@property (nonatomic,copy) NSArray * pollutants; 
+(id)airQualityObject;
+(id)airQualityObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)airQualityIndex;
-(void)setAirQualityIndex:(long long)arg1 ;
-(SAWeatherLocation *)airQualityLocation;
-(void)setAirQualityLocation:(SAWeatherLocation *)arg1 ;
-(NSString *)airQualityRatingCategory;
-(void)setAirQualityRatingCategory:(NSString *)arg1 ;
-(NSString *)localizedCategoryName;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
-(NSArray *)pollutants;
-(void)setPollutants:(NSArray *)arg1 ;
@end

