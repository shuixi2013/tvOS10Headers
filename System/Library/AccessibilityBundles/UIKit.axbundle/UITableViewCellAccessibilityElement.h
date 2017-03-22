/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSIndexPath, UITableViewCell, NSMutableArray;

@interface UITableViewCellAccessibilityElement : UIAccessibilityElement {

	NSIndexPath* _indexPath;
	UITableViewCell* _tableViewCell;
	NSMutableArray* _mockChildren;
	BOOL _usingRealTableViewCell;

}

@property (nonatomic,retain) NSIndexPath * indexPath;                                //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) UITableViewCell * tableViewCell;                        //@synthesize tableViewCell=_tableViewCell - In the implementation block
@property (nonatomic,readonly) UITableViewCell * realTableViewCell; 
@property (nonatomic,readonly) UITableViewCell * existingTableViewCell; 
@property (assign,nonatomic) BOOL usingRealTableViewCell;                            //@synthesize usingRealTableViewCell=_usingRealTableViewCell - In the implementation block
-(void)dealloc;
-(id)description;
-(NSIndexPath *)indexPath;
-(id)accessibilityIdentifier;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)setTableViewCell:(UITableViewCell *)arg1 ;
-(UITableViewCell *)tableViewCell;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityLanguage;
-(BOOL)shouldGroupAccessibilityChildren;
-(id)accessibilityHeaderElements;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityPerformMagicTap;
-(BOOL)accessibilityActivate;
-(id)accessibilityCustomActions;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(NSRange)accessibilityRowRange;
-(int)_accessibilityScanningBehaviorTraits;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilitySemanticContextForElement:(id)arg1 ;
-(BOOL)_accessibilityCanBecomeNativeFocused;
-(id)_accessibilityUserTestingChildren;
-(BOOL)_accessibilityIsScannerGroup;
-(BOOL)_accessibilityIsScannerElement;
-(BOOL)_accessibilityIsSpeakThisElement;
-(id)_accessibilityAbsoluteValue;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(BOOL)_accessibilitySupportsActivateAction;
-(void)unregisterAllChildren;
-(void)registerMockChild:(id)arg1 ;
-(UITableViewCell *)existingTableViewCell;
-(void)unregisterMockChild:(id)arg1 ;
-(UITableViewCell *)realTableViewCell;
-(BOOL)usingRealTableViewCell;
-(long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2 ;
-(id)_accessibilityEquivalenceTag;
-(BOOL)_accessibilityIsOutsideParentBounds;
-(id)_privateAccessibilityCustomActions;
-(BOOL)_accessibilitySetNativeFocus;
-(BOOL)_accessibilityViewHierarchyHasNativeFocus;
-(long long)_accessibilityUserTestingChildrenCount;
-(BOOL)_accessibilityIsInTableCell;
-(NSRange)_accessibilityIndexPathAsRange;
-(BOOL)_accessibilityIsTableCell;
-(double)_accessibilityAllowedGeometryOverlap;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(BOOL)_allowCustomActionHintSpeakOverride;
-(BOOL)_accessibilityIsAwayAlertElement;
-(id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1 ;
-(CGRect)_accessibilityChargedLineBoundsForRange:(NSRange)arg1 ;
-(BOOL)_accessibilityUserTestingIsCancelButton;
-(BOOL)_accessibilityUserTestingIsDefaultButton;
-(BOOL)_accessibilityUserTestingIsDestructiveButton;
-(BOOL)_accessibilityUserTestingIsPreferredButton;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)_accessibilityTextOperations;
-(void)_accessibilityCopy;
-(void)_accessibilityCut;
-(void)_accessibilitySelect;
-(void)_accessibilityPaste;
-(void)_accessibilitySelectAll;
-(BOOL)_accessibilityHasTextOperations;
-(int)_accessibilityScannerActivateBehavior;
-(id)_accessibilitySpeakThisString;
-(BOOL)_accessibilityHasNativeFocus;
-(BOOL)_accessibilityRetainsCustomRotorActionSetting;
-(BOOL)_accessibilityBackingElementIsValid;
-(id)_accessibilityUserTestingVisibleAncestor;
-(BOOL)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(void)setUsingRealTableViewCell:(BOOL)arg1 ;
@end

