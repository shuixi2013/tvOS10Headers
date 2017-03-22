/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIFont;

@interface SiriUIBorderedLabelView : UIView {

	UIImageView* _borderImageView;
	UILabel* _ratingLabel;
	UIFont* _font;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
+(UIEdgeInsets)_defaultEdgeInsets;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGSize)_borderSize;
-(id)initWithText:(id)arg1 font:(id)arg2 borderColor:(id)arg3 ;
-(double)baselineOffsetFromTopOfFrame;
@end

