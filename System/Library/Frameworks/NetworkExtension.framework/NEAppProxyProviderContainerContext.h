/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEExtensionAppProxyProviderContext.h>

@class NEAppProxyProvider, NEAppProxyProviderContainerHostContext;

@interface NEAppProxyProviderContainerContext : NEExtensionAppProxyProviderContext {

	NEAppProxyProvider* _provider;
	NEAppProxyProviderContainerHostContext* _containerHostContext;

}

@property (readonly) NEAppProxyProvider * provider;                                                     //@synthesize provider=_provider - In the implementation block
@property (__weak,readonly) NEAppProxyProviderContainerHostContext * containerHostContext;              //@synthesize containerHostContext=_containerHostContext - In the implementation block
-(id)_principalObject;
-(NEAppProxyProvider *)provider;
-(id)hostContext;
-(id)initWithHostContext:(id)arg1 providerClass:(Class)arg2 ;
-(NEAppProxyProviderContainerHostContext *)containerHostContext;
@end

