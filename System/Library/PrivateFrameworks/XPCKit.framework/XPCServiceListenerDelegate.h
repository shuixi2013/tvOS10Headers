/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol XPCServiceListenerDelegate <NSObject>
@optional
-(BOOL)XPCServiceListener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@required
-(void)XPCServiceListener:(id)arg1 didReceiveNewConnection:(id)arg2;

@end

