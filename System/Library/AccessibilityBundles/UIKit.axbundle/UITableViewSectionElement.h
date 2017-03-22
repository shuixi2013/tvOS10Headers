/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>
#import <UIKit/UIAccessibilityElementMockViewDelegateProtocol.h>

@class NSMutableArray;

@interface UITableViewSectionElement : UIAccessibilityElement <UIAccessibilityElementMockViewDelegateProtocol> {

	BOOL _isHeader;
	long long _section;
	NSMutableArray* _children;

}

@property (assign,nonatomic) long long section;              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) BOOL isHeader;                  //@synthesize isHeader=_isHeader - In the implementation block
-(void)dealloc;
-(id)description;
-(long long)section;
-(id)accessibilityIdentifier;
-(CGRect)accessibilityFrame;
-(BOOL)isAccessibilityElement;
-(BOOL)isHeader;
-(void)setIsHeader:(BOOL)arg1 ;
-(void)setSection:(long long)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityIsNotFirstElement;
-(void)_accessibilityClearChildren;
-(id)accessibilityContainerElements;
-(BOOL)accessibilityScrollToVisible;
-(void)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(void)updateMockView:(id)arg1 ;
-(id)accessibilityChildren;
-(void)_appendTextChildWithTitle:(id)arg1 ;
-(id)_accessibilityAccessibleElementsInView:(id)arg1 ;
@end

