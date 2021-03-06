/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOActiveTileGroup;


@protocol GEOResourceManifestServerProxy <NSObject>
@property (assign,nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate; 
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
@required
-(void)setDelegate:(id)arg1;
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
-(id)configuration;
-(id)authToken;
-(GEOActiveTileGroup *)activeTileGroup;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)activateResourceScale:(int)arg1;
-(void)activateResourceScenario:(int)arg1;
-(void)deactivateResourceScale:(int)arg1;
-(void)deactivateResourceScenario:(int)arg1;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1;
-(oneway void)resetActiveTileGroup;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2;
-(id)serverQueue;
-(void)openConnection;
-(void)closeConnection;
-(void)updateIfNecessary:(/*^block*/id)arg1;
-(void)forceUpdate:(/*^block*/id)arg1;
-(void)performOpportunisticResourceLoading;

@end

