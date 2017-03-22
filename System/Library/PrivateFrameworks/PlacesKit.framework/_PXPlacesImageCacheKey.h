/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXPlacesGeotaggable;
@class NSString;

@interface _PXPlacesImageCacheKey : NSObject {

	id<PXPlacesGeotaggable> _geotaggable;
	NSString* _key;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)key;
-(id)geotaggable;
-(id)initWithGeotaggable:(id)arg1 andKey:(id)arg2 ;
@end

