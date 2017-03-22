/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVFocusRedirectView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class UIView, NSArray, NSString;

@interface _TVInfoTableView : _TVFocusRedirectView <TVAppTemplateImpressionable> {

	UIView* _headerView;
	NSArray* _infoViews;
	UIView* _footerView;

}

@property (nonatomic,retain) UIView * headerView;                   //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSArray * infoViews;                   //@synthesize infoViews=_infoViews - In the implementation block
@property (nonatomic,retain) UIView * footerView;                   //@synthesize footerView=_footerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)infoTableViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(NSArray *)infoViews;
-(void)setInfoViews:(NSArray *)arg1 ;
@end

