/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLPlacemarkInternal, CLLocation, CLRegion, NSTimeZone, NSDictionary, NSString, NSArray;

@interface CLPlacemark : NSObject <NSCopying, NSSecureCoding> {

	CLPlacemarkInternal* _internal;

}

@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,copy,readonly) CLRegion * region; 
@property (nonatomic,copy,readonly) NSTimeZone * timeZone; 
@property (nonatomic,copy,readonly) NSDictionary * addressDictionary; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * thoroughfare; 
@property (nonatomic,copy,readonly) NSString * subThoroughfare; 
@property (nonatomic,copy,readonly) NSString * locality; 
@property (nonatomic,copy,readonly) NSString * subLocality; 
@property (nonatomic,copy,readonly) NSString * administrativeArea; 
@property (nonatomic,copy,readonly) NSString * subAdministrativeArea; 
@property (nonatomic,copy,readonly) NSString * postalCode; 
@property (nonatomic,copy,readonly) NSString * ISOcountryCode; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (nonatomic,copy,readonly) NSString * inlandWater; 
@property (nonatomic,copy,readonly) NSString * ocean; 
@property (nonatomic,copy,readonly) NSArray * areasOfInterest; 
+(id)placemarkWithLocation:(id)arg1 name:(id)arg2 postalAddress:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)placemarkWithGEOMapItem:(id)arg1 ;
-(id)initIntentPlacemarkWithLocation:(id)arg1 addressDictionary:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLLocation *)location;
-(NSTimeZone *)timeZone;
-(CLRegion *)region;
-(id)formattedAddressLines;
-(NSDictionary *)addressDictionary;
-(NSArray *)areasOfInterest;
-(NSString *)country;
-(NSString *)administrativeArea;
-(NSString *)subAdministrativeArea;
-(NSString *)locality;
-(NSString *)subLocality;
-(NSString *)thoroughfare;
-(NSString *)subThoroughfare;
-(id)fullThoroughfare;
-(NSString *)inlandWater;
-(NSString *)ocean;
-(id)_geoMapItem;
-(id)_initWithGeoMapItem:(id)arg1 ;
-(NSString *)postalCode;
-(id)initWithPlacemark:(id)arg1 ;
-(id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4 ;
-(NSString *)ISOcountryCode;
@end
