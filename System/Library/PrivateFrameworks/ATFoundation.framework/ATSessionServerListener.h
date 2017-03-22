/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <ATFoundation/ATSessionServer.h>

@class NSXPCListener, NSMutableDictionary, NSString;

@interface ATSessionServerListener : NSObject <NSXPCListenerDelegate, ATSessionServer> {

	NSXPCListener* _listener;
	NSMutableDictionary* _sessionProxiesBySessionID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSessionServer;
-(id)init;
-(void)stop;
-(void)start;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)removeSession:(id)arg1 ;
-(void)fetchSessionsWithTypeIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelSessionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dumpDebugInformation;
-(void)addSession:(id)arg1 ;
@end

