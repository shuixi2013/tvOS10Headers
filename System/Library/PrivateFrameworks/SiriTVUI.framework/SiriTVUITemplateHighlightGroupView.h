/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKit/UIView.h>
#import <SiriTVUI/SiriTVUIGroupView.h>
#import <SiriTVUI/SiriTVUITemplateItemView.h>

@class NSMutableArray, NSString, NSArray;

@interface SiriTVUITemplateHighlightGroupView : UIView <SiriTVUIGroupView, SiriTVUITemplateItemView> {

	NSMutableArray* _highlightableViews;
	BOOL hasPriorityLayout;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * groupedSubviews;              //@synthesize highlightableViews=_highlightableViews - In the implementation block
@property (assign,nonatomic) BOOL hasPriorityLayout; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusedView;
-(BOOL)canBecomeFocused;
-(BOOL)hasPriorityLayout;
-(void)setHasPriorityLayout:(BOOL)arg1 ;
-(BOOL)shouldFitWithinContentMargins;
-(NSArray *)groupedSubviews;
-(void)addGroupedSubview:(id)arg1 ;
-(void)removeGroupedSubview:(id)arg1 ;
@end

