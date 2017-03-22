/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEExtensionTunnelProviderHostContext.h>
#import <libobjc.A.dylib/NEExtensionPacketTunnelProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionPacketTunnelProviderHostProtocol.h>

@class NSString;

@interface NEExtensionPacketTunnelProviderHostContext : NEExtensionTunnelProviderHostContext <NEExtensionPacketTunnelProviderProtocol, NEExtensionPacketTunnelProviderHostProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)setVirtualInterfaceSocket:(id)arg1 ;
-(void)fetchVirtualInterfaceTypeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestSocket:(BOOL)arg1 interface:(id)arg2 local:(id)arg3 remote:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

