/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class UICollectionViewLayout, NSMutableDictionary, NSMutableArray;

@interface UICollectionViewTransitionLayout : UICollectionViewLayout {

	UICollectionViewLayout* _fromLayout;
	UICollectionViewLayout* _toLayout;
	CGRect _fromVisibleBounds;
	CGRect _toVisibleBounds;
	CGSize _contentSize;
	BOOL _haveValidInfos;
	double _transitionProgress;
	NSMutableDictionary* _transitionInformationsDict;
	NSMutableDictionary* _currentLayoutInfos;
	BOOL _layoutIsValid;
	NSMutableArray* _disappearingLayoutAttributes;
	NSMutableArray* _appearingLayoutAttributes;
	double _accuracy;

}

@property (assign,nonatomic) double transitionProgress;                             //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayout * currentLayout;              //@synthesize fromLayout=_fromLayout - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayout * nextLayout;                 //@synthesize toLayout=_toLayout - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)invalidateLayout;
-(UICollectionViewLayout *)currentLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGRect)_oldVisibleBounds;
-(CGRect)_newVisibleBounds;
-(void)_setCollectionView:(id)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(void)_prepareForTransitionToLayout:(id)arg1 ;
-(void)_prepareForTransitionFromLayout:(id)arg1 ;
-(void)setTransitionProgress:(double)arg1 ;
-(BOOL)_supportsAdvancedTransitionAnimations;
-(void)_finalizeLayoutTransition;
-(id)initWithCurrentLayout:(id)arg1 nextLayout:(id)arg2 ;
-(UICollectionViewLayout *)nextLayout;
-(double)transitionProgress;
-(id)interpolatedLayoutAttributesFromLayoutAttributes:(id)arg1 toLayoutAttributes:(id)arg2 progress:(double)arg3 ;
-(void)updateValue:(double)arg1 forAnimatedKey:(id)arg2 ;
-(double)valueForAnimatedKey:(id)arg1 ;
@end

