/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEAppProxyFlow.h>

@class NWEndpoint;

@interface NEAppProxyTCPFlow : NEAppProxyFlow {

	NWEndpoint* _remoteEndpoint;

}

@property (readonly) NWEndpoint * remoteEndpoint;              //@synthesize remoteEndpoint=_remoteEndpoint - In the implementation block
-(id)description;
-(id)initWithNEFlow:(NEFlowRef)arg1 queue:(id)arg2 ;
-(NWEndpoint *)remoteEndpoint;
-(void)readDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)writeData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

