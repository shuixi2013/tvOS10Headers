/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreRCXPCServiceCECPrivate
@required
-(void)fakeCreateCECBusAsync:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)fakeRemoveCECBusAsync:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fakeSetCECBusLinkStateAsync:(id)arg1 linkState:(BOOL)arg2 physicalAddress:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)fakeCreateRemoteCECDeviceAsync:(unsigned long long)arg1 bus:(id)arg2 logicalAddress:(unsigned char)arg3 physicalAddress:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)fakeSetCECDeviceLogicalAddressAsync:(id)arg1 logicalAddress:(unsigned char)arg2 reply:(/*^block*/id)arg3;
-(void)fakeRemoveCECDeviceAsync:(id)arg1 reply:(/*^block*/id)arg2;

@end

