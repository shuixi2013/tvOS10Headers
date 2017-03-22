/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOSearchAttributionServerProxy.h>

@class GEOSearchAttributionManifest, NSLock, NSString;

@interface GEOSearchAttributionServerRemoteProxy : NSObject <GEOSearchAttributionServerProxy> {

	GEOSearchAttributionManifest* _attributionManifest;
	NSLock* _attributionManifestLock;
	int _attributionManifestUpdatedToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)_attributionManifest;
-(void)_loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
@end

