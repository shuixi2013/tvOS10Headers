/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIInterfaceActionVisualStyle, NSArray, UIStackView;

@interface _UIInterfaceActionSeparatableSequenceView : UIView {

	UIInterfaceActionVisualStyle* _visualStyle;
	long long _axis;
	long long _distribution;
	NSArray* _arrangedContentViews;
	UIStackView* _stackView;
	NSArray* _arrangedContentSeparatorViews;
	NSArray* _arrangedContentViewsDistributionConstraints;

}

@property (nonatomic,readonly) UIStackView * stackView;                                            //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) NSArray * arrangedContentSeparatorViews;                            //@synthesize arrangedContentSeparatorViews=_arrangedContentSeparatorViews - In the implementation block
@property (nonatomic,readonly) NSArray * arrangedContentViewsDistributionConstraints;              //@synthesize arrangedContentViewsDistributionConstraints=_arrangedContentViewsDistributionConstraints - In the implementation block
@property (nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;                           //@synthesize visualStyle=_visualStyle - In the implementation block
@property (assign,nonatomic) long long axis;                                                       //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) long long distribution;                                               //@synthesize distribution=_distribution - In the implementation block
@property (nonatomic,retain) NSArray * arrangedContentViews;                                       //@synthesize arrangedContentViews=_arrangedContentViews - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_withUnsatisfiableConstraintsLoggingSuspendedIfEngineDelegateExists:(/*^block*/id)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)_setLayoutDebuggingIdentifier:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(long long)axis;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)setVisualStyle:(UIInterfaceActionVisualStyle *)arg1 ;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(void)setAxis:(long long)arg1 ;
-(void)setDistribution:(long long)arg1 ;
-(void)reloadDisplayedContentVisualStyle;
-(NSArray *)arrangedContentViews;
-(void)_reloadStackViewArrangement;
-(void)_updateSeparatorConstantSizedAxis;
-(void)_updateActionRepresentationViewsOnlyKeepVisibleContentInHierarchySetting;
-(BOOL)_isVerticalLayout;
-(long long)_separatorConstantSizedAxis;
-(void)_updateLayoutWithStackFrameForActionSequenceEdgeInsets;
-(CGRect)_stackViewFrameForViewBounds:(CGRect)arg1 ;
-(void)_reloadContentDistributionConstraintsForArrangedContentViews;
-(CGSize)_systemLayoutSizeFittingStackView;
-(CGRect)_viewBoundsForStackViewFrame:(CGRect)arg1 ;
-(long long)_dimensionAttributeToConstrainEqual;
-(void)_addSeparatorToStackAndMutableArray:(id)arg1 preferSectionStyle:(BOOL)arg2 ;
-(id)initWithVisualStyle:(id)arg1 ;
-(void)setArrangedContentViews:(NSArray *)arg1 ;
-(double)fittingWidthForLayoutAxis:(long long)arg1 ;
-(long long)distribution;
-(UIStackView *)stackView;
-(NSArray *)arrangedContentSeparatorViews;
-(NSArray *)arrangedContentViewsDistributionConstraints;
@end

