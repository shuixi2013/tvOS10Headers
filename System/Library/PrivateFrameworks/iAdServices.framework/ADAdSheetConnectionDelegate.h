/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ADAdSheetConnectionDelegate <NSObject>
@optional
-(BOOL)shouldConnectToAdSheet;
-(void)adSheetConnectionEstablished;
-(void)adSheetConnectionLost;

@required
-(id)adSheetMachServiceName;
-(void)configureConnection:(id)arg1;

@end

