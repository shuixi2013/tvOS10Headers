/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOSearchAttributionManifest;

@interface GEOSearchAttributionLoader : NSObject {

	GEOSearchAttributionManifest* _attributionManifest;

}
-(void)dealloc;
-(id)initWithAttributionManifest:(id)arg1 ;
-(void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned)arg2 allowNetwork:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

