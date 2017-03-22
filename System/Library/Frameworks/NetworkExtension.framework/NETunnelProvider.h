/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEProvider.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NEVPNProtocol, NSArray, NSString;

@interface NETunnelProvider : NEProvider <NSExtensionRequestHandling> {

	BOOL _reasserting;
	BOOL _onDemandEnabled;
	NEVPNProtocol* _protocolConfiguration;
	NSArray* _appRules;

}

@property (retain) NEVPNProtocol * protocolConfiguration;              //@synthesize protocolConfiguration=_protocolConfiguration - In the implementation block
@property (assign) BOOL onDemandEnabled;                               //@synthesize onDemandEnabled=_onDemandEnabled - In the implementation block
@property (retain) NSArray * appRules;                                 //@synthesize appRules=_appRules - In the implementation block
@property (readonly) long long routingMethod; 
@property (assign) BOOL reasserting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)appRules;
-(void)setOnDemandEnabled:(BOOL)arg1 ;
-(void)setAppRules:(NSArray *)arg1 ;
-(long long)routingMethod;
-(NEVPNProtocol *)protocolConfiguration;
-(void)setProtocolConfiguration:(NEVPNProtocol *)arg1 ;
-(BOOL)onDemandEnabled;
-(void)setReasserting:(BOOL)arg1 ;
-(void)setTunnelNetworkSettings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleAppMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)reasserting;
@end

