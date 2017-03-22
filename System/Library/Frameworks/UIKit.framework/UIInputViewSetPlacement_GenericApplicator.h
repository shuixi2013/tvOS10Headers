/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputViewSetPlacementApplicator.h>

@protocol UIInputViewSetPlacementOwner;
@class NSArray, UIView, NSLayoutConstraint, NSString;

@interface UIInputViewSetPlacement_GenericApplicator : NSObject <UIInputViewSetPlacementApplicator> {

	NSLayoutConstraint* _horizontalConstraint;
	NSLayoutConstraint* _verticalConstraint;
	NSLayoutConstraint* _widthConstraint;
	id<UIInputViewSetPlacementOwner> _owner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) CGPoint origin; 
@property (retain,readonly) NSArray * constraints; 
@property (retain,readonly) UIView * draggableView; 
@property (readonly) UIEdgeInsets contentInsets; 
+(id)applicatorForOwner:(id)arg1 withPlacement:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)invalidate;
-(UIEdgeInsets)contentInsets;
-(NSArray *)constraints;
-(CGPoint)origin;
-(void)prepare;
-(UIView *)draggableView;
-(BOOL)isGesture:(id)arg1 inDraggableView:(CGPoint)arg2 ;
-(BOOL)preBeginGesture:(id)arg1 shouldBegin:(BOOL*)arg2 ;
-(id)initForOwner:(id)arg1 withPlacement:(id)arg2 ;
-(CGRect)targetRect;
-(void)checkVerticalConstraint;
-(BOOL)allConstraintsActive;
-(void)applyChanges:(id)arg1 ;
@end

