/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIAlertControllerDescriptor, UITraitCollection, UIInterfaceActionVisualStyle;

@interface UIAlertControllerVisualStyle : NSObject {

	UIAlertControllerDescriptor* _descriptor;
	UITraitCollection* _traitCollection;
	long long _forcedInterfaceIdiom;
	UIInterfaceActionVisualStyle* _interfaceActionVisualStyle;

}

@property (assign,nonatomic) long long forcedInterfaceIdiom;                                           //@synthesize forcedInterfaceIdiom=_forcedInterfaceIdiom - In the implementation block
@property (nonatomic,readonly) UIInterfaceActionVisualStyle * interfaceActionVisualStyle;              //@synthesize interfaceActionVisualStyle=_interfaceActionVisualStyle - In the implementation block
@property (nonatomic,retain) UIAlertControllerDescriptor * descriptor;                                 //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                                      //@synthesize traitCollection=_traitCollection - In the implementation block
+(long long)interfaceActionPresentationStyle;
-(UITraitCollection *)traitCollection;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(double)minimumWidth;
-(double)maximumWidth;
-(void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3 ;
-(UIEdgeInsets)actionSequenceEdgeInsets;
-(CGSize)minimumActionContentSize;
-(id)dimmingViewForAlertController:(id)arg1 ;
-(BOOL)shouldPreserveRespondersAcrossWindows;
-(BOOL)shouldOccludeDuringPresentation;
-(void)positionAlertControllerView:(id)arg1 ofAlertController:(id)arg2 inAvailableSpaceView:(id)arg3 ;
-(BOOL)_shouldReverseActions;
-(id)_keyCommandInputForCancelAction;
-(id)textFieldContainingViewWithTextField:(id)arg1 ;
-(BOOL)placementAvoidsKeyboard;
-(void)setDescriptor:(UIAlertControllerDescriptor *)arg1 ;
-(void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3 ;
-(double)textFieldHorizontalMargin;
-(Class)interfaceActionVisualStyleClassForManagingConcreteVisualStyle;
-(id)titleLabelFont;
-(id)titleLabelColor;
-(double)marginAboveTitleLabelFirstBaseline;
-(double)marginBelowLastLabelLastBaseline;
-(long long)maximumNumberOfLinesInTitleLabel;
-(id)messageLabelFont;
-(id)messageLabelColor;
-(long long)maximumNumberOfLinesInMessageLabel;
-(long long)permittedActionLayoutDirection;
-(UIAlertControllerDescriptor *)descriptor;
-(id)_detailMessageFont;
-(double)_marginAboveDetailMessageFirstBaseline;
-(double)marginBelowTitleLabelLastBaseline;
-(double)marginBelowMessageLabelLastBaseline;
-(double)marginAboveMessageLabelFirstBaseline;
-(double)maximumWidthForTitleAndMessageContentView;
-(double)actionWidthForMinimumActionWidth:(double)arg1 ;
-(BOOL)hideCancelAction:(id)arg1 inAlertController:(id)arg2 ;
-(double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2 ;
-(void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(/*^block*/id)arg7 ;
-(UIEdgeInsets)textFieldContentInset;
-(id)preferredActionForActions:(id)arg1 suggestedPreferredAction:(id)arg2 ;
-(UIInterfaceActionVisualStyle *)interfaceActionVisualStyle;
-(double)contentHorizontalMargin;
-(UIEdgeInsets)actionImageMarginForAction;
-(BOOL)transitionOfType:(long long)arg1 shouldBeInteractiveForAlertController:(id)arg2 ;
-(void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)interactionProgressForTransitionOfType:(long long)arg1 forAlertController:(id)arg2 ;
-(id)tintColorForAlertController:(id)arg1 ;
-(void)_reloadInterfaceActionVisualStyle;
-(id)preferredActionFont;
-(id)regularActionFont;
-(void)setForcedInterfaceIdiom:(long long)arg1 ;
-(double)maximumHeightForDisplayOnScreen:(id)arg1 ;
-(id)defaultActionFont;
-(CGSize)collectionViewOutsetSize;
-(double)_scaledMarginAboveTitleLabelFirstBaselineInAlertControllerView:(id)arg1 ;
-(double)_scaledMarginBelowTitleLabelLastBaseline;
-(double)_scaledMarginAboveMessageLabelFirstBaseline;
-(double)_scaledMarginBelowMessageLabelLastBaseline;
-(double)_scaledMarginBelowLastLabelLastBaseline;
-(double)_scaledMarginAboveDetailMessageFirstBaseline;
-(long long)forcedInterfaceIdiom;
@end

