/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UITextInputTraits, _UIFloatingContentView;

@interface UIRecentInputTableCell : UITableViewCell {

	UILabel* _floatingLabel;
	long long _blurEffectStyle;
	UITextInputTraits* _textInputTraits;

}

@property (nonatomic,retain) UILabel * floatingLabel;                                //@synthesize floatingLabel=_floatingLabel - In the implementation block
@property (assign,nonatomic) long long blurEffectStyle;                              //@synthesize blurEffectStyle=_blurEffectStyle - In the implementation block
@property (nonatomic,retain) UITextInputTraits * textInputTraits;                    //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (nonatomic,readonly) _UIFloatingContentView * tvFloatingView; 
+(id)focusedTextColorForBlurEffectStyle:(long long)arg1 ;
+(id)unfocusedTextColorForBlurEffectStyle:(long long)arg1 ;
+(id)backgroundColorForBlurEffectStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UITextInputTraits *)textInputTraits;
-(void)setTextInputTraits:(UITextInputTraits *)arg1 ;
-(void)setBlurEffectStyle:(long long)arg1 ;
-(long long)blurEffectStyle;
-(UILabel *)floatingLabel;
-(_UIFloatingContentView *)tvFloatingView;
-(void)setFloatingLabel:(UILabel *)arg1 ;
-(void)_updateAppearance;
-(BOOL)_tvIsDarkMode;
-(void)setInputText:(id)arg1 withBlurStyle:(long long)arg2 ;
@end

