//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface SVSStarkGatekeeperContactView : UIView
{
    UILabel *_nameLabel;	// 8 = 0x8
    UIImageView *_photoImageView;	// 16 = 0x10
}

@property(readonly, nonatomic, getter=_photoImageView) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(readonly, nonatomic, getter=_nameLabel) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;	// IMP=0x0000000100054f74
- (void)layoutSubviews;	// IMP=0x0000000100054d3c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100054c3c
- (id)initWithSms:(id)arg1;	// IMP=0x0000000100054888

@end
