/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel;

@interface _TVLTextEntryContentView : UIView {

	UIView* _textEntryView;
	UILabel* _footnoteLabel;

}

@property (nonatomic,retain) UIView * textEntryView;                 //@synthesize textEntryView=_textEntryView - In the implementation block
@property (nonatomic,readonly) UILabel * footnoteLabel;              //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)textEntryView;
-(UILabel *)footnoteLabel;
-(void)setTextEntryView:(UIView *)arg1 ;
@end

