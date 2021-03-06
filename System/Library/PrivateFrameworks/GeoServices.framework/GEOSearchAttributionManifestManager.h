/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOSearchAttributionServerProxy;
@interface GEOSearchAttributionManifestManager : NSObject {

	id<GEOSearchAttributionServerProxy> _serverProxy;

}

@property (nonatomic,readonly) id<GEOSearchAttributionServerProxy> serverProxy;              //@synthesize serverProxy=_serverProxy - In the implementation block
+(id)sharedManager;
+(void)useLocalProxy;
+(void)useRemoteProxy;
-(void)dealloc;
-(id)init;
-(id<GEOSearchAttributionServerProxy>)serverProxy;
-(void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
@end

