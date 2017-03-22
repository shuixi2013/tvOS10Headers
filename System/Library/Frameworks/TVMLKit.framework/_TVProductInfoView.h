/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVFocusRedirectView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class NSArray, UIView, NSString;

@interface _TVProductInfoView : _TVFocusRedirectView <TVAppTemplateImpressionable> {

	NSArray* _viewsAboveTableViews;
	NSArray* _tableViews;
	NSArray* _viewsBelowTableViews;
	UIView* _defaultFocusView;

}

@property (nonatomic,retain) NSArray * viewsAboveTableViews;              //@synthesize viewsAboveTableViews=_viewsAboveTableViews - In the implementation block
@property (nonatomic,retain) NSArray * tableViews;                        //@synthesize tableViews=_tableViews - In the implementation block
@property (nonatomic,retain) NSArray * viewsBelowTableViews;              //@synthesize viewsBelowTableViews=_viewsBelowTableViews - In the implementation block
@property (nonatomic,retain) UIView * defaultFocusView;                   //@synthesize defaultFocusView=_defaultFocusView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)productInfoViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)setViewsAboveTableViews:(NSArray *)arg1 ;
-(void)setTableViews:(NSArray *)arg1 ;
-(void)setViewsBelowTableViews:(NSArray *)arg1 ;
-(void)setDefaultFocusView:(UIView *)arg1 ;
-(UIView *)defaultFocusView;
-(NSArray *)viewsAboveTableViews;
-(NSArray *)tableViews;
-(NSArray *)viewsBelowTableViews;
@end

