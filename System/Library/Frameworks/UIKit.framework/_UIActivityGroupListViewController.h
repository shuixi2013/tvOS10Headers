/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewController.h>

@class NSArray, UILabel;

@interface _UIActivityGroupListViewController : UICollectionViewController {

	BOOL _darkStyleOnLegacyApp;
	BOOL _embedded;
	NSArray* _activityGroupViewControllers;
	NSArray* _visibleActivityGroupViewControllers;
	UILabel* _placeholderLabel;

}

@property (nonatomic,copy) NSArray * activityGroupViewControllers;                     //@synthesize activityGroupViewControllers=_activityGroupViewControllers - In the implementation block
@property (nonatomic,copy) NSArray * visibleActivityGroupViewControllers;              //@synthesize visibleActivityGroupViewControllers=_visibleActivityGroupViewControllers - In the implementation block
@property (assign,getter=isEmbedded,nonatomic) BOOL embedded;                          //@synthesize embedded=_embedded - In the implementation block
@property (nonatomic,retain) UILabel * placeholderLabel;                               //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (assign,nonatomic) BOOL darkStyleOnLegacyApp;                                //@synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(id)initWithActivityGroupViewControllers:(id)arg1 embedded:(BOOL)arg2 ;
-(void)updateVisibleActivityGroupViewControllers;
-(void)setDarkStyleOnLegacyApp:(BOOL)arg1 ;
-(double)displayHeight;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(BOOL)darkStyleOnLegacyApp;
-(BOOL)isEmbedded;
-(void)setEmbedded:(BOOL)arg1 ;
-(void)setActivityGroupViewControllers:(NSArray *)arg1 ;
-(NSArray *)activityGroupViewControllers;
-(NSArray *)visibleActivityGroupViewControllers;
-(void)setVisibleActivityGroupViewControllers:(NSArray *)arg1 ;
-(BOOL)isAirdropViewController:(id)arg1 ;
-(BOOL)shouldShowNoActionsPlaceholder;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(id)viewControllerForItemAtIndexPath:(id)arg1 ;
-(double)preferredContentHeightForViewController:(id)arg1 ;
@end

