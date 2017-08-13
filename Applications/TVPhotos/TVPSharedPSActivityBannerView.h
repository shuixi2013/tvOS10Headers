//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TVImageStackView, UIBezierPath, UIImage, UILabel, UIMotionEffectGroup;

@interface TVPSharedPSActivityBannerView : UIView
{
    NSString *_bannerTitle;	// 8 = 0x8
    UIImage *_bannerImage;	// 16 = 0x10
    id <TVPSharedPSActivityBannerFocusDelegate> _delegate;	// 24 = 0x18
    UILabel *_bannerTitleLabel;	// 32 = 0x20
    UIView *_bannerTitleShadowView;	// 40 = 0x28
    UIBezierPath *_bannerTitleShadowPath;	// 48 = 0x30
    TVImageStackView *_imageStackView;	// 56 = 0x38
    UIMotionEffectGroup *_motionEffectGroup;	// 64 = 0x40
}

@property(retain, nonatomic) UIMotionEffectGroup *motionEffectGroup; // @synthesize motionEffectGroup=_motionEffectGroup;
@property(retain, nonatomic) TVImageStackView *imageStackView; // @synthesize imageStackView=_imageStackView;
@property(retain, nonatomic) UIBezierPath *bannerTitleShadowPath; // @synthesize bannerTitleShadowPath=_bannerTitleShadowPath;
@property(retain, nonatomic) UIView *bannerTitleShadowView; // @synthesize bannerTitleShadowView=_bannerTitleShadowView;
@property(retain, nonatomic) UILabel *bannerTitleLabel; // @synthesize bannerTitleLabel=_bannerTitleLabel;
@property(nonatomic) __weak id <TVPSharedPSActivityBannerFocusDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *bannerImage; // @synthesize bannerImage=_bannerImage;
@property(copy, nonatomic) NSString *bannerTitle; // @synthesize bannerTitle=_bannerTitle;
- (void).cxx_destruct;	// IMP=0x0000000100043714
- (void)_detachMotionEffects;	// IMP=0x0000000100043540
- (void)_attachMotionEffects;	// IMP=0x00000001000432c8
- (void)layoutSubviews;	// IMP=0x0000000100042f2c
- (void)focusedViewDidChange;	// IMP=0x0000000100042d78
- (_Bool)canBecomeFocused;	// IMP=0x0000000100042d70
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100042b24
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000428d8
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010004268c
- (_Bool)_unapplyMotionEffect:(id)arg1;	// IMP=0x0000000100042654
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;	// IMP=0x0000000100042568
- (id)init;	// IMP=0x000000010004217c

@end
