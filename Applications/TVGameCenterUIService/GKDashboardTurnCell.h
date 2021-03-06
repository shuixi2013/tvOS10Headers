//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKDashboardPlayerCell.h"

@class NSLayoutConstraint, UIColor, UIImageView, UILabel;

@interface GKDashboardTurnCell : GKDashboardPlayerCell
{
    UILabel *_dateLabel;	// 8 = 0x8
    UILabel *_turnLabel;	// 16 = 0x10
    UIImageView *_actionIndicatorView;	// 24 = 0x18
    NSLayoutConstraint *_dateToNameConstraint;	// 32 = 0x20
    NSLayoutConstraint *_turnToNameConstraint;	// 40 = 0x28
    UIColor *_dateColor;	// 48 = 0x30
    UIColor *_turnColor;	// 56 = 0x38
    double _dateToNameConstant;	// 64 = 0x40
    double _turnToNameConstant;	// 72 = 0x48
}

+ (struct CGSize)defaultSizeForTurnDetail;	// IMP=0x000000010002e0b0
@property(nonatomic) double turnToNameConstant; // @synthesize turnToNameConstant=_turnToNameConstant;
@property(nonatomic) double dateToNameConstant; // @synthesize dateToNameConstant=_dateToNameConstant;
@property(retain, nonatomic) UIColor *turnColor; // @synthesize turnColor=_turnColor;
@property(retain, nonatomic) UIColor *dateColor; // @synthesize dateColor=_dateColor;
@property(nonatomic) NSLayoutConstraint *turnToNameConstraint; // @synthesize turnToNameConstraint=_turnToNameConstraint;
@property(nonatomic) NSLayoutConstraint *dateToNameConstraint; // @synthesize dateToNameConstraint=_dateToNameConstraint;
@property(nonatomic) UIImageView *actionIndicatorView; // @synthesize actionIndicatorView=_actionIndicatorView;
@property(nonatomic) UILabel *turnLabel; // @synthesize turnLabel=_turnLabel;
@property(nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010002e804
- (void)setOnDarkBackground:(_Bool)arg1;	// IMP=0x000000010002e728
- (void)configureForParticipant:(id)arg1 inMatch:(id)arg2;	// IMP=0x000000010002e3e4
- (void)configureForMatch:(id)arg1;	// IMP=0x000000010002e0fc
- (_Bool)wantsLocalPlayerAction:(id)arg1;	// IMP=0x000000010002e0c4
- (void)dealloc;	// IMP=0x000000010002e03c
- (void)awakeFromNib;	// IMP=0x000000010002def8

@end

