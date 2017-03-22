/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class _UIActivityGroupActivityCellTitleLabel, UIImageView;

@interface _UIActivityGroupActivityCell : UICollectionViewCell {

	_UIActivityGroupActivityCellTitleLabel* _titleLabel;
	UIImageView* _imageView;
	UIImageView* _highlightedImageView;

}

@property (nonatomic,retain) _UIActivityGroupActivityCellTitleLabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * highlightedImageView;                               //@synthesize highlightedImageView=_highlightedImageView - In the implementation block
+(CGSize)preferredSizeForTitleLabelText:(id)arg1 screenScale:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(_UIActivityGroupActivityCellTitleLabel *)titleLabel;
-(void)prepareForReuse;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(_UIActivityGroupActivityCellTitleLabel *)arg1 ;
-(UIImageView *)highlightedImageView;
-(void)updateHighlightedImageViewIfNeeded;
-(void)initHighlightedImageViewIfNeeded;
-(void)setHighlightedImageView:(UIImageView *)arg1 ;
-(id)draggingView;
@end

