//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSDate, UIImageView, UIView;

@interface MTSwitch : UIControl
{
    UIImageView *_backgroundImageView;	// 8 = 0x8
    UIImageView *_thumbImageView;	// 16 = 0x10
    UIView *_thumbView;	// 24 = 0x18
    double _trackingOffset;	// 32 = 0x20
    double _trackingStartLocation;	// 40 = 0x28
    struct CGRect _startThumbRect;	// 48 = 0x30
    NSDate *_trackingStartTime;	// 80 = 0x50
    _Bool _on;	// 88 = 0x58
}

@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
- (void).cxx_destruct;	// IMP=0x000000010003ced8
- (struct CGRect)thumbRectForOn:(_Bool)arg1;	// IMP=0x000000010003ce2c
- (struct CGRect)thumbRectForOffset:(double)arg1;	// IMP=0x000000010003cd54
- (void)swiped:(id)arg1;	// IMP=0x000000010003ccc4
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000010003cc84
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x000000010003cad8
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010003c8e0
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010003c81c
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010003c728
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010003c6c0
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010003c5d8
- (void)layoutSubviews;	// IMP=0x000000010003c548
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010003c290

@end

