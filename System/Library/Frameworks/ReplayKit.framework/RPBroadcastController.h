/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RPBroadcastControllerDelegate;
@class NSURL, NSDictionary, NSString;

@interface RPBroadcastController : NSObject {

	NSURL* _broadcastURL;
	NSDictionary* _serviceInfo;
	id<RPBroadcastControllerDelegate> _delegate;
	NSString* _broadcastExtensionBundleID;

}

@property (nonatomic,retain) NSDictionary * serviceInfo;                                     //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (getter=isBroadcasting,nonatomic,readonly) BOOL broadcasting; 
@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (nonatomic,readonly) NSURL * broadcastURL;                                         //@synthesize broadcastURL=_broadcastURL - In the implementation block
@property (assign,nonatomic,__weak) id<RPBroadcastControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * broadcastExtensionBundleID;                        //@synthesize broadcastExtensionBundleID=_broadcastExtensionBundleID - In the implementation block
-(void)setDelegate:(id<RPBroadcastControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<RPBroadcastControllerDelegate>)delegate;
-(BOOL)isPaused;
-(void)startBroadcastWithHandler:(/*^block*/id)arg1 ;
-(id)initWithExtensionBundleID:(id)arg1 broadcastURL:(id)arg2 ;
-(void)setServiceInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)serviceInfo;
-(BOOL)isBroadcasting;
-(void)pauseBroadcast;
-(void)resumeBroadcast;
-(void)finishBroadcastWithHandler:(/*^block*/id)arg1 ;
-(NSURL *)broadcastURL;
-(NSString *)broadcastExtensionBundleID;
@end

