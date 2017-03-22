/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKit/UIView.h>
#import <SiriTVUI/SiriTVUITemplateItemView.h>

@class SiriTVUITabularDataCollectionView, UIView, NSString;

@interface SiriTVUITemplateTabularDataView : UIView <SiriTVUITemplateItemView> {

	BOOL hasPriorityLayout;
	BOOL _useTitleRow;
	SiriTVUITabularDataCollectionView* _titleCollectionView;
	SiriTVUITabularDataCollectionView* _collectionView;
	UIView* _headerView;
	UIView* _footerView;
	UIEdgeInsets _headerPadding;
	UIEdgeInsets _footerPadding;

}

@property (nonatomic,readonly) SiriTVUITabularDataCollectionView * titleCollectionView;              //@synthesize titleCollectionView=_titleCollectionView - In the implementation block
@property (nonatomic,readonly) SiriTVUITabularDataCollectionView * collectionView;                   //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                    //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerPadding;                                             //@synthesize headerPadding=_headerPadding - In the implementation block
@property (assign,nonatomic) BOOL useTitleRow;                                                       //@synthesize useTitleRow=_useTitleRow - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                    //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets footerPadding;                                             //@synthesize footerPadding=_footerPadding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasPriorityLayout; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)preferredFocusedView;
-(BOOL)canBecomeFocused;
-(SiriTVUITabularDataCollectionView *)collectionView;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(BOOL)hasPriorityLayout;
-(void)setHasPriorityLayout:(BOOL)arg1 ;
-(BOOL)shouldFitWithinContentMargins;
-(SiriTVUITabularDataCollectionView *)titleCollectionView;
-(void)setUseTitleRow:(BOOL)arg1 ;
-(void)setHeaderPadding:(UIEdgeInsets)arg1 ;
-(void)setFooterPadding:(UIEdgeInsets)arg1 ;
-(BOOL)useTitleRow;
-(id)_collectionViewLayout;
-(UIEdgeInsets)headerPadding;
-(UIEdgeInsets)footerPadding;
@end

