/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NEExtensionAppProxyProviderHostProtocol <NEExtensionTunnelProviderHostProtocol>
@required
-(void)verifyAppWithPID:(long long)arg1 uuid:(id)arg2 matchesAppRule:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)openFlowDivertControlSocketWithCompletionHandler:(/*^block*/id)arg1;

@end

