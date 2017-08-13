//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface MTGoneDarkView : UIView
{
    id <MTGoneDarkViewDelegate> _delegate;	// 8 = 0x8
    UIImageView *_warning;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
    UIButton *_button;	// 32 = 0x20
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *warning; // @synthesize warning=_warning;
@property(nonatomic) __weak id <MTGoneDarkViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010014ad58
- (void)deselectButton;	// IMP=0x000000010014ac08
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x000000010014ab44
- (void)tapped:(id)arg1;	// IMP=0x000000010014aae4
- (void)layoutSubviews;	// IMP=0x000000010014a964
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010014a8fc
- (void)_updateFonts;	// IMP=0x000000010014a890
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000010014a85c
- (void)dealloc;	// IMP=0x000000010014a7e0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010014a284

@end
