/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface TVItemSummaryView : UIView {

	BOOL _showTopDivider;
	BOOL _showBottomDivider;
	UILabel* _summaryLabel;
	UIView* _metadataView;
	UIView* _divider1;
	UIView* _divider2;

}

@property (nonatomic,retain) UIView * divider1;                     //@synthesize divider1=_divider1 - In the implementation block
@property (nonatomic,retain) UIView * divider2;                     //@synthesize divider2=_divider2 - In the implementation block
@property (assign,nonatomic) BOOL showTopDivider;                   //@synthesize showTopDivider=_showTopDivider - In the implementation block
@property (assign,nonatomic) BOOL showBottomDivider;                //@synthesize showBottomDivider=_showBottomDivider - In the implementation block
@property (nonatomic,readonly) UILabel * summaryLabel;              //@synthesize summaryLabel=_summaryLabel - In the implementation block
@property (nonatomic,retain) UIView * metadataView;                 //@synthesize metadataView=_metadataView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setShowTopDivider:(BOOL)arg1 ;
-(void)setShowBottomDivider:(BOOL)arg1 ;
-(id)_defaultDividerColor;
-(UIView *)divider1;
-(UIView *)divider2;
-(void)setMetadataView:(UIView *)arg1 ;
-(BOOL)showTopDivider;
-(BOOL)showBottomDivider;
-(UIView *)metadataView;
-(void)setDivider1:(UIView *)arg1 ;
-(void)setDivider2:(UIView *)arg1 ;
-(void)_updateColors;
-(UILabel *)summaryLabel;
@end

