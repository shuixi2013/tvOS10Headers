/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIImage, NSArray, _TVCollectionView;

@interface _TVStackWrappingView : UIView {

	UIImageView* _bgImageView;
	UIImage* _backgroundImage;
	NSArray* _headerSupplementaryViews;
	_TVCollectionView* _stackView;
	NSArray* _supplementaryCellLayoutAttributes;

}

@property (nonatomic,retain) UIImage * backgroundImage;                                       //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,copy) NSArray * headerSupplementaryViews;                                //@synthesize headerSupplementaryViews=_headerSupplementaryViews - In the implementation block
@property (nonatomic,retain) _TVCollectionView * stackView;                                   //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supplementaryCellLayoutAttributes;              //@synthesize supplementaryCellLayoutAttributes=_supplementaryCellLayoutAttributes - In the implementation block
-(id)preferredFocusEnvironments;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(_TVCollectionView *)stackView;
-(NSArray *)headerSupplementaryViews;
-(void)configureSupplementaryCellLayoutAttributesWithAutomaticInsets:(UIEdgeInsets)arg1 ;
-(void)setHeaderSupplementaryViews:(NSArray *)arg1 ;
-(NSArray *)supplementaryCellLayoutAttributes;
-(void)setStackView:(_TVCollectionView *)arg1 ;
@end

