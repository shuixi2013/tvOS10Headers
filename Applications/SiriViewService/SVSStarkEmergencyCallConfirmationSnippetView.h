//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SVSStarkConfirmationSnippetView.h"

@class NSString, UILabel;

@interface SVSStarkEmergencyCallConfirmationSnippetView : SVSStarkConfirmationSnippetView
{
    UILabel *_titleLabel;	// 8 = 0x8
    NSString *_countdownText;	// 16 = 0x10
    UILabel *_countdownLabel;	// 24 = 0x18
}

@property(readonly, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(copy, nonatomic) NSString *countdownText; // @synthesize countdownText=_countdownText;
- (void).cxx_destruct;	// IMP=0x00000001000305b4
- (double)_confirmationButtonYOriginInBounds:(struct CGRect)arg1;	// IMP=0x0000000100030520
- (void)layoutSubviews;	// IMP=0x000000010003039c
- (id)_createLabelWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000302c0
- (id)initWithFrame:(struct CGRect)arg1 confirmationButtons:(id)arg2 delegate:(id)arg3;	// IMP=0x00000001000300f4

@end

