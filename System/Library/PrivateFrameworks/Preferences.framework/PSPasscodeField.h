/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyInput.h>

@protocol PSPasscodeFieldDelegate;
@class NSMutableArray, NSMutableString, UIColor, NSArray, NSString;

@interface PSPasscodeField : UIView <UIKeyInput> {

	NSMutableArray* _dashViews;
	NSMutableArray* _dotViews;
	NSMutableArray* _digitViews;
	NSMutableString* _stringValue;
	BOOL _securePasscodeEntry;
	BOOL _enabled;
	BOOL _shouldBecomeFirstResponderOnTap;
	id<PSPasscodeFieldDelegate> _delegate;
	unsigned long long _numberOfEntryFields;
	UIColor* _foregroundColor;
	long long _keyboardAppearance;
	NSArray* _fieldSpacing;

}

@property (assign,nonatomic,__weak) id<PSPasscodeFieldDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfEntryFields;                     //@synthesize numberOfEntryFields=_numberOfEntryFields - In the implementation block
@property (assign,nonatomic) BOOL securePasscodeEntry;                                   //@synthesize securePasscodeEntry=_securePasscodeEntry - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                                  //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (assign,nonatomic) long long keyboardAppearance;                               //@synthesize keyboardAppearance=_keyboardAppearance - In the implementation block
@property (nonatomic,retain) NSArray * fieldSpacing;                                     //@synthesize fieldSpacing=_fieldSpacing - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL shouldBecomeFirstResponderOnTap;                       //@synthesize shouldBecomeFirstResponderOnTap=_shouldBecomeFirstResponderOnTap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,readonly) BOOL hasText; 
-(void)setDelegate:(id<PSPasscodeFieldDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<PSPasscodeFieldDelegate>)delegate;
-(BOOL)becomeFirstResponder;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)canBecomeFirstResponder;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(BOOL)hasText;
-(long long)keyboardType;
-(long long)keyboardAppearance;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(BOOL)isSecureTextEntry;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(unsigned long long)numberOfEntryFields;
-(void)setNumberOfEntryFields:(unsigned long long)arg1 ;
-(UIColor *)foregroundColor;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)passcodeFieldTapped:(id)arg1 ;
-(BOOL)shouldBecomeFirstResponderOnTap;
-(void)setSecurePasscodeEntry:(BOOL)arg1 ;
-(void)_delegateEnteredPasscode:(id)arg1 ;
-(id)initWithNumberOfEntryFields:(unsigned long long)arg1 ;
-(void)setFieldSpacing:(NSArray *)arg1 ;
-(BOOL)securePasscodeEntry;
-(NSArray *)fieldSpacing;
-(void)setShouldBecomeFirstResponderOnTap:(BOOL)arg1 ;
@end

