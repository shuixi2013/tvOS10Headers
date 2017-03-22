/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEORegionalResourceTileData, GEOResourceManifestConfiguration, GEOResourceLoader, NSLock;

@interface _GEORegionalResourcesTileLoader : NSObject {

	GEORegionalResourceTileData* _tile;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	GEOResourceLoader* _resourceLoader;
	NSLock* _lock;

}
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)loadResourcesForTileKey:(const GEOTileKey*)arg1 manifestConfiguration:(id)arg2 auditToken:(id)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
@end

