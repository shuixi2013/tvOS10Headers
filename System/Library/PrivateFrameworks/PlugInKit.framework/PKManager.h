/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKDaemonClient;

@interface PKManager : NSObject {

	PKDaemonClient* _client;

}

@property (retain) PKDaemonClient * client;              //@synthesize client=_client - In the implementation block
+(id)defaultManager;
-(void)setClient:(PKDaemonClient *)arg1 ;
-(id)initForService:(const char*)arg1 ;
-(id)containingAppForExtensionProperties:(id)arg1 ;
-(void)holdRequest:(id)arg1 flags:(unsigned long long)arg2 result:(/*^block*/id)arg3 ;
-(void)registerPlugInAtURL:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)unregisterPlugInAtURL:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)registerPlugInsInBundle:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)unregisterPlugInsInBundle:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)informationForPlugInWithPid:(int)arg1 ;
-(id)containingAppForPlugInConnectedTo:(id)arg1 ;
-(void)forceHoldPlugIn:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)updateExtensionStatesForPlugIns:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)containingAppForPlugInWithPid:(int)arg1 ;
-(PKDaemonClient *)client;
-(void)holdPlugInsInApplication:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)releaseHold:(id)arg1 ;
@end

