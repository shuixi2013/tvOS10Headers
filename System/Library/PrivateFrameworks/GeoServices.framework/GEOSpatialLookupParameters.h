/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray;

@interface GEOSpatialLookupParameters : NSObject {

	SCD_Struct_GE26 _coordinate;
	double _radius;
	NSArray* _categories;

}

@property (nonatomic,readonly) SCD_Struct_GE26 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double radius;                           //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) NSArray * categories;                    //@synthesize categories=_categories - In the implementation block
-(void)dealloc;
-(NSArray *)categories;
-(double)radius;
-(SCD_Struct_GE26)coordinate;
-(id)initWithCoordinate:(SCD_Struct_GE26)arg1 radius:(double)arg2 categories:(id)arg3 ;
@end
