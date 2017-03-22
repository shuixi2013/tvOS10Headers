/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <SiriUI/SiriUIReusableView.h>
#import <SiriUI/SiriUISizableHeaderView.h>

@class UILabel, NSString, SiriUISnippetViewController;

@interface SiriUISashHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView> {

	UILabel* _headerLabel;
	NSString* _titleText;

}

@property (nonatomic,copy) NSString * titleText;                                                      //@synthesize titleText=_titleText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController; 
+(double)defaultHeight;
+(id)reuseIdentifier;
+(id)elementKind;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(double)desiredHeightForWidth:(double)arg1 ;
@end

