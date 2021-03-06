//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SiriUIKeyline, UICollectionView;

@interface SVSTranscriptContentView : UIView
{
    SiriUIKeyline *_keyline;	// 8 = 0x8
    _Bool _keylineHidden;	// 16 = 0x10
    UICollectionView *_collectionView;	// 24 = 0x18
    UIView *_suggestionsView;	// 32 = 0x20
    double _topMargin;	// 40 = 0x28
}

@property(nonatomic) _Bool keylineHidden; // @synthesize keylineHidden=_keylineHidden;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(retain, nonatomic) UIView *suggestionsView; // @synthesize suggestionsView=_suggestionsView;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;	// IMP=0x0000000100051fc4
- (void)layoutSubviews;	// IMP=0x0000000100051c60
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100051c50
- (id)initWithFrame:(struct CGRect)arg1 collectionView:(id)arg2;	// IMP=0x0000000100051adc

@end

