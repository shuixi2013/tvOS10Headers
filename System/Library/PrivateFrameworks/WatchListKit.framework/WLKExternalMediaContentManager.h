/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface WLKExternalMediaContentManager : NSObject {

	NSXPCConnection* _connection;

}
+(id)sharedManager;
-(id)init;
-(id)_init;
-(id)_connection;
-(void)deletePlaybackActivityWithIdentifier:(id)arg1 ;
-(id)_proxy;
-(void)_deletePlaybackActivityWithIdentifier:(id)arg1 bundleID:(id)arg2 ;
@end

