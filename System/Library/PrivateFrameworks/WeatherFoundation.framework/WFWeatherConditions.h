/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFLocation, NSMutableDictionary;

@interface WFWeatherConditions : NSObject <NSCopying, NSSecureCoding> {

	WFLocation* _location;
	NSMutableDictionary* _components;

}

@property (nonatomic,retain) NSMutableDictionary * components;              //@synthesize components=_components - In the implementation block
@property (retain) WFLocation * location;                                   //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)valueForComponent:(id)arg1 ;
-(void)setValue:(id)arg1 forComponent:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(WFLocation *)location;
-(NSMutableDictionary *)components;
-(void)setLocation:(WFLocation *)arg1 ;
-(void)setComponents:(NSMutableDictionary *)arg1 ;
-(id)allComponents;
-(void)_retrieveSunrise:(id*)arg1 sunset:(id*)arg2 ;
-(BOOL)wf_isDayIfSunrise:(id)arg1 sunset:(id)arg2 ;
-(BOOL)wf_isDay;
@end

