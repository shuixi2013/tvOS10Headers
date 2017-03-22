/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOVoltaireTileRequester.h>

@interface GEOVoltaire3DTileRequester : GEOVoltaireTileRequester
+(unsigned char)tileProviderIdentifier;
+(Class)simpleRequesterClass;
+(GEOTileKey)patchTileKey:(GEOTileKey*)arg1 ;
+(id)queryStringFromKey:(const GEOTileKey*)arg1 manifestConfiguration:(id)arg2 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
@end

