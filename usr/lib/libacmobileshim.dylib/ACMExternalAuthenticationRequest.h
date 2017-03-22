/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ACMExternalAuthenticationRequest <ACMBaseAuthenticationRequest>
@property (assign) BOOL useAlertView; 
@property (assign) BOOL userNameFieldEditable; 
@property (retain) NSString * alertViewPrompt; 
@property (assign) BOOL automaticallyCancelWhenSwitchingToBackground; 
@property (assign) BOOL canUseTouchID; 
@required
-(BOOL)useAlertView;
-(BOOL)automaticallyCancelWhenSwitchingToBackground;
-(void)setUserNameFieldEditable:(BOOL)arg1;
-(void)setUseAlertView:(BOOL)arg1;
-(BOOL)userNameFieldEditable;
-(NSString *)alertViewPrompt;
-(void)setAlertViewPrompt:(id)arg1;
-(void)setAutomaticallyCancelWhenSwitchingToBackground:(BOOL)arg1;
-(BOOL)canUseTouchID;
-(void)setCanUseTouchID:(BOOL)arg1;

@end

