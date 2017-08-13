//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IMBookshelfImageConfiguration, IMBookshelfImageGenerator, IMLibraryTileView, IMLibraryTiledBackgroundView, UIImageView;

@interface IMBookshelfBackgroundView : UIView
{
    UIImageView *_topShelfImageView;	// 8 = 0x8
    struct CGPoint _offset;	// 16 = 0x10
    double _shelfHeight;	// 32 = 0x20
    _Bool _useAlternateSize;	// 40 = 0x28
    IMBookshelfImageGenerator *_imageGenerator;	// 48 = 0x30
    IMLibraryTiledBackgroundView *_shelves;	// 56 = 0x38
    IMBookshelfImageConfiguration *_imageConfiguration;	// 64 = 0x40
    IMLibraryTileView *_topGradientView;	// 72 = 0x48
}

@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool useAlternateSize; // @synthesize useAlternateSize=_useAlternateSize;
- (void)layoutSubviews;	// IMP=0x0000000100174e90
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000100174e40
- (void)dealloc;	// IMP=0x0000000100174d68
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100174d10
- (id)initWithFrame:(struct CGRect)arg1 shelfHeight:(double)arg2 portraitSize:(struct CGSize)arg3 landscapeSize:(struct CGSize)arg4 alternateSize:(struct CGSize)arg5 imageConfiguration:(id)arg6;	// IMP=0x0000000100174508
- (id)initWithFrame:(struct CGRect)arg1 shelfHeight:(double)arg2 portraitSize:(struct CGSize)arg3 landscapeSize:(struct CGSize)arg4 imageConfiguration:(id)arg5;	// IMP=0x00000001001744c4
- (id)initWithFrame:(struct CGRect)arg1 shelfHeight:(double)arg2 portraitSize:(struct CGSize)arg3 landscapeSize:(struct CGSize)arg4 alternateSize:(struct CGSize)arg5;	// IMP=0x00000001001744a4
- (id)initWithFrame:(struct CGRect)arg1 shelfHeight:(double)arg2 portraitSize:(struct CGSize)arg3 landscapeSize:(struct CGSize)arg4;	// IMP=0x0000000100174460
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001743cc
- (void)_setupCommon;	// IMP=0x00000001001743bc

@end
