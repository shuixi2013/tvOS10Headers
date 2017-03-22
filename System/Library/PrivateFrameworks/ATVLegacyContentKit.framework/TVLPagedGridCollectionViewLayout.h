/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSCache;

@interface TVLPagedGridCollectionViewLayout : UICollectionViewLayout {

	NSCache* _cachedLayoutAttributes;
	double _peekAmount;
	UIEdgeInsets _cellPadding;

}

@property (assign,nonatomic) double peekAmount;                     //@synthesize peekAmount=_peekAmount - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cellPadding;              //@synthesize cellPadding=_cellPadding - In the implementation block
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)invalidateLayout;
-(void)setCellPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)cellPadding;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(double)peekAmount;
-(long long)_numberOfRowsForSection:(unsigned long long)arg1 ;
-(long long)_numberOfColumnsForSection:(unsigned long long)arg1 ;
-(void)setPeekAmount:(double)arg1 ;
@end

