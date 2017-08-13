//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayoutAttributes.h"

@interface PBAppSwitcherFocusLayoutAttributes : UICollectionViewLayoutAttributes
{
    _Bool _headerHidden;	// 8 = 0x8
    double _contentOffset;	// 16 = 0x10
    double _contentScale;	// 24 = 0x18
    double _cornerRadius;	// 32 = 0x20
    double _blurRadius;	// 40 = 0x28
    double _shadowAlpha;	// 48 = 0x30
    double _shadowBlurRadius;	// 56 = 0x38
    double _textAlpha;	// 64 = 0x40
    double _snapshotOffset;	// 72 = 0x48
    struct CGRect _blurRect;	// 80 = 0x50
}

@property(nonatomic, getter=isHeaderHidden) _Bool headerHidden; // @synthesize headerHidden=_headerHidden;
@property(nonatomic) double snapshotOffset; // @synthesize snapshotOffset=_snapshotOffset;
@property(nonatomic) double textAlpha; // @synthesize textAlpha=_textAlpha;
@property(nonatomic) double shadowBlurRadius; // @synthesize shadowBlurRadius=_shadowBlurRadius;
@property(nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(nonatomic) struct CGRect blurRect; // @synthesize blurRect=_blurRect;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic) double contentOffset; // @synthesize contentOffset=_contentOffset;
- (id)description;	// IMP=0x0000000100055cbc
- (unsigned long long)hash;	// IMP=0x0000000100055ad4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100055848
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000556bc

@end
