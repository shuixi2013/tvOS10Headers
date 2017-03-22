/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSArray;

@interface MKLocalSearchResponse : NSObject {

	NSArray* _mapItems;
	SCD_Struct_MK4 _boundingRegion;

}

@property (nonatomic,readonly) NSArray * mapItems;                          //@synthesize mapItems=_mapItems - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK16 boundingRegion;              //@synthesize boundingRegion=_boundingRegion - In the implementation block
-(id)description;
-(id)_dictionaryRepresentation;
-(SCD_Struct_MK16)boundingRegion;
-(id)_initWithMapItems:(id)arg1 boundingRegion:(id)arg2 ;
-(NSArray *)mapItems;
@end
