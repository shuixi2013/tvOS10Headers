/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/_UILayoutEngineSuspending.h>

@class UIView, _UIFloatingContentView, UILongPressGestureRecognizer, NSString;

@interface UICollectionViewCell : UICollectionReusableView <UIGestureRecognizerDelegate, _UILayoutEngineSuspending> {

	UIView* _contentView;
	UIView* _backgroundView;
	UIView* _selectedBackgroundView;
	_UIFloatingContentView* _focusedFloatingContentView;
	UILongPressGestureRecognizer* _menuGesture;
	id _selectionSegueTemplate;
	id _highlightingSupport;
	struct {
		unsigned selected : 1;
		unsigned highlighted : 1;
		unsigned showingMenu : 1;
		unsigned clearSelectionWhenMenuDisappears : 1;
		unsigned waitingForSelectionAnimationHalfwayPoint : 1;
	}  _collectionCellFlags;
	BOOL _selected;
	BOOL _highlighted;
	BOOL _isLayoutEngineSuspended;
	long long _focusStyle;

}

@property (nonatomic,retain) UIView * contentView;                                                                                       //@synthesize contentView=_contentView - In the implementation block
@property (getter=_selectionAnimationDuration,nonatomic,readonly) double selectionAnimationDuration; 
@property (getter=_contentViewFrame,nonatomic,readonly) CGRect contentViewFrame; 
@property (assign,setter=_setFocusStyle:,getter=_focusStyle,nonatomic) long long focusStyle;                                             //@synthesize focusStyle=_focusStyle - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                                                            //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                                                      //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                                                                    //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * selectedBackgroundView;                                                                            //@synthesize selectedBackgroundView=_selectedBackgroundView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setLayoutEngineSuspended:,getter=_isLayoutEngineSuspended,nonatomic) BOOL _layoutEngineSuspended;              //@synthesize isLayoutEngineSuspended=_isLayoutEngineSuspended - In the implementation block
+(Class)_contentViewClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_setLayoutEngineSuspended:(BOOL)arg1 ;
-(id)_encodableSubviews;
-(BOOL)canBecomeFocused;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(BOOL)_isLayoutEngineSuspended;
-(void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)_descendent:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)_updateBackgroundView;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)isEditing;
-(BOOL)isSelected;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)_setOpaque:(BOOL)arg1 forSubview:(id)arg2 ;
-(UIView *)backgroundView;
-(void)setEditing:(BOOL)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setContentView:(id)arg1 addToHierarchy:(BOOL)arg2 ;
-(UIView *)selectedBackgroundView;
-(void)setSelectedBackgroundView:(UIView *)arg1 ;
-(CGRect)_contentViewFrame;
-(double)_selectionAnimationDuration;
-(void)_menuDismissed:(id)arg1 ;
-(void)_performAction:(SEL)arg1 sender:(id)arg2 ;
-(void)_updateHighlightColorsForAnimationHalfwayPoint;
-(void)_ensureFocusedFloatingContentView;
-(BOOL)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1 ;
-(BOOL)_shouldSaveOpaqueStateForView:(id)arg1 ;
-(BOOL)_isUsingOldStyleMultiselection;
-(id)_selectionSegueTemplate;
-(void)_setFocusStyle:(long long)arg1 ;
-(BOOL)_canFocusProgrammatically;
-(void)_setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateHighlightColorsForView:(id)arg1 highlight:(BOOL)arg2 ;
-(void)_setupHighlightingSupport;
-(BOOL)_descendantsShouldHighlight;
-(BOOL)_highlightDescendantsWhenSelected;
-(void)_teardownHighlightingSupportIfReady;
-(void)_updateFocusedFloatingContentControlStateAnimated:(BOOL)arg1 ;
-(long long)_focusStyle;
-(void)_updateFocusedFloatingContentControlStateInContext:(id)arg1 withAnimationCoordinator:(id)arg2 animated:(BOOL)arg3 ;
-(void)_handleMenuGesture:(id)arg1 ;
-(void)_setSelectionSegueTemplate:(id)arg1 ;
@end

