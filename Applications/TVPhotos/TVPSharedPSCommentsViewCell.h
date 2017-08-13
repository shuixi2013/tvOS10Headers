//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, UILabel;

@interface TVPSharedPSCommentsViewCell : UICollectionViewCell
{
    NSString *_commentText;	// 8 = 0x8
    NSString *_commentCaption;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
}

+ (double)maxCellHeightWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3;	// IMP=0x000000010003ac58
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *commentCaption; // @synthesize commentCaption=_commentCaption;
@property(copy, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
- (void).cxx_destruct;	// IMP=0x000000010003b3f0
- (void)layoutSubviews;	// IMP=0x000000010003b168
- (void)focusedViewDidChange;	// IMP=0x000000010003b164

@end
