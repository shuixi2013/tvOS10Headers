/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIPasscodeLockViewSimpleFixedDigitKeypad.h>

@class SBUIButton;

@interface SBUIPasscodeLockViewInstallTonightSimpleFixedDigitKeypad : SBUIPasscodeLockViewSimpleFixedDigitKeypad {

	SBUIButton* _remindMeLaterButton;

}
-(id)initWithLightStyle:(BOOL)arg1 numberOfDigits:(unsigned long long)arg2 ;
-(void)_layoutStatusView;
-(void)passcodeEntryFieldTextDidChange:(id)arg1 ;
-(void)_remindMeLaterButtonHit;
-(void)_layoutRemindMeLaterButton;
-(void)_sizeLabel:(id)arg1 ;
@end

